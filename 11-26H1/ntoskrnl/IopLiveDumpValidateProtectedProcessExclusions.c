/*
 * XREFs of IopLiveDumpValidateProtectedProcessExclusions @ 0x1405D575C
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1405D17B0 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     IopLiveDumpLookupProcessFilter @ 0x1405D2ACC (IopLiveDumpLookupProcessFilter.c)
 */

__int64 __fastcall IopLiveDumpValidateProtectedProcessExclusions(__int64 a1)
{
  struct _KTHREAD *Flink; // r11
  __int64 *v3; // r10
  LIST_ENTRY *p_WaitListHead; // rbx
  char v5; // cl
  __int64 Flink_low; // rdi
  __int64 v7; // rax
  __int64 *v8; // r8
  __int64 *v9; // rax
  char v10; // cl
  char v11; // cl

  Flink = (struct _KTHREAD *)PsAltSystemCallRegistrationLock.WaitBlock[2].WaitListEntry.Flink;
  LODWORD(v3) = 0;
  while ( Flink != (struct _KTHREAD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[96] )
  {
    p_WaitListHead = &Flink[-1].SuspendEvent.Header.WaitListHead;
    v5 = *((_BYTE *)&Flink->KernelShadowStackLimit.1 + 2) & 7;
    if ( v5 == 2 )
    {
      if ( (*((_BYTE *)&Flink->KernelShadowStackLimit.1 + 2) & 0xF0) == 0x70 )
        goto LABEL_19;
    }
    else if ( v5 != 1 )
    {
      goto LABEL_19;
    }
    Flink_low = LODWORD(p_WaitListHead[29].Flink);
    v7 = IopLiveDumpLookupProcessFilter(a1, Flink_low);
    if ( !v7 )
    {
      v8 = v3;
      v9 = *(__int64 **)(a1 + 1200);
      v10 = (char)v3;
      while ( v9 != (__int64 *)(a1 + 1200) )
      {
        v8 = v9;
        if ( *((_DWORD *)v9 + 8) == (_DWORD)v3 )
        {
          v10 = 1;
          break;
        }
        v9 = (__int64 *)*v9;
      }
      v11 = -v10;
      v7 = (unsigned __int64)v8 & -(__int64)(v11 != 0);
      if ( !v7 )
      {
        LODWORD(v3) = -2147483622;
        return (unsigned int)v3;
      }
      *(_QWORD *)(((unsigned __int64)v8 & -(__int64)(v11 != 0)) + 0x10) = Flink_low;
LABEL_18:
      *(_DWORD *)(v7 + 32) = 2;
      *(_QWORD *)(v7 + 24) = p_WaitListHead;
      goto LABEL_19;
    }
    if ( *(LIST_ENTRY **)(v7 + 24) != p_WaitListHead )
      goto LABEL_18;
    if ( *(_DWORD *)(v7 + 32) != 2 )
      *(_DWORD *)(v7 + 32) = 2;
LABEL_19:
    Flink = *(struct _KTHREAD **)&Flink->Header.Lock;
  }
  return (unsigned int)v3;
}
