/*
 * XREFs of ?GetEnterpriseChromePreference@CApplicationViewBase@@UEAAJPEAH@Z @ 0x18030D130
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationViewBase::GetEnterpriseChromePreference(CApplicationViewBase *this, int *a2)
{
  __int64 v3; // rax
  int ShouldShowEnterpriseIndicator; // ebx
  __int64 v5; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = *((_QWORD *)this + 8) != 0LL;
  if ( !*((_QWORD *)this + 8) )
    return 0LL;
  v3 = *(_QWORD *)this;
  v8 = 0LL;
  ShouldShowEnterpriseIndicator = (*(__int64 (__fastcall **)(CApplicationViewBase *, __int64 *))(v3 + 504))(this, &v8);
  if ( ShouldShowEnterpriseIndicator < 0 )
  {
    v5 = 207LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)ShouldShowEnterpriseIndicator);
    return (unsigned int)ShouldShowEnterpriseIndicator;
  }
  ShouldShowEnterpriseIndicator = EdpShouldShowEnterpriseIndicator(v8, a2);
  result = 2147943568LL;
  if ( ShouldShowEnterpriseIndicator != -2147023728 )
  {
    if ( ShouldShowEnterpriseIndicator < 0 )
    {
      v5 = 215LL;
      goto LABEL_4;
    }
    return 0LL;
  }
  return result;
}
