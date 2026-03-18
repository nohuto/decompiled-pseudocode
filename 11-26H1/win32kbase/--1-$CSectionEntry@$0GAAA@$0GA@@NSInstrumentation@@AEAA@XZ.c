/*
 * XREFs of ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x14015AF20
 * Callers:
 *     ?Destroy@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015AEF4 (-Destroy@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015AF88 (-Destroy@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

int __fastcall NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(_QWORD *a1)
{
  void *v2; // rcx
  int result; // eax
  void *v4; // rcx
  void *v5; // rcx

  v2 = (void *)a1[4];
  if ( v2 )
  {
    result = NSInstrumentation::CSectionBitmapAllocator<24576,96>::Destroy(v2);
    a1[4] = 0LL;
  }
  v4 = (void *)a1[3];
  if ( v4 )
  {
    result = MmUnmapViewInSessionSpace(v4);
    a1[3] = 0LL;
  }
  v5 = (void *)a1[2];
  if ( v5 )
  {
    result = ObfDereferenceObject(v5);
    a1[2] = 0LL;
  }
  return result;
}
