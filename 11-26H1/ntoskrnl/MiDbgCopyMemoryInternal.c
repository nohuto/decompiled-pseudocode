/*
 * XREFs of MiDbgCopyMemoryInternal @ 0x1406FD8F0
 * Callers:
 *     MiDbgCopyMemory @ 0x1406FD730 (MiDbgCopyMemory.c)
 *     MiDbgCopyMemoryTarget @ 0x1406FDA80 (MiDbgCopyMemoryTarget.c)
 * Callees:
 *     MiGetVirtualAddressState @ 0x14024D274 (MiGetVirtualAddressState.c)
 *     MmIsAddressValidEx @ 0x14034DFD0 (MmIsAddressValidEx.c)
 *     MiDbgAllocatePatches @ 0x1406FD1E8 (MiDbgAllocatePatches.c)
 *     MiDbgCopyFromMemory @ 0x1406FD608 (MiDbgCopyFromMemory.c)
 *     MiDbgCopyToMemory @ 0x1406FDD64 (MiDbgCopyToMemory.c)
 *     MiDbgFillPatches @ 0x1406FDEF0 (MiDbgFillPatches.c)
 *     MiDbgMapPhysicalAddress @ 0x1406FE368 (MiDbgMapPhysicalAddress.c)
 *     MiDbgPteWriteInProgress @ 0x1406FEB70 (MiDbgPteWriteInProgress.c)
 *     MiDbgUnmapPhysicalAddress @ 0x1406FEC6C (MiDbgUnmapPhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x1406FED48 (MiDbgWriteCheck.c)
 */

__int64 __fastcall MiDbgCopyMemoryInternal(__int64 a1)
{
  int v1; // ebx
  unsigned int v2; // r14d
  unsigned __int64 v4; // rsi
  int Patches; // ebx
  int VirtualAddressState; // eax
  _BYTE *v7; // rsi
  unsigned int v8; // ebp
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]

  v1 = *(_DWORD *)a1;
  v2 = *(_DWORD *)(a1 + 16);
  v10 = 0LL;
  v11 = 0LL;
  if ( (v1 & 2) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( MmIsAddressValidEx(v4) )
    {
      VirtualAddressState = MiGetVirtualAddressState(a1 + 40, v4, 1);
    }
    else
    {
      if ( (v1 & 0x80u) == 0 )
      {
LABEL_4:
        Patches = -1073741823;
        goto LABEL_23;
      }
      VirtualAddressState = MiDbgPteWriteInProgress(a1);
    }
    Patches = VirtualAddressState;
    if ( VirtualAddressState < 0 )
    {
      stru_140E2EB88.SuspendEvent.Header.SignalState |= 1u;
      goto LABEL_23;
    }
  }
  v7 = (_BYTE *)MiDbgMapPhysicalAddress(a1);
  if ( !v7 )
    goto LABEL_4;
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    if ( (*(_DWORD *)a1 & 4) == 0 && *(_QWORD *)(a1 + 136) )
    {
      stru_140E2EB88.SuspendEvent.Header.SignalState |= 0x80u;
      goto LABEL_4;
    }
    v8 = MiDbgWriteCheck(a1);
    if ( !v8 )
    {
      Patches = -1073741585;
      goto LABEL_23;
    }
    if ( *(_QWORD *)(a1 + 136) )
    {
      Patches = MiDbgAllocatePatches((__int16)v7, v2, a1, (__int64)&v10);
      if ( Patches < 0 )
      {
        stru_140E2EB88.SuspendEvent.Header.SignalState |= 0x8000u;
        goto LABEL_23;
      }
      ((void (__fastcall *)(_BYTE *, _QWORD, __int128 *, __int64))MiDbgFillPatches)(v7, v2, &v10, 1LL);
    }
    Patches = MiDbgCopyToMemory(a1, v7, v8);
    if ( *(_QWORD *)(a1 + 136) )
    {
      ((void (__fastcall *)(_BYTE *, _QWORD, __int128 *, _QWORD))MiDbgFillPatches)(v7, v2, &v10, 0LL);
      _InterlockedCompareExchange(&ExpDebuggerWork, 1, 0);
    }
  }
  else
  {
    Patches = MiDbgCopyFromMemory(a1, v7);
  }
LABEL_23:
  if ( *(_QWORD *)(a1 + 96) )
    MiDbgUnmapPhysicalAddress(a1);
  return (unsigned int)Patches;
}
