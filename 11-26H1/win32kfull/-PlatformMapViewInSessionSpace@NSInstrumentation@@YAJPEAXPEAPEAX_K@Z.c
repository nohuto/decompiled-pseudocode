/*
 * XREFs of ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x14023195C
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NXZ @ 0x1402318FC (-Initialize@-$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ @ 0x140231A2C (-Initialize@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x1402D05F4 (-Initialize@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ @ 0x1402F3B28 (-Initialize@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ.c)
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
    result = -1073741595;
    *a2 = 0LL;
  }
  return result;
}
