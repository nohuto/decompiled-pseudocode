/*
 * XREFs of UsbhReleasePdoUxdLock @ 0x14001DC9C
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x14001D3EC (UsbhUpdateUxdSettings.c)
 *     UsbhPdoPnp_QueryId @ 0x14001E860 (UsbhPdoPnp_QueryId.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 */

__int64 __fastcall UsbhReleasePdoUxdLock(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax

  v2 = PdoExt(a2);
  KeReleaseSemaphore((PRKSEMAPHORE)(v2 + 642), 16, 1, 0);
  return 0LL;
}
