/*
 * XREFs of ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z @ 0x1401D12CC
 * Callers:
 *     GetInputTransformList @ 0x1401D11D0 (GetInputTransformList.c)
 *     GetMiPInputTransform @ 0x1401D1230 (GetMiPInputTransform.c)
 * Callees:
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071770 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071870 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z @ 0x1401D75EC (-FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall InputTransform::GetTransformList(
        InputTransform *this,
        struct tagWND *a2,
        __int64 a3,
        unsigned __int64 *a4,
        volatile struct tagINPUT_TRANSFORM *a5)
{
  unsigned int v6; // r14d
  __int64 v7; // rdi
  struct tagINPUTTRANSFORMENTRY *v9; // r15
  __int64 v10; // rsi
  struct tagINPUTTRANSFORMENTRY *EntryByTime; // rax
  unsigned int v12; // [rsp+98h] [rbp+10h]

  v12 = (unsigned int)a2;
  v6 = (unsigned int)a2;
  v7 = *((_QWORD *)this + 34);
  if ( !v7 )
    return 0LL;
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)v7, 0);
  v9 = *(struct tagINPUTTRANSFORMENTRY **)(v7 + 8);
  if ( v9 == (struct tagINPUTTRANSFORMENTRY *)(v7 + 8) )
  {
    W32ReleasePushLockSharedEx((struct W32_PUSH_LOCK *)v7, 0LL);
    return 0LL;
  }
  v10 = 0LL;
  while ( (unsigned int)v10 < v6 )
  {
    EntryByTime = FindEntryByTime((struct tagINPUTTRANSFORMLIST *)v7, v9, *(_QWORD *)(a3 + 8 * v10));
    v9 = EntryByTime;
    if ( (_BYTE)a5 == 1 )
      RtlCopyToUser(&a4[8 * (unsigned __int64)(unsigned int)v10], (char *)EntryByTime + 24, 0x40uLL);
    else
      RtlCopyVolatileMemory(&a4[8 * (unsigned __int64)(unsigned int)v10], (char *)EntryByTime + 24, 0x40uLL);
    v10 = (unsigned int)(v10 + 1);
    v6 = v12;
  }
  W32ReleasePushLockSharedEx((struct W32_PUSH_LOCK *)v7, 0LL);
  return 1LL;
}
