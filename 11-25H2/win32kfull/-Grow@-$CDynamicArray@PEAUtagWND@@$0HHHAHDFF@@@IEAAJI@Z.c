/*
 * XREFs of ?Grow@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1402673AC
 * Callers:
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x140227DE8 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 *     ?Add@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z @ 0x140228BE4 (-Add@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z.c)
 * Callees:
 *     RtlULongLongMult @ 0x1401E78EC (RtlULongLongMult.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall CDynamicArray<tagWND *,2003858261>::Grow(__int64 a1, ULONGLONG a2)
{
  unsigned int v3; // esi
  NTSTATUS v4; // ebx
  void *v5; // rax
  void *v6; // rbp
  ULONGLONG v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 8) + 1;
  if ( *(_DWORD *)(a1 + 8) == -1 )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v4 = 0;
    if ( v3 > *(_DWORD *)(a1 + 12) )
    {
      v8 = 0LL;
      v4 = RtlULongLongMult(v3, a2, &v8);
      if ( v4 >= 0 )
      {
        v5 = (void *)Win32AllocPool(v8, 2003858261LL);
        v6 = v5;
        if ( v5 )
        {
          if ( *(_QWORD *)a1 )
          {
            memmove(v5, *(const void **)a1, 8LL * *(unsigned int *)(a1 + 8));
            Win32FreePool(*(void **)a1);
          }
          *(_QWORD *)a1 = v6;
          *(_DWORD *)(a1 + 12) = v3;
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
    }
  }
  return (unsigned int)v4;
}
