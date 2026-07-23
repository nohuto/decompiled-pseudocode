/*
 * XREFs of AVrfpChainDuplicateVerificationLayers @ 0x180124490
 * Callers:
 *     AVrfInitializeVerifier @ 0x180115BD0 (AVrfInitializeVerifier.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x180138044 (AVrfpFindClosestThunkDuplicate.c)
 */

__int64 *AVrfpChainDuplicateVerificationLayers()
{
  __int64 *v0; // rbx
  __int64 *v1; // r13
  unsigned int v2; // r12d
  _QWORD *v3; // rbp
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  _QWORD *v6; // r14
  __int64 v7; // rsi
  _QWORD *v8; // r15
  __int64 ClosestThunkDuplicate; // r15
  __int64 v10; // rcx
  __int64 *result; // rax
  int v12; // [rsp+60h] [rbp+8h]
  __int64 *v13; // [rsp+68h] [rbp+10h]

  v0 = (__int64 *)AVrfpVerifierProvidersList;
LABEL_15:
  result = &AVrfpVerifierProvidersList;
  while ( v0 != &AVrfpVerifierProvidersList )
  {
    v1 = v0;
    v2 = 0;
    v0 = (__int64 *)*v0;
    v13 = v0;
    v3 = (_QWORD *)v1[5];
    if ( *v3 )
    {
      v4 = 0LL;
      v5 = (_QWORD *)v1[5];
      do
      {
        v6 = (_QWORD *)v5[3];
        v12 = 0;
        if ( *v6 )
        {
          v7 = 0LL;
          v8 = (_QWORD *)v5[3];
          do
          {
            if ( (AVrfpDebug & 0x20) != 0 )
            {
              v5 = &v3[4 * v4];
              DbgPrint("AVRF: Checking %ws for duplicate (%ws: %s) \n", v1[3], *v5, *v8);
            }
            ClosestThunkDuplicate = AVrfpFindClosestThunkDuplicate(v1, *v5, *v8);
            if ( ClosestThunkDuplicate )
            {
              if ( (AVrfpDebug & 0x10) != 0 )
                DbgPrint("AVRF: Chaining (%ws: %s) to %ws\n", *v5, v6[3 * v7], v1[3]);
              v6[3 * v7 + 1] = ClosestThunkDuplicate;
            }
            v10 = (unsigned int)(v12 + 1);
            v12 = v10;
            v7 = (unsigned int)v10;
            v8 = &v6[3 * v10];
          }
          while ( *v8 );
        }
        v5 = &v3[4 * ++v2];
        v4 = v2;
      }
      while ( *v5 );
      v0 = v13;
      goto LABEL_15;
    }
  }
  return result;
}
