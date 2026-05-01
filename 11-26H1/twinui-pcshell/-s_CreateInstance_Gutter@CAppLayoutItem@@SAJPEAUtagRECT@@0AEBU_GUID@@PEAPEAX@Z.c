/*
 * XREFs of ?s_CreateInstance_Gutter@CAppLayoutItem@@SAJPEAUtagRECT@@0AEBU_GUID@@PEAPEAX@Z @ 0x1806C92A8
 * Callers:
 *     ?_CommitGutters@CAppLayout@@AEAAJXZ @ 0x1806C7C44 (-_CommitGutters@CAppLayout@@AEAAJXZ.c)
 * Callees:
 *     ??$Make@VCAppLayoutItem@@W4APP_LAYOUT_ITEM_TYPE@@AEAPEAUtagRECT@@AEAPEAU3@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAppLayoutItem@@@12@$$QEAW4APP_LAYOUT_ITEM_TYPE@@AEAPEAUtagRECT@@1@Z @ 0x1806C8608 (--$Make@VCAppLayoutItem@@W4APP_LAYOUT_ITEM_TYPE@@AEAPEAUtagRECT@@AEAPEAU3@@Details@WRL@Microsoft.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutItem::s_CreateInstance_Gutter(
        struct tagRECT *a1,
        struct tagRECT *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  struct tagRECT *v8; // [rsp+40h] [rbp+8h] BYREF
  struct tagRECT *v9; // [rsp+48h] [rbp+10h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF
  int v11; // [rsp+54h] [rbp+1Ch]
  __int64 (__fastcall ***v12)(_QWORD, GUID *, void **); // [rsp+58h] [rbp+20h] BYREF

  v11 = HIDWORD(a3);
  v9 = a2;
  v8 = a1;
  *a4 = 0LL;
  v10 = 2;
  Microsoft::WRL::Details::Make<CAppLayoutItem,enum APP_LAYOUT_ITEM_TYPE,tagRECT * &,tagRECT * &>(
    (__int64 *)&v12,
    &v10,
    (_DWORD **)&v8,
    (_DWORD **)&v9);
  v5 = (__int64)v12;
  if ( v12 )
    v6 = (**v12)(v12, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, a4);
  else
    v6 = -2147024882;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
