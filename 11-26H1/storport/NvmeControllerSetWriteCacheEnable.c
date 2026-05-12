/*
 * XREFs of NvmeControllerSetWriteCacheEnable @ 0x1400D0A50
 * Callers:
 *     NvmeControllerInitPhase3 @ 0x1400F5D54 (NvmeControllerInitPhase3.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerSetWriteCacheEnable(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 ExtendedCommand; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax

  v2 = 0;
  v5 = 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 525LL) & 1) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 1096);
    if ( (v6 & 6) == 2
      && (((unsigned __int8)v6 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(a1 + 136) >> 19)) & 1) != 0 )
    {
      ExtendedCommand = NvmeControllerGetExtendedCommand((union _SLIST_HEADER *)a1);
      v5 = ExtendedCommand;
      if ( ExtendedCommand )
      {
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)ExtendedCommand
                                                                                        + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
        v8 = ExtendedCommand;
        *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerSetWriteCacheEnableCompletion;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
        v9 = *(_QWORD *)ExtendedCommand;
        v10 = *(_QWORD *)(a1 + 1096) & 1LL;
        v11 = *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4140LL) & 0xFFFFFFFE;
        *(_BYTE *)(v9 + 4096) = 9;
        *(_BYTE *)(v9 + 4136) = 6;
        *(_DWORD *)(v9 + 4140) = v10 | v11;
        v2 = NvmeControllerProcessCommandSync((PVOID)a1, v8);
      }
      else
      {
        v2 = -1073741670;
      }
    }
  }
  else
  {
    v2 = -1073741637;
  }
  NvmeControllerReclaimExtendedCommand((union _SLIST_HEADER *)a1, v5);
  return v2;
}
