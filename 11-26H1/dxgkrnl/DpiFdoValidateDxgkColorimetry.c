/*
 * XREFs of DpiFdoValidateDxgkColorimetry @ 0x1403DA2C4
 * Callers:
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x14024948C (DpiFdoValidateIntegratedDisplayDescriptor.c)
 *     DpiGetMonitorColorimetryOverride @ 0x140255CF8 (DpiGetMonitorColorimetryOverride.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoValidateDxgkColorimetry(unsigned int *a1, unsigned int a2)
{
  __int64 v2; // r8
  _BYTE *i; // rax
  __int64 v4; // rax
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // r9d
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // eax

  v2 = a2;
  for ( i = a1; i < (_BYTE *)a1 + 52; ++i )
  {
    if ( *i )
      goto LABEL_4;
  }
  if ( i )
    return 279LL;
LABEL_4:
  v4 = *((_QWORD *)a1 + 3);
  if ( !(_DWORD)v4 || !HIDWORD(v4) || (unsigned int)v4 > 0x3FF || HIDWORD(v4) > 0x3FF )
  {
    WdLogSingleEntry4(2LL, a1[6], a1[7], a2, 1LL);
    WdLogGlobalForLineNumber = 658;
    return 3221225485LL;
  }
  v6 = a1[9];
  if ( !v6 || (v7 = a1[10]) == 0 || v7 > v6 || (v8 = a1[8], v8 >= v6) || v8 >= v7 )
  {
    WdLogSingleEntry2(2LL, v2, 2LL);
    WdLogGlobalForLineNumber = 669;
    return 3221225485LL;
  }
  v9 = a1[11];
  v10 = (int)(v9 << 30) >> 30;
  if ( v10 )
  {
    WdLogSingleEntry3(2LL, v10, v2, 3LL);
    WdLogGlobalForLineNumber = 677;
    return 3221225485LL;
  }
  if ( !v9 )
  {
    WdLogSingleEntry2(2LL, v2, 4LL);
    WdLogGlobalForLineNumber = 684;
    return 3221225485LL;
  }
  if ( (v9 & 0x3FFFFFC) != 0 )
  {
    v11 = *(_QWORD *)a1;
    if ( !(unsigned int)*(_QWORD *)a1 || !HIDWORD(v11) || (unsigned int)v11 > 0x3FF || HIDWORD(v11) > 0x3FF )
    {
      WdLogSingleEntry4(2LL, *a1, a1[1], v2, 6LL);
      WdLogGlobalForLineNumber = 700;
      return 3221225485LL;
    }
    v12 = *((_QWORD *)a1 + 1);
    if ( !(_DWORD)v12 || !HIDWORD(v12) || (unsigned int)v12 > 0x3FF || HIDWORD(v12) > 0x3FF )
    {
      WdLogSingleEntry4(2LL, a1[2], a1[3], v2, 7LL);
      WdLogGlobalForLineNumber = 706;
      return 3221225485LL;
    }
    v13 = *((_QWORD *)a1 + 2);
    if ( !(_DWORD)v13 || !HIDWORD(v13) || (unsigned int)v13 > 0x3FF || HIDWORD(v13) > 0x3FF )
    {
      WdLogSingleEntry4(2LL, a1[4], a1[5], v2, 8LL);
      WdLogGlobalForLineNumber = 712;
      return 3221225485LL;
    }
  }
  else
  {
    if ( *(_QWORD *)a1 )
    {
      WdLogSingleEntry4(2LL, *a1, a1[1], v2, 9LL);
      WdLogGlobalForLineNumber = 721;
      return 3221225485LL;
    }
    if ( *((_QWORD *)a1 + 1) )
    {
      WdLogSingleEntry4(2LL, a1[2], a1[3], v2, 10LL);
      WdLogGlobalForLineNumber = 727;
      return 3221225485LL;
    }
    if ( *((_QWORD *)a1 + 2) )
    {
      WdLogSingleEntry4(2LL, a1[4], a1[5], v2, 11LL);
      WdLogGlobalForLineNumber = 733;
      return 3221225485LL;
    }
  }
  v14 = a1[12];
  if ( v14 >= 8 )
  {
    WdLogSingleEntry3(2LL, (unsigned __int64)v14 >> 3, v2, 5LL);
    WdLogGlobalForLineNumber = 742;
    return 3221225485LL;
  }
  return 0LL;
}
