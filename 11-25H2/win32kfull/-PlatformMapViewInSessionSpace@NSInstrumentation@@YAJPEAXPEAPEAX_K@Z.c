/*
 * XREFs of ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1401FE7F4
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ @ 0x1401FE738 (-Initialize@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x1402B581C (-Initialize@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ @ 0x1402E300C (-Initialize@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Create@?$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14030F468 (-Create@-$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall NSInstrumentation::PlatformMapViewInSessionSpace(NSInstrumentation *this, PVOID *a2, void **a3)
{
  NTSTATUS result; // eax
  ULONG_PTR ViewSize; // [rsp+48h] [rbp+20h] BYREF

  ViewSize = 0LL;
  result = MmMapViewInSessionSpace(this, a2, &ViewSize);
  if ( result >= 0 && (void **)ViewSize != a3 )
  {
    MmUnmapViewInSessionSpace(*a2);
    *a2 = 0LL;
    return -1073741595;
  }
  return result;
}
