/*
 * XREFs of ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DB13C
 * Callers:
 *     ?PointerMove@ElementDragData@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DBA40 (-PointerMove@ElementDragData@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DBAC0 (-PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DBE20 (-StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0DragAndDropArgs@@QEAA@W4DragEffects@@PEAUIUnknown@@M@Z @ 0x1804DABCC (--0DragAndDropArgs@@QEAA@W4DragEffects@@PEAUIUnknown@@M@Z.c)
 *     ?GetExternalDragProgress@ElementDragData@@AEAAMXZ @ 0x1804DB70C (-GetExternalDragProgress@ElementDragData@@AEAAMXZ.c)
 *     ?IsExternalDrag@ElementDragData@@AEAA_NXZ @ 0x1804DB790 (-IsExternalDrag@ElementDragData@@AEAA_NXZ.c)
 *     ?StartExternalDrag@ElementDragData@@AEAAJXZ @ 0x1804DC0B8 (-StartExternalDrag@ElementDragData@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ElementDragData::DragOver(ElementDragData *this, const struct MultitaskingViewPointerInputArgs *a2)
{
  float ExternalDragProgress; // xmm0_4
  __int64 *v5; // r8
  __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+38h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h] BYREF
  int v15; // [rsp+58h] [rbp-18h] BYREF
  int v16; // [rsp+5Ch] [rbp-14h]
  int v17; // [rsp+60h] [rbp-10h]
  int v18; // [rsp+64h] [rbp-Ch]

  *(_OWORD *)((char *)this + 92) = *(_OWORD *)a2;
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 4);
  if ( *((int *)this + 128) < 2 )
  {
    ExternalDragProgress = ElementDragData::GetExternalDragProgress(this);
    DragAndDropArgs::DragAndDropArgs((__int64)&v13, *((_DWORD *)this + 44), *((_QWORD *)this + 3), ExternalDragProgress);
    (*(void (__fastcall **)(_QWORD, __int64 *, const struct MultitaskingViewPointerInputArgs *))(**((_QWORD **)this + 5)
                                                                                               + 456LL))(
      *((_QWORD *)this + 5),
      &v13,
      a2);
    v5 = (__int64 *)*((_QWORD *)this + 6);
    v6 = *v5;
    v12 = v13;
    (*(void (__fastcall **)(__int64 *, __int64 *))(v6 + 48))(v5, &v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  }
  (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 88LL))(*((_QWORD *)this + 5), &v15);
  v11 = *(_QWORD *)a2;
  v7 = v17;
  v8 = v11;
  if ( (int)v11 < v17 )
    v7 = v11;
  if ( v15 <= v7 )
  {
    if ( (int)v11 >= v17 )
      v8 = v17;
    LODWORD(v11) = v8;
  }
  else
  {
    LODWORD(v11) = v15;
  }
  v9 = v18;
  v10 = HIDWORD(v11);
  if ( SHIDWORD(v11) < v18 )
    v9 = HIDWORD(v11);
  if ( v16 <= v9 )
  {
    if ( SHIDWORD(v11) >= v18 )
      v10 = v18;
    HIDWORD(v11) = v10;
  }
  else
  {
    HIDWORD(v11) = v16;
  }
  (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(**((_QWORD **)this + 6) + 24LL))(
    *((_QWORD *)this + 6),
    &v11,
    0LL,
    0LL);
  if ( *((_DWORD *)this + 128) == 1 && (*((_BYTE *)this + 176) & 2) != 0 && ElementDragData::IsExternalDrag(this) )
    ElementDragData::StartExternalDrag(this);
}
