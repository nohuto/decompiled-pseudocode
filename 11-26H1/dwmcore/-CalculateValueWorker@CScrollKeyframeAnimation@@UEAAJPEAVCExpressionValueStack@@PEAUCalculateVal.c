/*
 * XREFs of ?CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x18028BFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1801D5EA8 (-EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScrollKeyframeAnimation::CalculateValueWorker(
        CScrollKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        struct CalculateValueResult *a3)
{
  int v6; // esi
  __int64 v7; // rdx
  int v9; // ebp
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = CScrollKeyframeAnimation::EnsureInertiaStateChangeAdded(this);
  if ( v6 < 0 )
  {
    v7 = 63LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = (*(__int64 (__fastcall **)(CScrollKeyframeAnimation *, struct CExpressionValueStack *))(*(_QWORD *)this + 248LL))(
         this,
         a2);
  if ( v6 < 0 )
  {
    v7 = 71LL;
    goto LABEL_3;
  }
  v9 = *((_DWORD *)a2 + 24);
  v6 = CKeyframeAnimation::CalculateValueWorker(this, a2, a3);
  if ( v6 < 0 )
  {
    v7 = 80LL;
    goto LABEL_3;
  }
  if ( *((_DWORD *)a2 + 24) == v9 + 1 )
  {
    (*(void (__fastcall **)(CScrollKeyframeAnimation *, struct CExpressionValueStack *))(*(_QWORD *)this + 256LL))(
      this,
      a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
}
