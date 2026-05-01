/*
 * XREFs of ?DragOver@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C1B20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18020E5D4 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804B55A8 (--1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x1804BABE8 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z @ 0x1804C1630 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x1804C3900 (-_HitTestChildren@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@.c)
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x1804C3A44 (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewElementBase::DragOver(_QWORD *a1, __int64 a2, __int128 *a3)
{
  unsigned int v6; // edi
  char v7; // al
  int v8; // ecx
  char *v9; // rax
  struct IMultitaskingViewElement *v10; // r8
  struct IUnknown *v11; // rcx
  struct IMultitaskingViewElement *v12; // r14
  unsigned int v13; // eax
  bool v14; // zf
  __int64 (__fastcall *v15)(struct IMultitaskingViewElement *, __int64, __int64); // rbx
  __int64 v16; // rax
  _BYTE v18[32]; // [rsp+28h] [rbp-59h] BYREF
  __int128 v19; // [rsp+48h] [rbp-39h] BYREF
  __int64 v20; // [rsp+58h] [rbp-29h]
  int v21; // [rsp+60h] [rbp-21h]
  struct IMultitaskingViewElement *v22[2]; // [rsp+68h] [rbp-19h] BYREF
  __int128 v23; // [rsp+78h] [rbp-9h]
  int v24; // [rsp+88h] [rbp+7h]
  __int64 v25; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v26; // [rsp+F8h] [rbp+77h] BYREF

  v19 = 0LL;
  v6 = 0;
  v20 = 0LL;
  v21 = 0;
  *(_OWORD *)v22 = 0LL;
  v23 = *a3;
  v24 = *((_DWORD *)a3 + 4);
  v25 = *(_QWORD *)a3;
  v7 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*a1 + 112LL))(a1, &v25);
  v8 = _mm_cvtsi128_si32((__m128i)0LL);
  if ( v7 )
    v8 = 2;
  LODWORD(v19) = v8;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)v22, a1 + 16);
  v25 = *(_QWORD *)a3;
  v9 = (char *)CMultitaskingViewElementBase::_HitTestChildren(a1, &v26, &v25);
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)&v22[1], v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  v11 = (struct IUnknown *)a1[17];
  v12 = v22[1];
  if ( v11 && !ElementHelpers::IsSameElement(v11, (struct IUnknown *)v22[1], v10) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1[17] + 464LL))(a1[17]);
  v13 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int128 *))(*a1 + 616LL))(a1, a2, a3);
  if ( v12 )
  {
    v14 = v13 == -1;
    if ( v13 != -1 )
      goto LABEL_10;
    v15 = *(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int64, __int64))(*(_QWORD *)v12 + 456LL);
    v16 = CMultitaskingViewElementBase::_MapArgumentsToChild(a1, v18, a3);
    v13 = v15(v12, a2, v16);
  }
  v14 = v13 == -1;
LABEL_10:
  if ( !v14 )
    v6 = v13;
  CMultitaskingViewElementBase::PointerTracking::operator=((__int64)(a1 + 12), (__int64)&v19);
  CMultitaskingViewElementBase::PointerTracking::~PointerTracking((CMultitaskingViewElementBase::PointerTracking *)&v19);
  return v6;
}
