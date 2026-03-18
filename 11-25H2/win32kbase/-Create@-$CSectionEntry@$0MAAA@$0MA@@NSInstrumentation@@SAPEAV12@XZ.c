/*
 * XREFs of ?Create@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401C6FBC
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1400718DC (-Allocate@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ @ 0x1402423FC (-Initialize@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14011AB08 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14011AB94 (-Destroy@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x14011BC24 (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x14011BCB0 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1401C7118 (-Initialize@-$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 */

_QWORD *NSInstrumentation::CSectionEntry<49152,192>::Create()
{
  _QWORD *Pool2; // rax
  _QWORD *v1; // rbx
  PVOID *v2; // rdi
  NSInstrumentation *Section; // rax
  PVOID v4; // rsi
  __int64 v5; // rax
  void *v6; // rdi

  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v1 = Pool2;
  if ( !Pool2 )
    return 0LL;
  Pool2[2] = 0LL;
  v2 = (PVOID *)(Pool2 + 3);
  Pool2[3] = 0LL;
  Pool2[4] = 0LL;
  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0xC000);
  v1[2] = Section;
  if ( !Section || NSInstrumentation::PlatformMapViewInSessionSpace(Section, v2, (void **)0xC000) < 0 )
  {
LABEL_8:
    NSInstrumentation::CSectionEntry<49152,192>::Destroy(v1);
    return 0LL;
  }
  v4 = *v2;
  v5 = ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v6 = (void *)v5;
  if ( !v5 )
  {
LABEL_7:
    v1[4] = 0LL;
    goto LABEL_8;
  }
  *(_QWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 8) = 0LL;
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 0LL;
  *(_DWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 36) = 0;
  if ( !(unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<49152,192>::Initialize(v5, v4) )
  {
    NSInstrumentation::CSectionBitmapAllocator<81920,160>::Destroy(v6);
    goto LABEL_7;
  }
  v1[4] = v6;
  return v1;
}
