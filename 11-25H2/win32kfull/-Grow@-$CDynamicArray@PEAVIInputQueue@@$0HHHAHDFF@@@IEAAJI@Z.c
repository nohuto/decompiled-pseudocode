/*
 * XREFs of ?Grow@?$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z @ 0x140062DC4
 * Callers:
 *     ?AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z @ 0x140062D3C (-AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z.c)
 * Callees:
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall CDynamicArray<IInputQueue *,2003858261>::Grow(__int64 a1)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  void *v5; // rax
  void *v6; // rbp

  v2 = *(_DWORD *)(a1 + 8) + 1;
  if ( *(_DWORD *)(a1 + 8) == -1 )
    return (unsigned int)-1073741675;
  v3 = 0;
  if ( v2 > *(_DWORD *)(a1 + 12) )
  {
    if ( !is_mul_ok(v2, 8uLL) )
      return (unsigned int)-1073741675;
    v5 = (void *)Win32AllocPool(8LL * v2, 2003858261LL);
    v6 = v5;
    if ( v5 )
    {
      if ( *(_QWORD *)a1 )
      {
        memmove(v5, *(const void **)a1, 8LL * *(unsigned int *)(a1 + 8));
        Win32FreePool(*(void **)a1);
      }
      *(_QWORD *)a1 = v6;
      *(_DWORD *)(a1 + 12) = v2;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v3;
}
