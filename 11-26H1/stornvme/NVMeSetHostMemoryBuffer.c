/*
 * XREFs of NVMeSetHostMemoryBuffer @ 0x14000DB20
 * Callers:
 *     NVMeControllerPowerDown @ 0x140007400 (NVMeControllerPowerDown.c)
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 *     NVMeInitHostMemoryBuffer @ 0x14000D7A0 (NVMeInitHostMemoryBuffer.c)
 *     NVMeControllerPreparePLDR @ 0x140017420 (NVMeControllerPreparePLDR.c)
 *     NVMeFreeHostMemoryBuffer @ 0x140017CC0 (NVMeFreeHostMemoryBuffer.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     NVMeIceConfigureExclusionAddress @ 0x1400315BC (NVMeIceConfigureExclusionAddress.c)
 *     memmove @ 0x140032740 (memmove.c)
 */

__int64 __fastcall NVMeSetHostMemoryBuffer(__int64 a1, char a2, char a3, unsigned int a4, void *Src, size_t Size)
{
  unsigned int v10; // r14d
  __int64 v11; // r8
  int v12; // r9d
  unsigned int i; // esi
  unsigned int v15; // ebp

  LocalCommandReuse(a1, a1 + 1008);
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
  SrbAssignQueueId(a1, a1 + 1016);
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4096LL) = 9;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4136LL) = 13;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4140LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4140LL) ^ (unsigned __int8)a2) & 1;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4140LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4140LL) ^ (unsigned __int8)(2 * a3)) & 2;
  v10 = 1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) >> 7) & 0xF) + 12);
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4144LL) = a4 / v10;
  memmove(*(void **)(a1 + 1656), Src, (unsigned int)Size);
  v11 = HIDWORD(*(_QWORD *)(a1 + 1664));
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4148LL) = *(_QWORD *)(a1 + 1664) & 0xFFFFFFF0;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4152LL) = v11;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4156LL) = (unsigned int)Size >> 4;
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, 1);
  if ( *(_BYTE *)(a1 + 1019) != 1 )
    return 3238002689LL;
  if ( (*(_DWORD *)(a1 + 4344) & 4) != 0 )
  {
    for ( i = 0; i < (unsigned int)Size >> 4; ++i )
    {
      LOBYTE(v12) = 1;
      v15 = NVMeIceConfigureExclusionAddress(
              a1,
              *((_QWORD *)Src + 2 * i),
              *((_DWORD *)Src + 4 * i + 2) * v10,
              v12,
              1,
              a2);
      if ( v15 )
      {
        if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
          StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
        return v15;
      }
    }
  }
  return 0LL;
}
