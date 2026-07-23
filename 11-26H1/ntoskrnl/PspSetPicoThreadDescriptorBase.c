/*
 * XREFs of PspSetPicoThreadDescriptorBase @ 0x140505D40
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PspSetPicoThreadDescriptorBase(__int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v4; // ebx
  unsigned __int8 CurrentIrql; // di
  unsigned int v6; // ecx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  if ( v4 )
  {
    CurrentThread[1].WaitBlock[2].Object = (PVOID)a2;
    v6 = -1073741566;
  }
  else
  {
    CurrentThread[1].WaitBlock[2].Thread = (struct _KTHREAD *)a2;
    v6 = -1073741568;
  }
  __writemsr(v6, a2);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
