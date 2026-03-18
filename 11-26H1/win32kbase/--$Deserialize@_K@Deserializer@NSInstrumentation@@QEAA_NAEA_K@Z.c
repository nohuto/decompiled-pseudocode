/*
 * XREFs of ??$Deserialize@_K@Deserializer@NSInstrumentation@@QEAA_NAEA_K@Z @ 0x1401EE214
 * Callers:
 *     ?Deserialize@?$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDeserializer@2@@Z @ 0x1401EEDD0 (-Deserialize@-$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAV.c)
 *     ?Deserialize@?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDeserializer@2@@Z @ 0x1401EEF3C (-Deserialize@-$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAV.c)
 *     ?Deserialize@?$CDeserializedTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDeserializer@2@@Z @ 0x1401EF010 (-Deserialize@-$CDeserializedTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDe.c)
 *     ?Deserialize@?$CDeserializedTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDeserializer@2@@Z @ 0x1401EF0E4 (-Deserialize@-$CDeserializedTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDe.c)
 *     ?Deserialize@?$CDeserializedTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDeserializer@2@@Z @ 0x1401EF1B8 (-Deserialize@-$CDeserializedTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDe.c)
 *     ?Deserialize@?$CDeserializedTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDeserializer@2@@Z @ 0x1401EF28C (-Deserialize@-$CDeserializedTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDe.c)
 *     ?Deserialize@?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAVDeserializer@2@@Z @ 0x1401EF360 (-Deserialize@-$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@PEAV12@AEAV.c)
 * Callees:
 *     <none>
 */

char __fastcall NSInstrumentation::Deserializer::Deserialize<unsigned __int64>(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // r9
  _QWORD *v5; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 < 8 )
    return 0;
  v5 = *(_QWORD **)a1;
  *a2 = *v5;
  *(_QWORD *)a1 = v5 + 1;
  *(_QWORD *)(a1 + 8) = v2 - 8;
  return 1;
}
