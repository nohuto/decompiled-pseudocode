/*
 * XREFs of ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1400B7B38
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400164D4 (--$FreeIsolatedType@V-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400B5C50 (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400B5FE0 (-Free@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400B6154 (-Free@-$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400B6740 (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400B6DEC (-Free@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400B7864 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x140135DF4 (-Free@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0DAAA@$0DA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x140187078 (-Free@-$CTypeIsolation@$0DAAA@$0DA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401C9BA0 (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BAAA@$0EA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401DDDAC (-Free@-$CTypeIsolation@$0BAAA@$0EA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BAAA@$0IA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401DDF88 (-Free@-$CTypeIsolation@$0BAAA@$0IA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0DAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401DE110 (-Free@-$CTypeIsolation@$0DAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401DE260 (-Free@-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0FAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401DE3B0 (-Free@-$CTypeIsolation@$0FAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0FBAAA@$0FBA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401DE504 (-Free@-$CTypeIsolation@$0FBAAA@$0FBA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1401EAF90 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::PlatformAbort(int a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 result; // rax
  int v4; // ecx
  int v5; // ecx

  result = 0LL;
  if ( !a1 )
    KeBugCheckEx(0x164u, 9uLL, a2, a3, 0LL);
  v4 = a1 - 1;
  if ( !v4 )
    KeBugCheckEx(0x164u, 0x23uLL, a2, a3, 0LL);
  v5 = v4 - 1;
  if ( !v5 )
    KeBugCheckEx(0x164u, 0x22uLL, a2, a3, 0LL);
  if ( v5 == 1 )
    KeBugCheckEx(0x164u, 0x21uLL, a2, a3, 0LL);
  return result;
}
