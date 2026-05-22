/*
 * XREFs of ?CreateList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@YAXPEAVBaseBamoConnectionImpl@25@PEAVBamoPeer@1@PEAPEAVBamoProxy@45@@Z @ 0x180118BAC
 * Callers:
 *     ?Materialize_Microsoft_Bamo_Lib_ISMBamos_AutoBamos_BamoList_TouchInjectionContact_Proxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180121FB0 (-Materialize_Microsoft_Bamo_Lib_ISMBamos_AutoBamos_BamoList_TouchInjectionContact_Proxy@BamoPeer.c)
 * Callees:
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036A00 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800379CC (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 */

void __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::CreateList_TouchInjectionContact_Proxy(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v6; // [rsp+58h] [rbp+10h]

  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v5,
    this);
  v6 = operator new(0x48uLL);
  memset_0(v6, 0, 0x48uLL);
  *((_DWORD *)v6 + 6) = 0;
  v6[4] = 0LL;
  v6[5] = 0LL;
  v6[2] = &Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_ProxyImpl::`vftable';
  v6[6] = 0LL;
  v6[7] = 0LL;
  v6[8] = 0LL;
  *v6 = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListProxy<Windows::UI::Internal::Input::TouchInjectionContact>::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v6[1] = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListProxy<Windows::UI::Internal::Input::TouchInjectionContact>::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_TouchInjectionContact_Proxy'};
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v5);
  *(_QWORD *)a3 = v6;
}
