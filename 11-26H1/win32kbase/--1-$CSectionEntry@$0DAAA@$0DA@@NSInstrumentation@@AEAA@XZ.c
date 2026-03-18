/*
 * XREFs of ??1?$CSectionEntry@$0DAAA@$0DA@@NSInstrumentation@@AEAA@XZ @ 0x1401B5EE0
 * Callers:
 *     ?Destroy@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401B5EB4 (-Destroy@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0BAAA@$0EA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140196800 (-Destroy@-$CSectionBitmapAllocator@$0BAAA@$0EA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall NSInstrumentation::CSectionEntry<12288,48>::~CSectionEntry<12288,48>(_QWORD *a1)
{
  PVOID *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (PVOID *)a1[4];
  if ( v2 )
  {
    NSInstrumentation::CSectionBitmapAllocator<4096,64>::Destroy(v2);
    a1[4] = 0LL;
  }
  v3 = (void *)a1[3];
  if ( v3 )
  {
    MmUnmapViewInSessionSpace(v3);
    a1[3] = 0LL;
  }
  v4 = (void *)a1[2];
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    a1[2] = 0LL;
  }
}
