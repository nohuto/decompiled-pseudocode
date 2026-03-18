/*
 * XREFs of ?Initialize@?$CSectionEntry@$0BKAAA@$0BKA@@NSInstrumentation@@AEAA_NXZ @ 0x14015A640
 * Callers:
 *     ?Create@?$CSectionEntry@$0BKAAA@$0BKA@@NSInstrumentation@@SAPEAV12@XZ @ 0x140159F8C (-Create@-$CSectionEntry@$0BKAAA@$0BKA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015A37C (-Destroy@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x14015AACC (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x14015AB58 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0BKAAA@$0BKA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x14015AD58 (-Initialize@-$CSectionBitmapAllocator@$0BKAAA@$0BKA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<106496,416>::Initialize(_QWORD *a1, unsigned int a2)
{
  NSInstrumentation *Section; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // rsi
  _QWORD *Pool2; // rax
  void *v7; // rbx

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x1A000, a2);
  a1[2] = Section;
  if ( Section && (int)NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0x1A000, v4) >= 0 )
  {
    v5 = a1[3];
    Pool2 = (_QWORD *)ExAllocatePool2(258LL, 40LL, 1869834581LL);
    v7 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 0LL;
      Pool2[1] = 0LL;
      Pool2[2] = 0LL;
      Pool2[3] = 0LL;
      Pool2[4] = 0LL;
      if ( (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<106496,416>::Initialize(Pool2, v5) )
      {
LABEL_7:
        a1[4] = v7;
        return v7 != 0LL;
      }
      NSInstrumentation::CSectionBitmapAllocator<81920,160>::Destroy(v7);
    }
    v7 = 0LL;
    goto LABEL_7;
  }
  return 0;
}
