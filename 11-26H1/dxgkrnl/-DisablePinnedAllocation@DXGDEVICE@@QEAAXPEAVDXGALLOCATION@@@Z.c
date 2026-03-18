/*
 * XREFs of ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1403171F0
 * Callers:
 *     ?DisablePinnedResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x14030F3D0 (-DisablePinnedResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x140310550 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1403105B0 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x14031761C (-UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@.c)
 */

void __fastcall DXGDEVICE::DisablePinnedAllocation(DXGDEVICE *this, struct DXGALLOCATION *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  unsigned int v6; // edi
  int v7; // ebp
  struct DXGALLOCATION **v8; // r14
  struct DXGALLOCATION *v9; // r15
  int v10; // ebx
  struct DXGALLOCATION *v11; // [rsp+78h] [rbp+10h] BYREF

  v11 = a2;
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 184)
    && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v4 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 478;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      478LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)a2 + 18) & 0x800) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 216LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
      *((_QWORD *)a2 + 3));
    *((_DWORD *)a2 + 18) &= ~0x800u;
  }
  v5 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v5 & 0x2000) != 0 && *((_QWORD *)a2 + 3) )
  {
    v6 = (v5 >> 6) & 0xF;
    v7 = 0;
    v8 = &v11;
    do
    {
      v9 = *v8;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                         + 8LL)
                                                             + 1288LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
             *((_QWORD *)*v8 + 3)) )
      {
        if ( !*((_QWORD *)v9 + 5) )
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
        DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v9);
        DxgkReferenceDxgResource(*((struct _EX_RUNDOWN_REF **)v9 + 5));
        if ( (*(int (__fastcall **)(_QWORD, struct DXGALLOCATION *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                           + 760LL)
                                                                               + 8LL)
                                                                   + 224LL))(
               *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
               v9) < 0 )
        {
          v10 = DXGDEVICE::UnpinDirectFlipAllocationSynchronous(this, v6, v9, 0LL);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v9 + 5) + 72LL));
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)v9 + 11);
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 7464;
          if ( v10 < 0 )
            break;
        }
      }
      ++v7;
      ++v8;
    }
    while ( !v7 );
  }
}
