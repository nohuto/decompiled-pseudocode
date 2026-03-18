/*
 * XREFs of ??$Serialize@_K@Serializer@NSInstrumentation@@QEAA_NAEA_K@Z @ 0x1401EE2C4
 * Callers:
 *     ?Serialize@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401F00C8 (-Serialize@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401F0190 (-Serialize@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401F0258 (-Serialize@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401F0320 (-Serialize@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401F03E8 (-Serialize@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401F04B0 (-Serialize@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 *     ?Serialize@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401F0578 (-Serialize@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 * Callees:
 *     ?Grow@Serializer@NSInstrumentation@@AEAA_N_K@Z @ 0x1401EF848 (-Grow@Serializer@NSInstrumentation@@AEAA_N_K@Z.c)
 */

bool __fastcall NSInstrumentation::Serializer::Serialize<unsigned __int64>(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  bool result; // al

  v4 = *(_QWORD *)(a1 + 16) + 8LL;
  if ( v4 <= *(_QWORD *)(a1 + 24)
    || (result = NSInstrumentation::Serializer::Grow((NSInstrumentation::Serializer *)a1, v4)) )
  {
    **(_QWORD **)(a1 + 8) = *a2;
    result = 1;
    *(_QWORD *)(a1 + 8) += 8LL;
    *(_QWORD *)(a1 + 16) += 8LL;
  }
  return result;
}
