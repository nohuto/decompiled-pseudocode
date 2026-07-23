/*
 * XREFs of MmProcessWorkingSetControl @ 0x140AEC57C
 * Callers:
 *     VmpPauseResumeNotify @ 0x140822E14 (VmpPauseResumeNotify.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiEmptyWorkingSet @ 0x1403C545C (MiEmptyWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C5D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     MiLogWsEmptyControl @ 0x14070900C (MiLogWsEmptyControl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     PsSwapProcessWorkingSet @ 0x1407F67E8 (PsSwapProcessWorkingSet.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     SmStoreCompressionStart @ 0x140AEC880 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x140AEC924 (SmStoreCompressionStop.c)
 */

__int64 __fastcall MmProcessWorkingSetControl(
        ULONG_PTR BugCheckParameter1,
        void *a2,
        unsigned int a3,
        KPROCESSOR_MODE a4)
{
  __int64 result; // rax
  __int64 v7; // r9
  unsigned int v8; // ebx
  struct _KPROCESS *v9; // rdi
  int v10; // r14d
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 FirstArgument; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  unsigned int v16; // eax
  PVOID Object[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v18; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v19; // [rsp+58h] [rbp-60h]
  _OWORD v20[3]; // [rsp+60h] [rbp-58h] BYREF

  Object[1] = (PVOID)BugCheckParameter1;
  v18 = 0LL;
  v19 = 0;
  Object[0] = 0LL;
  memset(v20, 0, sizeof(v20));
  if ( a3 < 0xC )
    return 3221225476LL;
  if ( a4 )
    RtlCopyFromUser(&v18, a2, 0xCuLL);
  else
    RtlCopyVolatileMemory(&v18, a2, 0xCuLL);
  if ( (_DWORD)v18 != 3 )
    return 3221225561LL;
  if ( HIDWORD(v18) >= 2 )
    return 3221225485LL;
  if ( !HIDWORD(v18) && !SeSinglePrivilegeCheck(SeDebugPrivilege, a4) )
    return 3221225569LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             0x2000,
             (__int64)PsProcessType,
             a4,
             0x73576D4Du,
             Object,
             0LL,
             0LL);
  v8 = result;
  if ( (int)result >= 0 )
  {
    v9 = (struct _KPROCESS *)Object[0];
    if ( KeGetCurrentThread()->ApcState.Process == Object[0] )
    {
      v10 = 0;
    }
    else
    {
      v10 = 1;
      KiStackAttachProcess((_KPROCESS *)Object[0], 0, (__int64)v20);
    }
    if ( HIDWORD(v18) )
    {
      if ( HIDWORD(v18) != 1 )
      {
LABEL_24:
        if ( v10 )
          KiUnstackDetachProcess((__int64)v20, 0);
        ObfDereferenceObjectWithTag(v9, 0x73576D4Du);
        return v8;
      }
      v11 = v19;
      if ( (v19 & 0xFFFFFFC0) == 0 )
      {
        v12 = v19 & 2;
        if ( ((v19 & 2) == 0) != ((v19 & 1) == 0)
          || (v19 & 8) != 0 && (v19 & 2) == 0
          || (v19 & 0x10) != 0 && (v19 & 8) == 0 )
        {
          v8 = -1073741637;
          goto LABEL_24;
        }
        FirstArgument = (__int64)stru_140E366D8.FirstArgument;
        if ( stru_140E366D8.FirstArgument )
        {
          if ( *(_DWORD *)stru_140E366D8.FirstArgument )
          {
            if ( (*((_BYTE *)stru_140E366D8.FirstArgument + 16) & 0x10) != 0 )
            {
              FirstArgument = *((_QWORD *)stru_140E366D8.FirstArgument + 3);
              if ( (FirstArgument & 0x10) == FirstArgument )
              {
                MiLogWsEmptyControl(FirstArgument, (__int64)&v9[2].ReadyListHead.Blink);
                v11 = v19;
              }
            }
          }
        }
        v14 = ((unsigned int)v11 >> 3) & 4;
        if ( (v11 & 1) != 0 )
        {
          if ( (v11 & 8) != 0 )
            SmStoreCompressionStart(FirstArgument, v12);
          v8 = MiEmptyWorkingSetPrivatePagesByVa((__int64)&v9[2].ReadyListHead.Blink, v14, v11, v7);
          if ( (v19 & 8) != 0 )
            SmStoreCompressionStop((v19 >> 4) & 1);
          goto LABEL_24;
        }
        v15 = v14 | 1;
        if ( (v11 & 4) == 0 )
          v15 = v14;
        v16 = MiEmptyWorkingSet((__int64)&v9[2].ReadyListHead.Blink, v15);
        goto LABEL_35;
      }
    }
    else if ( (v19 & 0xFFFFFFFE) == 0 )
    {
      v16 = PsSwapProcessWorkingSet(v9, (v19 & 1) == 0);
LABEL_35:
      v8 = v16;
      goto LABEL_24;
    }
    v8 = -1073741811;
    goto LABEL_24;
  }
  return result;
}
