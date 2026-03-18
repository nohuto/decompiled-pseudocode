/*
 * XREFs of DpCloseSpbResource @ 0x140254240
 * Callers:
 *     <none>
 * Callees:
 *     DpiDeleteSpbResourceRecord @ 0x1402545F0 (DpiDeleteSpbResourceRecord.c)
 *     DpiValidateSpbResource @ 0x140254670 (DpiValidateSpbResource.c)
 */

__int64 __fastcall DpCloseSpbResource(int a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  result = DpiValidateSpbResource(a1, a2, (unsigned int)DpCloseSpbResource, 1, (__int64)&v3);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 48), 0xFFFFFFFF) == 1 )
      DpiDeleteSpbResourceRecord();
    return 0LL;
  }
  return result;
}
