/*
 * XREFs of ?DestroyCoreState@DXGDOORBELL@@IEAAXXZ @ 0x1401E1680
 * Callers:
 *     ??1DXGDOORBELL@@IEAA@XZ @ 0x1401E0CE0 (--1DXGDOORBELL@@IEAA@XZ.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A7D80 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?VidMmCloseFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_DEVICE@@_N@Z @ 0x14007C758 (-VidMmCloseFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_DEVI.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DdiDestroyDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYDOORBELL@@@Z @ 0x1401AD974 (-DdiDestroyDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYDOORBELL@@@Z.c)
 *     ?Disconnect@DXGDOORBELL@@QEAAJW4_D3DDDI_DOORBELLSTATUS@@@Z @ 0x1401E181C (-Disconnect@DXGDOORBELL@@QEAAJW4_D3DDDI_DOORBELLSTATUS@@@Z.c)
 */

void __fastcall DXGDOORBELL::DestroyCoreState(DXGDOORBELL *this)
{
  VIDMM_EXPORT *v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = (VIDMM_EXPORT *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 34);
  if ( !*((_BYTE *)this + 169) )
  {
    if ( (unsigned int)**((_QWORD **)this + 17) <= 1 && (int)DXGDOORBELL::Disconnect(this, 3LL) < 0 )
    {
      WdLogSingleEntry5(0LL, 275LL, 33LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 3563;
    }
    if ( *(_QWORD *)(*(_QWORD *)this + 32LL)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 16LL) + 16LL) + 16LL)
                   + 200LL) != 4 )
    {
      v3 = *(_QWORD **)this;
      v5 = *(_QWORD *)(*(_QWORD *)this + 32LL);
      ADAPTER_RENDER::DdiDestroyDoorbell(
        *(ADAPTER_RENDER **)(*(_QWORD *)(v3[2] + 16LL) + 16LL),
        (struct _DXGKARG_DESTROYDOORBELL *)&v5);
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL)
                                                                                   + 16LL)
                                                                       + 16LL)
                                                           + 736LL)
                                               + 8LL)
                                   + 1104LL))(*(_QWORD *)(*(_QWORD *)this + 48LL));
    v4 = (_QWORD *)*((_QWORD *)this + 17);
    if ( v4 )
    {
      *v4 = 3LL;
      if ( *((_BYTE *)this + 170) )
      {
        VIDMM_EXPORT::VidMmCloseFenceStorageSlot(
          v2,
          (DXGDOORBELL *)((char *)this + 72),
          *(struct VIDMM_DEVICE **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 16LL) + 792LL));
        *((_BYTE *)this + 170) = 0;
      }
    }
    *((_BYTE *)this + 169) = 1;
  }
}
