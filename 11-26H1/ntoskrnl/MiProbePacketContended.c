/*
 * XREFs of MiProbePacketContended @ 0x1402E87F0
 * Callers:
 *     MiProbeAndLockPacket @ 0x1402D0300 (MiProbeAndLockPacket.c)
 *     MmProbeAndLockSelectedPages @ 0x1403A1040 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiPageTableLockIsContended @ 0x1402E88A0 (MiPageTableLockIsContended.c)
 */

__int64 __fastcall MiProbePacketContended(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  _QWORD *v4; // r11
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned __int8 v7; // al
  __int64 *v8; // rax
  __int64 v9; // rcx
  unsigned int *MmInternal; // rax
  __int64 v11; // rax

  v3 = *(_QWORD *)(a1 + 40);
  v4 = (_QWORD *)(a1 + 112);
  v5 = 0;
  if ( v3 && (unsigned int)MiPageTableLockIsContended(*v4, v3, a3) )
    return 1LL;
  v6 = *v4;
  v7 = *(_DWORD *)(*v4 + 184LL) & 0xF;
  if ( v7 == 5 || v7 <= 4u )
  {
    v8 = &qword_140E37980;
    if ( (*(_DWORD *)(v6 + 184) & 0xF) != 1 )
      v8 = (__int64 *)(v6 + 192);
    v9 = *v8;
    MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
    v11 = MmInternal ? MmInternal[81] : 0LL;
    if ( (*(_DWORD *)((v11 << 6) + v9) & 0x40000000) != 0 )
      return 1LL;
  }
  LOBYTE(v5) = KeShouldYieldProcessor() != 0;
  return v5;
}
