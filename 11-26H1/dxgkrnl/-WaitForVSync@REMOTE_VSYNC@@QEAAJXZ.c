/*
 * XREFs of ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1403ED638
 * Callers:
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402902F0 (DxgkWaitForVerticalBlankEventInternal.c)
 * Callees:
 *     ?EnableVSyncEventSignaling@REMOTE_VSYNC@@QEAAJXZ @ 0x1403ED684 (-EnableVSyncEventSignaling@REMOTE_VSYNC@@QEAAJXZ.c)
 */

NTSTATUS __fastcall REMOTE_VSYNC::WaitForVSync(REMOTE_VSYNC *this)
{
  NTSTATUS result; // eax
  void *v3; // rcx
  union _LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  result = REMOTE_VSYNC::EnableVSyncEventSignaling(this);
  if ( result >= 0 )
  {
    v3 = (void *)*((_QWORD *)this + 2);
    Timeout.QuadPart = -5000000LL;
    return KeWaitForSingleObject(v3, UserRequest, 0, 0, &Timeout);
  }
  return result;
}
