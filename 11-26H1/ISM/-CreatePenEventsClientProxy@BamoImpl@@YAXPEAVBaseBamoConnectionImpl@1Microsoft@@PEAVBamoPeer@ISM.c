/*
 * XREFs of ?CreatePenEventsClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180091020
 * Callers:
 *     ?Materialize_BamoPenEventsClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18004BDD0 (-Materialize_BamoPenEventsClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003750C (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800375E0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800379CC (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ?CreatePenEventsClientProxy@PenEvents@InputTraceLogging@@SAXXZ @ 0x1800910E8 (-CreatePenEventsClientProxy@PenEvents@InputTraceLogging@@SAXXZ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ?OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ @ 0x1800A9F18 (-OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall BamoImpl::CreatePenEventsClientProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  Microsoft::BamoImpl::CalloutWrapperObject *v7; // rcx
  __int64 v8; // r8
  const char *v9; // r9
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  char v12; // [rsp+30h] [rbp-18h]

  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)&v10,
    this);
  InputTraceLogging::PenEvents::CreatePenEventsClientProxy();
  v5 = operator new(0x40uLL);
  memset_0(v5, 0, 0x40uLL);
  *((_DWORD *)v5 + 6) = 0;
  v5[4] = 0LL;
  v5[5] = 0LL;
  v5[2] = &BamoImpl::BamoPenEventsClientProxyImpl::`vftable';
  *((_DWORD *)v5 + 12) = 0;
  *((_WORD *)v5 + 26) = 0;
  *((_BYTE *)v5 + 54) = 0;
  *v5 = &PenEventsClientCustomProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v5[1] = &PenEventsClientCustomProxy::`vftable'{for `IPenEventsClientProxy'};
  if ( v11 && (v12 & 2) != 0 )
    Microsoft::BamoImpl::CalloutWrapperObject::OnCallEpilog(v7);
  if ( v10 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v10);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(
    &v11,
    v6,
    v8,
    v9);
  *(_QWORD *)a3 = v5;
}
