/*
 * XREFs of PopFxDuplicateUniqueId @ 0x14052EE3C
 * Callers:
 *     PopFxCreateDeviceCommon @ 0x1405077F0 (PopFxCreateDeviceCommon.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopFxDuplicateUniqueId(const void **a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  size_t v6; // rbp
  void *Pool2; // rax
  void *v8; // r14

  v4 = *(unsigned __int16 *)a1;
  if ( *((unsigned __int16 *)a1 + 1) >= (unsigned __int64)(v4 + 2) )
  {
    v6 = (unsigned __int16)(v4 + 2);
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    v5 = 0;
    v8 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, a1[1], v6);
      *(_WORD *)a2 = *(_WORD *)a1;
      *(_QWORD *)(a2 + 8) = v8;
      *(_WORD *)(a2 + 2) = v6;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
