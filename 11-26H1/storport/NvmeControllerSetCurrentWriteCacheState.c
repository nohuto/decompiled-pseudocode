/*
 * XREFs of NvmeControllerSetCurrentWriteCacheState @ 0x1400CFB68
 * Callers:
 *     NvmeNamespaceDiskSetCacheInformationIoctl @ 0x1401A577C (NvmeNamespaceDiskSetCacheInformationIoctl.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     BuildSetFeaturesCacheCommand @ 0x1400CE9F4 (BuildSetFeaturesCacheCommand.c)
 */

__int64 __fastcall NvmeControllerSetCurrentWriteCacheState(__int64 a1, char a2)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 ExtendedCommand; // rax

  v4 = 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 525LL) & 1) != 0 )
  {
    ExtendedCommand = NvmeControllerGetExtendedCommand((union _SLIST_HEADER *)a1);
    v4 = ExtendedCommand;
    if ( ExtendedCommand )
    {
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~0x40u;
      *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerSetCurrentWriteCacheStateCompletion;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
      BuildSetFeaturesCacheCommand(*(_QWORD *)ExtendedCommand + 4096LL, a2, (*(_BYTE *)(a1 + 1096) & 4) != 0);
      v5 = NvmeControllerProcessCommandSync((PVOID)a1, v4);
    }
    else
    {
      v5 = -1073741670;
    }
  }
  else
  {
    v5 = -1073741637;
  }
  NvmeControllerReclaimExtendedCommand((union _SLIST_HEADER *)a1, v4);
  return v5;
}
