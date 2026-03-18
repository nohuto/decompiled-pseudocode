/*
 * XREFs of ?AdvanceBytes@Serializer@NSInstrumentation@@QEAA_N_K@Z @ 0x1401EE414
 * Callers:
 *     ?Serialize@?$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401EFAE0 (-Serialize@-$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401EFBB8 (-Serialize@-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401EFC90 (-Serialize@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401EFD68 (-Serialize@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401EFE40 (-Serialize@-$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401EFF18 (-Serialize@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401EFFF0 (-Serialize@-$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?SerializeBytes@Serializer@NSInstrumentation@@QEAA_NPEAX_K@Z @ 0x1401F0744 (-SerializeBytes@Serializer@NSInstrumentation@@QEAA_NPEAX_K@Z.c)
 * Callees:
 *     ?Grow@Serializer@NSInstrumentation@@AEAA_N_K@Z @ 0x1401EF848 (-Grow@Serializer@NSInstrumentation@@AEAA_N_K@Z.c)
 */

bool __fastcall NSInstrumentation::Serializer::AdvanceBytes(NSInstrumentation::Serializer *this, __int64 a2)
{
  unsigned __int64 v4; // rdx
  bool result; // al

  v4 = a2 + *((_QWORD *)this + 2);
  if ( v4 <= *((_QWORD *)this + 3) || (result = NSInstrumentation::Serializer::Grow(this, v4)) )
  {
    *((_QWORD *)this + 1) += a2;
    result = 1;
    *((_QWORD *)this + 2) += a2;
  }
  return result;
}
