/*
 * XREFs of ?OnPeerRequestsConnectThunk@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x1802404E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x180162208 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180162260 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::OnPeerRequestsConnectThunk(
        BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl *this,
        unsigned int a2,
        unsigned int *a3,
        struct MsgString **a4)
{
  __int64 v4; // rbx
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 2);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v9,
    this);
  LODWORD(v4) = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, struct MsgString **))(*(_QWORD *)v4 + 88LL))(
                  v4,
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v9);
  return (unsigned int)v4;
}
