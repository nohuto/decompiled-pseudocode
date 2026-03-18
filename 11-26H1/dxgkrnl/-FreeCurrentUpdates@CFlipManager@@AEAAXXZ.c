/*
 * XREFs of ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x140019678
 * Callers:
 *     ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x140018AD8 (-ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     NtFlipObjectConsumerEndProcessPresent @ 0x1400195D0 (NtFlipObjectConsumerEndProcessPresent.c)
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1400245EC (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 *     ?Delete@CFlipManager@@MEAAJPEAX@Z @ 0x1400A4570 (-Delete@CFlipManager@@MEAAJPEAX@Z.c)
 * Callees:
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001B0AC (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::FreeCurrentUpdates(CFlipManager *this)
{
  struct CFlipPresentUpdate *v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = (struct CFlipPresentUpdate *)*((_QWORD *)this + 34);
  if ( v1 )
  {
    CFlipManager::ReleaseKernelPresentUpdateReferences(this, v1);
    v3 = *((_QWORD *)this + 34);
    if ( v3 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
    *((_QWORD *)this + 34) = 0LL;
  }
  v4 = *((_QWORD *)this + 35);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
    *((_QWORD *)this + 35) = 0LL;
  }
}
