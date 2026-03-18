/*
 * XREFs of ?Create@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x14015B6D0
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ @ 0x14015A150 (-Initialize@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Create@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401ECB30 (-Create@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEB60 (-Deserialize@-$CDeserializedSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@AEAVDeserializ.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015A37C (-Destroy@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x14015B4BC (-Initialize@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 */

void *__fastcall NSInstrumentation::CSectionBitmapAllocator<49152,192>::Create(__int64 a1)
{
  _QWORD *Pool2; // rax
  void *v3; // rbx

  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 0LL;
  *Pool2 = 0LL;
  Pool2[1] = 0LL;
  Pool2[2] = 0LL;
  Pool2[3] = 0LL;
  Pool2[4] = 0LL;
  if ( !NSInstrumentation::CSectionBitmapAllocator<28672,112>::Initialize(Pool2, a1) )
  {
    NSInstrumentation::CSectionBitmapAllocator<81920,160>::Destroy(v3);
    return 0LL;
  }
  return v3;
}
