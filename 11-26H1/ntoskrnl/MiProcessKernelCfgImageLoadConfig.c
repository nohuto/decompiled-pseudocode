/*
 * XREFs of MiProcessKernelCfgImageLoadConfig @ 0x140B07BEC
 * Callers:
 *     MiProcessLoadConfigForDriver @ 0x140B079E0 (MiProcessLoadConfigForDriver.c)
 *     MiInitializeKernelCfgImages @ 0x140D04E50 (MiInitializeKernelCfgImages.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiSetImageProtection @ 0x14038D6E0 (MiSetImageProtection.c)
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     MiCheckForDiscardableLongJumpTable @ 0x14070C868 (MiCheckForDiscardableLongJumpTable.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140775CFC (MiLogStrongCodeDriverLoadFailure.c)
 */

__int64 __fastcall MiProcessKernelCfgImageLoadConfig(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rsi
  _QWORD *v4; // rax
  __int64 v5; // rbx
  void (__fastcall **v6)(__int64); // r14
  __int64 (__fastcall **v7)(__int64, __int64); // r14
  __int64 (__fastcall **v8)(); // rcx
  __int64 (__fastcall *v9)(); // rax
  ULONG Size; // [rsp+38h] [rbp+10h] BYREF

  if ( (MiFlags & 0x100000) == 0 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 112);
  v3 = v2 ? MiSectionControlArea(v2) + 128 : 0LL;
  v4 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xAu, &Size);
  v5 = (__int64)v4;
  if ( !v4 )
    return 0LL;
  if ( *(_DWORD *)v4 < 0x78u || (v6 = (void (__fastcall **)(__int64))v4[14]) == 0LL )
  {
LABEL_9:
    if ( *(_DWORD *)v5 >= 0x80u )
    {
      v7 = *(__int64 (__fastcall ***)(__int64, __int64))(v5 + 120);
      if ( v7 )
      {
        if ( v3 && !(unsigned int)MiSetImageProtection(a1, *(_QWORD *)(v5 + 120), 8) )
        {
          MiLogStrongCodeDriverLoadFailure("CfgUnwritableLoadConfig", a1);
          *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 104;
          return 3221225595LL;
        }
        v8 = (__int64 (__fastcall **)())v7;
        *v7 = guard_dispatch_icall_no_overrides;
        v9 = KscpCfgDispatchUserCallTargetEsSmep;
        if ( (KeFeatureBits & 1) != 0 )
          v8 = (__int64 (__fastcall **)())v7;
        else
          v9 = KscpCfgDispatchUserCallTargetEsNoSmep;
        *v8 = v9;
        if ( v3 && *(_QWORD *)(v3 + 16) )
          MiSetImageProtection(a1, (unsigned __int64)v7, 8);
      }
    }
    if ( *(_DWORD *)v5 >= 0xC0u && (*(_DWORD *)(v5 + 144) & 0x10000) != 0 )
    {
      if ( *(_QWORD *)(v5 + 184) )
        MiCheckForDiscardableLongJumpTable(a1, v5);
    }
    return 0LL;
  }
  if ( !v3 )
  {
    *v6 = guard_check_icall_no_overrides;
    goto LABEL_9;
  }
  if ( (unsigned int)MiSetImageProtection(a1, v4[14], 8) )
  {
    *v6 = guard_check_icall_no_overrides;
    if ( *(_QWORD *)(v3 + 16) )
      MiSetImageProtection(a1, (unsigned __int64)v6, 8);
    goto LABEL_9;
  }
  MiLogStrongCodeDriverLoadFailure("CfgUnwritableLoadConfig", a1);
  *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 103;
  return 3221225595LL;
}
