/*
 * XREFs of KdEncodeDataBlock @ 0x1405E60E4
 * Callers:
 *     IopLiveDumpCollectPages @ 0x1405D1168 (IopLiveDumpCollectPages.c)
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 KdEncodeDataBlock()
{
  __int64 v0; // r9
  __int64 *v1; // rdx
  int v2; // r8d
  __int64 result; // rax

  if ( KdpBootedNodebug )
  {
    v0 = KiWaitNever;
    v1 = (__int64 *)&KdDebuggerDataBlock;
    KdpDataBlockEncoded = 1;
    v2 = 117;
    do
    {
      result = v0 ^ __ROR8__(
                      (unsigned __int64)&KdpDataBlockEncoded ^ _byteswap_uint64((__int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ *v1),
                      v0);
      *v1++ = result;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
