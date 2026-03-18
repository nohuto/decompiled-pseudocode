/*
 * XREFs of ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x14037732C
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x140376110 (DxgkUpdateGpuVirtualAddress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x14019345C (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 */

struct VIDMM_COMPANION_CONTEXT *__fastcall DXGCONTEXT::GetVidMmCompanionContext(DXGCONTEXT *this)
{
  struct _VIDSCH_CONTEXT *VidSchCompanionContext; // rax

  if ( !*((_QWORD *)this + 34) )
  {
    VidSchCompanionContext = DXGCONTEXT::GetVidSchCompanionContext(this);
    if ( VidSchCompanionContext )
      *((_QWORD *)this + 34) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _VIDSCH_CONTEXT *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 952LL))(
                                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                                 *(_QWORD *)(*((_QWORD *)this + 2) + 792LL),
                                 VidSchCompanionContext);
  }
  return (struct VIDMM_COMPANION_CONTEXT *)*((_QWORD *)this + 34);
}
