/*
 * XREFs of ?PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804C29E0
 * Callers:
 *     ?PointerLeave@HotTrackingElement@@UEAAXXZ @ 0x1804B5F30 (-PointerLeave@HotTrackingElement@@UEAAXXZ.c)
 *     ?PointerLeave@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804CA520 (-PointerLeave@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 *     ?PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ @ 0x1804CEF40 (-PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804B55A8 (--1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ.c)
 *     ??0PointerTracking@CMultitaskingViewElementBase@@QEAA@AEBU01@@Z @ 0x1804C155C (--0PointerTracking@CMultitaskingViewElementBase@@QEAA@AEBU01@@Z.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z @ 0x1804C15C8 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z @ 0x1804C1630 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMultitaskingViewElementBase::PointerLeave(CMultitaskingViewElementBase *this)
{
  __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-49h] BYREF
  __int64 v4; // [rsp+30h] [rbp-39h]
  __int64 v5; // [rsp+38h] [rbp-31h]
  __int128 v6; // [rsp+40h] [rbp-29h]
  __int128 v7; // [rsp+50h] [rbp-19h]
  __int64 v8; // [rsp+60h] [rbp-9h]
  _DWORD v9[10]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v10; // [rsp+98h] [rbp+2Fh] BYREF
  __int128 v11; // [rsp+A0h] [rbp+37h]
  int v12; // [rsp+B0h] [rbp+47h]

  CMultitaskingViewElementBase::PointerTracking::PointerTracking(
    (CMultitaskingViewElementBase::PointerTracking *)v9,
    (CMultitaskingViewElementBase *)((char *)this + 96));
  if ( *((_DWORD *)this + 25) )
  {
    v9[0] = 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    v11 = 0LL;
    v12 = 0;
  }
  else
  {
    v5 = 0LL;
    v8 = 0LL;
    v3 = 0LL;
    v4 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    CMultitaskingViewElementBase::PointerTracking::operator=((__int64)v9, (__int64)&v3);
    CMultitaskingViewElementBase::PointerTracking::~PointerTracking((CMultitaskingViewElementBase::PointerTracking *)&v3);
  }
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 216LL))(v2);
  CMultitaskingViewElementBase::PointerTracking::operator=((__int64)this + 96, (__int64)v9);
  (*(void (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 568LL))(this);
  CMultitaskingViewElementBase::PointerTracking::~PointerTracking((CMultitaskingViewElementBase::PointerTracking *)v9);
}
