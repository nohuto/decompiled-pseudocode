/*
 * XREFs of ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1400659D8
 * Callers:
 *     IsKSTThread @ 0x1400659B0 (IsKSTThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThreadBase::IsInputThread(CInputThreadBase *this)
{
  CInputThreadBase *v1; // rbx
  char *v2; // rdi

  v1 = this;
  v2 = (char *)this + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  LOBYTE(v1) = (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)v1 + 10);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (char)v1;
}
