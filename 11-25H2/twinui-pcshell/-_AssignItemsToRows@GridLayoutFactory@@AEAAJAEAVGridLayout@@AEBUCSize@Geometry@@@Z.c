/*
 * XREFs of ?_AssignItemsToRows@GridLayoutFactory@@AEAAJAEAVGridLayout@@AEBUCSize@Geometry@@@Z @ 0x1804C38E0
 * Callers:
 *     ?LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z @ 0x1804C32E8 (-LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GridLayoutFactory::_ForEachGridItem__lambda_d5328ea7ec057ef4b1874c63f76393bb___ @ 0x1804C2C88 (GridLayoutFactory--_ForEachGridItem__lambda_d5328ea7ec057ef4b1874c63f76393bb___.c)
 *     ?AddRow@GridLayout@@QEAAJPEA_K@Z @ 0x1804C30B0 (-AddRow@GridLayout@@QEAAJPEA_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GridLayoutFactory::_AssignItemsToRows(
        GridLayoutFactory *this,
        struct GridLayout *a2,
        const struct Geometry::CSize *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  unsigned __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v10[5]; // [rsp+28h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v12; // [rsp+70h] [rbp+20h] BYREF
  int v13; // [rsp+88h] [rbp+38h] BYREF

  v12 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 67) + 24LL))(*((_QWORD *)this + 67), &v12);
  if ( v6 < 0 )
  {
    v7 = 648LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( !v12 )
    return 0LL;
  v13 = 0;
  v9 = 0LL;
  v6 = GridLayout::AddRow(a2, &v9);
  if ( v6 < 0 )
  {
    v7 = 654LL;
    goto LABEL_9;
  }
  v10[0] = a3;
  v10[1] = &v13;
  v10[2] = this;
  v10[4] = &v9;
  v10[3] = a2;
  v6 = GridLayoutFactory::_ForEachGridItem__lambda_d5328ea7ec057ef4b1874c63f76393bb___((__int64)this, (__int64)v10);
  if ( v6 < 0 )
  {
    v7 = 685LL;
    goto LABEL_9;
  }
  return (unsigned int)v6;
}
