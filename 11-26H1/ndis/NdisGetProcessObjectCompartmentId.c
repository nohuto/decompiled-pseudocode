/*
 * XREFs of NdisGetProcessObjectCompartmentId @ 0x14003F1E0
 * Callers:
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x14003F0D0 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 * Callees:
 *     NdisGetJobObjectCompartmentId @ 0x14003F5E0 (NdisGetJobObjectCompartmentId.c)
 *     NdisGetSessionCompartmentId @ 0x14003F6A0 (NdisGetSessionCompartmentId.c)
 */

__int64 __fastcall NdisGetProcessObjectCompartmentId(__int64 a1)
{
  __int64 ProcessJob; // rax
  unsigned int ProcessSessionId; // eax

  ProcessJob = PsGetProcessJob();
  if ( ProcessJob )
    return NdisGetJobObjectCompartmentId(ProcessJob);
  ProcessSessionId = PsGetProcessSessionId(a1);
  return NdisGetSessionCompartmentId(ProcessSessionId);
}
