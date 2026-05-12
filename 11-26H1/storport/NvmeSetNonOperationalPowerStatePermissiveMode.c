/*
 * XREFs of NvmeSetNonOperationalPowerStatePermissiveMode @ 0x1400D149C
 * Callers:
 *     NvmeControllerPowerUp @ 0x1400F8B94 (NvmeControllerPowerUp.c)
 *     NvmeControllerPowerSettingChangeNotification @ 0x140127220 (NvmeControllerPowerSettingChangeNotification.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeSetNonOperationalPowerStatePermissiveMode(union _SLIST_HEADER *a1, unsigned __int8 a2)
{
  _DWORD *v5; // roff
  __int64 ExtendedCommand; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx

  if ( (a1[60].Region & 8) != 0 )
    return 3221225486LL;
  if ( (a1[60].Region & 4) != 0 )
  {
    v5 = (_DWORD *)(*(_QWORD *)(a1[8].Alignment + 160) + 176LL);
    *v5 |= 0x20000u;
    *(_DWORD *)(*(_QWORD *)(a1[8].Alignment + 160) + 176LL) ^= (*(_DWORD *)(*(_QWORD *)(a1[8].Alignment + 160) + 176LL) ^ (a2 << 18)) & 0x40000;
    return 0LL;
  }
  else
  {
    ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
    v7 = ExtendedCommand;
    if ( ExtendedCommand )
    {
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x40u;
      *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
      v8 = *(_QWORD *)ExtendedCommand;
      v9 = *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4140LL);
      *(_BYTE *)(v8 + 4096) = 9;
      *(_BYTE *)(v8 + 4136) = 17;
      *(_DWORD *)(v8 + 4140) = v9 ^ ((unsigned __int8)v9 ^ a2) & 1;
      v10 = NvmeControllerProcessCommandSync(a1, v7);
      NvmeControllerReclaimExtendedCommand(a1, v7);
      return v10;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
