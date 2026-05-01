/*
 * XREFs of ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C3AB0
 * Callers:
 *     ?PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C2880 (-PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 *     ?PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C2AE0 (-PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1804C2D00 (-RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C39BC (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 *     ?_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ @ 0x1804C3EDC (-_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18020E5D4 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x18022A7B0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804B55A8 (--1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x1804BABE8 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ??0PointerTracking@CMultitaskingViewElementBase@@QEAA@AEBU01@@Z @ 0x1804C155C (--0PointerTracking@CMultitaskingViewElementBase@@QEAA@AEBU01@@Z.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z @ 0x1804C1630 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x1804C3900 (-_HitTestChildren@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@.c)
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x1804C3A44 (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CMultitaskingViewElementBase::_PointerMove(CMultitaskingViewElementBase *this, struct tagPOINT *a2)
{
  int v4; // r12d
  int v5; // r15d
  char v6; // al
  int v7; // ecx
  __int64 *v8; // rax
  struct IMultitaskingViewElement *v9; // r8
  ElementHelpers *v10; // rdi
  struct IMultitaskingViewElement *v11; // r8
  ElementHelpers *v12; // rbx
  ElementHelpers **v13; // rdx
  __int64 v14; // rbx
  struct tagPOINT v15; // rbx
  int SystemMetrics; // edi
  int v17; // eax
  void (__fastcall *v18)(__int64, __int64); // rdi
  __int64 v19; // rax
  __int64 v20; // [rsp+20h] [rbp-99h] BYREF
  struct tagPOINT v21; // [rsp+28h] [rbp-91h] BYREF
  _DWORD v22[2]; // [rsp+30h] [rbp-89h] BYREF
  __int128 v23; // [rsp+38h] [rbp-81h]
  int v24; // [rsp+48h] [rbp-71h]
  ElementHelpers *v25[2]; // [rsp+50h] [rbp-69h] BYREF
  __int128 v26; // [rsp+60h] [rbp-59h]
  LONG x; // [rsp+70h] [rbp-49h]
  _BYTE v28[4]; // [rsp+80h] [rbp-39h] BYREF
  int v29; // [rsp+84h] [rbp-35h]
  __int128 v30; // [rsp+88h] [rbp-31h]
  int v31; // [rsp+98h] [rbp-21h]
  __int64 v32; // [rsp+A0h] [rbp-19h] BYREF
  ElementHelpers *v33; // [rsp+A8h] [rbp-11h]
  struct tagRECT rc; // [rsp+D0h] [rbp+17h] BYREF

  CMultitaskingViewElementBase::PointerTracking::PointerTracking(
    (CMultitaskingViewElementBase::PointerTracking *)v28,
    (CMultitaskingViewElementBase *)((char *)this + 96));
  v22[0] = 0;
  *(_OWORD *)v25 = 0LL;
  v26 = *(_OWORD *)&a2->x;
  x = a2[2].x;
  v4 = v29;
  v22[1] = v29;
  v23 = v30;
  v5 = v31;
  v24 = v31;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)v25, &v32);
  v20 = (__int64)*a2;
  v6 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *, __int64 *))(*(_QWORD *)this + 112LL))(this, &v20);
  v7 = v22[0];
  if ( v6 )
    v7 = 1;
  v22[0] = v7;
  v20 = (__int64)*a2;
  v8 = CMultitaskingViewElementBase::_HitTestChildren(this, (__int64 *)&v21, &v20);
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)&v25[1], (char *)v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
  v10 = v25[0];
  if ( v25[0] && !ElementHelpers::IsSameElement((struct IUnknown *)v25[0], (struct IUnknown *)v25[1], v9) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25[1]);
    v10 = v25[0];
  }
  CMultitaskingViewElementBase::PointerTracking::operator=((__int64)this + 96, (__int64)v22);
  v12 = v33;
  if ( v33 && !ElementHelpers::IsSameElement((struct IUnknown *)v33, (struct IUnknown *)v25[1], v11) )
    (*(void (__fastcall **)(ElementHelpers *))(*(_QWORD *)v12 + 216LL))(v12);
  v20 = 0LL;
  v13 = &v25[1];
  if ( v10 )
    v13 = v25;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v20, v13);
  v14 = v20;
  if ( v20 )
  {
    v18 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 200LL);
    v19 = CMultitaskingViewElementBase::_MapArgumentsToChild((__int64)this, (__int64)&rc, (__int64 *)a2);
    v18(v14, v19);
  }
  else if ( v4 )
  {
    if ( v5 )
    {
      v15 = (struct tagPOINT)v30;
      *(_QWORD *)&rc.left = v30;
      rc.right = v30 + 1;
      rc.bottom = DWORD1(v30) + 1;
      SystemMetrics = GetSystemMetrics(69);
      v17 = GetSystemMetrics(68);
      InflateRect(&rc, v17, SystemMetrics);
      v21 = *a2;
      if ( !Geometry::CRect::Contains((Geometry::CRect *)&rc, &v21) )
      {
        v21 = v15;
        (*(void (__fastcall **)(CMultitaskingViewElementBase *, struct tagPOINT *))(*(_QWORD *)this + 640LL))(
          this,
          &v21);
        *((_QWORD *)this + 13) = 0LL;
        *((_QWORD *)this + 14) = 0LL;
        *((_DWORD *)this + 30) = 0;
      }
    }
  }
  (*(void (__fastcall **)(CMultitaskingViewElementBase *, struct tagPOINT *))(*(_QWORD *)this + 560LL))(this, a2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  CMultitaskingViewElementBase::PointerTracking::~PointerTracking((CMultitaskingViewElementBase::PointerTracking *)v22);
  CMultitaskingViewElementBase::PointerTracking::~PointerTracking((CMultitaskingViewElementBase::PointerTracking *)v28);
}
