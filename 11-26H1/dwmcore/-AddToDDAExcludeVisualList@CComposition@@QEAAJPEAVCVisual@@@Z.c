/*
 * XREFs of ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18022A770
 * Callers:
 *     ?Partition_SetExcludeFromDDA@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x180208C28 (-Partition_SetExcludeFromDDA@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtag.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??4?$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z @ 0x1801D3F8C (--4-$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z.c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x180262E00 (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::AddToDDAExcludeVisualList(CComposition *this, struct CVisual *a2)
{
  CResource **v2; // rbx
  CVisualGroup *v4; // rcx
  _DWORD *v6; // rax
  unsigned int v7; // ebx
  int v8; // eax

  v2 = (CResource **)((char *)this + 6184);
  v4 = (CVisualGroup *)*((_QWORD *)this + 773);
  if ( v4 )
    goto LABEL_6;
  v6 = DefaultHeap::AllocClear(0x60uLL);
  if ( v6 )
  {
    v6[2] = 0;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = this;
    *((_QWORD *)v6 + 4) = 2LL;
    *((_QWORD *)v6 + 6) = 0LL;
    v6[10] = 0;
    *(_QWORD *)v6 = &CVisualGroup::`vftable';
    *((_QWORD *)v6 + 9) = 0LL;
    *((_QWORD *)v6 + 10) = 0LL;
    *((_QWORD *)v6 + 11) = 0LL;
  }
  wil::com_ptr_t<CDesktopTree,wil::err_returncode_policy>::operator=(v2, (__int64)v6);
  v4 = *v2;
  if ( *v2 )
  {
LABEL_6:
    v8 = CVisualGroup::AddVisual(v4, a2);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xA75u, 0LL);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xA72u, 0LL);
  }
  return v7;
}
