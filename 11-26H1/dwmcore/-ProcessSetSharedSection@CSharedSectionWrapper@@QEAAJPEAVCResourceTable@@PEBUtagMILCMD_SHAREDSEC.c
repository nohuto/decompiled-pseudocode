/*
 * XREFs of ?ProcessSetSharedSection@CSharedSectionWrapper@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAREDSECTIONWRAPPER_SETSHAREDSECTION@@@Z @ 0x18020ED28
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSharedSectionWrapper::ProcessSetSharedSection(
        CSharedSectionWrapper *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHAREDSECTIONWRAPPER_SETSHAREDSECTION *a3)
{
  __int64 Resource; // rax
  unsigned int v6; // ebx
  CResource *v7; // rcx
  CResource *v8; // rbx

  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x84u);
  if ( Resource )
  {
    v8 = (CResource *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = Resource;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(Resource + 8));
    if ( v8 )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v8);
    *((_DWORD *)this + 20) = *((_DWORD *)a3 + 3);
    *((_DWORD *)this + 21) = *((_DWORD *)a3 + 4);
    (*(void (__fastcall **)(CSharedSectionWrapper *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
    return 0;
  }
  else
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x1Du, 0LL);
    v7 = (CResource *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = 0LL;
    if ( v7 )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v7);
  }
  return v6;
}
