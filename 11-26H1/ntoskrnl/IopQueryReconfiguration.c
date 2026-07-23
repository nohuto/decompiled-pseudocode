/*
 * XREFs of IopQueryReconfiguration @ 0x1407B5AD8
 * Callers:
 *     PnpCancelStopDeviceNode @ 0x1407B6B34 (PnpCancelStopDeviceNode.c)
 *     PnpQueryStopDeviceNode @ 0x1407B6F6C (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x1407B73A4 (PnpStopDeviceSubtree.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopSynchronousCall @ 0x1409B0720 (IopSynchronousCall.c)
 */

__int64 __fastcall IopQueryReconfiguration(char a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // r9
  int v5; // eax
  bool v6; // zf
  _BYTE v8[88]; // [rsp+30h] [rbp-58h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  if ( a1 == 4 )
  {
    if ( *(_DWORD *)(v4 + 300) == 779 )
      goto LABEL_8;
  }
  else
  {
    if ( a1 == 5 )
    {
      v6 = *(_DWORD *)(v4 + 300) == 778;
    }
    else
    {
      if ( a1 != 6 )
        return 3221225473LL;
      v5 = *(_DWORD *)(v4 + 300);
      if ( v5 == 779 )
      {
LABEL_8:
        memset_0(v8, 0, 0x48uLL);
        v8[0] = 27;
        v8[1] = a1;
        return IopSynchronousCall(v2, (unsigned int)v8, -1073741637, 0, 0LL);
      }
      v6 = v5 == 778;
    }
    if ( v6 )
      goto LABEL_8;
  }
  return 3221225473LL;
}
