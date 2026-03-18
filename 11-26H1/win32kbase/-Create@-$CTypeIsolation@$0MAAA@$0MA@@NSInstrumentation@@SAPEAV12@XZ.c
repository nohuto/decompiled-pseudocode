/*
 * XREFs of ?Create@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14016845C
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAE@Z @ 0x1401B7A44 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$C.c)
 *     ?Deserialize@?$DeserializedTypeIsolationFactory@V?$CDeserializedTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V?$CDeserializedTypeIsolation@$0JAAA@$0JA@@2@V?$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@2@V?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@2@V?$CDeserializedTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVDeserializer@NSInstrumentation@@@Z @ 0x1401EF578 (-Deserialize@-$DeserializedTypeIsolationFactory@V-$CDeserializedTypeIsolation@$0MAAA@$0MA@@NSIns.c)
 * Callees:
 *     ?Destroy@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140159EAC (-Destroy@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ @ 0x1401684D0 (-Initialize@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ.c)
 */

void *NSInstrumentation::CTypeIsolation<49152,192>::Create()
{
  __int64 Pool2; // rax
  void *v1; // rbx

  Pool2 = ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v1 = (void *)Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_BYTE *)(Pool2 + 36) = 0;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  if ( !(unsigned __int8)NSInstrumentation::CTypeIsolation<49152,192>::Initialize(Pool2) )
  {
    NSInstrumentation::CTypeIsolation<81920,160>::Destroy(v1);
    return 0LL;
  }
  return v1;
}
