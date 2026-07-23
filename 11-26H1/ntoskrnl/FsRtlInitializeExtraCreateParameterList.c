/*
 * XREFs of FsRtlInitializeExtraCreateParameterList @ 0x140B3A4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlInitializeExtraCreateParameterList(PECP_LIST EcpList)
{
  NTSTATUS result; // eax

  if ( !EcpList )
    return -1073741811;
  EcpList->EcpList.Blink = &EcpList->EcpList;
  EcpList->EcpList.Flink = &EcpList->EcpList;
  result = 0;
  *(_QWORD *)&EcpList->Signature = 1282433861LL;
  return result;
}
