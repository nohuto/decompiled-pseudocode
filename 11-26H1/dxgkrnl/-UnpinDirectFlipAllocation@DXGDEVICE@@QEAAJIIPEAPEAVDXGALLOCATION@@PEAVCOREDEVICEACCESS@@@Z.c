/*
 * XREFs of ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140317484
 * Callers:
 *     ?UnpinDeviceAllocations@DXGDEVICE@@QEAAXXZ @ 0x14030F070 (-UnpinDeviceAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x14038B858 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1403E5570 (-UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x140310550 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1403105B0 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x14031761C (-UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipAllocation(
        DXGDEVICE *this,
        unsigned int a2,
        __int64 a3,
        struct DXGALLOCATION **a4,
        struct COREDEVICEACCESS *a5)
{
  int v5; // ebx
  __int64 i; // rdi
  struct DXGALLOCATION *v10; // rsi

  v5 = 0;
  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    v10 = a4[i];
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                           + 1288LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
           *((_QWORD *)v10 + 3)) )
    {
      if ( !*((_QWORD *)v10 + 5) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 7437;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"NULL != pCurrentAlloc->m_pOwningResource",
          7437LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v10);
      DxgkReferenceDxgResource(*((struct _EX_RUNDOWN_REF **)v10 + 5));
      v5 = (*(__int64 (__fastcall **)(_QWORD, struct DXGALLOCATION *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 760LL)
                                                                                 + 8LL)
                                                                     + 224LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
             v10);
      if ( v5 < 0 )
      {
        v5 = DXGDEVICE::UnpinDirectFlipAllocationSynchronous(this, a2, v10, a5);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v10 + 5) + 72LL));
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v10 + 11);
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 7464;
        if ( v5 < 0 )
          break;
      }
    }
  }
  return (unsigned int)v5;
}
