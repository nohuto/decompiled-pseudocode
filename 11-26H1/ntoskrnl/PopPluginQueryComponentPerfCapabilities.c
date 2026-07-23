/*
 * XREFs of PopPluginQueryComponentPerfCapabilities @ 0x140608948
 * Callers:
 *     PopFxPepPerfInfoQuery @ 0x1407D07DC (PopFxPepPerfInfoQuery.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPluginQueryComponentPerfCapabilities(__int64 a1, int a2, _DWORD *a3)
{
  char result; // al
  __int64 v5; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+2Ch] [rbp-Ch]

  v8 = 0;
  result = 0;
  if ( *(_QWORD *)(a1 + 64) )
  {
    v5 = *(_QWORD *)(a1 + 72);
    v7 = a2;
    v6 = v5;
    result = guard_dispatch_icall_no_overrides(28LL, &v6);
    if ( result )
      *a3 = v8;
  }
  return result;
}
