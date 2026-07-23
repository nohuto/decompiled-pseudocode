/*
 * XREFs of HalpApicSaveLocalInterrupts @ 0x1405AE670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicSaveLocalInterrupts(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  _DWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  int v6; // eax

  v2 = 0;
  v3 = (_DWORD *)(a2 + 64);
  do
  {
    *(v3 - 16) = guard_dispatch_icall_no_overrides(16 * v2 + 512, a2);
    *(v3 - 8) = guard_dispatch_icall_no_overrides(16 * v2 + 256, v4);
    v6 = guard_dispatch_icall_no_overrides(16 * v2++ + 384, v5);
    *v3++ = v6;
  }
  while ( v2 < 8 );
  return 0LL;
}
