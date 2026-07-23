/*
 * XREFs of MiGetSystemPage @ 0x14033AC10
 * Callers:
 *     MiGetPageForHeader @ 0x14033A9FC (MiGetPageForHeader.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiWaitForFreePage @ 0x1403D4D84 (MiWaitForFreePage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiGetSystemPage(__int64 a1, int a2, __int64 a3)
{
  int v3; // r9d
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 Page; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // di
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a3 + 8);
  v5 = (a2 != 0) + 48;
  v6 = v3 ^ (unsigned __int8)(v3 ^ _InterlockedExchangeAdd(*(volatile signed __int32 **)a3, 1u));
  while ( 1 )
  {
    Page = MiGetPage(a1, v6, v5);
    if ( Page != -1 )
      break;
    if ( KeGetCurrentIrql() == 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      return 0LL;
    MiWaitForFreePage(a1, 0LL);
  }
  v10 = 48 * Page - 0x220000000000LL;
  if ( (v5 & 1) != 0 )
  {
    CurrentIrql = 17;
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v13);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v8) = 2;
      LOBYTE(v9) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v9, v8);
    }
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v13);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
  }
  *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v10;
}
