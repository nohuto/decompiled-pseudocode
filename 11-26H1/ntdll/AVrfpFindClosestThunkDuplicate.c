/*
 * XREFs of AVrfpFindClosestThunkDuplicate @ 0x180138044
 * Callers:
 *     AVrfpChainDuplicateVerificationLayers @ 0x180124490 (AVrfpChainDuplicateVerificationLayers.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     _stricmp @ 0x1801285A0 (_stricmp.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 */

__int64 __fastcall AVrfpFindClosestThunkDuplicate(__int64 a1, const wchar_t *a2, const char *a3)
{
  __int64 *v3; // rdi
  const wchar_t *v5; // r14
  __int64 *v6; // rbx
  __int64 v7; // rsi
  unsigned int i; // ebp
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 j; // r12
  const char *v12; // rdx

  v3 = *(__int64 **)(a1 + 8);
  v5 = a2;
  while ( v3 != &AVrfpVerifierProvidersList )
  {
    v6 = v3;
    v3 = (__int64 *)v3[1];
    if ( (AVrfpDebug & 0x20) != 0 )
      DbgPrint("AVRF: chain: searching in %ws\n", v6[3]);
    v7 = v6[5];
    for ( i = 0; ; ++i )
    {
      v9 = 32LL * i;
      if ( !*(_QWORD *)(v9 + v7) )
        break;
      if ( (AVrfpDebug & 0x20) != 0 )
        DbgPrint("AVRF: chain: dll: %ws\n");
      if ( !wcsicmp(*(const wchar_t **)(v9 + v7), v5) )
      {
        v10 = *(_QWORD *)(v9 + v7 + 24);
        for ( j = 0LL; ; j = (unsigned int)(j + 1) )
        {
          v12 = *(const char **)(v10 + 24 * j);
          if ( !v12 )
          {
            v5 = a2;
            goto LABEL_17;
          }
          if ( (AVrfpDebug & 0x20) != 0 )
            DbgPrint("AVRF: chain: thunk: %s == %s ?\n", v12, a3);
          if ( !stricmp(*(const char **)(v10 + 24 * j), a3) )
            break;
        }
        if ( (AVrfpDebug & 0x20) != 0 )
          DbgPrint("AVRF: Found duplicate for (%ws: %s) in %ws\n", a2, a3, *(_QWORD *)(v9 + v7));
        return *(_QWORD *)(v10 + 24 * j + 16);
      }
LABEL_17:
      ;
    }
  }
  return 0LL;
}
