/*
 * XREFs of PiDevCfgCopyVariableData @ 0x1407AC3FC
 * Callers:
 *     PiDevCfgResolveVariableSwitchCase @ 0x1407AE990 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A48420 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgCopyVariableData(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v4; // rdx
  void *v5; // rdi
  void *Pool2; // rax
  void *v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 40);
  v5 = 0LL;
  v9 = 0LL;
  if ( !v4 )
    goto LABEL_9;
  if ( (unsigned __int16)*(_DWORD *)(a2 + 32) == 0x8000 )
  {
    v2 = PnpCtxRegOpenKey(PiPnpRtlCtx, v4, 0, 0, 131097, (__int64)&v9);
    if ( v2 >= 0 )
    {
      v5 = v9;
LABEL_9:
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
      *(_QWORD *)(a1 + 40) = v5;
    }
  }
  else
  {
    if ( !*(_DWORD *)(a2 + 36) )
      goto LABEL_9;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v5 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, *(const void **)(a2 + 40), *(unsigned int *)(a2 + 36));
      goto LABEL_9;
    }
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v2;
}
