/*
 * XREFs of CmFcpSubscribeScmWnfStateChange @ 0x1406E704C
 * Callers:
 *     CmFcpManagerSoftwareHiveReady @ 0x140867DA0 (CmFcpManagerSoftwareHiveReady.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 */

__int64 __fastcall CmFcpSubscribeScmWnfStateChange(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 1824);
  result = ExSubscribeWnfStateChange(
             (int)a1 + 1824,
             (unsigned int)&WNF_SCM_AUTOSTART_STATE,
             1,
             0,
             (__int64)CmFcpWnfScmStateChangeNotificationCallback,
             a1 + 1832);
  if ( (int)result < 0 )
    *v1 = 0LL;
  return result;
}
