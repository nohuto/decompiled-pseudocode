/*
 * XREFs of ?PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ @ 0x14015A868
 * Callers:
 *     ?Initialize@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ @ 0x140159DC0 (-Initialize@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ @ 0x140159FF8 (-Initialize@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ @ 0x14015A784 (-Initialize@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ @ 0x1401684D0 (-Initialize@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1401C17C8 (-Initialize@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ @ 0x1401C1D00 (-Initialize@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA_NXZ @ 0x1401C1DEC (-Initialize@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1401C1F30 (-Initialize@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BAAA@$0EA@@NSInstrumentation@@IEAA_NXZ @ 0x1401EBCC4 (-Initialize@-$CTypeIsolation@$0BAAA@$0EA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BAAA@$0IA@@NSInstrumentation@@IEAA_NXZ @ 0x1401EBDB0 (-Initialize@-$CTypeIsolation@$0BAAA@$0IA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAA_NXZ @ 0x1401EBE9C (-Initialize@-$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0DAAA@$0DA@@NSInstrumentation@@IEAA_NXZ @ 0x1401EBF88 (-Initialize@-$CTypeIsolation@$0DAAA@$0DA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0DAAA@$0GA@@NSInstrumentation@@IEAA_NXZ @ 0x1401EC074 (-Initialize@-$CTypeIsolation@$0DAAA@$0GA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IEAA_NXZ @ 0x1401EC160 (-Initialize@-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0FAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1401EC24C (-Initialize@-$CTypeIsolation@$0FAAA@$0KA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0FBAAA@$0FBA@@NSInstrumentation@@IEAA_NXZ @ 0x1401EC338 (-Initialize@-$CTypeIsolation@$0FBAAA@$0FBA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAA_NXZ @ 0x1401EF908 (-Initialize@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAA_NXZ @ 0x1401EF9F4 (-Initialize@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall NSInstrumentation::PlatformDebugModeEnabled(NSInstrumentation *this)
{
  return MmIsDriverVerifyingByAddress(&unk_140271200) != 0;
}
