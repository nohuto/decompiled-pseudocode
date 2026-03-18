/*
 * XREFs of MiMapSystemImage @ 0x140B20834
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x1402F4A50 (MiAcquireNonPagedResources.c)
 *     MiAddMappedPtes @ 0x14033FE10 (MiAddMappedPtes.c)
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
 *     MiChargeSystemImageCommitment @ 0x140B30FC0 (MiChargeSystemImageCommitment.c)
 */

__int64 __fastcall MiMapSystemImage(__int64 a1, unsigned __int64 a2)
{
  _DWORD *v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  char *AnyMultiplexedVm; // rax
  __int64 *v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  int v13; // esi
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0LL;
  v4 = (_DWORD *)MiSectionControlArea(a1);
  v5 = *(_DWORD *)(*(_QWORD *)v4 + 8LL);
  v7 = MiSectionControlArea(v6);
  if ( *(_DWORD *)(*(_QWORD *)v7 + 8LL)
    && (int)MiAcquireNonPagedResources(&MiSystemPartition, *(unsigned int *)(*(_QWORD *)v7 + 8LL), 0LL, 0LL) < 0 )
  {
    return 3221225626LL;
  }
  MiGetPteAddress(a2);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v13 = MiAddMappedPtes((__int64)AnyMultiplexedVm, v10, v11, v4, &v14, v12);
  if ( v13 < 0 )
  {
    MiChargeSystemImageCommitment(a1, 0LL);
    return (unsigned int)v13;
  }
  else
  {
    _InterlockedAdd((volatile signed __int32 *)&stru_140E2D150.UserTime, v5);
    _InterlockedAdd((volatile signed __int32 *)&stru_140E36558.WaitBlockFill11[16], v5);
    return 0LL;
  }
}
