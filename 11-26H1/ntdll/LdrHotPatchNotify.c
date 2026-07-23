/*
 * XREFs of LdrHotPatchNotify @ 0x18015B7C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetProcedureAddress @ 0x180030D90 (LdrpGetProcedureAddress.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18008FFAC (LdrpLogEtwHotPatchStatus.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015BBAC (LdrpIsCurrentPatchLatest.c)
 *     LdrpLoadPatchImage @ 0x18015BD30 (LdrpLoadPatchImage.c)
 *     NtWaitForSingleObject @ 0x18015EEC0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwQueryInformationThread @ 0x18015F2E0 (ZwQueryInformationThread.c)
 *     NtCreateThreadEx @ 0x180160750 (NtCreateThreadEx.c)
 */

__int64 __fastcall LdrHotPatchNotify(PVOID Argument, __int64 a2, __int64 a3, char *a4)
{
  int LoadedDllByHandle; // ebx
  int WowTebOffset; // esi
  bool v8; // al
  _OWORD ThreadInformation[2]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v10; // [rsp+80h] [rbp+37h]
  int v11; // [rsp+88h] [rbp+3Fh]
  PUSER_THREAD_START_ROUTINE StartRoutine; // [rsp+B0h] [rbp+67h] BYREF
  HANDLE ThreadHandle; // [rsp+B8h] [rbp+6Fh] BYREF
  PVOID BaseAddress; // [rsp+C0h] [rbp+77h] BYREF

  ThreadHandle = LdrHotPatchNotify;
  LOBYTE(StartRoutine) = 0;
  if ( !LdrpIsHotPatchingEnabled )
    return 3221225659LL;
  v10 = 0LL;
  v11 = 0;
  memset(ThreadInformation, 0, sizeof(ThreadInformation));
  ThreadHandle = 0LL;
  BaseAddress = 0LL;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(Argument, (__int64 *)&BaseAddress, 0LL, a4);
  WowTebOffset = NtCurrentTeb()->WowTebOffset;
  v8 = Argument == NtCurrentPeb()->ImageBaseAddress && WowTebOffset > 0;
  if ( LoadedDllByHandle < 0 || v8 )
  {
    if ( WowTebOffset > 0 && (unsigned __int64)Argument <= 0xFFFFFFFF )
    {
      StartRoutine = 0LL;
      LdrpGetProcedureAddress(
        LdrSystemDllInitBlock.Wow64SharedInformation[6],
        "LdrHotPatchNotify",
        0,
        (char **)&StartRoutine);
      LoadedDllByHandle = NtCreateThreadEx(
                            &ThreadHandle,
                            0x1FFFFFu,
                            0LL,
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            StartRoutine,
                            Argument,
                            0,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
      if ( LoadedDllByHandle >= 0 )
      {
        NtWaitForSingleObject(ThreadHandle, 0, 0LL);
        LoadedDllByHandle = ZwQueryInformationThread(
                              ThreadHandle,
                              ThreadBasicInformation,
                              ThreadInformation,
                              0x30u,
                              0LL);
        if ( LoadedDllByHandle >= 0 )
          LoadedDllByHandle = ThreadInformation[0];
      }
    }
  }
  else
  {
    LoadedDllByHandle = LdrpIsCurrentPatchLatest(Argument, &StartRoutine);
    if ( LoadedDllByHandle >= 0 && (_BYTE)StartRoutine != 1 )
      LoadedDllByHandle = LdrpLoadPatchImage((__int64)Argument);
  }
  if ( BaseAddress )
    LdrpDereferenceModule((char *)BaseAddress);
  if ( ThreadHandle )
    NtClose(ThreadHandle);
  if ( WowTebOffset <= 0 && LoadedDllByHandle < 0 )
    LdrpLogEtwHotPatchStatus((unsigned __int16 *)(LdrpImageEntry + 88), 0LL, 0LL, LoadedDllByHandle, 8);
  return (unsigned int)LoadedDllByHandle;
}
