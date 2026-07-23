/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x1402692E4
 * Callers:
 *     MiSynchronousPageWrite @ 0x14026AA34 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14026ACAC (MiIssueSynchronousFlush.c)
 *     IoPageReadEx @ 0x14026B300 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14026C270 (IoSetDiskIoAttributionFromThread.c)
 *     IoAsynchronousPageWrite @ 0x14026D9C4 (IoAsynchronousPageWrite.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x14026E310 (IopSetDiskIoAttributionFromProcess.c)
 *     IoMakeAssociatedIrpPriv @ 0x1404578A8 (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateIrpExtensionEx @ 0x1404662A0 (IoPropagateIrpExtensionEx.c)
 *     IoUpdateIrpIoAttributionHandle @ 0x1404C2970 (IoUpdateIrpIoAttributionHandle.c)
 * Callees:
 *     IopReferenceIoAttributionFromProcess @ 0x1404613A0 (IopReferenceIoAttributionFromProcess.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopSetDiskIoAttributionExtension(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _WORD *v4; // rbx
  __int64 v7; // rbp
  __int64 v9; // rcx
  _WORD *v11; // rax
  __int64 Pool2; // rax
  char v13; // al
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v4 = *(_WORD **)(a1 + 200);
  v7 = a2;
  if ( v4 )
  {
    if ( *(char *)(a1 + 71) >= 0 )
    {
      v4[1] |= 0x40u;
      goto LABEL_5;
    }
    Pool2 = ExAllocatePool2(0x40uLL);
    v4 = (_WORD *)Pool2;
    if ( Pool2 )
    {
      *(_WORD *)(Pool2 + 2) = 68;
      *(_DWORD *)(Pool2 + 4) = *(_DWORD *)(a1 + 200);
      v13 = *(_BYTE *)(a1 + 71) & 0x3F;
      *(_QWORD *)(a1 + 200) = v4;
      *(_BYTE *)(a1 + 71) = v13 | 0x40;
      *v4 |= 1u;
      goto LABEL_5;
    }
  }
  else
  {
    v11 = (_WORD *)ExAllocatePool2(0x40uLL);
    v4 = v11;
    if ( v11 )
    {
      v11[1] = 64;
      *(_BYTE *)(a1 + 71) |= 0x40u;
      *(_QWORD *)(a1 + 200) = v11;
      *v11 |= 1u;
      goto LABEL_5;
    }
  }
  if ( !v4 )
    return 3221225626LL;
LABEL_5:
  v9 = *(_QWORD *)(a3 + 544);
  if ( (*(_DWORD *)(v9 + 1532) & 0x1000) != 0
    && *(_QWORD *)(v9 + 672)
    && *(_QWORD *)(*(_QWORD *)(v9 + 672) + 1584LL)
    && (a4 & 1) == 0 )
  {
    LOBYTE(a2) = 1;
    IopReferenceIoAttributionFromProcess(v9, a2, &v14);
    v7 = v14;
  }
  *((_QWORD *)v4 + 2) = v7;
  return 0LL;
}
