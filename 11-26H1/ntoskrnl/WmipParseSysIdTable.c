/*
 * XREFs of WmipParseSysIdTable @ 0x1408290D4
 * Callers:
 *     WmipGetSysIds @ 0x140828E1C (WmipGetSysIds.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x140345690 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 */

__int64 __fastcall WmipParseSysIdTable(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3,
        unsigned int *a4,
        _QWORD *a5,
        unsigned int *a6)
{
  unsigned int v6; // edi
  unsigned int v8; // esi
  __int64 v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // r15d
  unsigned int v13; // r14d
  unsigned int v15; // ebx
  __int64 v16; // rbp
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rsi
  int v20; // r8d
  char v21; // cl
  _BYTE *v22; // rax
  __int64 v23; // rdx
  unsigned int v25; // [rsp+20h] [rbp-58h]
  unsigned int v26; // [rsp+24h] [rbp-54h]
  unsigned int v27; // [rsp+28h] [rbp-50h]
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-48h]
  PVOID BaseAddress; // [rsp+38h] [rbp-40h]

  v6 = 25 * a2;
  v8 = a2;
  NumberOfBytes = 25 * a2;
  v10 = MmMapIoSpaceEx(a1, NumberOfBytes, 4u);
  BaseAddress = (PVOID)v10;
  if ( v10 )
  {
    v11 = *a4;
    v12 = 0;
    v13 = 0;
    v15 = 0;
    v16 = v10;
    v26 = v11;
    v17 = 0;
    v18 = *a6;
    v25 = *a6;
    while ( 1 )
    {
      v27 = v17;
      if ( v17 >= v8 )
        break;
      if ( v6 < 0xA )
        goto LABEL_27;
      v19 = *(unsigned __int16 *)(v16 + 7);
      if ( RtlCompareMemory((const void *)v16, "_UUID_", 6uLL) == 6 && (_DWORD)v19 == 25 )
      {
        v20 = 1;
      }
      else
      {
        if ( RtlCompareMemory((const void *)v16, "_1394_", 6uLL) != 6 || (_DWORD)v19 != 17 )
        {
LABEL_25:
          v18 = v25;
LABEL_26:
          v11 = v26;
LABEL_27:
          v15 = -1073741823;
          break;
        }
        v20 = 2;
      }
      if ( v6 < (unsigned int)v19 )
        goto LABEL_25;
      v21 = 0;
      v22 = (_BYTE *)v16;
      v23 = v19;
      do
      {
        v21 += *v22++;
        --v23;
      }
      while ( v23 );
      if ( v21 )
        goto LABEL_25;
      if ( v20 == 1 )
      {
        v11 = v26;
        v18 = v25;
        if ( v6 < 0x19 )
          goto LABEL_27;
        ++v12;
        if ( a3 )
        {
          if ( v26 >= v12 )
            *a3++ = *(_OWORD *)(v16 + 9);
        }
      }
      else
      {
        v18 = v25;
        if ( v6 < 0x11 )
          goto LABEL_26;
        v11 = v26;
        ++v13;
        if ( a5 && v25 >= v13 )
          *a5++ = *(_QWORD *)(v16 + 9);
      }
      v16 += v19;
      v6 -= v19;
      v8 = a2;
      v17 = v27 + 1;
    }
    *a4 = v12;
    *a6 = v13;
    if ( a3 && v11 < v12 || a5 && v18 < v13 )
      v15 = -1073741789;
    MmUnmapIoSpace(BaseAddress, NumberOfBytes);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v15;
}
