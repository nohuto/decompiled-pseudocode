/*
 * XREFs of ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x1801A5D20
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A5C3C (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z @ 0x180288CEC (-Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z.c)
 */

__int64 __fastcall CGenericInk::ProcessTipPointBuffer(
        volatile signed __int32 **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_TIPPOINTBUFFER *a3)
{
  volatile signed __int32 **v3; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // edx
  struct CSharedSectionBase *Resource; // rbx
  int v10; // eax

  v3 = this + 11;
  v6 = 0;
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(this + 11);
  v7 = *((_DWORD *)a3 + 2);
  if ( v7 )
  {
    Resource = (struct CSharedSectionBase *)CResourceTable::GetResource((__int64)a2, v7, 0x85u);
    if ( Resource )
    {
      Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(v3);
      v10 = CGenericInkTipPointSource::Create(
              Resource,
              *((_DWORD *)a3 + 3),
              *((_DWORD *)a3 + 4),
              *((_DWORD *)a3 + 5),
              (struct CGenericInkTipPointSource **)v3);
      v6 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xA0u, 0LL);
    }
    else
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x9Bu, 0LL);
    }
  }
  return v6;
}
