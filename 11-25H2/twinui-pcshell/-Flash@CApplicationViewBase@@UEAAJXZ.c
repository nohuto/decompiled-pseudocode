/*
 * XREFs of ?Flash@CApplicationViewBase@@UEAAJXZ @ 0x180311220
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationViewBase::Flash(CApplicationViewBase *this)
{
  __int64 v1; // rax
  int v2; // eax
  unsigned int v3; // ebx
  BOOL v5; // eax
  UINT uCount; // ecx
  $C811A85A3CBAF233E045382DA27E29BF pfwi; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  HWND v9; // [rsp+50h] [rbp+10h] BYREF

  v1 = *(_QWORD *)this;
  v9 = 0LL;
  v2 = (*(__int64 (__fastcall **)(CApplicationViewBase *, HWND *))(v1 + 504))(this, &v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *(&pfwi.cbSize + 1) = 0;
    *(_QWORD *)&pfwi.uCount = 0LL;
    *(&pfwi.dwTimeout + 1) = 0;
    pfwi.hwnd = v9;
    pfwi.cbSize = 32;
    pfwi.dwFlags = 14;
    v5 = SystemParametersInfoW(0x2004u, 0, &pfwi.uCount, 0);
    uCount = pfwi.uCount;
    if ( !v5 )
      uCount = 1;
    pfwi.uCount = uCount;
    FlashWindowEx(&pfwi);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA1,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
