/*
 * XREFs of ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140099F08
 * Callers:
 *     DefragmentSegment @ 0x1400B1AB8 (DefragmentSegment.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ @ 0x14004DBC8 (-GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     ?GetActiveVprStart@VIDMM_SEGMENT@@QEBA_KXZ @ 0x14004DBEC (-GetActiveVprStart@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x14009DCA0 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?OldDefragment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400B6E6C (-OldDefragment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400CF620 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1401016B4 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1401028B0 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ @ 0x140125754 (-TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::Defragment(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // r8
  VIDMM_SEGMENT *v7; // rcx
  unsigned __int64 ActiveVprEnd; // rbx
  struct VIDMM_SEGMENT *v9; // rbx
  char *v10; // r14
  struct VIDMM_SEGMENT *v11; // r12
  __int64 v12; // rcx
  _QWORD *v13; // r12
  _QWORD *v14; // r14
  VIDMM_DEVICE *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r8

  v4 = *(_QWORD *)(*(_QWORD *)this + 112LL);
  *((_QWORD *)a2 + 63) = v4;
  if ( (*((_DWORD *)this + 1746) & 0x4000) != 0 )
  {
    WdLogSingleEntry1(4LL, a2);
    WdLogGlobalForLineNumber = 27027;
  }
  else
  {
    v5 = *((unsigned __int16 *)a2 + 34);
    if ( (byte_14008A203 & 4) != 0 )
      McTemplateK0x_EtwWriteTransfer((__int64)this, &EventVidMmStartDefragment, v4, this);
    VIDMM_GLOBAL::StartPreparation(this, 0xFFFFFFFFLL, 0LL, 0LL, 1002);
    v6 = *((_QWORD *)this + 3);
    if ( (*(_DWORD *)(352 * v5 + *(_QWORD *)(v6 + 3032) + 16) & 4) != 0
      && (*(_BYTE *)(v6 + 2500) & 8) != 0
      && (*((_DWORD *)this + 1746) & 0x20000) == 0 )
    {
      WdLogSingleEntry1(4LL, a2);
      WdLogGlobalForLineNumber = 27057;
      VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(this);
      VIDMM_SEGMENT::TrimAllMarkedForEvictionAllocations(a2);
      if ( (*((_BYTE *)a2 + 66) & 1) != 0 )
      {
        VIDMM_SEGMENT::GetActiveVprStart(a2);
        ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(v7);
        (*(void (__fastcall **)(struct VIDMM_SEGMENT *, _QWORD))(*(_QWORD *)a2 + 96LL))(a2, 0LL);
        (*(void (__fastcall **)(struct VIDMM_SEGMENT *, unsigned __int64, _QWORD))(*(_QWORD *)a2 + 96LL))(
          a2,
          ActiveVprEnd,
          *((_QWORD *)a2 + 5));
      }
      else
      {
        (*(void (__fastcall **)(struct VIDMM_SEGMENT *, _QWORD, _QWORD))(*(_QWORD *)a2 + 96LL))(
          a2,
          0LL,
          *((_QWORD *)a2 + 5));
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, a2);
      WdLogGlobalForLineNumber = 27084;
      v9 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 14);
      while ( v9 != (struct VIDMM_SEGMENT *)((char *)a2 + 112) )
      {
        v10 = (char *)v9 - 24;
        v11 = v9;
        v12 = *((_QWORD *)v9 - 3);
        v9 = *(struct VIDMM_SEGMENT **)v9;
        if ( !(unsigned __int8)PsIsSystemProcess(*(_QWORD *)(v12 + 16))
          && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v10 + 72LL) + 408LL) & 1) == 0 )
        {
          v13 = (_QWORD *)((char *)v11 + 16);
          v14 = (_QWORD *)*v13;
          while ( v14 != v13 )
          {
            v15 = (VIDMM_DEVICE *)v14[4];
            v14 = (_QWORD *)*v14;
            if ( *((_QWORD *)v15 + 3) )
            {
              if ( !*((_QWORD *)v15 + 23) )
                VIDMM_DEVICE::PartiallySuspend(v15);
              VIDMM_DEVICE::FaultAllAllocations(v15);
            }
          }
        }
      }
      VIDMM_SEGMENT::OldDefragment(a2);
    }
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
    if ( (byte_14008A203 & 4) != 0 )
      McTemplateK0x_EtwWriteTransfer(v16, &EventVidMmEndDefragment, v17, this);
  }
}
