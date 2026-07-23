/*
 * XREFs of HalpIommuProcessDeviceEntries @ 0x1405AA884
 * Callers:
 *     HalpIommuProcessIvhdEntry @ 0x1405AAB6C (HalpIommuProcessIvhdEntry.c)
 * Callees:
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     ExtEnvAllocateMemory @ 0x14059A320 (ExtEnvAllocateMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall HalpIommuProcessDeviceEntries(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v3; // rsi
  int Memory; // ebx
  char v5; // r11
  _BYTE *v6; // r12
  _BYTE *v7; // r14
  _BYTE *v8; // r13
  _BYTE *v9; // rdi
  __int64 v10; // r10
  _BYTE *v11; // r9
  unsigned __int8 v12; // dl
  __int64 v13; // rax
  int v14; // ecx
  int v15; // r8d
  char v16; // al
  ULONG v17; // edx
  ULONG v18; // r8d
  char v19; // r8
  int v20; // ecx
  bool v21; // zf
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  ULONG v25; // ebp
  __int64 v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // rdi
  _QWORD *v29; // rcx
  ULONG v30; // edx
  __int64 v32[10]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v34; // [rsp+88h] [rbp+10h]
  char v36; // [rsp+98h] [rbp+20h]

  v34 = a2;
  v3 = (_BYTE *)(a2 + 40);
  Memory = 0;
  v5 = 0;
  v6 = (_BYTE *)(a2 + *(unsigned __int16 *)(a2 + 2));
  v32[0] = 0LL;
  v7 = 0LL;
  v36 = 0;
  v8 = 0LL;
  *a3 = 0;
  v9 = a3;
  v10 = a1;
  while ( v3 < v6 )
  {
    v11 = v3;
    if ( v6 == v3 )
      return (unsigned int)-1073741811;
    if ( *(_BYTE *)a2 == 16 || *(_BYTE *)a2 == 17 )
    {
      if ( *v3 > 0x7Fu )
        return (unsigned int)-1073741811;
      v12 = *v3;
    }
    else
    {
      v12 = *v3;
      if ( *v3 == 0xF0 )
      {
        if ( (unsigned __int64)(v6 - v3) < 0x16 )
          return (unsigned int)-1073741811;
        v8 = v3;
        LODWORD(v13) = (unsigned __int8)v3[21] + 22;
        goto LABEL_15;
      }
      if ( v12 > 0x7Fu )
        return (unsigned int)-1073741811;
    }
    v13 = 1LL << ((v12 >> 6) + 2);
LABEL_15:
    if ( (unsigned int)v13 > (unsigned __int64)(v6 - v3) )
      return (unsigned int)-1073741811;
    v3 += (unsigned int)v13;
    if ( v7 )
    {
      if ( v12 != 4 )
        return (unsigned int)-1073741811;
      v14 = *(unsigned __int16 *)(v7 + 1);
      v15 = *(unsigned __int16 *)(v11 + 1);
      if ( (unsigned __int16)v15 < (unsigned __int16)v14 )
        return (unsigned int)-1073741811;
      v16 = *v7;
      if ( *v7 == 3 )
        goto LABEL_24;
      if ( v16 == 67 )
      {
        v17 = *(unsigned __int16 *)(v7 + 5);
        v18 = 1;
      }
      else
      {
        if ( v16 != 71 )
        {
          Memory = -1073741811;
LABEL_26:
          v7 = 0LL;
          goto LABEL_2;
        }
LABEL_24:
        v17 = *(unsigned __int16 *)(v7 + 1);
        v18 = v15 - v14 + 1;
      }
      RtlSetBits((PRTL_BITMAP)(v10 + 184), v17, v18);
      v5 = v36;
      v10 = a1;
      goto LABEL_26;
    }
    v19 = v5;
    v5 = 0;
    v36 = 0;
    if ( v12 > 0x40u )
    {
      switch ( v12 )
      {
        case 'B':
          v30 = *(unsigned __int16 *)(v11 + 5);
          goto LABEL_52;
        case 'C':
          goto LABEL_50;
        case 'F':
LABEL_49:
          v30 = *(unsigned __int16 *)(v11 + 1);
LABEL_52:
          RtlSetBits((PRTL_BITMAP)(v10 + 184), v30, 1u);
          v10 = a1;
          v5 = 0;
          goto LABEL_2;
        case 'G':
LABEL_50:
          v7 = v11;
          goto LABEL_2;
      }
      if ( v12 != 240 )
      {
LABEL_41:
        v5 = 1;
        v36 = 1;
        goto LABEL_2;
      }
      if ( v8[20] != 2 )
      {
        *v9 = 1;
        goto LABEL_2;
      }
      v25 = *(unsigned __int16 *)(v8 + 1);
      RtlSetBits((PRTL_BITMAP)(v10 + 184), v25, 1u);
      Memory = ExtEnvAllocateMemory(v26, 0x20u, v32);
      if ( Memory < 0 )
        return (unsigned int)Memory;
      v28 = (_QWORD *)v32[0];
      *(_DWORD *)(v32[0] + 24) = v25;
      Memory = ExtEnvAllocateMemory(v27, (unsigned int)(unsigned __int8)v8[21] + 1, v28 + 2);
      if ( Memory < 0 )
        return (unsigned int)Memory;
      memmove((void *)v28[2], v8 + 22, (unsigned __int8)v8[21]);
      v10 = a1;
      v29 = *(_QWORD **)(a1 + 232);
      if ( *v29 != a1 + 224 )
        __fastfail(3u);
      a2 = v34;
      v5 = 0;
      *v28 = a1 + 224;
      v28[1] = v29;
      *v29 = v28;
      *(_QWORD *)(a1 + 232) = v28;
      v9 = a3;
    }
    else
    {
      if ( v12 == 64 )
        goto LABEL_2;
      v20 = v12;
      v21 = v12 == 0;
      a2 = v34;
      if ( !v21 )
      {
        v22 = v20 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( !v23 )
            goto LABEL_49;
          v24 = v23 - 1;
          if ( !v24 )
            goto LABEL_50;
          if ( v24 != 1 )
            goto LABEL_41;
          if ( !v19 )
            return (unsigned int)-1073741811;
LABEL_2:
          a2 = v34;
        }
      }
    }
  }
  if ( v7 )
    return (unsigned int)-1073741811;
  return (unsigned int)Memory;
}
