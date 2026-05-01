/*
 * XREFs of RmRegisterResource @ 0x1800188F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x18000F090 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 *     ?RmRegisterResource@ResourceManagerProxy@@QEAAJW4RmResourceType@@KH@Z @ 0x1800187C4 (-RmRegisterResource@ResourceManagerProxy@@QEAAJW4RmResourceType@@KH@Z.c)
 */

CLIENT_CALL_RETURN __fastcall RmRegisterResource(int a1, int a2, int a3)
{
  CLIENT_CALL_RETURN result; // rax
  struct ResourceManagerProxy *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  result.Simple = GetResourceManagerProxy(&v7);
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Pointer = ResourceManagerProxy::RmRegisterResource((__int64)v7, a1, a2, a3).Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
      return 0LL;
  }
  return result;
}
