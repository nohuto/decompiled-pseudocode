/*
 * XREFs of ?Create@LegacyInputDispatcher@@SAJPEAPEAV1@@Z @ 0x14018FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall LegacyInputDispatcher::Create(struct LegacyInputDispatcher **a1)
{
  __int64 v2; // rax

  v2 = Win32AllocPoolZInitImpl(256LL, 0x40uLL, 0x43486970u);
  if ( !v2 )
    return 3221225495LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  *(_QWORD *)v2 = &LegacyInputDispatcher::`vftable';
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = 64LL;
  *(_QWORD *)(v2 + 48) = 0LL;
  *(_WORD *)(v2 + 56) = 2;
  *a1 = (struct LegacyInputDispatcher *)v2;
  return 0LL;
}
