/*
 * XREFs of ?Destroy@?$CDeserializedSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF65C
 * Callers:
 *     ?Deserialize@?$CDeserializedSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE548 (-Deserialize@-$CDeserializedSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@AEAVDeserial.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE680 (-Deserialize@-$CDeserializedSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@AEAVDeserial.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE7B8 (-Deserialize@-$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@AEAVDeserializ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE8F0 (-Deserialize@-$CDeserializedSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@AEAVDeserializ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEA28 (-Deserialize@-$CDeserializedSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@AEAVDeserializ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEB60 (-Deserialize@-$CDeserializedSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@AEAVDeserializ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEC98 (-Deserialize@-$CDeserializedSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@AEAVDeserial.c)
 *     ?Destroy@?$CDeserializedSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF688 (-Destroy@-$CDeserializedSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF6DC (-Destroy@-$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     ??1?$CDeserializedSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@QEAA@XZ @ 0x1401EE360 (--1-$CDeserializedSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@QEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CDeserializedSectionBitmapAllocator<32768,128>::Destroy(PVOID P)
{
  NSInstrumentation::CDeserializedSectionBitmapAllocator<32768,128>::~CDeserializedSectionBitmapAllocator<32768,128>((__int64)P);
  ExFreePoolWithTag(P, 0);
}
