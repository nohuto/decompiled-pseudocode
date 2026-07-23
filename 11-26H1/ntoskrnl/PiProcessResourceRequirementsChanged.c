/*
 * XREFs of PiProcessResourceRequirementsChanged @ 0x1407A7BF4
 * Callers:
 *     PnpDeviceActionWorker @ 0x14047C410 (PnpDeviceActionWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PoFxIdleDevice @ 0x1404ABB10 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x1404CEAE4 (PoFxActivateDevice.c)
 *     PnpReallocateResources @ 0x1407B6408 (PnpReallocateResources.c)
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1409B01B0 (PipClearDevNodeFlags.c)
 */

__int64 __fastcall PiProcessResourceRequirementsChanged(__int64 a1)
{
  unsigned int v1; // esi
  _QWORD *v3; // rcx
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v3 = *(_QWORD **)(a1 + 16);
  v9 = 0LL;
  if ( v3 )
    v4 = *(_QWORD *)(v3[39] + 40LL);
  else
    v4 = 0LL;
  ObfReferenceObjectWithTag(v3, 0x65706E50u);
  v5 = *(_DWORD *)(v4 + 300);
  if ( v5 == 789 || v5 == 790 )
  {
    v1 = -1073741738;
  }
  else
  {
    PoFxActivateDevice(*(_QWORD *)(a1 + 16));
    *(_DWORD *)(v4 + 704) |= 0x40u;
    PipClearDevNodeFlags(v4, 256LL);
    PipSetDevNodeFlags(v4, 1024LL);
    PipClearDevNodeProblem(v4);
    if ( *(_DWORD *)(v4 + 300) == 778 )
    {
      if ( *(_BYTE *)(a1 + 40) )
        PipClearDevNodeFlags(v4, 2048LL);
      else
        PipSetDevNodeFlags(v4, 2048LL);
      PnpReallocateResources(v4);
      v6 = *(_QWORD *)(a1 + 48);
      LODWORD(v9) = 3;
      BYTE4(v9) = PnPBootDriversInitialized;
      PsReferenceSiloContext(*((void **)IopRootDeviceNode + 4));
      v7 = PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, a1, (unsigned int)&v9, 0, 0, v6 != 0, 0);
      if ( v7 >= 0 )
        v1 = v7;
    }
    else
    {
      v1 = -1073741823;
    }
  }
  if ( (*(_DWORD *)(v4 + 704) & 0x40) != 0 )
  {
    PoFxIdleDevice(*(_QWORD *)(v4 + 32));
    *(_DWORD *)(v4 + 704) &= ~0x40u;
  }
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 16), 0x65706E50u);
  return v1;
}
