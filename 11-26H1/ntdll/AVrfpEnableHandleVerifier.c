/*
 * XREFs of AVrfpEnableHandleVerifier @ 0x180137F58
 * Callers:
 *     AVrfpEnableVerifierOptions @ 0x180120D44 (AVrfpEnableVerifierOptions.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     NtSetInformationProcess @ 0x18015F1C0 (NtSetInformationProcess.c)
 */

__int64 AVrfpEnableHandleVerifier()
{
  NTSTATUS v0; // ebx
  NTSTATUS v1; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 ProcessInformation; // [rsp+38h] [rbp+10h] BYREF

  ProcessInformation = 0LL;
  if ( !AVrfpHandleTraces
    || (HIDWORD(ProcessInformation) = AVrfpHandleTraces,
        v0 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandleTracing, &ProcessInformation, 8u),
        v0 < 0) )
  {
    v3 = 0;
    v1 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandleTracing, &v3, 4u);
    v0 = v1;
    if ( v1 < 0 )
      DbgPrint("AVRF: failed to enable handle checking (status %X) \n", v1);
  }
  return (unsigned int)v0;
}
