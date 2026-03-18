/*
 * XREFs of ?Initialize@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x14015A480
 * Callers:
 *     ?Create@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015A414 (-Create@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x14015AACC (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x14015AB58 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?Destroy@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015AF88 (-Destroy@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x14015B4BC (-Initialize@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<24576,96>::Initialize(_QWORD *a1, unsigned int a2)
{
  NSInstrumentation *Section; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // rsi
  _QWORD *Pool2; // rax
  void *v7; // rbx

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x6000, a2);
  a1[2] = Section;
  if ( Section && (int)NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0x6000, v4) >= 0 )
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
      if ( (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<28672,112>::Initialize(Pool2, v5) )
      {
LABEL_5:
        a1[4] = v7;
        return v7 != 0LL;
      }
      NSInstrumentation::CSectionBitmapAllocator<24576,96>::Destroy(v7);
    }
    v7 = 0LL;
    goto LABEL_5;
  }
  return 0;
}
