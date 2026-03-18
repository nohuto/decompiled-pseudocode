/*
 * XREFs of ?Create@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x14011AC24
 * Callers:
 *     ?Create@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14011BE58 (-Create@-$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14011AB94 (-Destroy@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x14011ACA4 (-Initialize@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 */

void *__fastcall NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Create(__int64 a1)
{
  __int64 Pool2; // rax
  void *v3; // rbx

  Pool2 = ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v3 = (void *)Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_DWORD *)(Pool2 + 36) = 0;
  if ( !(unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Initialize(Pool2, a1) )
  {
    NSInstrumentation::CSectionBitmapAllocator<81920,160>::Destroy(v3);
    return 0LL;
  }
  return v3;
}
