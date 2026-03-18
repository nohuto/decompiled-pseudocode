/*
 * XREFs of CreateProp @ 0x14004A490
 * Callers:
 *     RealInternalSetProp @ 0x1400DEB70 (RealInternalSetProp.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1400489D0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall CreateProp(__int64 a1, int a2, int a3)
{
  unsigned int *v4; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // ecx
  _DWORD *v13; // rax

  LockRefactorStagingAssertOwned((struct _KTHREAD **)a1, a2, a3);
  v4 = *(unsigned int **)(a1 + 24);
  if ( v4 )
  {
    if ( v4[1] != *v4 )
    {
LABEL_5:
      v10 = *(_QWORD *)(a1 + 24);
      v11 = *(_DWORD *)(v10 + 4);
      *(_DWORD *)(v10 + 4) = v11 + 1;
      return v10 + 16LL * v11 + 8;
    }
    v5 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, 16LL * *v4 + 24, 0x79707355u);
    v6 = v5;
    if ( v5 )
    {
      memmove(v5, *(const void **)(a1 + 24), 16LL * (unsigned int)(**(_DWORD **)(a1 + 24) - 1) + 24);
      GreDeleteFastMutex(*(char **)(a1 + 24), v7, v8, v9);
      *(_QWORD *)(a1 + 24) = v6;
      ++*v6;
      goto LABEL_5;
    }
  }
  else
  {
    v13 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, 0x18uLL, 0x79707355u);
    *(_QWORD *)(a1 + 24) = v13;
    if ( v13 )
    {
      *v13 = 1;
      goto LABEL_5;
    }
  }
  return 0LL;
}
