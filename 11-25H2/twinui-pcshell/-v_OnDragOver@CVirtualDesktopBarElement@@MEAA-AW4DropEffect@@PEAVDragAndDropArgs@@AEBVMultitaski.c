/*
 * XREFs of ?v_OnDragOver@CVirtualDesktopBarElement@@MEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804BCE70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopBarElement::v_OnDragOver(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // rsi
  unsigned __int8 (__fastcall *v7)(__int64, __int64 *); // rdi
  _DWORD *v8; // rax
  int v9; // r8d
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 752);
  v7 = *(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 112LL);
  v8 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 120LL))(a1, &v12);
  v11 = *a3;
  v9 = v8[1];
  LODWORD(v11) = *v8 + v11;
  HIDWORD(v11) += v9;
  if ( v7(v3, &v11) )
    *a2 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 736) + 32LL))(
                       *(_QWORD *)(a1 + 736),
                       &v11);
  return 0xFFFFFFFFLL;
}
