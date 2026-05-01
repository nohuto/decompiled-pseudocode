/*
 * XREFs of ?GetSibling@CoverWindowAcc@@UEAAJPEAUIRawElementProviderSimple@@W4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z @ 0x1805357E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$CopyTo@UIRawElementProviderFragment@@@?$ComPtr@UICoverWindowAcc@@@WRL@Microsoft@@QEBAJPEAPEAUIRawElementProviderFragment@@@Z @ 0x1805352A8 (--$CopyTo@UIRawElementProviderFragment@@@-$ComPtr@UICoverWindowAcc@@@WRL@Microsoft@@QEBAJPEAPEAU.c)
 */

__int64 __fastcall CoverWindowAcc::GetSibling(
        CoverWindowAcc *this,
        struct IUnknown *a2,
        enum NavigateDirection a3,
        struct IRawElementProviderFragment **a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  unsigned __int64 v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  if ( SHIsSameObject(a2, *((struct IUnknown **)this + 3)) )
  {
    if ( a3 == NavigateDirection_NextSibling )
    {
      v8 = Microsoft::WRL::ComPtr<ICoverWindowAcc>::CopyTo<IRawElementProviderFragment>((_QWORD *)this + 4, (__int64)a4);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 280LL;
LABEL_14:
        v13 = (unsigned int)v8;
        goto LABEL_15;
      }
      return v9;
    }
    return 0;
  }
  if ( SHIsSameObject(a2, *((struct IUnknown **)this + 4)) )
  {
    v11 = 40LL;
    if ( a3 != NavigateDirection_NextSibling )
      v11 = 24LL;
    v12 = Microsoft::WRL::ComPtr<ICoverWindowAcc>::CopyTo<IRawElementProviderFragment>(
            (CoverWindowAcc *)((char *)this + v11),
            (__int64)a4);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = (unsigned int)v12;
      v10 = 284LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
        (const char *)v13);
      return v9;
    }
    return v9;
  }
  if ( a3 == NavigateDirection_NextSibling )
    return 0;
  v8 = Microsoft::WRL::ComPtr<ICoverWindowAcc>::CopyTo<IRawElementProviderFragment>((_QWORD *)this + 4, (__int64)a4);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 289LL;
    goto LABEL_14;
  }
  return v9;
}
