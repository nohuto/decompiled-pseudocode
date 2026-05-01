/*
 * XREFs of ?CalculatePointFromRect@JointResize@@AEAA?AUtagPOINT@@UtagRECT@@@Z @ 0x180538154
 * Callers:
 *     _lambda_af26cd4e336a58c3fc15d2bb79fbb070_::operator() @ 0x180537BB8 (_lambda_af26cd4e336a58c3fc15d2bb79fbb070_--operator().c)
 *     ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x180539720 (-OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

struct tagPOINT __fastcall JointResize::CalculatePointFromRect(JointResize *this, struct tagRECT *a2, LONG *a3)
{
  int v3; // r9d
  __int64 v4; // rax
  LONG v5; // ecx
  LONG *v6; // rcx
  LONG v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)this + 80);
  *(_QWORD *)&a2->left = 0LL;
  if ( v3 == 10 || v3 == 11 )
  {
    v6 = a3;
    if ( v3 != 10 )
      v6 = a3 + 2;
    v7 = *v6;
    v5 = a3[1];
    a2->left = v7;
  }
  else
  {
    if ( v3 != 12 && v3 != 15 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2E2,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)0x8000FFFFLL,
        v9);
    a2->left = *a3;
    v4 = 1LL;
    if ( v3 != 12 )
      v4 = 3LL;
    v5 = a3[v4];
  }
  a2->top = v5;
  return (struct tagPOINT)a2;
}
