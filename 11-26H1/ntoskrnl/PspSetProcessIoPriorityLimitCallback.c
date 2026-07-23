/*
 * XREFs of PspSetProcessIoPriorityLimitCallback @ 0x140B042D0
 * Callers:
 *     PspSetProcessBackgroundCountCallback @ 0x140B042B0 (PspSetProcessBackgroundCountCallback.c)
 * Callees:
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x140204CDC (PspNotifyProcessEffectiveIoLimitChanged.c)
 */

__int64 __fastcall PspSetProcessIoPriorityLimitCallback(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  if ( (*(_DWORD *)(a1 + 496) & 1) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 672);
    v3 = *a2;
    if ( v3 != *(_DWORD *)(v2 + 1084) )
      PspNotifyProcessEffectiveIoLimitChanged(a1, v3, v3 < *(_DWORD *)(v2 + 1084));
  }
  return 0LL;
}
