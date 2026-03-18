/*
 * XREFs of ValidateSegmentDescriptors @ 0x1400B03D0
 * Callers:
 *     CreateAndInitializeSegmentsAndMmus @ 0x1400AE950 (CreateAndInitializeSegmentsAndMmus.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

char __fastcall ValidateSegmentDescriptors(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int16 v6; // bp
  __int16 v7; // r11
  unsigned __int16 i; // r10
  __int64 v9; // rdi
  int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int16 v17; // r11

  v6 = -1;
  v7 = -1;
  for ( i = 0; i < a3; ++i )
  {
    v9 = 104LL * i;
    v10 = *(_DWORD *)(v9 + a2 + 96);
    if ( v10 > 1 )
    {
      WdLogSingleEntry2(1LL, i, *(int *)(v9 + a2 + 96));
      WdLogGlobalForLineNumber = 192;
      goto LABEL_37;
    }
    v11 = *(_DWORD *)(v9 + a2);
    if ( (v11 & 0x40902B) != 0 || v11 >= 0x800000 )
    {
      WdLogSingleEntry3(1LL, i, *(unsigned int *)(v9 + a2), 4231211LL);
      WdLogGlobalForLineNumber = 207;
      goto LABEL_37;
    }
    v12 = *(_DWORD *)(v9 + a2 + 92);
    if ( v12 > 1 )
    {
      WdLogSingleEntry1(1LL, *(unsigned int *)(v9 + a2 + 92));
      WdLogGlobalForLineNumber = 218;
      goto LABEL_37;
    }
    if ( v12 )
    {
      if ( v6 != 0xFFFF )
      {
        WdLogSingleEntry2(1LL, v6 + 1LL, i + 1LL);
        WdLogGlobalForLineNumber = 231;
        goto LABEL_37;
      }
      v6 = i;
    }
    if ( v10 == 1 )
    {
      if ( !i )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 246;
        goto LABEL_37;
      }
      v13 = *(_QWORD *)(v9 + a2 + 16);
      if ( !v13 )
      {
        WdLogSingleEntry2(1LL, i, 0LL);
        WdLogGlobalForLineNumber = 255;
        goto LABEL_37;
      }
      if ( (v13 & 0xFFF) != 0 )
      {
        WdLogSingleEntry2(1LL, i, v13);
        WdLogGlobalForLineNumber = 264;
        goto LABEL_37;
      }
      if ( *(int *)(v9 + a2 + 100) > 15 )
      {
        WdLogSingleEntry2(1LL, i, *(int *)(v9 + a2 + 100));
        WdLogGlobalForLineNumber = 273;
LABEL_37:
        DxgkLogInternalTriageEvent(v14, 0x40000LL);
        return 0;
      }
    }
    else
    {
      if ( i )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 282;
        goto LABEL_37;
      }
      if ( *(_DWORD *)(v9 + a2 + 100) != -1 )
      {
        WdLogSingleEntry1(1LL, *(int *)(v9 + a2 + 100));
        WdLogGlobalForLineNumber = 290;
        goto LABEL_37;
      }
      v15 = *(_QWORD *)(v9 + a2 + 16);
      if ( v15 )
      {
        WdLogSingleEntry2(1LL, 0LL, v15);
        WdLogGlobalForLineNumber = 299;
        goto LABEL_37;
      }
      v7 = 0;
    }
    if ( (v11 & 0x80u) == 0 && (v11 & 0x300) != 0
      || (*(_DWORD *)(v9 + a2) & 0x200) != 0 && (*(_DWORD *)(v9 + a2) & 0x100) != 0 )
    {
      WdLogSingleEntry1(1LL, i);
      WdLogGlobalForLineNumber = 315;
      goto LABEL_37;
    }
    if ( (*(_DWORD *)(v9 + a2) & 0x2004) == 0x2004 )
    {
      WdLogSingleEntry1(1LL, i);
      WdLogGlobalForLineNumber = 324;
      goto LABEL_37;
    }
  }
  if ( a4 )
  {
    v17 = v7 + 1;
    if ( a4 != v17 )
    {
      WdLogSingleEntry2(1LL, a4, v17);
      WdLogGlobalForLineNumber = 339;
      goto LABEL_37;
    }
  }
  return 1;
}
