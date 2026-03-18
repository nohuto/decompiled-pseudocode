/*
 * XREFs of NtUserProcessInkFeedbackCommand @ 0x14024BD30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x140124E1C (-InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

_BOOL8 __fastcall NtUserProcessInkFeedbackCommand(unsigned int a1, void *Src, unsigned int a3)
{
  SIZE_T v3; // r14
  BOOL v6; // ebx
  __int64 v7; // rcx
  void *v8; // rax
  void *v9; // rdi
  int v10; // ebx
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  v6 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v12, 1LL);
  if ( (_DWORD)v3 )
  {
    ProbeForRead(Src, v3, 1u);
    v8 = (void *)Win32AllocPoolWithQuotaZInit(v3, 1768452949LL);
    v9 = v8;
    if ( v8 )
    {
      RtlCopyVolatileMemory(v8, Src, v3);
      v10 = InkProcessorProcessInkFeedbackCommand(a1, v9);
      Win32FreePool(v9);
      v6 = v10 >= 0;
    }
    else
    {
      UserSetLastError(8);
    }
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
