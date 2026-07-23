/*
 * XREFs of PopPluginRequestComponentPerfState @ 0x1404F30DC
 * Callers:
 *     PopFxIssueComponentPerfStateChanges @ 0x1404F2DC0 (PopFxIssueComponentPerfStateChanges.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPluginRequestComponentPerfState(__int64 a1, int a2, int a3, __int64 a4, char *a5)
{
  __int64 v5; // rax
  ULONG_PTR v6; // rbx
  char v7; // dl
  char result; // al
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+2Ch] [rbp-1Ch]
  int v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+34h] [rbp-14h]
  __int64 v14; // [rsp+38h] [rbp-10h]

  v5 = *(_QWORD *)(a1 + 72);
  v6 = *(_QWORD *)(a1 + 64);
  v11 = 0;
  v13 = 0;
  v9 = v5;
  v10 = a2;
  v12 = a3;
  v14 = a4;
  if ( v6 )
  {
    if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(33LL, &v9) )
      PopFxBugCheck(0x605uLL, 0x21uLL, v6, 0LL);
    v7 = BYTE1(v11);
    result = v11;
  }
  else
  {
    v7 = 1;
    result = 1;
  }
  if ( result )
    *a5 = v7;
  return result;
}
