/*
 * XREFs of MiBeginDeleteNonPagedPtes @ 0x140365A2C
 * Callers:
 *     MiClearNonPagedPtes @ 0x140365158 (MiClearNonPagedPtes.c)
 *     MiClearNonPagedPtesSlow @ 0x140365970 (MiClearNonPagedPtesSlow.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 *__fastcall MiBeginDeleteNonPagedPtes(__int64 *a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 *MmInternal; // rbx
  __int64 v12; // rcx
  __int64 *result; // rax

  *(_BYTE *)(a2 + 33) &= ~1u;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_BYTE *)(a2 + 32) = 0;
  if ( a4 == 17 )
    MiLockWorkingSetSharedAtDpc(a3);
  else
    MiLockWorkingSetShared(a3, a2, a3);
  if ( !a1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    MmInternal = MxTempPrcb;
    if ( CurrentPrcb->MmInternal )
      MmInternal = (__int64 *)CurrentPrcb->MmInternal;
    a1 = MmInternal + 44;
    memset_0(MmInternal + 44, 0, 0xC0uLL);
    MmInternal[67] = (__int64)(MmInternal + 68);
    *((_OWORD *)MmInternal + 34) = 0LL;
    *((_OWORD *)MmInternal + 35) = 0LL;
    *((_OWORD *)MmInternal + 36) = 0LL;
    MmInternal[74] = 0LL;
    MmInternal[48] = 1LL;
  }
  v12 = a1[23];
  a1[5] = a5;
  a1[6] = a6;
  *(_DWORD *)a1 = 71;
  *(_DWORD *)(v12 + 32) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(v12 + 36) = *(unsigned __int8 *)(a2 + 20);
  a1[21] = (__int64)MiDeleteNonPagedPoolPte;
  a1[22] = (__int64)MiDeleteNonPagedPoolTail;
  result = a1;
  a1[4] = a3;
  *((_BYTE *)a1 + 9) = a4;
  return result;
}
