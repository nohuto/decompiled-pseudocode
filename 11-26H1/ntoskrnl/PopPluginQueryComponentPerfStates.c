/*
 * XREFs of PopPluginQueryComponentPerfStates @ 0x140608AE0
 * Callers:
 *     PopFxPepPerfInfoQuery @ 0x1407D07DC (PopFxPepPerfInfoQuery.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPluginQueryComponentPerfStates(__int64 a1, int a2, int a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+2Ch] [rbp-1Ch]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v4 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a1 + 72);
  v7 = a2;
  v8 = a3;
  v9 = a4;
  result = guard_dispatch_icall_no_overrides(31LL, &v6);
  if ( !(_BYTE)result )
    PopFxBugCheck(0x605uLL, 0x1FuLL, v4, 0LL);
  return result;
}
