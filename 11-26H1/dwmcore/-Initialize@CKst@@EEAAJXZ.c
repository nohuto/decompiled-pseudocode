/*
 * XREFs of ?Initialize@CKst@@EEAAJXZ @ 0x180294DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x1801DB274 (-InitializeMmcssTask@CKst@@AEAAJXZ.c)
 *     ?Initialize@CKstBase@@MEAAJXZ @ 0x180294E90 (-Initialize@CKstBase@@MEAAJXZ.c)
 */

__int64 __fastcall CKst::Initialize(CKst *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CKstBase::Initialize(this);
  if ( v2 < 0 )
  {
    v3 = 47LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = CKst::InitializeMmcssTask(this);
  if ( v2 < 0 )
  {
    v3 = 50LL;
    goto LABEL_3;
  }
  return 0LL;
}
