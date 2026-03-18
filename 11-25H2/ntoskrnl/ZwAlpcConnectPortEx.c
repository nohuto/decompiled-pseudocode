/*
 * XREFs of ZwAlpcConnectPortEx @ 0x14069C0C0
 * Callers:
 *     CmFcpConnectToAlpcServer @ 0x140A8FB5C (CmFcpConnectToAlpcServer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcConnectPortEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
