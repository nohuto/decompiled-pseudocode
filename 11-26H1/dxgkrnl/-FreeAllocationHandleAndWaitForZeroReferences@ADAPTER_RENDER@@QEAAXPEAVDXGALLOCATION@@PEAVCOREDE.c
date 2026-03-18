/*
 * XREFs of ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402E7C4C
 * Callers:
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x14036DFF0 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x14037353C (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x140292700 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1402E98A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1402E9A40 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(
        ADAPTER_RENDER *this,
        struct DXGALLOCATION *a2,
        struct COREDEVICEACCESS *a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v7; // rdi
  struct DXGPROCESS *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  char v11; // di
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  const char *v15; // rdx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax

  CurrentProcess = PsGetCurrentProcess(this);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_3;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v8 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( !v8 )
      goto LABEL_3;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v8 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v8 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
LABEL_3:
      v8 = v7;
    }
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v8 + 248, 0LL) )
  {
    DXGPUSHLOCK::LogEvent((struct DXGPROCESS *)((char *)v8 + 248), v9, v10);
    ExAcquirePushLockExclusiveEx((char *)v8 + 248, 0LL);
  }
  *((_QWORD *)v8 + 32) = KeGetCurrentThread();
  HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)v8 + 280), *((_DWORD *)a2 + 4));
  DxgkUnreferenceDxgAllocation(a2);
  *((_QWORD *)v8 + 32) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v8 + 248, 0LL);
  KeLeaveCriticalRegion();
  v11 = 0;
  if ( a3 )
  {
    v12 = *((_QWORD *)a3 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v12 + 184)
      && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v12 + 168)) )
    {
      v11 = 1;
      if ( !*((_BYTE *)a3 + 32) )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a3 + 8, 0LL, 0LL);
        WdLogGlobalForLineNumber = 7763;
      }
      v13 = *((_QWORD *)a3 + 3);
      *((_BYTE *)a3 + 32) = 0;
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v13 + 184) )
        DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v13, *((const char **)a3 + 5));
      *((_QWORD *)a3 + 5) = 0LL;
      if ( *((_BYTE *)a3 + 144) )
      {
        if ( !*((_BYTE *)a3 + 96) )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a3 + 72, 0LL, 0LL);
          WdLogGlobalForLineNumber = 7763;
        }
        v14 = *((_QWORD *)a3 + 11);
        *((_BYTE *)a3 + 96) = 0;
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v14 + 184) )
          DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v14, *((const char **)a3 + 13));
        *((_QWORD *)a3 + 13) = 0LL;
      }
    }
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)a2 + 11);
  if ( v11 )
    COREDEVICEACCESS::AcquireSharedUncheck(a3, v15);
}
