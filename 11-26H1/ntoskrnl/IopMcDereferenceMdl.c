/*
 * XREFs of IopMcDereferenceMdl @ 0x1404111E8
 * Callers:
 *     IopMcReleaseMdl @ 0x140410BE8 (IopMcReleaseMdl.c)
 *     IopMcGetBuffer @ 0x140B02D9C (IopMcGetBuffer.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     IopMcTryUnlockMdl @ 0x1405D9F78 (IopMcTryUnlockMdl.c)
 */

__int64 __fastcall IopMcDereferenceMdl(ULONG_PTR BugCheckParameter2, KPRIORITY a2)
{
  ULONG_PTR v2; // rbp
  signed __int32 v4; // edi
  bool v5; // zf
  bool v6; // sf
  bool v7; // of
  int v8; // edi
  int v10; // esi

  v2 = *(_QWORD *)(BugCheckParameter2 + 56);
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 48), 0xFFFFFFFF);
  v7 = __OFSUB__(v4, 1);
  v5 = v4 == 1;
  v6 = v4 - 1 < 0;
  v8 = v4 - 1;
  if ( v6 ^ v7 | v5 )
  {
    if ( v8 < 0 )
      KeBugCheckEx(0x1F4u, 2uLL, BugCheckParameter2, v8, *(_QWORD *)BugCheckParameter2);
    v10 = *(_DWORD *)(BugCheckParameter2 + 12);
    if ( !*(_DWORD *)(BugCheckParameter2 + 48) )
    {
      if ( (v10 & 2) != 0 )
        KeSetEvent((PRKEVENT)(BugCheckParameter2 + 64), a2, 0);
      if ( (v10 & 1) != 0 )
        IopMcTryUnlockMdl(BugCheckParameter2, v2);
    }
  }
  return (unsigned int)v8;
}
