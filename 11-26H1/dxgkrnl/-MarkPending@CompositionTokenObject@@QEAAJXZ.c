/*
 * XREFs of ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x14001F4D4
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001EDE0 (-DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionTokenObject::MarkPending(CompositionTokenObject *this)
{
  unsigned int v2; // edi

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 88, 0LL);
  v2 = 0;
  if ( *((_DWORD *)this + 16) )
    v2 = -1073741823;
  else
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 5) + 16LL))((char *)this + 40);
  CPushLock::ReleaseLock((CompositionTokenObject *)((char *)this + 88));
  return v2;
}
