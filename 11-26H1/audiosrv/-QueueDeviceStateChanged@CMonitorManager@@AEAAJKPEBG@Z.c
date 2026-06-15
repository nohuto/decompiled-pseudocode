/*
 * XREFs of ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x18004133C
 * Callers:
 *     ?OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z @ 0x180040D30 (-OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z.c)
 *     ?OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z @ 0x18011F1A0 (-OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z @ 0x18011F450 (-OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180028290 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x180042A10 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x180042A78 (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 *     ?GetFreeNode@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@AEAAXXZ @ 0x18005D0A0 (-GetFreeNode@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPt.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180060E5C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CMonitorManager::QueueDeviceStateChanged(
        struct _RTL_CRITICAL_SECTION *pv,
        int a2,
        unsigned __int16 *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  struct _LIST_ENTRY *v6; // rax
  __int64 *v7; // rdx
  struct _LIST_ENTRY *v8; // rdi
  CMonitorManager::DeviceStateChangedContext *ThreadpoolWork; // r15
  struct _RTL_CRITICAL_SECTION *v10; // r14
  struct _RTL_CRITICAL_SECTION *v11; // r12
  struct _RTL_CRITICAL_SECTION_DEBUG *SpinCount; // rcx
  ULONG_PTR v13; // rax
  struct _RTL_CRITICAL_SECTION_DEBUG **v14; // rax
  unsigned int v15; // ebx
  signed int LastError; // eax
  ATL::CAtlException *v18; // rbx
  __int64 v19; // [rsp+0h] [rbp-78h] BYREF
  CMonitorManager::DeviceStateChangedContext *v20; // [rsp+20h] [rbp-58h]
  CMonitorManager::DeviceStateChangedContext *v21; // [rsp+28h] [rbp-50h]
  ATL::CAtlException *v22; // [rsp+38h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-38h] BYREF
  char v24; // [rsp+48h] [rbp-30h]
  int v26; // [rsp+98h] [rbp+20h]

  v5 = pv;
  v6 = (struct _LIST_ENTRY *)operator new[](0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v6;
  if ( v6 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v6);
    LODWORD(v8->Blink) = a2;
    v8[1].Flink = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v20 = (CMonitorManager::DeviceStateChangedContext *)v8;
  v21 = (CMonitorManager::DeviceStateChangedContext *)v8;
  if ( !v8 )
  {
    v15 = -2147024882;
    goto LABEL_9;
  }
  ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)v8, a3);
  ThreadpoolWork = CreateThreadpoolWork(CMonitorManager::OnHandleDeviceStateChanged, v5, 0LL);
  v20 = ThreadpoolWork;
  v8[1].Flink = (struct _LIST_ENTRY *)ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    lpCriticalSection = v5 + 4;
    v24 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    try
    {
      v15 = 0;
      v10 = v5 + 5;
      v11 = *(struct _RTL_CRITICAL_SECTION **)&v5[5].LockCount;
      ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::GetFreeNode(&v5[5]);
    }
    catch ( ATL::CAtlException *v22 )
    {
      v7 = &v19;
      v18 = v22;
      if ( *(_DWORD *)v22 == -1073741571 )
        _o__resetstkoflw();
      v26 = *(_DWORD *)v18;
      v15 = *(_DWORD *)v18;
      if ( v26 < 0 )
        goto LABEL_15;
      v5 = pv;
      ThreadpoolWork = v20;
LABEL_25:
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v5->DebugInfo->CriticalSection)(v5);
      SubmitThreadpoolWork(ThreadpoolWork);
LABEL_15:
      if ( v24 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_9;
    }
    SpinCount = (struct _RTL_CRITICAL_SECTION_DEBUG *)v10->SpinCount;
    v13 = *(_QWORD *)&SpinCount->Type;
    v21 = 0LL;
    SpinCount->ProcessLocksList.Flink = v8;
    v10->SpinCount = v13;
    SpinCount->CriticalSection = v11;
    *(_QWORD *)&SpinCount->Type = 0LL;
    ++v10->OwningThread;
    v14 = *(struct _RTL_CRITICAL_SECTION_DEBUG ***)&v10->LockCount;
    if ( v14 )
      *v14 = SpinCount;
    else
      v10->DebugInfo = SpinCount;
    *(_QWORD *)&v10->LockCount = SpinCount;
    goto LABEL_25;
  }
  LastError = GetLastError();
  v15 = LastError;
  if ( LastError > 0 )
    v15 = (unsigned __int16)LastError | 0x80070000;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids, v15, v20);
  }
LABEL_9:
  if ( v21 )
    CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v21, (unsigned int)v7);
  return v15;
}
