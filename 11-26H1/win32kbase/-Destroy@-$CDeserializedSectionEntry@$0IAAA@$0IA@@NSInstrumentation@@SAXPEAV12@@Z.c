/*
 * XREFs of ?Destroy@?$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF6DC
 * Callers:
 *     ?Deserialize@?$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE7B8 (-Deserialize@-$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@AEAVDeserializ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEC98 (-Deserialize@-$CDeserializedSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@AEAVDeserial.c)
 *     ?Destroy@?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF780 (-Destroy@-$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     ?Destroy@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401B5EB4 (-Destroy@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CDeserializedSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF65C (-Destroy@-$CDeserializedSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall NSInstrumentation::CDeserializedSectionEntry<32768,128>::Destroy(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)P[3];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    P[3] = 0LL;
  }
  v3 = (void *)P[4];
  if ( v3 )
  {
    NSInstrumentation::CDeserializedSectionBitmapAllocator<32768,128>::Destroy(v3);
    P[4] = 0LL;
  }
  NSInstrumentation::CSectionEntry<32768,128>::Destroy(P);
}
