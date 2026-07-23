/*
 * XREFs of PfpSourceBuildVaArray @ 0x140A57A78
 * Callers:
 *     PfpPrefetchPrivatePages @ 0x140A57EF4 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpSourceBuildVaArray(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  PVOID *v6; // rdi
  __int64 Pool2; // rax
  unsigned int v8; // eax
  unsigned int v9; // r9d
  _QWORD *i; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx

  v2 = *(unsigned int *)(a1 + 24);
  v3 = 0;
  if ( (_DWORD)v2 )
  {
    v6 = (PVOID *)(a2 + 2);
    if ( a2[1] < (unsigned int)v2 )
    {
      if ( *v6 )
      {
        ExFreePoolWithTag(*v6, 0);
        *v6 = 0LL;
        a2[1] = 0;
      }
      if ( (unsigned __int64)(16 * v2) > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      Pool2 = ExAllocatePool2(0x40uLL);
      *v6 = (PVOID)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      a2[1] = v2;
    }
    v8 = *(_DWORD *)(a1 + 24);
    v9 = 0;
    for ( i = *v6; v9 < v8; v8 = *(_DWORD *)(a1 + 24) )
    {
      v11 = *(_QWORD *)(a1 + 32);
      v12 = v9++;
      v12 *= 2LL;
      *i = *(_QWORD *)(v11 + 8 * v12);
      i += 2;
      *(i - 1) = *(unsigned int *)(v11 + 8 * v12 + 8);
    }
    *a2 = v8;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v3;
}
