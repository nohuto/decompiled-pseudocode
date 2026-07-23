/*
 * XREFs of ExpRaiseHardError @ 0x140B3635C
 * Callers:
 *     NtRaiseHardError @ 0x140846660 (NtRaiseHardError.c)
 *     ExRaiseHardError @ 0x140B08E60 (ExRaiseHardError.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     ExpSystemErrorHandler @ 0x1405376F0 (ExpSystemErrorHandler.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     PsCaptureExceptionPort @ 0x140A9FC4C (PsCaptureExceptionPort.c)
 *     LpcSendWaitReceivePort @ 0x140ACD730 (LpcSendWaitReceivePort.c)
 */

__int64 __fastcall ExpRaiseHardError(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4,
        __int64 a5,
        int a6,
        unsigned int *a7)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // r14
  KPROCESSOR_MODE PreviousMode; // bl
  unsigned int v12; // edx
  char v14; // dl
  _KPROCESS *Process; // r11
  int v16; // ecx
  void *Blink; // rbx
  char v18; // di
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int *Teb; // rcx
  int v21; // eax
  const void *v22; // r14
  int v23; // esi
  unsigned int v24; // ecx
  unsigned int v25; // eax
  bool v26; // zf
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  __int64 v31; // [rsp+78h] [rbp-300h] BYREF
  int v32; // [rsp+80h] [rbp-2F8h] BYREF
  __int16 v33; // [rsp+84h] [rbp-2F4h]
  unsigned int v34; // [rsp+A8h] [rbp-2D0h]
  __int64 v35; // [rsp+B0h] [rbp-2C8h]
  int v36; // [rsp+B8h] [rbp-2C0h]
  unsigned int v37; // [rsp+BCh] [rbp-2BCh]
  unsigned int v38; // [rsp+C0h] [rbp-2B8h]
  unsigned int v39; // [rsp+C4h] [rbp-2B4h]
  char v40[616]; // [rsp+C8h] [rbp-2B0h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *a7 = 0;
  if ( v12 > 0x4D )
    return 3221225485LL;
  v14 = 0;
  if ( a6 == 6 )
  {
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( !PsIsCurrentThreadInServerSilo() )
      ExReadyForErrors = 0;
    LODWORD(CurrentServerSiloGlobals[54].Flink) = 2;
    v14 = 1;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v16 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10;
  if ( !v16 && (a1 & 0xC0000000) == 0xC0000000 && (!LODWORD(CurrentServerSiloGlobals[54].Flink) || v14) )
  {
    ExpSystemErrorHandler(a1, a2, a3, a5, PreviousMode != 0);
    return 0LL;
  }
  if ( Process == (_KPROCESS *)CurrentServerSiloGlobals[53].Flink )
  {
    if ( (a1 & 0xC0000000) == 0xC0000000 )
      ExpSystemErrorHandler(a1, a2, a3, a5, PreviousMode != 0);
LABEL_37:
    *a7 = 0;
    return 0LL;
  }
  Blink = 0LL;
  v18 = 0;
  if ( !v16 && (((__int64)Process[1].AvailableCpuState & 1) != 0 || (a1 & 0x10000000) != 0) )
  {
    Blink = PsCaptureExceptionPort((__int64)Process);
    if ( Blink )
      v18 = 1;
    else
      Blink = CurrentServerSiloGlobals[53].Blink;
  }
  if ( Blink
    && ((CurrentThread = KeGetCurrentThread(), (CurrentThread->MiscFlags & 0x400) != 0)
     || CurrentThread->ApcStateIndex == 1
      ? (Teb = 0LL)
      : (Teb = (unsigned int *)CurrentThread->Teb),
        Teb) )
  {
    v26 = (RtlReadULongFromUser(Teb + 1452) & 0x10) == 0;
    v21 = 0;
    if ( !v26 )
      v21 = -1073741823;
    v22 = a4;
    if ( v21 < 0 )
    {
      if ( v18 == 1 )
        ObfDereferenceObject(Blink);
      Blink = 0LL;
    }
  }
  else
  {
    v22 = a4;
  }
  if ( !Blink )
    goto LABEL_37;
  memset_0(&v32, 0, 0x70uLL);
  v32 = 7340104;
  v33 = 9;
  v34 = a1 & 0xEFFFFFFF;
  v36 = a6;
  v39 = a3;
  v38 = a2;
  if ( v22 )
    memmove(v40, v22, 8LL * a2);
  v35 = MEMORY[0xFFFFF78000000014];
  v31 = 688LL;
  v23 = LpcSendWaitReceivePort(Blink, 0x20000, (ULONG_PTR)&v32, (char *)&v32, &v31, 0LL);
  if ( v18 == 1 )
    ObfDereferenceObject(Blink);
  if ( v23 >= 0 )
  {
    v24 = v37;
    v25 = v37;
    if ( v37 > 5 )
    {
      v24 = v37 - 6;
      v26 = v37 == 6;
    }
    else
    {
      if ( v37 == 5 )
      {
LABEL_52:
        *a7 = v25;
        return (unsigned int)v23;
      }
      v26 = v37 == 0;
    }
    if ( !v26 )
    {
      v27 = v24 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 - 1 >= 2 )
            v25 = 0;
        }
      }
    }
    goto LABEL_52;
  }
  return (unsigned int)v23;
}
