/*
 * XREFs of ?MonitorStateChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403B5334
 * Callers:
 *     ?MonitorStateChangeThread@@YAXPEAX@Z @ 0x1403B51B0 (-MonitorStateChangeThread@@YAXPEAX@Z.c)
 * Callees:
 *     ?MakeAdapterIdle@DXGADAPTER@@QEAAXXZ @ 0x1403B5358 (-MakeAdapterIdle@DXGADAPTER@@QEAAXXZ.c)
 *     ?MakeAdapterActive@DXGADAPTER@@QEAAXXZ @ 0x1403B5428 (-MakeAdapterActive@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorStateChangeCallback(struct DXGADAPTER *a1, _BYTE *a2)
{
  if ( a2[40] )
    DXGADAPTER::MakeAdapterActive(a1);
  else
    DXGADAPTER::MakeAdapterIdle(a1);
  return 0LL;
}
