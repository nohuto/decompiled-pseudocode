/*
 * XREFs of ZwAlpcConnectPortEx @ 0x140724370
 * Callers:
 *     DifZwAlpcConnectPortExWrapper @ 0x14069A410 (DifZwAlpcConnectPortExWrapper.c)
 *     CmFcpConnectToAlpcServer @ 0x140B041B8 (CmFcpConnectToAlpcServer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcConnectPortEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
