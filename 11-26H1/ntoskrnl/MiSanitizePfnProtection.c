/*
 * XREFs of MiSanitizePfnProtection @ 0x14033EED0
 * Callers:
 *     MiSectionProtectPageFilePte @ 0x1402B16A8 (MiSectionProtectPageFilePte.c)
 *     MiSectionProtectProtoPte @ 0x14033EE50 (MiSectionProtectProtoPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x14033EF54 (MiSetProtectionOnTransitionPte.c)
 *     MiCommitVadPreparePacket @ 0x140998470 (MiCommitVadPreparePacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSanitizePfnProtection(__int64 a1, int a2, unsigned int a3)
{
  int v3; // edx
  int v4; // eax
  unsigned int v6; // edx
  int v7; // edx

  if ( a3 == 24 )
    return 24LL;
  if ( a2 == 24
    && ((v6 = *(_DWORD *)(a1 + 48), (v6 & 0x80000) == 0)
      ? (v7 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 32LL) >> 1)
      : (v7 = v6 >> 5),
        a2 = v7 & 0x1F,
        a2 == 24)
    || (v3 = a2 & 0x18) == 0 )
  {
    v4 = a3 & 0x18;
    if ( v4 != 24 )
    {
      if ( v4 != 8 )
        return a3;
LABEL_6:
      a3 &= ~8u;
      return a3;
    }
    return a3 & 0xFFFFFFE7;
  }
  else
  {
    switch ( v3 )
    {
      case 16:
        goto LABEL_6;
      case 8:
        return a3 & 0xFFFFFFE7 | 8;
      case 24:
        return a3 | 0x18;
      default:
        return a3;
    }
  }
}
