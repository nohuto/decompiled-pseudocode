/*
 * XREFs of bsearch_s @ 0x140538ED0
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x14044E930 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140533210 (RtlGuardCheckLongJumpTarget.c)
 *     I_MinCryptIsCertificateHashRevokedV2 @ 0x1407215F0 (I_MinCryptIsCertificateHashRevokedV2.c)
 *     SeQuerySecureBootPlatformManifest @ 0x14081C050 (SeQuerySecureBootPlatformManifest.c)
 *     RtlVerifyUserUnwindTarget @ 0x140A94E18 (RtlVerifyUserUnwindTarget.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     _guard_check_icall_no_overrides @ 0x140735D50 (_guard_check_icall_no_overrides.c)
 */

void *__cdecl bsearch_s(
        const void *Key,
        const void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(void *, const void *, const void *),
        void *Context)
{
  rsize_t v7; // rsi
  char *v8; // rdi
  char *v9; // rbx
  __int64 v11; // r13
  char *v12; // r15
  int v13; // eax
  char *v15; // [rsp+68h] [rbp+10h]

  v7 = NumOfElements;
  v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
  v9 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    guard_check_icall_no_overrides(PtFuncCompare);
    while ( v9 <= v8 )
    {
      v15 = v8;
      if ( !(v7 >> 1) )
      {
        if ( !v7 )
          return 0LL;
        if ( ((unsigned int (__fastcall *)(void *, const void *, char *))PtFuncCompare)(Context, Key, v9) )
          return 0LL;
        return v9;
      }
      v11 = (v7 >> 1) - 1;
      if ( (v7 & 1) != 0 )
        v11 = v7 >> 1;
      v12 = &v9[SizeOfElements * v11];
      v13 = ((__int64 (__fastcall *)(void *, const void *, char *))PtFuncCompare)(Context, Key, v12);
      if ( !v13 )
        return &v9[SizeOfElements * v11];
      v7 >>= 1;
      if ( v13 < 0 )
        v7 = v11;
      v8 = &v12[-SizeOfElements];
      if ( v13 >= 0 )
      {
        v8 = v15;
        v9 = &v12[SizeOfElements];
      }
    }
  }
  else
  {
    xHalTimerWatchdogStop();
  }
  return 0LL;
}
