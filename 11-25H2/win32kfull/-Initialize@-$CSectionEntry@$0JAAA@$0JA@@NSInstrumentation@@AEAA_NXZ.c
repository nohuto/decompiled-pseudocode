/*
 * XREFs of ?Initialize@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ @ 0x1401FE738
 * Callers:
 *     ?Create@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401FE6D4 (-Create@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1401FE7F4 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1401FE854 (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1401FE8E0 (-Initialize@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Destroy@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1402657F0 (-Destroy@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<36864,144>::Initialize(_QWORD *a1, unsigned int a2)
{
  NSInstrumentation *Section; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // rsi
  __int64 Pool2; // rax
  void *v7; // rbx

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x9000, a2);
  a1[2] = Section;
  if ( Section && (int)NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0x9000, v4) >= 0 )
  {
    v5 = a1[3];
    Pool2 = ExAllocatePool2(258LL, 40LL, 1869834581LL);
    v7 = (void *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 8) = 0LL;
      *(_QWORD *)(Pool2 + 16) = 0LL;
      *(_QWORD *)(Pool2 + 24) = 0LL;
      *(_DWORD *)(Pool2 + 32) = 0;
      *(_DWORD *)(Pool2 + 36) = 0;
      if ( (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<36864,144>::Initialize(Pool2, v5) )
      {
LABEL_7:
        a1[4] = v7;
        return v7 != 0LL;
      }
      NSInstrumentation::CSectionBitmapAllocator<24576,96>::Destroy(v7);
    }
    v7 = 0LL;
    goto LABEL_7;
  }
  return 0;
}
