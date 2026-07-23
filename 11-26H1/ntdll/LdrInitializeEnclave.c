/*
 * XREFs of LdrInitializeEnclave @ 0x180090FD0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x1800364A0 (LdrpObtainLockedEnclave.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x180090EF4 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800911BC (LdrpUnlockAndDereferenceEnclave.c)
 *     ZwInitializeEnclave @ 0x180160F10 (ZwInitializeEnclave.c)
 *     NtTerminateEnclave @ 0x180162870 (NtTerminateEnclave.c)
 *     RtlCallEnclave @ 0x180163000 (RtlCallEnclave.c)
 */

NTSTATUS __cdecl LdrInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  int v7; // esi
  __int64 *v10; // rax
  PVOID *v11; // rdi
  _DWORD *v12; // rbx
  _DWORD *v13; // r14
  _DWORD *v14; // rax
  _DWORD *v15; // rcx
  bool v16; // zf
  __int64 v18; // [rsp+38h] [rbp-30h] BYREF

  v7 = 0;
  v18 = 0LL;
  v10 = LdrpObtainLockedEnclave((unsigned __int64)BaseAddress, 1);
  v11 = (PVOID *)v10;
  if ( !v10 || (v12 = v10 + 7, *((_DWORD *)v10 + 14) != 16) || (v13 = v10 + 8, !*((_DWORD *)v10 + 16)) )
  {
    v12 = v10 + 7;
    v7 = ZwInitializeEnclave(ProcessHandle, BaseAddress, EnclaveInformation, EnclaveInformationLength, EnclaveError);
    if ( v7 < 0 )
      goto LABEL_3;
    v13 = v11 + 8;
    v14 = v11 + 7;
    v15 = v11 + 8;
    if ( !v11 )
      return v7;
LABEL_6:
    v16 = *v14 == 16;
    *v15 = 1;
    if ( v16 )
    {
      v7 = RtlCallEnclave(v11[9], 0LL, 0LL, &v18);
      if ( v7 < 0 )
        NtTerminateEnclave(v11[9], 0);
      else
        *v13 = 2;
      goto LABEL_9;
    }
LABEL_3:
    if ( !v11 )
      return v7;
    goto LABEL_9;
  }
  if ( *v13 == 1 )
  {
    v14 = v10 + 7;
    v15 = v13;
    goto LABEL_6;
  }
  v7 = -1073741502;
LABEL_9:
  if ( *v12 == 16 )
    LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry(v7);
  LdrpUnlockAndDereferenceEnclave(v11);
  return v7;
}
