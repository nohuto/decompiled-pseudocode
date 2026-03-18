/*
 * XREFs of UsbhAcquirePdoUxdLock @ 0x140039DF4
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1400220B4 (UsbhUpdateUxdSettings.c)
 *     UsbhPdoPnp_QueryId @ 0x1400236A0 (UsbhPdoPnp_QueryId.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 */

__int64 __fastcall UsbhAcquirePdoUxdLock(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax

  v2 = PdoExt(a2);
  KeWaitForSingleObject(v2 + 642, Executive, 0, 0, 0LL);
  return 0LL;
}
