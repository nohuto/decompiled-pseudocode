/*
 * XREFs of ?Grow@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z @ 0x140241954
 * Callers:
 *     ?Add@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z @ 0x1402417A0 (-Add@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1402417DC (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall CDynamicArray<tagWND *,2003858261>::Grow(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  void *v6; // rax
  void *v7; // rbp

  v4 = *(_DWORD *)(a1 + 8) + 1;
  if ( *(_DWORD *)(a1 + 8) == -1 )
    return (unsigned int)-1073741675;
  v5 = 0;
  if ( v4 <= *(_DWORD *)(a1 + 12) )
    return v5;
  if ( !is_mul_ok(v4, 8uLL) )
    return (unsigned int)-1073741675;
  v6 = (void *)Win32AllocPool(8LL * v4, 2003858261LL, a3);
  v7 = v6;
  if ( v6 )
  {
    if ( *(_QWORD *)a1 )
    {
      memmove(v6, *(const void **)a1, 8LL * *(unsigned int *)(a1 + 8));
      Win32FreePool(*(void **)a1);
    }
    *(_QWORD *)a1 = v7;
    *(_DWORD *)(a1 + 12) = v4;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
