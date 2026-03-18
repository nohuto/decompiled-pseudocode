/*
 * XREFs of ?OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180240610
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x18023E9AC (--0-$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QE.c)
 *     ??1?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18023EAFC (--1-$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnZeroReferenceCount(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (Microsoft::BamoImpl::CalloutWrapperObject *)v6,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL));
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v5 )
    (**v5)(v5, 1LL);
  Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v6,
    v2,
    v3,
    v4);
}
