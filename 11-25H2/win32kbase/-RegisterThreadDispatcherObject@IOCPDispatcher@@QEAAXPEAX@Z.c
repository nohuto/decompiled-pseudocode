/*
 * XREFs of ?RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z @ 0x14015D7D0
 * Callers:
 *     UserKSTInitialize @ 0x140219140 (UserKSTInitialize.c)
 * Callees:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x14003932C (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 */

void __fastcall IOCPDispatcher::RegisterThreadDispatcherObject(IOCPDispatcher *this, void *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8

  v4 = IOCPDispatcher::SetupIOCPForDispatcherHandle((__int64)this, 0LL, (int)a2, -2147483647, *((_DWORD *)this + 724));
  v5 = 32LL * *((unsigned int *)this + 724);
  *(_QWORD *)((char *)this + v5 + 2576) = a2;
  *(_QWORD *)((char *)this + v5 + 2584) = v4;
  ++*((_DWORD *)this + 724);
}
