/*
 * XREFs of PsEstablishWin32Callouts @ 0x1407F0BF0
 * Callers:
 *     <none>
 * Callees:
 *     ExCompareExchangeCallBack @ 0x140463604 (ExCompareExchangeCallBack.c)
 *     ExAllocateCallBack @ 0x140B30CE4 (ExAllocateCallBack.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PsEstablishWin32Callouts(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v1; // rax
  struct _EX_RUNDOWN_REF *v2; // rbx

  v1 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, 0LL);
  v2 = v1;
  if ( v1 )
  {
    if ( ExCompareExchangeCallBack((signed __int64 *)&PsWin32CallBack, v1, 0LL) )
      LOBYTE(PsAltSystemCallRegistrationLock.TrapFrame) = 1;
    else
      ExFreePoolWithTag(v2, 0);
  }
}
