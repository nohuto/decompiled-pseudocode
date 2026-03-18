/*
 * XREFs of DpiLdaValidateChainStatus @ 0x1402550E0
 * Callers:
 *     DpiLdaValidateSystemChainStatus @ 0x1402551FC (DpiLdaValidateSystemChainStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiLdaValidateChainStatus(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  __int64 v3; // rdx
  unsigned int v4; // r9d
  unsigned int i; // r8d

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  if ( *(_BYTE *)(v1 + 508) != 1 )
  {
    v3 = *(_QWORD *)(v1 + 2832);
    if ( !v3 )
    {
      v2 = -1071774671;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1255;
      return v2;
    }
    v1 = *(_QWORD *)(v3 + 64);
  }
  v4 = *(_DWORD *)(v1 + 2840);
  if ( v4 == *(_DWORD *)(v1 + 504) )
  {
    if ( *(_DWORD *)(v1 + 236) == 2 )
    {
      for ( i = 1; i < v4; ++i )
      {
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 2832) + 8LL * i) + 64LL) + 236LL) != 2 )
        {
          v2 = -1071774666;
          WdLogSingleEntry3(0LL, 275LL, 21LL, -1071774666LL);
          WdLogGlobalForLineNumber = 1313;
          return v2;
        }
      }
    }
    else
    {
      v2 = -1071774669;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1291;
    }
  }
  else
  {
    v2 = -1071774670;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1275;
  }
  return v2;
}
