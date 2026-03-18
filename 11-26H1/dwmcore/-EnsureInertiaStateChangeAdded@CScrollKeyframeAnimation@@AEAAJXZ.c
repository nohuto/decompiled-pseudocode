/*
 * XREFs of ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1801D5EA8
 * Callers:
 *     ?CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x18028BFC0 (-CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateVal.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1801D5FB8 (-EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScrollKeyframeAnimation::EnsureInertiaStateChangeAdded(CScrollKeyframeAnimation *this)
{
  char v1; // al
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 *v9; // rdi
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_BYTE *)this + 624);
  if ( (v1 & 1) != 0 )
    return 0LL;
  v4 = (__int64 *)*((_QWORD *)this + 59);
  *((_BYTE *)this + 624) = v1 | 1;
  v5 = *v4;
  (*(void (__fastcall **)(__int64 *, _QWORD))(*v4 + 232))(v4, 0LL);
  (*(void (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD))(v5 + 456))(v4, 0LL, v6, 0LL);
  v7 = (__int64 *)*((_QWORD *)this + 59);
  v8 = *v7;
  (*(void (__fastcall **)(__int64 *, __int64))(*v7 + 232))(v7, 1LL);
  (*(void (__fastcall **)(__int64 *, __int64))(v8 + 456))(v7, 1LL);
  v9 = (__int64 *)*((_QWORD *)this + 59);
  v10 = *v9;
  (*(void (__fastcall **)(__int64 *, __int64))(*v9 + 232))(v9, 2LL);
  (*(void (__fastcall **)(__int64 *, __int64))(v10 + 456))(v9, 2LL);
  v11 = CScrollKeyframeAnimation::EnsureInertiaStateChangeInfo(this);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD0,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
