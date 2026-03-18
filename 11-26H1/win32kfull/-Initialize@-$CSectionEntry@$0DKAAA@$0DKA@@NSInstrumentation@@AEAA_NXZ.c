/*
 * XREFs of ?Initialize@?$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NXZ @ 0x1402318FC
 * Callers:
 *     ?Create@?$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14025367C (-Create@-$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x14023195C (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x140231A8C (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x140327A78 (-Create@-$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<237568,928>::Initialize(_QWORD *a1, unsigned int a2)
{
  NSInstrumentation *Section; // rax
  unsigned __int64 v4; // r9
  __int64 v6; // rax

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x3A000, a2);
  a1[2] = Section;
  if ( !Section || (int)NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0x3A000, v4) < 0 )
    return 0;
  v6 = NSInstrumentation::CSectionBitmapAllocator<237568,928>::Create(a1[3]);
  a1[4] = v6;
  return v6 != 0;
}
