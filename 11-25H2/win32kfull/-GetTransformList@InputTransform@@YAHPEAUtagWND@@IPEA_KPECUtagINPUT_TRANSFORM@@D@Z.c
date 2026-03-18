/*
 * XREFs of ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z @ 0x140292204
 * Callers:
 *     GetMiPInputTransform @ 0x14019FA90 (GetMiPInputTransform.c)
 *     GetInputTransformList @ 0x1401E0C50 (GetInputTransformList.c)
 * Callees:
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400828F0 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140082A30 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z @ 0x1401A7294 (-FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
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
  struct tagINPUTTRANSFORMLIST **v9; // r15
  __int64 v10; // rsi
  struct tagINPUTTRANSFORMLIST **EntryByTime; // rax
  unsigned __int64 *v12; // r14
  unsigned int v13; // [rsp+98h] [rbp+10h]

  v13 = (unsigned int)a2;
  v6 = (unsigned int)a2;
  v7 = *((_QWORD *)this + 34);
  if ( !v7 )
    return 0LL;
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)v7, 0);
  v9 = *(struct tagINPUTTRANSFORMLIST ***)(v7 + 8);
  if ( v9 == (struct tagINPUTTRANSFORMLIST **)(v7 + 8) )
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
    {
      v12 = &a4[8 * (unsigned __int64)(unsigned int)v10];
      if ( (unsigned __int64)v12 >= MmUserProbeAddress )
        v12 = (unsigned __int64 *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v12, EntryByTime + 3, 0x40uLL);
    }
    else
    {
      RtlCopyVolatileMemory(&a4[8 * (unsigned __int64)(unsigned int)v10], EntryByTime + 3, 0x40uLL);
    }
    v10 = (unsigned int)(v10 + 1);
    v6 = v13;
  }
  W32ReleasePushLockSharedEx((struct W32_PUSH_LOCK *)v7, 0LL);
  return 1LL;
}
