/*
 * XREFs of MiMapSystemImage @ 0x140B22C34
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiAddMappedPtes @ 0x140341E90 (MiAddMappedPtes.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiChargeSystemImageCommitment @ 0x140B331C0 (MiChargeSystemImageCommitment.c)
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
    _InterlockedAdd((volatile signed __int32 *)&stru_140E2D2D0.UserTime, v5);
    _InterlockedAdd((volatile signed __int32 *)&stru_140E366D8.WaitBlockFill11[16], v5);
    return 0LL;
  }
}
