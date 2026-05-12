/*
 * XREFs of FillBufferWithDriverTelemetryDump @ 0x1400C4754
 * Callers:
 *     RaidStandardSecondaryDumpCallback @ 0x1400C4A20 (RaidStandardSecondaryDumpCallback.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x140076CE0 (RtlStringCbCopyA.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall FillBufferWithDriverTelemetryDump(__int64 a1, char *a2, unsigned int *a3)
{
  __int64 v3; // r13
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // r14d
  __int64 v9; // rax
  _DWORD *v10; // r9
  unsigned int v11; // r10d
  unsigned int v12; // r15d
  unsigned int v13; // r11d
  unsigned int v14; // ecx
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rbp
  int v18; // eax
  _DWORD *v19; // rcx
  unsigned int i; // ebp
  __int64 result; // rax
  unsigned int v22; // [rsp+50h] [rbp+8h]

  v3 = BootDriveExtension;
  if ( !a2 || (v6 = *a3) == 0 )
  {
    *a3 = 7776;
    return 3221225507LL;
  }
  if ( v6 >= 0xD8 )
  {
    v7 = 7776;
    if ( v6 < 0x1E60 )
      v7 = *a3;
    memset_0(a2, 0, v7);
    v8 = 96;
    *(_DWORD *)a2 = 1347703620;
    *((_DWORD *)a2 + 1) = 96;
    *((_DWORD *)a2 + 2) = v7;
    RtlStringCbCopyA(a2 + 16, 0x10uLL, "storport.sys");
    *((_DWORD *)a2 + 8) = 0;
    v9 = *(_QWORD *)(v3 + 24);
    v10 = a2 + 36;
    v11 = 0;
    v12 = *(_DWORD *)(v9 + 4996);
    v13 = *(_DWORD *)(v9 + 4992) % v12;
    v22 = (v13 + 1) % v12;
    v14 = v22;
    if ( v13 == v22 )
    {
LABEL_28:
      *((_DWORD *)a2 + 8) = v11;
      result = 0LL;
      *a3 = v7;
      return result;
    }
    while ( 1 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 5000LL);
      v16 = (unsigned __int64)*(unsigned int *)(v15 + 48LL * v13 + 32) >> 24;
      *((_BYTE *)v10 + 16) = HIBYTE(*(_DWORD *)(v15 + 48LL * v13 + 32));
      if ( !(_BYTE)v16 || (unsigned __int8)v16 <= 0x22u && (v17 = 0x5001D0180LL, _bittest64(&v17, v16)) )
      {
        v18 = *(_DWORD *)(v15 + 48LL * v13);
        if ( v18 == 1 )
        {
          if ( (unsigned __int64)v8 + 60 < v7 )
          {
            *(_BYTE *)v10 = BYTE2(*(_DWORD *)(v15 + 48LL * v13 + 32));
            v10[14] = *(_DWORD *)(v15 + 48LL * v13 + 24);
            v10[13] = (unsigned __int8)*(_DWORD *)(v15 + 48LL * v13 + 32);
            v10[12] = (unsigned __int8)BYTE1(*(_DWORD *)(v15 + 48LL * v13 + 32));
            *((_QWORD *)v10 + 4) = 0LL;
            *((_QWORD *)v10 + 5) = *(_QWORD *)(v15 + 48LL * v13 + 40);
LABEL_22:
            v10 += 15;
            ++v11;
            v8 += 60;
            if ( v11 >= 0x80 )
              goto LABEL_28;
            goto LABEL_23;
          }
        }
        else if ( !v18 )
        {
          v19 = v10 - 15;
          for ( i = 0; i < v11; ++i )
          {
            if ( *(_DWORD *)(v15 + 48LL * v13 + 24) == v19[14] )
            {
              *((_QWORD *)v19 + 4) = *(_QWORD *)(v15 + 48LL * v13 + 40);
              goto LABEL_23;
            }
            v19 -= 15;
          }
          if ( (unsigned __int64)v8 + 60 < v7 )
          {
            *(_BYTE *)v10 = BYTE2(*(_DWORD *)(v15 + 48LL * v13 + 32));
            *((_BYTE *)v10 + 16) = HIBYTE(*(_DWORD *)(v15 + 48LL * v13 + 32));
            v10[14] = *(_DWORD *)(v15 + 48LL * v13 + 24);
            v10[13] = (unsigned __int8)*(_DWORD *)(v15 + 48LL * v13 + 32);
            v10[12] = (unsigned __int8)BYTE1(*(_DWORD *)(v15 + 48LL * v13 + 32));
            *((_QWORD *)v10 + 4) = *(_QWORD *)(v15 + 48LL * v13 + 40);
            *((_QWORD *)v10 + 5) = 0LL;
            goto LABEL_22;
          }
LABEL_23:
          v14 = v22;
        }
      }
      if ( v13 )
        v13 = (v13 - 1) % v12;
      else
        v13 = v12 - 1;
      if ( v13 == v14 )
        goto LABEL_28;
    }
  }
  *a3 = 216;
  return 3221225507LL;
}
