/*
 * XREFs of ?DeserializeBytes@Deserializer@NSInstrumentation@@QEAA_NPEAX_K@Z @ 0x1401EF618
 * Callers:
 *     ?Deserialize@?$CDeserializedSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE548 (-Deserialize@-$CDeserializedSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@AEAVDeserial.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE680 (-Deserialize@-$CDeserializedSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@AEAVDeserial.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE7B8 (-Deserialize@-$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@AEAVDeserializ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE8F0 (-Deserialize@-$CDeserializedSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@AEAVDeserializ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEA28 (-Deserialize@-$CDeserializedSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@AEAVDeserializ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEB60 (-Deserialize@-$CDeserializedSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@AEAVDeserializ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEC98 (-Deserialize@-$CDeserializedSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@AEAVDeserial.c)
 * Callees:
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

bool __fastcall NSInstrumentation::Deserializer::DeserializeBytes(
        NSInstrumentation::Deserializer *this,
        void *a2,
        size_t a3)
{
  bool result; // al

  if ( *((_QWORD *)this + 1) < a3 )
    return 0;
  memmove(a2, *(const void **)this, a3);
  *(_QWORD *)this += a3;
  result = 1;
  *((_QWORD *)this + 1) -= a3;
  return result;
}
