/*
 * XREFs of ?Initialize@?$CSectionEntry@$0FBAAA@$0FBA@@NSInstrumentation@@AEAA_NXZ @ 0x1401DF2C0
 * Callers:
 *     ?Create@?$CSectionEntry@$0FBAAA@$0FBA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401DDB1C (-Create@-$CSectionEntry@$0FBAAA@$0FBA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x14015AACC (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x14015AB58 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?Destroy@?$CSectionBitmapAllocator@$0BAAA@$0EA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140196800 (-Destroy@-$CSectionBitmapAllocator@$0BAAA@$0EA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0FBAAA@$0FBA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1401DECE4 (-Initialize@-$CSectionBitmapAllocator@$0FBAAA@$0FBA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<331776,1296>::Initialize(PVOID *a1)
{
  NSInstrumentation *Section; // rax
  __int64 v3; // rsi
  PVOID *Pool2; // rax
  PVOID *v5; // rbx

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x51000);
  a1[2] = Section;
  if ( Section && NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0x51000) >= 0 )
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
      if ( NSInstrumentation::CSectionBitmapAllocator<331776,1296>::Initialize(Pool2, v3) )
      {
LABEL_7:
        a1[4] = v5;
        return v5 != 0LL;
      }
      NSInstrumentation::CSectionBitmapAllocator<4096,64>::Destroy(v5);
    }
    v5 = 0LL;
    goto LABEL_7;
  }
  return 0;
}
