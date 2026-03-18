/*
 * XREFs of ?SerializeBytes@Serializer@NSInstrumentation@@QEAA_NPEAX_K@Z @ 0x1401F0744
 * Callers:
 *     ?Serialize@?$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401EFAE0 (-Serialize@-$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401EFBB8 (-Serialize@-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401EFC90 (-Serialize@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401EFD68 (-Serialize@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401EFE40 (-Serialize@-$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401EFF18 (-Serialize@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401EFFF0 (-Serialize@-$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 * Callees:
 *     ?AdvanceBytes@Serializer@NSInstrumentation@@QEAA_N_K@Z @ 0x1401EE414 (-AdvanceBytes@Serializer@NSInstrumentation@@QEAA_N_K@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

char __fastcall NSInstrumentation::Serializer::SerializeBytes(NSInstrumentation::Serializer *this, void *a2, size_t a3)
{
  if ( !NSInstrumentation::Serializer::AdvanceBytes(this, a3) )
    return 0;
  memmove((void *)(*((_QWORD *)this + 1) - a3), a2, a3);
  return 1;
}
