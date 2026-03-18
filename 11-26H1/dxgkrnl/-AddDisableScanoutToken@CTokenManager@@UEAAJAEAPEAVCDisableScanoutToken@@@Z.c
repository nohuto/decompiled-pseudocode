/*
 * XREFs of ?AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z @ 0x14003A1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001EB70 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x14003A2D0 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTokenManager::AddDisableScanoutToken(CTokenManager *this, struct CDisableScanoutToken **a2)
{
  char v2; // bp
  int v5; // esi
  __int64 Win32kImportTable; // rax
  void *v7; // rcx
  LONG PreviousState; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)this + 12) )
  {
    ExAcquirePushLockExclusiveEx((char *)this + 88, 0LL);
    v2 = 1;
    *((_QWORD *)this + 12) = KeGetCurrentThread();
  }
  v5 = CTokenManager::AddTokenToQueue(this, *a2);
  if ( v5 < 0 && *a2 )
    (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, 1LL);
  Win32kImportTable = DxgkGetWin32kImportTable();
  (*(void (__fastcall **)(_QWORD, _QWORD))(Win32kImportTable + 344))(
    *(_QWORD *)(*((_QWORD *)*a2 + 6) + 24LL),
    *((_QWORD *)*a2 + 7));
  *a2 = 0LL;
  v7 = (void *)*((_QWORD *)this + 9);
  PreviousState = 0;
  ZwSetEvent(v7, &PreviousState);
  if ( v2 )
    CTokenManager::ReleaseTokenManagerLock(this);
  return (unsigned int)v5;
}
