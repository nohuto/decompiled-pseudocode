/*
 * XREFs of MiDbgCopyMemoryInternal @ 0x1407025C0
 * Callers:
 *     MiDbgCopyMemory @ 0x140702400 (MiDbgCopyMemory.c)
 *     MiDbgCopyMemoryTarget @ 0x140702750 (MiDbgCopyMemoryTarget.c)
 * Callees:
 *     MiGetVirtualAddressState @ 0x14024EBD4 (MiGetVirtualAddressState.c)
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     MiDbgAllocatePatches @ 0x140701EB8 (MiDbgAllocatePatches.c)
 *     MiDbgCopyFromMemory @ 0x1407022D8 (MiDbgCopyFromMemory.c)
 *     MiDbgCopyToMemory @ 0x140702A34 (MiDbgCopyToMemory.c)
 *     MiDbgFillPatches @ 0x140702BC0 (MiDbgFillPatches.c)
 *     MiDbgMapPhysicalAddress @ 0x140703038 (MiDbgMapPhysicalAddress.c)
 *     MiDbgPteWriteInProgress @ 0x140703840 (MiDbgPteWriteInProgress.c)
 *     MiDbgUnmapPhysicalAddress @ 0x14070393C (MiDbgUnmapPhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x140703A18 (MiDbgWriteCheck.c)
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
      stru_140E2ED08.SuspendEvent.Header.SignalState |= 1u;
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
      stru_140E2ED08.SuspendEvent.Header.SignalState |= 0x80u;
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
        stru_140E2ED08.SuspendEvent.Header.SignalState |= 0x8000u;
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
