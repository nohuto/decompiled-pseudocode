/*
 * XREFs of NvmeControllerGetFeaturesSupportedCacheCapabilities @ 0x1400CF3F4
 * Callers:
 *     NvmeControllerInitPhase2 @ 0x1400F5A18 (NvmeControllerInitPhase2.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeVersionCheck @ 0x1400C6E18 (NvmeVersionCheck.c)
 */

__int64 __fastcall NvmeControllerGetFeaturesSupportedCacheCapabilities(union _SLIST_HEADER *a1, char a2)
{
  int v4; // esi
  __int64 v5; // rdi
  union _SLIST_HEADER *v7; // rcx
  __int64 v8; // r10
  __int64 ExtendedCommand; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax

  v4 = -1073741808;
  v5 = 0LL;
  if ( (*(_BYTE *)(a1[37].Alignment + 525) & 1) == 0 )
    return 3221225659LL;
  if ( !NvmeVersionCheck((__int64)a1, 1u, 0) || (*(_BYTE *)(v8 + 520) & 0x10) == 0 )
    goto LABEL_8;
  ExtendedCommand = NvmeControllerGetExtendedCommand(v7);
  v5 = ExtendedCommand;
  if ( !ExtendedCommand )
  {
    v4 = -1073741670;
LABEL_8:
    a1[68].Region &= ~4uLL;
    goto LABEL_9;
  }
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
  v10 = ExtendedCommand;
  *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeGetFeaturesSupportedCacheCapabilitiesCompletion;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
  v11 = *(_QWORD *)ExtendedCommand;
  *(_BYTE *)(v11 + 4136) = 6;
  v12 = *(_DWORD *)(v11 + 4136) & 0xFFFFFBFF;
  *(_BYTE *)(v11 + 4096) = 10;
  *(_DWORD *)(v11 + 4136) = v12 | 0x300;
  v4 = NvmeControllerProcessCommandSync(a1, v10);
  if ( v4 < 0 )
    goto LABEL_8;
LABEL_9:
  NvmeControllerReclaimExtendedCommand(a1, v5);
  return (unsigned int)v4;
}
