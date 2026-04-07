/*
 * XREFs of ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18001DCF8
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18001D550 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x180044338 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 * Callees:
 *     ?CalculateWindowMetrics@CSecondaryWindowRepresentation@@AEAA_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x18001DE00 (-CalculateWindowMetrics@CSecondaryWindowRepresentation@@AEAA_NPEAUtagSIZE@@PEAU_MARGINS@@@Z.c)
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x18001DFB8 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(CSecondaryWindowRepresentation *this)
{
  struct CWindowData *RepresentationWindowData; // rdi
  _DWORD *v3; // rdx
  struct _MARGINS v4; // xmm0
  __int64 v5; // rcx
  struct _MARGINS v6; // [rsp+20h] [rbp-18h] BYREF
  struct tagSIZE v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  RepresentationWindowData = CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)this + 64));
  if ( !*((_BYTE *)this + 417) && CSecondaryWindowRepresentation::CalculateWindowMetrics(this, &v7, &v6) )
  {
    if ( v7.cx != *((_DWORD *)this + 20)
      || v7.cy != *((_DWORD *)this + 21)
      || *((_DWORD *)this + 22) != v6.cxLeftWidth
      || *((_DWORD *)this + 23) != v6.cxRightWidth
      || *((_DWORD *)this + 24) != v6.cyTopHeight
      || *((_DWORD *)this + 25) != v6.cyBottomHeight
      || (v3 = (_DWORD *)*((_QWORD *)RepresentationWindowData + 55), *((_DWORD *)this + 26) != v3[151])
      || *((_DWORD *)this + 27) != v3[152]
      || *((_DWORD *)this + 28) != v3[153]
      || *((_DWORD *)this + 29) != v3[154] )
    {
      v4 = v6;
      *((struct tagSIZE *)this + 10) = v7;
      v5 = *((_QWORD *)this + 21);
      *(struct _MARGINS *)((char *)this + 88) = v4;
      *(_OWORD *)((char *)this + 104) = *(_OWORD *)(*((_QWORD *)RepresentationWindowData + 55) + 604LL);
      (*(void (__fastcall **)(__int64, CSecondaryWindowRepresentation *))(*(_QWORD *)v5 + 8LL))(v5, this);
    }
  }
}
