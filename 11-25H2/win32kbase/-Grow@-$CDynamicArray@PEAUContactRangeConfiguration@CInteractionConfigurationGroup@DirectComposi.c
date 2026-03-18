/*
 * XREFs of ?Grow@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@IEAAJI@Z @ 0x140068848
 * Callers:
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x140068758 (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall CDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration *,2003858261>::Grow(
        __int64 a1)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  void *v4; // rax
  void *v5; // rbp

  v2 = *(_DWORD *)(a1 + 8) + 1;
  if ( *(_DWORD *)(a1 + 8) == -1 )
    return (unsigned int)-1073741675;
  v3 = 0;
  if ( v2 <= *(_DWORD *)(a1 + 12) )
    return v3;
  if ( !is_mul_ok(v2, 8uLL) )
    return (unsigned int)-1073741675;
  v4 = (void *)Win32AllocPoolImpl(256LL, 8LL * v2, 0x77707355u);
  v5 = v4;
  if ( v4 )
  {
    if ( *(_QWORD *)a1 )
    {
      memmove(v4, *(const void **)a1, 8LL * *(unsigned int *)(a1 + 8));
      GreDeleteFastMutex(*(char **)a1);
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 12) = v2;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
