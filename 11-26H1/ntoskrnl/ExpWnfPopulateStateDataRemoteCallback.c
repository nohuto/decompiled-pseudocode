/*
 * XREFs of ExpWnfPopulateStateDataRemoteCallback @ 0x14084D650
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpWnfPopulateStateDataRemoteCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        void *Src,
        size_t Size)
{
  int v8; // r14d
  _DWORD *Pool2; // rax
  _DWORD *v10; // rdi

  if ( a4 )
  {
    if ( (_DWORD)Size )
    {
      v8 = *(_DWORD *)(a2 + 56);
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
      v10 = Pool2;
      if ( !Pool2 )
        return 3221225626LL;
      *Pool2 = 1050884;
      Pool2[1] = v8;
      Pool2[2] = Size;
      Pool2[3] = a4;
      memmove(Pool2 + 4, Src, (unsigned int)Size);
      *(_DWORD *)(a2 + 96) = v10[3];
      *(_QWORD *)(a2 + 88) = v10;
    }
    else
    {
      *(_QWORD *)(a2 + 88) = 1LL;
      *(_DWORD *)(a2 + 96) = a4;
    }
  }
  return 0LL;
}
