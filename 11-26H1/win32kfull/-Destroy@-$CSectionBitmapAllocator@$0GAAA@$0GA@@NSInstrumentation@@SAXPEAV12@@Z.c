/*
 * XREFs of ?Destroy@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140287454
 * Callers:
 *     ?Create@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x140231B18 (-Create@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1402873EC (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Initialize@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x1402D05F4 (-Initialize@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ @ 0x1402F3B28 (-Initialize@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Create@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x140327A78 (-Create@-$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<24576,96>::Destroy(PVOID *P)
{
  void *v2; // rdi

  v2 = (void *)((unsigned __int64)P[2] ^ (unsigned __int64)P[3]);
  if ( v2 )
  {
    RtlFindSetBits((PRTL_BITMAP)((unsigned __int64)P[2] ^ (unsigned __int64)P[3]), 1u, 0);
    ExFreePoolWithTag(v2, 0);
  }
  if ( *P )
    ExFreePoolWithTag(*P, 0);
  ExFreePoolWithTag(P, 0);
}
