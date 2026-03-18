/*
 * XREFs of ?StartNextFrameNow@CTokenManager@@UEAAXXZ @ 0x140054240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTokenManager::StartNextFrameNow(CTokenManager *this)
{
  void *v1; // rcx
  LONG PreviousState; // [rsp+30h] [rbp+8h] BYREF

  v1 = (void *)*((_QWORD *)this + 9);
  PreviousState = 0;
  ZwSetEvent(v1, &PreviousState);
}
