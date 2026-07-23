/*
 * XREFs of MiClearPfnImageVerified @ 0x1404691E4
 * Callers:
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiProbeLeafPteAccess @ 0x1402D1510 (MiProbeLeafPteAccess.c)
 *     MiDeleteSectionCluster @ 0x14031A390 (MiDeleteSectionCluster.c)
 *     MiDeleteClusterPage @ 0x1403D0168 (MiDeleteClusterPage.c)
 *     MiTradePageReleaseLocks @ 0x140468FDC (MiTradePageReleaseLocks.c)
 *     MiGatherMappedPages @ 0x140490828 (MiGatherMappedPages.c)
 *     MiInsertPageLockBadList @ 0x1404DF030 (MiInsertPageLockBadList.c)
 *     MiPrepareLargePageSubPageForFree @ 0x140716E28 (MiPrepareLargePageSubPageForFree.c)
 *     MmChangeImageProtection @ 0x140AD2CC0 (MmChangeImageProtection.c)
 *     MiTradeBootImagePage @ 0x140D071EC (MiTradeBootImagePage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     KeSetPagePrivilege @ 0x1404AA600 (KeSetPagePrivilege.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall MiClearPfnImageVerified(__int64 a1, __int64 a2)
{
  char v2; // si
  __int64 v3; // rbx
  char result; // al
  unsigned __int8 CurrentIrql; // di
  int v6; // r14d
  int PagePrivilege; // eax
  unsigned int v8; // eax
  __int64 v9; // r9
  _OWORD v10[2]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+60h] [rbp+8h] BYREF

  v2 = a2;
  v10[0] = 0LL;
  v3 = a1;
  result = (*(_QWORD *)(a1 + 40) >> 60) & 7;
  if ( result == 3 )
  {
    CurrentIrql = 17;
    v6 = a2 & 4;
    if ( (a2 & 4) == 0 )
    {
      if ( (a2 & 0x40) != 0 )
      {
        v11 = a2 & 4;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v11);
          while ( *(__int64 *)(v3 + 24) < 0 );
        }
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(a2) = 2;
          LOBYTE(a1) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(a1, a2);
        }
        v11 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v11);
          while ( *(__int64 *)(v3 + 24) < 0 );
        }
      }
    }
    if ( (v2 & 8) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege((_QWORD *)v3, 1LL, (unsigned __int64)v10);
      if ( PagePrivilege )
      {
        if ( (PagePrivilege & 0x20) != 0 )
          v8 = 256;
        else
          v8 = (v2 & 0x10) != 0 ? 32 : 16;
        v9 = v8 | 4;
        if ( (v2 & 1) == 0 )
          v9 = v8;
        if ( (int)KeSetPagePrivilege((v3 + 0x220000000000LL) / 48, 0LL, v10, v9) < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, (v3 + 0x220000000000LL) / 48, 0LL, 0LL);
      }
    }
    result = MiSetPfnIdentity(v3, 0);
    if ( !v6 )
    {
      result = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        result = CurrentIrql;
        __writecr8(CurrentIrql);
      }
    }
  }
  return result;
}
