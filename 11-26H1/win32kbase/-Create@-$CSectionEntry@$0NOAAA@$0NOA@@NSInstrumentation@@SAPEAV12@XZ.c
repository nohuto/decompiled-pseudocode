/*
 * XREFs of ?Create@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401ED904
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401BD87C (-Allocate@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEC98 (-Deserialize@-$CDeserializedSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@AEAVDeserial.c)
 *     ?Initialize@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAA_NXZ @ 0x1401EF9F4 (-Initialize@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x14015AACC (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x14015AB58 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?Destroy@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401B5EB4 (-Destroy@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1401ED878 (-Create@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 */

_QWORD *NSInstrumentation::CSectionEntry<909312,3552>::Create()
{
  _QWORD *Pool2; // rax
  _QWORD *v1; // rbx
  __int64 *v2; // rdi
  NSInstrumentation *Section; // rax
  PVOID *v4; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v1 = Pool2;
  if ( Pool2 )
  {
    v2 = Pool2 + 3;
    Pool2[2] = 0LL;
    Pool2[3] = 0LL;
    Pool2[4] = 0LL;
    Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0xDE000);
    v1[2] = Section;
    if ( Section )
    {
      if ( NSInstrumentation::PlatformMapViewInSessionSpace(Section, (PVOID *)v2, (void **)0xDE000) >= 0 )
      {
        v4 = NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Create(*v2);
        v1[4] = v4;
        if ( v4 )
          return v1;
      }
    }
    NSInstrumentation::CSectionEntry<32768,128>::Destroy(v1);
  }
  return 0LL;
}
