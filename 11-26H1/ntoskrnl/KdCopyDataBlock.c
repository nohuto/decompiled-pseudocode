/*
 * XREFs of KdCopyDataBlock @ 0x1405E5F14
 * Callers:
 *     KeCapturePersistentThreadState @ 0x140351340 (KeCapturePersistentThreadState.c)
 *     IoFillTriageDumpBuffer @ 0x1405C9264 (IoFillTriageDumpBuffer.c)
 *     KdDecodeDataBlock @ 0x1405E5FE0 (KdDecodeDataBlock.c)
 *     IopInitializeInMemoryDumpData @ 0x140CC04C0 (IopInitializeInMemoryDumpData.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KdCopyDataBlock(_OWORD *a1)
{
  char *v1; // rdx
  _OWORD *v2; // r8
  int v3; // r9d
  unsigned __int64 result; // rax
  __int64 v5; // rax
  __int128 v6; // xmm1

  v1 = (char *)&KdDebuggerDataBlock;
  v2 = a1;
  if ( KdpDataBlockEncoded )
  {
    v3 = 117;
    do
    {
      result = (unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ _byteswap_uint64((unsigned __int64)&KdpDataBlockEncoded ^ __ROL8__(KiWaitNever ^ *(_QWORD *)v1, KiWaitNever));
      *(_QWORD *)&v1[(char *)a1 - (char *)&KdDebuggerDataBlock] = result;
      v1 += 8;
      --v3;
    }
    while ( v3 );
  }
  else
  {
    v5 = 7LL;
    do
    {
      *v2 = *(_OWORD *)v1;
      v2[1] = *((_OWORD *)v1 + 1);
      v2[2] = *((_OWORD *)v1 + 2);
      v2[3] = *((_OWORD *)v1 + 3);
      v2[4] = *((_OWORD *)v1 + 4);
      v2[5] = *((_OWORD *)v1 + 5);
      v2[6] = *((_OWORD *)v1 + 6);
      v2 += 8;
      v6 = *((_OWORD *)v1 + 7);
      v1 += 128;
      *(v2 - 1) = v6;
      --v5;
    }
    while ( v5 );
    *v2 = *(_OWORD *)v1;
    v2[1] = *((_OWORD *)v1 + 1);
    result = *((_QWORD *)v1 + 4);
    *((_QWORD *)v2 + 4) = result;
  }
  return result;
}
