/*
 * XREFs of ??1?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA@XZ @ 0x140241EA4
 * Callers:
 *     ?Destroy@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14024218C (-Destroy@-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140242118 (-Destroy@-$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

int __fastcall NSInstrumentation::CSectionEntry<180224,704>::~CSectionEntry<180224,704>(_QWORD *a1)
{
  void *v2; // rcx
  int result; // eax
  void *v4; // rcx
  void *v5; // rcx

  v2 = (void *)a1[4];
  if ( v2 )
  {
    result = NSInstrumentation::CSectionBitmapAllocator<180224,704>::Destroy(v2);
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
