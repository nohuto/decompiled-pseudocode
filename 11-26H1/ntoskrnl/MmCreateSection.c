/*
 * XREFs of MmCreateSection @ 0x140989F80
 * Callers:
 *     DifMmCreateSectionWrapper @ 0x14066A2E0 (DifMmCreateSectionWrapper.c)
 *     EtwpCoverageEnsureContext @ 0x140778B18 (EtwpCoverageEnsureContext.c)
 *     NtCreateIoRing @ 0x14079B5F0 (NtCreateIoRing.c)
 *     PspApiSetCopyToSystemSpace @ 0x1407F43A8 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x1407F539C (PspSiloInitializeUserSharedData.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x140988354 (PspSchedulerSharedDataRegionCreate.c)
 *     MiInitializeCfg @ 0x140D042E8 (MiInitializeCfg.c)
 *     MiInitializeApiSets @ 0x140D06550 (MiInitializeApiSets.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     MiCreateSection @ 0x14098B4B4 (MiCreateSection.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x14098BA5C (MiCaptureSectionCreateExtendedParameters.c)
 */

__int64 __fastcall MmCreateSection(
        int a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // r14d
  ULONGLONG v9; // rdx
  __int128 *v10; // rcx
  __int64 v11; // r13
  int ExtendedParameters; // ebx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  int v15; // ebx
  _KPROCESS *Process; // r15
  char PreviousMode; // r12
  char v18; // di
  void *v19; // rsi
  int SessionId; // eax
  int v21; // edx
  __int128 v23; // [rsp+78h] [rbp-29h] BYREF
  __int64 v24[2]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v25; // [rsp+98h] [rbp-9h]
  int v26; // [rsp+A0h] [rbp-1h]
  char v27; // [rsp+A4h] [rbp+3h]

  v8 = a6;
  v9 = 0LL;
  v10 = 0LL;
  v23 = 0LL;
  if ( (a6 & 0x7F) != 0 )
  {
    v8 = a6 & 0xFFFFFF80;
    *(_QWORD *)&v23 = 2LL;
    v10 = &v23;
    DWORD2(v23) = (a6 & 0x7F) - 1;
    v9 = 1LL;
  }
  v11 = *a4;
  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  *(_OWORD *)v24 = 0LL;
  ExtendedParameters = MiCaptureSectionCreateExtendedParameters(v10, v9, (__int64)v24);
  if ( ExtendedParameters >= 0 )
  {
    v15 = 0;
    Process = KeGetCurrentThread()->ApcState.Process;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v18 = BYTE1(Process[3].ActiveGroupsMask.Masks[1]);
      v19 = (void *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u, v13, v14);
    }
    else
    {
      v19 = 0LL;
      v18 = (v24[1] & 0x800000000LL) != 0 ? LOBYTE(v24[1]) : 0;
      v15 = (v24[1] & 0x800000000LL) != 0 ? 0x10 : 0;
    }
    SessionId = PsGetSessionIdEx((__int64)Process);
    v21 = v15 | 2;
    if ( !a8 )
      v21 = v15;
    ExtendedParameters = MiCreateSection(
                           a1,
                           a3,
                           v11,
                           a5,
                           v8,
                           v21,
                           (__int64)v19,
                           v18,
                           a7,
                           a8,
                           PreviousMode,
                           SessionId,
                           (__int64)v24);
    if ( v19 )
      ObfDereferenceObject(v19);
  }
  return (unsigned int)ExtendedParameters;
}
