/*
 * XREFs of PiProcessReenumeration @ 0x140AC6B74
 * Callers:
 *     PnpDeviceActionWorker @ 0x140482AA0 (PnpDeviceActionWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PipProcessDevNodeTree @ 0x14090C86C (PipProcessDevNodeTree.c)
 *     PipClearDevNodeFlags @ 0x14090E080 (PipClearDevNodeFlags.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140AC6C40 (PiMarkDeviceTreeForReenumeration.c)
 */

__int64 __fastcall PiProcessReenumeration(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rsi
  int v5; // eax
  int v7; // edi
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = *(_QWORD **)(a1 + 16);
  v4 = *(_QWORD *)(v3[39] + 40LL);
  v5 = *(_DWORD *)(v4 + 300);
  if ( v5 == 789 || v5 == 790 )
  {
    ObfDereferenceObject(v3);
    return 3221225558LL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 24) == 8 )
    {
      if ( *(_BYTE *)(a1 + 40) )
        PipClearDevNodeFlags(*(_QWORD *)(v3[39] + 40LL), 0x80000000);
      v7 = 1;
    }
    else
    {
      v7 = 2;
    }
    LOBYTE(a2) = v7 != 1;
    PiMarkDeviceTreeForReenumeration(v4, a2);
    BYTE4(v8) = PnPBootDriversInitialized;
    LODWORD(v8) = 3;
    PipProcessDevNodeTree(v4, a1, (int)&v8, v7, 0, 0, 0);
    return 0LL;
  }
}
