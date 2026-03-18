/*
 * XREFs of ?CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400CE160
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ @ 0x1400CE0F8 (-CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400CF620 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CleanupMarkedForEvictionAllocations(VIDMM_GLOBAL *this)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int16 i; // bp
  __int64 v6; // rcx
  char v7; // di

  if ( qword_14008A488 )
  {
    v2 = 0x8000000000000000uLL;
    if ( *((_BYTE *)this + 40097) )
    {
      for ( i = 0; (unsigned int)i < *((_DWORD *)this + 1738); ++i )
      {
        v6 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * i);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6) )
        {
          *((_QWORD *)this + 883) = *((_QWORD *)this + 571);
          *((_BYTE *)this + 40097) = 0;
          v2 = -qword_14008A488;
          break;
        }
      }
    }
    else
    {
      v3 = *((_QWORD *)this + 571) - *((_QWORD *)this + 883);
      if ( v3 >= qword_14008A488 )
      {
        VIDMM_GLOBAL::StartPreparation(this, 0xFFFFFFFFLL, 0LL, 0LL, 207);
        v7 = VIDMM_GLOBAL::CleanupMarkedForEvictionAllocationsWorker(this);
        VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
        if ( !v7 )
          *((_BYTE *)this + 40097) = 1;
      }
      else
      {
        v2 = v3 - qword_14008A488;
      }
    }
    v4 = *(_QWORD *)this;
    if ( v2 > *(_QWORD *)(*(_QWORD *)this + 128LL) )
    {
      *(_QWORD *)(v4 + 128) = v2;
      *(_BYTE *)(v4 + 214) = 2;
    }
  }
}
