/*
 * XREFs of CiTaskIndexCreate @ 0x14000E260
 * Callers:
 *     CiDispatchCreateTaskIndexClient @ 0x14000E0B0 (CiDispatchCreateTaskIndexClient.c)
 *     CiDispatchCreateMmThreadClient @ 0x14000E4A0 (CiDispatchCreateMmThreadClient.c)
 * Callees:
 *     CiAllocateMemory @ 0x140003EC0 (CiAllocateMemory.c)
 *     CiFreeMemory @ 0x140003F50 (CiFreeMemory.c)
 *     WPP_SF_ @ 0x1400043B0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x140004844 (WPP_SF_d.c)
 *     CiTaskIndexGetNewIndexValue @ 0x14000E450 (CiTaskIndexGetNewIndexValue.c)
 *     CiSystemAcquirePushLock @ 0x14000F090 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiTaskIndexCreate(__int64 a1, __int64 *a2)
{
  __int64 Memory; // rax
  __int64 v5; // rbx
  unsigned int v6; // edi
  _QWORD *v7; // rax
  HANDLE CurrentThreadId; // rax
  struct _DEVICE_OBJECT **DeferredContext; // rax
  PKDEFERRED_ROUTINE **v10; // rbx
  int v11; // r8d

  Memory = CiAllocateMemory(200LL);
  v5 = Memory;
  if ( Memory )
  {
    *(_DWORD *)Memory = 2;
    *(_QWORD *)(Memory + 48) = 1LL;
    *(_QWORD *)(Memory + 136) = a1;
    v6 = 0;
    *(_QWORD *)(Memory + 8) = 0LL;
    v7 = (_QWORD *)(Memory + 32);
    v7[1] = v7;
    *v7 = v7;
    *(_QWORD *)(v5 + 152) = PsGetCurrentProcessId();
    CurrentThreadId = PsGetCurrentThreadId();
    *(_QWORD *)(v5 + 80) = 0LL;
    *(_QWORD *)(v5 + 160) = CurrentThreadId;
    *(_DWORD *)(v5 + 88) = 1;
    *(_BYTE *)(v5 + 92) = 0;
    *(_QWORD *)(v5 + 120) = 0LL;
    *(_DWORD *)(v5 + 128) = 1;
    *(_BYTE *)(v5 + 132) = 0;
    *(_DWORD *)(v5 + 184) = 0;
    *(_DWORD *)(v5 + 192) = 3;
    CiSystemAcquirePushLock(&WPP_MAIN_CB.Dpc.DpcListEntry);
    if ( (unsigned int)CiTaskIndicesCount >= 0x80 )
    {
      WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
      ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DpcListEntry, 0LL);
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xBu,
          (__int64)&WPP_8af022b3843c3d7d366520be64f7950a_Traceguids);
      CiFreeMemory((void *)v5);
      return (unsigned int)-1073741527;
    }
    else
    {
      *(_DWORD *)(v5 + 144) = CiTaskIndexGetNewIndexValue();
      DeferredContext = (struct _DEVICE_OBJECT **)WPP_MAIN_CB.Dpc.DeferredContext;
      *a2 = v5;
      v10 = (PKDEFERRED_ROUTINE **)(v5 + 168);
      CiTaskIndicesCount = v11 + 1;
      if ( *DeferredContext != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.DeferredRoutine )
        __fastfail(3u);
      *v10 = &WPP_MAIN_CB.Dpc.DeferredRoutine;
      v10[1] = (PKDEFERRED_ROUTINE *)DeferredContext;
      *DeferredContext = (struct _DEVICE_OBJECT *)v10;
      WPP_MAIN_CB.Dpc.DeferredContext = v10;
      WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
      ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DpcListEntry, 0LL);
    }
    return v6;
  }
  else
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_8af022b3843c3d7d366520be64f7950a_Traceguids,
        -1073741801);
    return 3221225495LL;
  }
}
