/*
 * XREFs of CreateProp @ 0x1400DE2CC
 * Callers:
 *     RealInternalSetProp @ 0x1400DE180 (RealInternalSetProp.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x14003F3E0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall CreateProp(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // ecx
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  _DWORD *v10; // rax

  LockRefactorStagingAssertOwned((struct _KTHREAD **)a1, a2);
  v3 = *(unsigned int **)(a1 + 24);
  if ( v3 )
  {
    v4 = *v3;
    if ( v3[1] != (_DWORD)v4 )
    {
LABEL_3:
      v5 = *(_QWORD *)(a1 + 24);
      v6 = *(_DWORD *)(v5 + 4);
      *(_DWORD *)(v5 + 4) = v6 + 1;
      return v5 + 16LL * v6 + 8;
    }
    v8 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, 16 * v4 + 24, 0x79707355u);
    v9 = v8;
    if ( v8 )
    {
      memmove(v8, *(const void **)(a1 + 24), 16LL * (unsigned int)(**(_DWORD **)(a1 + 24) - 1) + 24);
      GreDeleteFastMutex(*(char **)(a1 + 24));
      *(_QWORD *)(a1 + 24) = v9;
      ++*v9;
      goto LABEL_3;
    }
  }
  else
  {
    v10 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, 0x18uLL, 0x79707355u);
    *(_QWORD *)(a1 + 24) = v10;
    if ( v10 )
    {
      *v10 = 1;
      goto LABEL_3;
    }
  }
  return 0LL;
}
