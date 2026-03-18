/*
 * XREFs of ?Initialize@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ @ 0x1402F3B28
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1402F352C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x14023195C (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x140231A8C (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1402348B4 (-Initialize@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Destroy@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140287454 (-Destroy@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<28672,112>::Initialize(PVOID *a1)
{
  NSInstrumentation *Section; // rax
  __int64 v3; // rsi
  PVOID *Pool2; // rax
  PVOID *v5; // rbx

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x7000);
  a1[2] = Section;
  if ( Section && NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0x7000) >= 0 )
  {
    v3 = (__int64)a1[3];
    Pool2 = (PVOID *)ExAllocatePool2(258LL, 40LL, 1869834581LL);
    v5 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 0LL;
      Pool2[1] = 0LL;
      Pool2[2] = 0LL;
      Pool2[3] = 0LL;
      Pool2[4] = 0LL;
      if ( NSInstrumentation::CSectionBitmapAllocator<28672,112>::Initialize(Pool2, v3) )
      {
LABEL_7:
        a1[4] = v5;
        return v5 != 0LL;
      }
      NSInstrumentation::CSectionBitmapAllocator<24576,96>::Destroy(v5);
    }
    v5 = 0LL;
    goto LABEL_7;
  }
  return 0;
}
