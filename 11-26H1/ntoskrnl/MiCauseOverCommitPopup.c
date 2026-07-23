/*
 * XREFs of MiCauseOverCommitPopup @ 0x1404B61B4
 * Callers:
 *     MiChargeCommitSlow @ 0x1402D6E68 (MiChargeCommitSlow.c)
 *     MiCreateCommit @ 0x1404C9260 (MiCreateCommit.c)
 *     MiPageFileNoFreeSpace @ 0x14050BDA8 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     IoRaiseInformationalHardError @ 0x1404D9300 (IoRaiseInformationalHardError.c)
 */

char __fastcall MiCauseOverCommitPopup(__int64 a1)
{
  __int64 v1; // r8
  NTSTATUS v2; // r9d
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rcx
  signed __int32 v5; // eax
  signed __int32 v6; // r8d

  v1 = *(_QWORD *)(a1 + 23448);
  v2 = -1073741523;
  v3 = *(_QWORD *)(a1 + 17224);
  v4 = (volatile signed __int32 *)(a1 + 17232);
  if ( v1 != v3 )
  {
    ++v4;
    v2 = -1073741112;
  }
  v5 = *v4;
  do
  {
    if ( v5 == -1 )
      break;
    v6 = v5;
    v5 = _InterlockedCompareExchange(v4, v5 + 1, v5);
  }
  while ( v6 != v5 );
  if ( !v5 )
    LOBYTE(v5) = IoRaiseInformationalHardError(v2, 0LL, 0LL);
  return v5;
}
