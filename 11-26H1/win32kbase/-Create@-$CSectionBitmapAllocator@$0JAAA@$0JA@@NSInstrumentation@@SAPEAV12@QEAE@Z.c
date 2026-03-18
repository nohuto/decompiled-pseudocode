/*
 * XREFs of ?Create@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x14015ABBC
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ @ 0x14015AA6C (-Initialize@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE8F0 (-Deserialize@-$CDeserializedSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@AEAVDeserializ.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015A37C (-Destroy@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x14015AC44 (-Initialize@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 */

void *__fastcall NSInstrumentation::CSectionBitmapAllocator<36864,144>::Create(__int64 a1)
{
  _QWORD *Pool2; // rax
  void *v3; // rbx

  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    Pool2[2] = 0LL;
    Pool2[3] = 0LL;
    Pool2[4] = 0LL;
    if ( (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<36864,144>::Initialize(Pool2, a1) )
      return v3;
    NSInstrumentation::CSectionBitmapAllocator<81920,160>::Destroy(v3);
  }
  return 0LL;
}
