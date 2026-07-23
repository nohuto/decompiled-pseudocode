/*
 * XREFs of MiSectionProtectProtoPte @ 0x14033EE50
 * Callers:
 *     MiSectionProtectAllPtes @ 0x1402E5F80 (MiSectionProtectAllPtes.c)
 * Callees:
 *     MiMakePrototypePteVadLookup @ 0x1402B1B50 (MiMakePrototypePteVadLookup.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiSanitizePfnProtection @ 0x14033EED0 (MiSanitizePfnProtection.c)
 */

__int64 __fastcall MiSectionProtectProtoPte(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // eax
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // r10
  unsigned __int64 v10; // r9
  char v11; // al
  unsigned __int64 PrototypePteVadLookup; // rax
  unsigned __int64 *v13; // r11

  v3 = a3;
  if ( !*(_BYTE *)(a1 + 89) )
  {
    LOBYTE(v4) = MiIsPrototypePteVadLookup(a3);
    if ( v4 )
    {
      if ( (v3 & 0xA0) == 0xA0 )
        ++*(_QWORD *)(v5 + 96);
    }
  }
  LOBYTE(v6) = MiIsPrototypePteVadLookup(v3);
  if ( v6 )
    v10 = v8 >> 5;
  else
    LODWORD(v10) = *(_DWORD *)(*(_QWORD *)(v9 + 80) + 32LL) >> 1;
  v11 = MiSanitizePfnProtection(v9, v10 & 0x1F, *(unsigned int *)(v7 + 56));
  PrototypePteVadLookup = MiMakePrototypePteVadLookup(v11);
  *v13 = PrototypePteVadLookup;
  return 0LL;
}
