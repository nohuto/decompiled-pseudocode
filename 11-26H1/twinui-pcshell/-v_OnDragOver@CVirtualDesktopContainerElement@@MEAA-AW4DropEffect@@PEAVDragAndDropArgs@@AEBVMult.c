/*
 * XREFs of ?v_OnDragOver@CVirtualDesktopContainerElement@@MEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DE810
 * Callers:
 *     <none>
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x18022A7B0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopContainerElement::v_OnDragOver(__int64 a1, _QWORD *a2, struct tagPOINT *a3)
{
  __int64 v6; // rcx
  int *v7; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // eax
  _DWORD *v12; // rax
  struct tagPOINT v14; // [rsp+20h] [rbp-30h] BYREF
  int v15; // [rsp+28h] [rbp-28h] BYREF
  int v16; // [rsp+2Ch] [rbp-24h]
  int v17; // [rsp+30h] [rbp-20h]
  int v18; // [rsp+34h] [rbp-1Ch]
  _BYTE v19[16]; // [rsp+38h] [rbp-18h] BYREF

  if ( *(_QWORD *)(a1 + 800) > 1uLL )
  {
    (*(void (__fastcall **)(_QWORD, int *))(***(_QWORD ***)(a1 + 792) + 88LL))(**(_QWORD **)(a1 + 792), &v15);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 792) + 8LL * *(_QWORD *)(a1 + 800) - 8);
    v7 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 88LL))(v6, v19);
    v8 = v7[2];
    v9 = v7[1];
    v10 = v7[3];
    v11 = *v7;
    if ( v18 > v10 )
      v10 = v18;
    v18 = v10;
    if ( v17 > v8 )
      v8 = v17;
    v17 = v8;
    if ( v16 < v9 )
      v9 = v16;
    v16 = v9;
    if ( v15 < v11 )
      v11 = v15;
    v15 = v11;
    v12 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 120LL))(a1, v19);
    v14 = *a3;
    v14.x += *v12;
    v14.y += v12[1];
    if ( Geometry::CRect::Contains((Geometry::CRect *)&v15, &v14) )
      *a2 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 216) + 32LL))(a1 + 216, v19);
  }
  return 0xFFFFFFFFLL;
}
