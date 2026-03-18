/*
 * XREFs of ??1InkProcessor@@AEAA@XZ @ 0x1402EBDA8
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140237040 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121A70 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121C48 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsCurrentSessionHostServiceSession @ 0x1401FCC60 (IsCurrentSessionHostServiceSession.c)
 *     ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x140230250 (-RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1402EC118 (-UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z.c)
 */

void __fastcall InkProcessor::~InkProcessor(InkProcessor *this)
{
  InkFeedbackServer *v2; // rcx
  InkProcessor *v3; // rdi
  struct InkDevice *v4; // rdx
  struct _LIST_ENTRY *v5; // rdx
  REGHANDLE v6; // rcx
  struct InkDevice *v7; // [rsp+30h] [rbp+8h] BYREF

  W32AcquirePushLockExclusiveEx(this, 0);
  v3 = (InkProcessor *)*((_QWORD *)this + 2);
  while ( v3 != (InkProcessor *)((char *)this + 16) )
  {
    v4 = (InkProcessor *)((char *)v3 - 88);
    v3 = *(InkProcessor **)v3;
    v7 = v4;
    v5 = (struct _LIST_ENTRY *)(((unsigned __int64)v4 + 32) & -(__int64)(v4 != 0LL));
    if ( v5->Blink )
      InkFeedbackServer::RemoveInkFeedbackProvider(v2, v5);
    InkProcessor::UnlinkAndReleaseInkDevice(v2, &v7);
  }
  if ( *((_QWORD *)this + 5) )
    InkFeedbackServer::RemoveInkFeedbackProvider(v2, (struct _LIST_ENTRY *)this + 2);
  if ( IsCurrentSessionHostServiceSession() )
  {
    v6 = qword_14039BC88;
    qword_14039BC88 = 0LL;
    dword_14039BC68 = 0;
    EtwUnregister(v6);
  }
  W32ReleasePushLockExclusiveEx(this, 0LL);
  *((_QWORD *)this + 4) = &InkFeedbackProviderBase::`vftable';
}
