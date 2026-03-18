/*
 * XREFs of ?Deserialize@?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEEA4
 * Callers:
 *     ?Deserialize@?$DeserializedTypeIsolationFactory@V?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CDeserializedTypeIsolation@$0KAAA@$0KA@@2@V?$CDeserializedTypeIsolation@$0MAAA@$0MA@@2@V?$CDeserializedTypeIsolation@$0JAAA@$0JA@@2@V?$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@2@V?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@2@V?$CDeserializedTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVDeserializer@NSInstrumentation@@@Z @ 0x1401EF4F4 (-Deserialize@-$DeserializedTypeIsolationFactory@V-$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSI.c)
 * Callees:
 *     ?Destroy@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140159EAC (-Destroy@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA_NXZ @ 0x1401C1DEC (-Initialize@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Deserialize@?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDeserializer@2@@Z @ 0x1401EEF3C (-Deserialize@-$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAV.c)
 *     ?Destroy@?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF730 (-Destroy@-$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void *__fastcall NSInstrumentation::CDeserializedTypeIsolation<180224,704>::Deserialize(__int64 a1)
{
  __int64 Pool2; // rax
  void *v3; // rbx

  Pool2 = ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v3 = (void *)Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_BYTE *)(Pool2 + 36) = 0;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  if ( !NSInstrumentation::CTypeIsolation<180224,704>::Initialize(Pool2) )
  {
    NSInstrumentation::CTypeIsolation<81920,160>::Destroy(v3);
    return 0LL;
  }
  if ( !NSInstrumentation::CDeserializedTypeIsolation<180224,704>::Deserialize(v3, a1) )
  {
    NSInstrumentation::CDeserializedTypeIsolation<180224,704>::Destroy(v3);
    return 0LL;
  }
  return v3;
}
