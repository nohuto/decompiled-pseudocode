/*
 * XREFs of RedistributeDeferredMsgsOnQueue @ 0x140069380
 * Callers:
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1400677E0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x14014B3C8 (-DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x14014B3F8 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 */

void __fastcall RedistributeDeferredMsgsOnQueue(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 48);
  v2 = a1;
  if ( v1 )
  {
    do
    {
      v3 = *(_QWORD *)(v1 + 8);
      if ( *(_QWORD *)(*(_QWORD *)(v1 + 104) + 472LL) != v2 )
      {
        RemoveQMsgFromDeferList((struct tagMLIST *)(v2 + 24), (struct tagQMSG *)v1);
        DeferMessage((struct tagMLIST *)(*(_QWORD *)(*(_QWORD *)(v4 + 104) + 472LL) + 24LL), (struct tagQMSG *)v4);
      }
      v1 = v3;
    }
    while ( v3 );
  }
}
