/*
 * XREFs of ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801123BC
 * Callers:
 *     ?ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@@Z @ 0x180213FD0 (-ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@.c)
 *     ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x180281B04 (-ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONP.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800925C0 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180112540 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 */

__int64 __fastcall CShapeVisual::EnsureShapeTree(CShapeVisual *this, struct CShapeTree **a2)
{
  unsigned int v4; // edi
  _DWORD *v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  CResource *v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  *a2 = 0LL;
  if ( !*((_QWORD *)this + 31) )
  {
    v5 = DefaultHeap::AllocClear(0x80uLL);
    if ( !v5 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x51u, 0LL);
      return v4;
    }
    v6 = *((_QWORD *)this + 3);
    v5[2] = 0;
    *((_QWORD *)v5 + 3) = v6;
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 4) = 2LL;
    *((_QWORD *)v5 + 6) = 0LL;
    v5[10] = 0;
    *((_QWORD *)v5 + 10) = 0LL;
    *((_QWORD *)v5 + 11) = 0LL;
    *((_BYTE *)v5 + 96) = 1;
    *((_QWORD *)v5 + 13) = 0LL;
    *((_QWORD *)v5 + 14) = 0LL;
    *((_QWORD *)v5 + 15) = 0LL;
    *(_QWORD *)v5 = &CShapeTree::`vftable';
    v9 = (CResource *)v5;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v5 + 2));
    v7 = CVisual::SetContent(this, (struct CContent *)v5);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x53u, 0LL);
      wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(&v9);
      return v4;
    }
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease((CResource *)v5);
  }
  *a2 = (struct CShapeTree *)*((_QWORD *)this + 31);
  return v4;
}
