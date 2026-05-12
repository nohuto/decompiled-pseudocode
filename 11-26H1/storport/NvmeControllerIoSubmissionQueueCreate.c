/*
 * XREFs of NvmeControllerIoSubmissionQueueCreate @ 0x1400F7BA8
 * Callers:
 *     NvmeControllerIoQueuesCreation @ 0x1400F6E10 (NvmeControllerIoQueuesCreation.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeControllerSetStorMQProperty @ 0x1400FAC28 (NvmeControllerSetStorMQProperty.c)
 */

__int64 __fastcall NvmeControllerIoSubmissionQueueCreate(__int64 a1, char a2)
{
  int v3; // r15d
  __int64 ExtendedCommand; // rdi
  unsigned __int16 i; // si
  __int64 v7; // rdx
  __int64 v8; // r14

  v3 = 0;
  ExtendedCommand = NvmeControllerGetExtendedCommand((union _SLIST_HEADER *)a1);
  if ( ExtendedCommand )
  {
    for ( i = 1; i <= *(_WORD *)(a1 + 22); ++i )
    {
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
      v7 = *(_QWORD *)ExtendedCommand;
      *(_BYTE *)(v7 + 4096) = 1;
      v8 = 192LL * i;
      *(_QWORD *)(v7 + 4120) = *(_QWORD *)(*(_QWORD *)(a1 + 728) + v8 - 184);
      *(_WORD *)(v7 + 4136) = i;
      *(_WORD *)(v7 + 4138) = *(_WORD *)(a1 + 8) - 1;
      *(_DWORD *)(v7 + 4140) = *(_DWORD *)(v7 + 4140) & 0xFFFFFFF8 | 5;
      *(_WORD *)(v7 + 4142) = *(_WORD *)(*(_QWORD *)(a1 + 728) + v8 - 54);
      v3 = NvmeControllerProcessCommandSync((PVOID)a1, ExtendedCommand);
      if ( v3 < 0 )
        break;
      if ( *(_BYTE *)(a1 + 1728) == 1 )
      {
        NvmeControllerSetStorMQProperty(a1, 0x80000000LL, 40LL);
        NvmeControllerSetStorMQProperty(a1, 2147483649LL, 40LL);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 728) + v8 - 152) )
          NvmeControllerSetStorMQProperty(a1, 2147483651LL, 40LL);
      }
    }
  }
  else
  {
    v3 = -1073741670;
  }
  NvmeControllerReclaimExtendedCommand((union _SLIST_HEADER *)a1, ExtendedCommand);
  return (unsigned int)v3;
}
