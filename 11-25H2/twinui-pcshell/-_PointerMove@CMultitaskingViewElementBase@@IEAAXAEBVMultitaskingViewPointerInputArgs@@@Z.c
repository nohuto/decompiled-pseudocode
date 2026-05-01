/*
 * XREFs of ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804B1E34
 * Callers:
 *     ?PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804B0C40 (-PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 *     ?PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804B0E90 (-PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1804B10B0 (-RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804B1D40 (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 *     ?_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ @ 0x1804B2258 (-_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180085690 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801B9298 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1802388B0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804A41E4 (--1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x1804A9178 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ??0PointerTracking@CMultitaskingViewElementBase@@QEAA@AEBU01@@Z @ 0x1804AF954 (--0PointerTracking@CMultitaskingViewElementBase@@QEAA@AEBU01@@Z.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z @ 0x1804AFA28 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x1804B1C88 (-_HitTestChildren@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@.c)
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x1804B1DC8 (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CMultitaskingViewElementBase::_PointerMove(CMultitaskingViewElementBase *this, struct tagPOINT *a2)
{
  int v4; // r12d
  int v5; // r15d
  __int64 v6; // rax
  char v7; // al
  int v8; // ecx
  __int64 *v9; // rax
  struct IMultitaskingViewElement *v10; // r8
  ElementHelpers *v11; // rdi
  struct IMultitaskingViewElement *v12; // r8
  ElementHelpers *v13; // rbx
  ElementHelpers **v14; // rdx
  __int64 v15; // rbx
  struct tagPOINT v16; // rbx
  int SystemMetrics; // edi
  int v18; // eax
  __int64 v19; // rax
  void (__fastcall *v20)(__int64, __int64); // rdi
  __int64 v21; // rax
  __int64 v22; // [rsp+20h] [rbp-99h] BYREF
  struct tagPOINT v23; // [rsp+28h] [rbp-91h] BYREF
  _DWORD v24[2]; // [rsp+30h] [rbp-89h] BYREF
  __int128 v25; // [rsp+38h] [rbp-81h]
  int v26; // [rsp+48h] [rbp-71h]
  ElementHelpers *v27[2]; // [rsp+50h] [rbp-69h] BYREF
  __int128 v28; // [rsp+60h] [rbp-59h]
  LONG x; // [rsp+70h] [rbp-49h]
  _BYTE v30[4]; // [rsp+80h] [rbp-39h] BYREF
  int v31; // [rsp+84h] [rbp-35h]
  __int128 v32; // [rsp+88h] [rbp-31h]
  int v33; // [rsp+98h] [rbp-21h]
  __int64 v34; // [rsp+A0h] [rbp-19h] BYREF
  ElementHelpers *v35; // [rsp+A8h] [rbp-11h]
  struct tagRECT rc; // [rsp+D0h] [rbp+17h] BYREF

  CMultitaskingViewElementBase::PointerTracking::PointerTracking(
    (CMultitaskingViewElementBase::PointerTracking *)v30,
    (CMultitaskingViewElementBase *)((char *)this + 96));
  v24[0] = 0;
  *(_OWORD *)v27 = 0LL;
  v28 = *(_OWORD *)&a2->x;
  x = a2[2].x;
  v4 = v31;
  v24[1] = v31;
  v25 = v32;
  v5 = v33;
  v26 = v33;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)v27, &v34);
  v6 = *(_QWORD *)this;
  v22 = (__int64)*a2;
  v7 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *, __int64 *))(v6 + 112))(this, &v22);
  v8 = v24[0];
  if ( v7 )
    v8 = 1;
  v24[0] = v8;
  v22 = (__int64)*a2;
  v9 = CMultitaskingViewElementBase::_HitTestChildren(this, (__int64 *)&v23, &v22);
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)&v27[1], (char *)v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  v11 = v27[0];
  if ( v27[0] && !ElementHelpers::IsSameElement((struct IUnknown *)v27[0], (struct IUnknown *)v27[1], v10) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27[1]);
    v11 = v27[0];
  }
  CMultitaskingViewElementBase::PointerTracking::operator=((__int64)this + 96, (__int64)v24);
  v13 = v35;
  if ( v35 && !ElementHelpers::IsSameElement((struct IUnknown *)v35, (struct IUnknown *)v27[1], v12) )
    (*(void (__fastcall **)(ElementHelpers *))(*(_QWORD *)v13 + 216LL))(v13);
  v22 = 0LL;
  v14 = &v27[1];
  if ( v11 )
    v14 = v27;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v22, v14);
  v15 = v22;
  if ( v22 )
  {
    v20 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 200LL);
    v21 = CMultitaskingViewElementBase::_MapArgumentsToChild((__int64)this, (__int64)&rc, (__int64 *)a2);
    v20(v15, v21);
  }
  else if ( v4 )
  {
    if ( v5 )
    {
      v16 = (struct tagPOINT)v32;
      *(_QWORD *)&rc.left = v32;
      rc.right = v32 + 1;
      rc.bottom = DWORD1(v32) + 1;
      SystemMetrics = GetSystemMetrics(69);
      v18 = GetSystemMetrics(68);
      InflateRect(&rc, v18, SystemMetrics);
      v23 = *a2;
      if ( !Geometry::CRect::Contains((Geometry::CRect *)&rc, &v23) )
      {
        v19 = *(_QWORD *)this;
        v23 = v16;
        (*(void (__fastcall **)(CMultitaskingViewElementBase *, struct tagPOINT *))(v19 + 640))(this, &v23);
        *((_DWORD *)this + 26) = 0;
        *((_DWORD *)this + 27) = 0;
        *((_DWORD *)this + 28) = 0;
        *((_DWORD *)this + 29) = 0;
        *((_DWORD *)this + 30) = 0;
      }
    }
  }
  (*(void (__fastcall **)(CMultitaskingViewElementBase *, struct tagPOINT *))(*(_QWORD *)this + 560LL))(this, a2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  CMultitaskingViewElementBase::PointerTracking::~PointerTracking((CMultitaskingViewElementBase::PointerTracking *)v24);
  CMultitaskingViewElementBase::PointerTracking::~PointerTracking((CMultitaskingViewElementBase::PointerTracking *)v30);
}
