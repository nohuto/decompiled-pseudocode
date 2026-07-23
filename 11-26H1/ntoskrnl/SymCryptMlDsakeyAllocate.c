/*
 * XREFs of SymCryptMlDsakeyAllocate @ 0x1405606F0
 * Callers:
 *     SymCryptMlDsaSelftest @ 0x140565630 (SymCryptMlDsaSelftest.c)
 *     HashpVerifyMldsaSignature @ 0x1408B2230 (HashpVerifyMldsaSignature.c)
 * Callees:
 *     SymCryptMlDsaGetInternalParamsFromParams @ 0x140571C28 (SymCryptMlDsaGetInternalParamsFromParams.c)
 *     SymCryptMlDsakeyInitialize @ 0x140573AF0 (SymCryptMlDsakeyInitialize.c)
 *     SymCryptCallbackAlloc @ 0x140727460 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x140727498 (SymCryptCallbackFree.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptMlDsakeyAllocate(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  v6 = 0LL;
  if ( !(unsigned int)SymCryptMlDsaGetInternalParamsFromParams(a1, &v6) )
  {
    v2 = ((*(unsigned __int8 *)(v6 + 21) + (*(unsigned __int8 *)(v6 + 21) + 3) * *(unsigned __int8 *)(v6 + 20)) << 10)
       + 272;
    v3 = SymCryptCallbackAlloc(v2);
    v4 = v3;
    if ( v3 )
    {
      v1 = SymCryptMlDsakeyInitialize(v6, v3, v2);
      if ( !v1 )
        SymCryptCallbackFree(v4);
    }
  }
  return v1;
}
