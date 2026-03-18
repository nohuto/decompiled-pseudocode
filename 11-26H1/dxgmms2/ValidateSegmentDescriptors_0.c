/*
 * XREFs of ValidateSegmentDescriptors_0 @ 0x1400B3268
 * Callers:
 *     CreatePhysicalAdapterSegments @ 0x1400B14D0 (CreatePhysicalAdapterSegments.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

char __fastcall ValidateSegmentDescriptors_0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r15
  __int64 v7; // r14
  unsigned int DriverVersion; // r11d
  char v9; // r10
  unsigned int v10; // r9d
  unsigned int v11; // edi
  char result; // al
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rdx

  v5 = a4;
  v7 = a3;
  DriverVersion = DpiGetDriverVersion(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 216LL));
  v9 = 0;
  v10 = 0;
  v11 = 0;
  result = 1;
  while ( v11 < (unsigned int)v7 )
  {
    v13 = 104LL * v11;
    if ( DriverVersion >= 0x7005 )
    {
      v14 = *(_DWORD *)(v13 + a2 + 92);
      if ( v14 > 1 )
      {
        WdLogSingleEntry1(1LL, *(unsigned int *)(v13 + a2 + 92));
        WdLogGlobalForLineNumber = 141;
        goto LABEL_33;
      }
      if ( v14 )
      {
        if ( v9 )
        {
          WdLogSingleEntry2(1LL, v10, v11);
          WdLogGlobalForLineNumber = 153;
          goto LABEL_33;
        }
        v10 = v11;
        v9 = 1;
      }
    }
    else
    {
      *(_DWORD *)(v13 + a2 + 92) = 0;
    }
    v15 = *(_QWORD *)(v13 + a2 + 16);
    if ( (v15 & 0xFFF) != 0 )
    {
      WdLogSingleEntry2(1LL, v11, v15);
      WdLogGlobalForLineNumber = 168;
      goto LABEL_33;
    }
    v16 = *(_DWORD *)(v13 + a2);
    if ( v16 >= 0x800000 || (v16 & 2) != 0 )
    {
LABEL_14:
      WdLogSingleEntry1(1LL, v11);
      WdLogGlobalForLineNumber = 184;
      goto LABEL_33;
    }
    if ( (v16 & 0x80u) != 0 )
    {
      if ( (*(_DWORD *)(v13 + a2) & 0x300) == 0x300 )
        goto LABEL_14;
    }
    else if ( (v16 & 0x300) != 0 )
    {
      goto LABEL_14;
    }
    if ( (v16 & 0x2000) != 0 && (v16 & 5) != 0 )
    {
      WdLogSingleEntry1(1LL, v11);
      WdLogGlobalForLineNumber = 192;
      goto LABEL_33;
    }
    if ( (v16 & 0x400000) != 0 )
    {
      v18 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 5094LL);
      result = 1;
      if ( !(_WORD)v18 )
      {
        WdLogSingleEntry3(1LL, v18, 1LL, v11);
        v17 = 1LL;
        WdLogGlobalForLineNumber = 203;
        goto LABEL_33;
      }
      if ( (v16 & 1) == 0 )
      {
        WdLogSingleEntry1(1LL, v11);
        WdLogGlobalForLineNumber = 209;
        goto LABEL_33;
      }
      if ( (v16 & 0x80u) == 0 )
      {
        WdLogSingleEntry1(1LL, v11);
        WdLogGlobalForLineNumber = 215;
        goto LABEL_33;
      }
    }
    else
    {
      result = 1;
    }
    ++v11;
  }
  if ( (unsigned int)v5 <= (unsigned int)v7 )
    return result;
  WdLogSingleEntry2(1LL, v5, v7);
  WdLogGlobalForLineNumber = 225;
LABEL_33:
  DxgkLogInternalTriageEvent(v17, 0x40000LL);
  return 0;
}
