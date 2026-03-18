/*
 * XREFs of ??$Deserialize@I@Deserializer@NSInstrumentation@@QEAA_NAEAI@Z @ 0x1401EE1EC
 * Callers:
 *     ?Deserialize@?$CDeserializedSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE548 (-Deserialize@-$CDeserializedSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@AEAVDeserial.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE680 (-Deserialize@-$CDeserializedSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@AEAVDeserial.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE7B8 (-Deserialize@-$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@AEAVDeserializ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE8F0 (-Deserialize@-$CDeserializedSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@AEAVDeserializ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEA28 (-Deserialize@-$CDeserializedSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@AEAVDeserializ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEB60 (-Deserialize@-$CDeserializedSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@AEAVDeserializ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEC98 (-Deserialize@-$CDeserializedSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@AEAVDeserial.c)
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

char __fastcall NSInstrumentation::Deserializer::Deserialize<unsigned int>(__int64 a1, _DWORD *a2)
{
  char result; // al

  if ( *(_QWORD *)(a1 + 8) < 4uLL )
    return 0;
  result = 1;
  *a2 = **(_DWORD **)a1;
  *(_QWORD *)a1 += 4LL;
  *(_QWORD *)(a1 + 8) -= 4LL;
  return result;
}
