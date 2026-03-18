/*
 * XREFs of ?Create@?$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x14015B318
 * Callers:
 *     ?Create@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015A890 (-Create@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE7B8 (-Deserialize@-$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@AEAVDeserializ.c)
 * Callees:
 *     ?Initialize@?$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x14015B3A0 (-Initialize@-$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Destroy@?$CSectionBitmapAllocator@$0BAAA@$0EA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140196800 (-Destroy@-$CSectionBitmapAllocator@$0BAAA@$0EA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void *__fastcall NSInstrumentation::CSectionBitmapAllocator<32768,128>::Create(__int64 a1)
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
    if ( (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<32768,128>::Initialize(Pool2, a1) )
      return v3;
    NSInstrumentation::CSectionBitmapAllocator<4096,64>::Destroy(v3);
  }
  return 0LL;
}
