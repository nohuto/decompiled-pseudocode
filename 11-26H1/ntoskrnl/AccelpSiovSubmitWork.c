/*
 * XREFs of AccelpSiovSubmitWork @ 0x1406E48D8
 * Callers:
 *     AccelpSiovInternalOperationHandler @ 0x14050B5F8 (AccelpSiovInternalOperationHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AccelpSiovSubmitWork(__int64 _RCX, __int64 _RDX)
{
  __asm { enqcmds rcx, zmmword ptr [rdx] }
  return 0LL;
}
