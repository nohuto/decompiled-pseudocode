/*
 * XREFs of KeProcessorProfileControlArea @ 0x1405E7408
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiIsIntelPebsSupported @ 0x1405EE39C (KiIsIntelPebsSupported.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeProcessorProfileControlArea(__int64 a1, int a2, char a3)
{
  char v5; // bp
  char *Pool2; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // rax

  if ( a3 )
    return 3221225506LL;
  if ( a2 != 16 )
    return 3221225476LL;
  v5 = *(_BYTE *)(a1 + 8);
  Pool2 = 0LL;
  if ( v5 )
  {
    Pool2 = (char *)ExAllocatePool2(0x48uLL);
    if ( !Pool2 )
    {
      *(_QWORD *)a1 = 0LL;
      return 3221225626LL;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  if ( (unsigned __int8)KiIsIntelPebsSupported(KeGetCurrentPrcb()) )
  {
    if ( v5 )
    {
      v10 = *(_QWORD *)(v8 + 36568);
      if ( v10 )
      {
        *(_QWORD *)a1 = v10;
        v9 = -1073741302;
        goto LABEL_19;
      }
      *(_QWORD *)(v8 + 36568) = Pool2;
      *(_QWORD *)(v8 + 36576) = Pool2 + 40;
      *(_QWORD *)a1 = Pool2;
      Pool2 = 0LL;
    }
    else
    {
      *(_QWORD *)a1 = 0LL;
      if ( !*(_QWORD *)(v8 + 36568) )
      {
        v9 = -1073741664;
        goto LABEL_19;
      }
    }
    v9 = 0;
    goto LABEL_19;
  }
  *(_QWORD *)a1 = 0LL;
  v9 = -1073741637;
LABEL_19:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v9;
}
