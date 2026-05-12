/*
 * XREFs of NvmeControllerIoCompletionQueueCreate @ 0x1400F69A4
 * Callers:
 *     NvmeControllerIoQueuesCreation @ 0x1400F6E10 (NvmeControllerIoQueuesCreation.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeControllerSetStorMQProperty @ 0x1400FAC28 (NvmeControllerSetStorMQProperty.c)
 */

__int64 __fastcall NvmeControllerIoCompletionQueueCreate(__int64 a1, char a2)
{
  __int64 ExtendedCommand; // rsi
  int v5; // r14d
  unsigned __int16 i; // di
  __int64 v7; // r8
  unsigned __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx

  ExtendedCommand = NvmeControllerGetExtendedCommand((union _SLIST_HEADER *)a1);
  if ( ExtendedCommand )
  {
    for ( i = 1; i <= *(_WORD *)(a1 + 26); ++i )
    {
      v7 = *(_QWORD *)(a1 + 864);
      v8 = (unsigned __int64)i << 7;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)ExtendedCommand
                                                                                      + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
      *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
      v9 = *(_QWORD *)(a1 + 864);
      LOBYTE(v7) = *(_BYTE *)(v7 + v8 - 48);
      v10 = *(_QWORD *)ExtendedCommand;
      v11 = *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4140LL) | 1;
      *(_BYTE *)(v10 + 4096) = 5;
      *(_QWORD *)(v10 + 4120) = *(_QWORD *)(v9 + v8 - 120);
      *(_WORD *)(v10 + 4136) = i;
      *(_WORD *)(v10 + 4138) = *(_WORD *)(a1 + 8) - 1;
      v12 = v11 | 2;
      v13 = v11 & 0xFFFFFFFD;
      if ( (_BYTE)v7 != 1 )
        v13 = v12;
      *(_DWORD *)(v10 + 4140) = v13;
      *(_WORD *)(v10 + 4142) = *(_WORD *)(v9 + v8 - 104);
      v5 = NvmeControllerProcessCommandSync((PVOID)a1, ExtendedCommand);
      if ( v5 < 0 )
        goto LABEL_12;
      if ( *(_BYTE *)(a1 + 1728) == 1 )
        NvmeControllerSetStorMQProperty(a1, 0x80000000LL, 40LL);
    }
    v5 = 0;
  }
  else
  {
    v5 = -1073741670;
  }
LABEL_12:
  NvmeControllerReclaimExtendedCommand((union _SLIST_HEADER *)a1, ExtendedCommand);
  return (unsigned int)v5;
}
