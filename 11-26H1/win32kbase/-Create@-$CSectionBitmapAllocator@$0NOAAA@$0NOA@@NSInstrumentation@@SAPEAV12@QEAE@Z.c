/*
 * XREFs of ?Create@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1401ED878
 * Callers:
 *     ?Create@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401ED904 (-Create@-$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEC98 (-Deserialize@-$CDeserializedSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@AEAVDeserial.c)
 * Callees:
 *     ?Initialize@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x14018E6A0 (-Initialize@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Destroy@?$CSectionBitmapAllocator@$0BAAA@$0EA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140196800 (-Destroy@-$CSectionBitmapAllocator@$0BAAA@$0EA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

PVOID *__fastcall NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Create(__int64 a1)
{
  PVOID *Pool2; // rax
  PVOID *v3; // rbx

  Pool2 = (PVOID *)ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 0LL;
  *Pool2 = 0LL;
  Pool2[1] = 0LL;
  Pool2[2] = 0LL;
  Pool2[3] = 0LL;
  Pool2[4] = 0LL;
  if ( !NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Initialize(Pool2, a1) )
  {
    NSInstrumentation::CSectionBitmapAllocator<4096,64>::Destroy(v3);
    return 0LL;
  }
  return v3;
}
