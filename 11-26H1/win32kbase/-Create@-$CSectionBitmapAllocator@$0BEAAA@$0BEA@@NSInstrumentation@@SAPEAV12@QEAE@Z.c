/*
 * XREFs of ?Create@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x14015B178
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NXZ @ 0x14015B118 (-Initialize@-$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE548 (-Deserialize@-$CDeserializedSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@AEAVDeserial.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015A37C (-Destroy@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x14015B204 (-Initialize@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 */

void *__fastcall NSInstrumentation::CSectionBitmapAllocator<81920,320>::Create(__int64 a1)
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
  if ( !(unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<81920,320>::Initialize(Pool2, a1) )
  {
    NSInstrumentation::CSectionBitmapAllocator<81920,160>::Destroy(v3);
    return 0LL;
  }
  return v3;
}
