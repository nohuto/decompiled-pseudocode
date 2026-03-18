/*
 * XREFs of ??0CSynchronousSuperWetInk@@QEAA@PEAVCComposition@@@Z @ 0x180207134
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 *     ??0CSuperWetSource@@IEAA@PEAVCComposition@@@Z @ 0x180207200 (--0CSuperWetSource@@IEAA@PEAVCComposition@@@Z.c)
 */

CSynchronousSuperWetInk *__fastcall CSynchronousSuperWetInk::CSynchronousSuperWetInk(
        CSynchronousSuperWetInk *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rcx

  CSuperWetSource::CSuperWetSource(this, a2);
  *(_BYTE *)(v3 + 168) = 0;
  *(_QWORD *)v3 = &CSynchronousSuperWetInk::`vftable';
  *(_QWORD *)(v3 + 208) = 0LL;
  *(_QWORD *)(v3 + 216) = 0LL;
  *(_QWORD *)(v3 + 224) = 0LL;
  *(_QWORD *)(v3 + 232) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(0x38uLL, v4);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 28) = v5;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0x_EventWriteTransfer(v6, &EVTDESC_SYNCHRONOUSSUPERWETINK_CREATED, (__int64)this);
  return this;
}
