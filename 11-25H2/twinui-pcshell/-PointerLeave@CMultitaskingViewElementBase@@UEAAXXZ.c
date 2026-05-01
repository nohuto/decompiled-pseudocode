/*
 * XREFs of ?PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804B0DA0
 * Callers:
 *     ?PointerLeave@HotTrackingElement@@UEAAXXZ @ 0x1804A4B60 (-PointerLeave@HotTrackingElement@@UEAAXXZ.c)
 *     ?PointerLeave@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804B86C0 (-PointerLeave@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 *     ?PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ @ 0x1804BD0B0 (-PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804A41E4 (--1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ.c)
 *     ??0PointerTracking@CMultitaskingViewElementBase@@QEAA@AEBU01@@Z @ 0x1804AF954 (--0PointerTracking@CMultitaskingViewElementBase@@QEAA@AEBU01@@Z.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z @ 0x1804AF9C0 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z @ 0x1804AFA28 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMultitaskingViewElementBase::PointerLeave(CMultitaskingViewElementBase *this)
{
  __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-49h] BYREF
  int v4; // [rsp+30h] [rbp-39h]
  int v5; // [rsp+34h] [rbp-35h]
  int v6; // [rsp+38h] [rbp-31h]
  int v7; // [rsp+3Ch] [rbp-2Dh]
  __int128 v8; // [rsp+40h] [rbp-29h]
  __int128 v9; // [rsp+50h] [rbp-19h]
  int v10; // [rsp+60h] [rbp-9h]
  int v11; // [rsp+64h] [rbp-5h]
  _DWORD v12[10]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v13; // [rsp+98h] [rbp+2Fh] BYREF
  __int128 v14; // [rsp+A0h] [rbp+37h]
  int v15; // [rsp+B0h] [rbp+47h]

  CMultitaskingViewElementBase::PointerTracking::PointerTracking(
    (CMultitaskingViewElementBase::PointerTracking *)v12,
    (CMultitaskingViewElementBase *)((char *)this + 96));
  if ( *((_DWORD *)this + 25) )
  {
    v12[0] = 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    v14 = 0LL;
    v15 = 0;
  }
  else
  {
    v7 = 0;
    v11 = 0;
    v3 = 0LL;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0;
    CMultitaskingViewElementBase::PointerTracking::operator=((__int64)v12, (__int64)&v3);
    CMultitaskingViewElementBase::PointerTracking::~PointerTracking((CMultitaskingViewElementBase::PointerTracking *)&v3);
  }
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 216LL))(v2);
  CMultitaskingViewElementBase::PointerTracking::operator=((__int64)this + 96, (__int64)v12);
  (*(void (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 568LL))(this);
  CMultitaskingViewElementBase::PointerTracking::~PointerTracking((CMultitaskingViewElementBase::PointerTracking *)v12);
}
