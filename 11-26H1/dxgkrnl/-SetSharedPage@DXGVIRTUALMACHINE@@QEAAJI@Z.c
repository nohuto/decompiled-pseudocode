/*
 * XREFs of ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAJI@Z @ 0x1401F7780
 * Callers:
 *     ?VmBusSetIoSpaceRegion@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140233210 (-VmBusSetIoSpaceRegion@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     MapGpadl @ 0x1402350F0 (MapGpadl.c)
 *     UnmapGpadl @ 0x1402352A0 (UnmapGpadl.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::SetSharedPage(DXGVIRTUALMACHINE *this, unsigned int a2)
{
  unsigned int v4; // ebx
  PMDL *v5; // rsi
  int v6; // eax
  __int64 v7; // rbp
  const wchar_t *v8; // r9
  PMDL v9; // rax
  ULONG ByteCount; // ecx
  __int64 v11; // r12
  PVOID MappedSystemVa; // rax

  v4 = 0;
  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 64));
  v5 = (PMDL *)((char *)this + 312);
  if ( *((_QWORD *)this + 39) )
    goto LABEL_15;
  v6 = MapGpadl(*((_QWORD *)this + 7), a2, 2056LL, (char *)this + 312);
  v4 = v6;
  if ( v6 >= 0 )
  {
    v9 = *v5;
    v7 = 4096LL;
    ByteCount = (*v5)->ByteCount;
    if ( ByteCount != 4096 )
    {
      v11 = ByteCount;
      WdLogSingleEntry2(2LL, 4096LL, ByteCount);
      v8 = L"MDL size doesn't match: Expected = 0x%I64x, Actual = 0x%I64x";
      WdLogGlobalForLineNumber = 6668;
      v4 = -1073741811;
      goto LABEL_12;
    }
    if ( (v9->MdlFlags & 5) != 0 )
      MappedSystemVa = v9->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(*v5, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 40) = MappedSystemVa;
    if ( MappedSystemVa )
    {
      *((_DWORD *)this + 76) = a2;
      goto LABEL_15;
    }
    WdLogSingleEntry0(2LL);
    v7 = 6678LL;
    v8 = L"MmGetSystemAddressForMdlSafe failed";
    WdLogGlobalForLineNumber = 6678;
    v4 = -1073741811;
  }
  else
  {
    v7 = v6;
    WdLogSingleEntry1(2LL);
    v8 = L"MapGpadl failed (0x%I64x)";
    WdLogGlobalForLineNumber = 6659;
  }
  v11 = 0LL;
LABEL_12:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, v7, v11, 0LL, 0LL, 0LL);
  if ( *v5 )
  {
    UnmapGpadl(*((_QWORD *)this + 7), a2, 2056LL, *v5);
    *v5 = 0LL;
  }
LABEL_15:
  *((_QWORD *)this + 9) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 64, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
