/*
 * XREFs of ?Create@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x140327A78
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NXZ @ 0x1402318FC (-Initialize@-$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x14025413C (-Initialize@-$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Destroy@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140287454 (-Destroy@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

PVOID *__fastcall NSInstrumentation::CSectionBitmapAllocator<237568,928>::Create(__int64 a1)
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
  if ( !NSInstrumentation::CSectionBitmapAllocator<237568,928>::Initialize(Pool2, a1) )
  {
    NSInstrumentation::CSectionBitmapAllocator<24576,96>::Destroy(v3);
    return 0LL;
  }
  return v3;
}
