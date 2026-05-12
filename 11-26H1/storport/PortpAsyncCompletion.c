/*
 * XREFs of PortpAsyncCompletion @ 0x14003B140
 * Callers:
 *     <none>
 * Callees:
 *     PortpDisableCancel @ 0x14003B174 (PortpDisableCancel.c)
 *     PortpCompleteRequestIrp @ 0x14003B1EC (PortpCompleteRequestIrp.c)
 */

__int64 __fastcall PortpAsyncCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned __int8)PortpDisableCancel(*(_QWORD *)(a3 + 16)) )
    PortpCompleteRequestIrp(*(_QWORD *)(a3 + 16), a3);
  return 3221225494LL;
}
