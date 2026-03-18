/*
 * XREFs of ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1401DD134
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x14019C2FC (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 *     DxgkEnsureVmBusInterface @ 0x1401E0370 (DxgkEnsureVmBusInterface.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x14007BD70 (--_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x14018B6B4 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 *     ?CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z @ 0x14021FF7C (-CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z.c)
 *     ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x140220A9C (-EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ.c)
 */

__int64 __fastcall DXGGLOBAL::EnsureVmBusInterface(DXGGLOBAL *this)
{
  char *v1; // rbp
  char v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rcx
  PMDL PagesForMdl; // rax
  struct _MDL **v7; // r14
  __int64 v8; // rax
  const wchar_t *v9; // r9
  unsigned int v10; // esi
  PVOID MappedSystemVa; // rax
  int v12; // eax
  __int64 v13; // r12
  const wchar_t *v14; // r9
  int GpadlFromMdl; // eax
  void **v16; // rcx

  v1 = (char *)this + 464;
  v3 = 0;
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 464));
  if ( *((_QWORD *)this + 212) )
  {
    v7 = (struct _MDL **)((char *)this + 1736);
  }
  else
  {
    v3 = 1;
    v4 = operator new(0x48uLL, 0x4B677844u, 256LL);
    if ( !v4 )
    {
      *((_QWORD *)this + 212) = 0LL;
      v7 = (struct _MDL **)((char *)this + 1736);
      v10 = -1073741801;
      goto LABEL_19;
    }
    DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE(v4, 2);
    *((_QWORD *)this + 212) = v5;
    PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, 0x808uLL, MmNonCached, 0);
    v7 = (struct _MDL **)((char *)this + 1736);
    *((_QWORD *)this + 217) = PagesForMdl;
    if ( !PagesForMdl )
    {
      WdLogSingleEntry0(2LL);
      v8 = 5995LL;
      v9 = L"MmAllocatePagesForMdlEx failed";
LABEL_5:
      WdLogGlobalForLineNumber = v8;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
      v10 = -1073741801;
      goto LABEL_19;
    }
    if ( (PagesForMdl->MdlFlags & 5) != 0 )
      MappedSystemVa = PagesForMdl->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 216) = MappedSystemVa;
    if ( !MappedSystemVa )
    {
      WdLogSingleEntry0(2LL);
      v8 = 6002LL;
      v9 = L"MmGetSystemAddressForMdlSafe failed";
      goto LABEL_5;
    }
  }
  v12 = DXG_GUEST_GLOBAL_VMBUS::EnsureVmBusChannel(*((DXG_GUEST_GLOBAL_VMBUS **)this + 212));
  v10 = v12;
  if ( v12 >= 0 )
  {
    if ( *((_DWORD *)this + 431) )
      goto LABEL_23;
    GpadlFromMdl = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(
                     *((DXG_GUEST_GLOBAL_VMBUS **)this + 212),
                     *v7,
                     (unsigned int *)this + 431);
    v10 = GpadlFromMdl;
    if ( GpadlFromMdl >= 0 )
      goto LABEL_23;
    v13 = GpadlFromMdl;
    WdLogSingleEntry1(2LL);
    v14 = L"CreateGpadlFromMdl failed: 0x%I64x";
    WdLogGlobalForLineNumber = 6032;
  }
  else
  {
    v13 = v12;
    WdLogSingleEntry1(2LL);
    v14 = L"Failed to create global VM bus channel, returning 0x%I64x";
    WdLogGlobalForLineNumber = 6020;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, v13, 0LL, 0LL, 0LL, 0LL);
  if ( !v3 )
    goto LABEL_23;
LABEL_19:
  if ( *v7 )
  {
    MmFreePagesFromMdl(*v7);
    ExFreePoolWithTag(*v7, 0);
    *((_QWORD *)this + 216) = 0LL;
    *v7 = 0LL;
  }
  v16 = (void **)*((_QWORD *)this + 212);
  if ( v16 )
  {
    DXG_GUEST_GLOBAL_VMBUS::`scalar deleting destructor'(v16);
    *((_QWORD *)this + 212) = 0LL;
  }
LABEL_23:
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v10;
}
