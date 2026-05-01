/*
 * XREFs of ?_AssignItemsToRows@GridLayoutFactory@@AEAAJAEAVGridLayout@@AEBUCSize@Geometry@@@Z @ 0x1804D596C
 * Callers:
 *     ?LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z @ 0x1804D537C (-LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@QEAA@PEAV?$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@AEAIAEAPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@AEAPEAIAEAV_lambda_990521e561bc13f238039e7a89bd70b9_@@@Z @ 0x1802F9484 (--0_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@QEAA@PEAV-$SimpleVectorIterator@UCoreKeyboardPosit.c)
 *     GridLayoutFactory::_ForEachGridItem__lambda_d5328ea7ec057ef4b1874c63f76393bb___ @ 0x1804D4C98 (GridLayoutFactory--_ForEachGridItem__lambda_d5328ea7ec057ef4b1874c63f76393bb___.c)
 *     ?AddRow@GridLayout@@QEAAJPEA_K@Z @ 0x1804D50D8 (-AddRow@GridLayout@@QEAAJPEA_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GridLayoutFactory::_AssignItemsToRows(
        GridLayoutFactory *this,
        struct GridLayout *a2,
        const struct Geometry::CSize *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  unsigned __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v10[8]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v12; // [rsp+80h] [rbp+8h] BYREF
  int v13; // [rsp+98h] [rbp+20h] BYREF

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
  _lambda_712b0f2f9fa774d9b54f88f4633a7b7e_::_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_(
    v10,
    (__int64)a3,
    (__int64)&v13,
    (__int64)this,
    (__int64)a2,
    (__int64)&v9);
  v6 = GridLayoutFactory::_ForEachGridItem__lambda_d5328ea7ec057ef4b1874c63f76393bb___((__int64)this, (__int64)v10);
  if ( v6 < 0 )
  {
    v7 = 685LL;
    goto LABEL_9;
  }
  return (unsigned int)v6;
}
