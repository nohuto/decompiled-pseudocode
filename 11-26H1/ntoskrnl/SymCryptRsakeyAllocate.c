/*
 * XREFs of SymCryptRsakeyAllocate @ 0x14055BD14
 * Callers:
 *     SymCryptRsaSelftest @ 0x14056580C (SymCryptRsaSelftest.c)
 * Callees:
 *     SymCryptRsakeyCreate @ 0x14055C5E0 (SymCryptRsakeyCreate.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x14055D0F8 (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptCallbackAlloc @ 0x140727460 (SymCryptCallbackAlloc.c)
 */

__int64 __fastcall SymCryptRsakeyAllocate(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rax

  v2 = 0LL;
  v3 = (unsigned int)SymCryptSizeofRsakeyFromParams();
  v4 = SymCryptCallbackAlloc(v3);
  if ( v4 )
    return SymCryptRsakeyCreate(v4, (unsigned int)v3, a1);
  return v2;
}
