/*
 * XREFs of ?Create@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015A890
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140016244 (-Allocate@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Deserialize@?$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EE7B8 (-Deserialize@-$CDeserializedSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@AEAVDeserializ.c)
 *     ?Initialize@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAA_NXZ @ 0x1401EF908 (-Initialize@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x14015AACC (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x14015AB58 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x14015B318 (-Create@-$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ?Destroy@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401B5EB4 (-Destroy@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

_QWORD *NSInstrumentation::CSectionEntry<32768,128>::Create()
{
  _QWORD *Pool2; // rax
  unsigned int v1; // edx
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  NSInstrumentation *Section; // rax
  unsigned __int64 v5; // r9
  __int64 v6; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v2 = Pool2;
  if ( Pool2 )
  {
    v3 = Pool2 + 3;
    Pool2[2] = 0LL;
    Pool2[3] = 0LL;
    Pool2[4] = 0LL;
    Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x8000, v1);
    v2[2] = Section;
    if ( Section )
    {
      if ( (int)NSInstrumentation::PlatformMapViewInSessionSpace(Section, v3, (void **)0x8000, v5) >= 0 )
      {
        v6 = NSInstrumentation::CSectionBitmapAllocator<32768,128>::Create(*v3);
        v2[4] = v6;
        if ( v6 )
          return v2;
      }
    }
    NSInstrumentation::CSectionEntry<32768,128>::Destroy(v2);
  }
  return 0LL;
}
