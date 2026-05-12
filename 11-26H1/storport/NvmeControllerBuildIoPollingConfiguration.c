/*
 * XREFs of NvmeControllerBuildIoPollingConfiguration @ 0x1400CEA24
 * Callers:
 *     NvmeControllerInitPhase1 @ 0x1400F570C (NvmeControllerInitPhase1.c)
 *     NvmeControllerInitPhase2 @ 0x1400F5A18 (NvmeControllerInitPhase2.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline @ 0x14005D160 (Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 */

_WORD *__fastcall NvmeControllerBuildIoPollingConfiguration(__int64 a1, char a2)
{
  __int64 ExtendedCommand; // rsi
  __int64 v5; // r8
  int DmaBuffer; // ebp
  __int64 v7; // rbx
  int v8; // r8d
  _BYTE *v9; // rcx
  unsigned __int8 v10; // dl
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r8
  int v16; // eax
  _WORD *result; // rax
  __int16 v18; // cx
  __int16 v19; // cx
  __int128 v20; // [rsp+30h] [rbp-18h] BYREF

  v20 = 0LL;
  ExtendedCommand = NvmeControllerGetExtendedCommand((union _SLIST_HEADER *)a1);
  if ( ExtendedCommand )
  {
    DmaBuffer = NvmeAllocateDmaBuffer(a1, 0x1000u, v5, (void **)&v20, (_QWORD *)&v20 + 1, 0);
    if ( DmaBuffer >= 0 )
    {
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)ExtendedCommand
                                                                                      + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
      *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
      *(_OWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = v20;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 4096;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerBuildIoPollingConfigurationCompletion;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
      v12 = *(_QWORD *)ExtendedCommand;
      v13 = *((_QWORD *)&v20 + 1);
      *(_BYTE *)(v12 + 4096) = 10;
      *(_QWORD *)(v12 + 4120) = v13;
      *(_BYTE *)(v12 + 4136) = -48;
      DmaBuffer = NvmeControllerProcessCommandSync((PVOID)a1, ExtendedCommand);
      if ( DmaBuffer >= 0 )
      {
        v7 = a1 + 1736;
        goto LABEL_4;
      }
    }
  }
  else
  {
    DmaBuffer = -1073741670;
  }
  v7 = a1 + 1736;
  **(_BYTE **)(a1 + 1736) = 0;
LABEL_4:
  NvmeControllerReclaimExtendedCommand((union _SLIST_HEADER *)a1, ExtendedCommand);
  NvmeFreeDmaBuffer(a1, 4096, v8, v20, *((__int64 *)&v20 + 1));
  if ( !**(_BYTE **)v7 && *(_BYTE *)(*(_QWORD *)(a1 + 1048) + 32LL) )
    **(_BYTE **)v7 = 1;
  v9 = *(_BYTE **)v7;
  if ( **(_BYTE **)v7 )
  {
    v10 = v9[24];
    if ( v10 )
    {
      v7 = a1 + 1736;
      v11 = v9[24];
      if ( v10 > 0x64u )
        v11 = 100;
    }
    else
    {
      v11 = *(_BYTE *)(*(_QWORD *)(a1 + 1048) + 32LL);
    }
    v9[4] = v11;
    v14 = *(_DWORD *)(*(_QWORD *)v7 + 28LL);
    if ( !v14 )
      v14 = *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 44LL);
    *(_DWORD *)(*(_QWORD *)v7 + 8LL) = v14;
    v15 = *(_QWORD *)v7;
    v16 = *(_DWORD *)(*(_QWORD *)v7 + 32LL);
    if ( (v16 & 1) != 0 )
    {
      *(_DWORD *)(v15 + 12) = v16;
    }
    else
    {
      *(_DWORD *)(v15 + 12) ^= ((unsigned __int8)*(_DWORD *)(v15 + 12) ^ (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(a1 + 1048) + 76LL) >> 1)) & 2;
      *(_DWORD *)(*(_QWORD *)v7 + 12LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v7 + 12LL) ^ (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(a1 + 1048) + 76LL) >> 1)) & 4;
      *(_DWORD *)(*(_QWORD *)v7 + 12LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v7 + 12LL) ^ (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(a1 + 1048) + 76LL) >> 1)) & 8;
      *(_DWORD *)(*(_QWORD *)v7 + 12LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v7 + 12LL) ^ (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(a1 + 1048) + 76LL) >> 1)) & 0x10;
      *(_DWORD *)(*(_QWORD *)v7 + 12LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v7 + 12LL) ^ (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(a1 + 1048) + 76LL) >> 1)) & 0x20;
      *(_DWORD *)(*(_QWORD *)v7 + 12LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v7 + 12LL) ^ (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(a1 + 1048) + 76LL) >> 1)) & 0x40;
      *(_DWORD *)(*(_QWORD *)v7 + 12LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v7 + 12LL) ^ (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(a1 + 1048) + 76LL) >> 1)) & 0x80;
    }
  }
  result = (_WORD *)Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    if ( DmaBuffer >= 0 )
    {
      result = *(_WORD **)v7;
      if ( *(_WORD *)(*(_QWORD *)v7 + 20LL) >= 0x101u )
      {
        v18 = result[18];
        if ( v18 )
        {
          result[8] = v18;
          *(_DWORD *)(*(_QWORD *)(a1 + 128) + 1108LL) = *(unsigned __int16 *)(*(_QWORD *)v7 + 16LL);
        }
        result = *(_WORD **)v7;
        v19 = *(_WORD *)(*(_QWORD *)v7 + 38LL);
        if ( v19 )
          result[9] = v19;
      }
    }
  }
  return result;
}
