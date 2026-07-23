/*
 * XREFs of KiContinuePreviousModeUser @ 0x1403D8A40
 * Callers:
 *     KiContinueEx @ 0x1403D8880 (KiContinueEx.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x1403D8DF0 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403D9A10 (RtlGetExtendedContextLength.c)
 *     RtlpValidateContextFlags @ 0x1403D9B20 (RtlpValidateContextFlags.c)
 *     KeVerifyContextXStateCetU @ 0x1403D9C14 (KeVerifyContextXStateCetU.c)
 *     KiVerifyContextIpForUserCet @ 0x1403DA4D0 (KiVerifyContextIpForUserCet.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1403DA6D0 (KiLogUserCetSetContextIpValidationFailure.c)
 *     KeContextToKframes @ 0x140535F60 (KeContextToKframes.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     PsWow64GetProcessMachine @ 0x1409E8360 (PsWow64GetProcessMachine.c)
 *     RtlpReadExtendedContext @ 0x1409EAB30 (RtlpReadExtendedContext.c)
 *     RtlGuardIsValidStackPointer @ 0x140A82CB4 (RtlGuardIsValidStackPointer.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x140AA5DB0 (RtlGuardIsValidWow64StackPointer.c)
 */

NTSTATUS __fastcall KiContinuePreviousModeUser(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG ULongFromUser; // edi
  NTSTATUS result; // eax
  int v15; // eax
  int v16; // ecx
  unsigned __int64 v17; // rax
  void *v18; // rsp
  int v19; // ecx
  _KPROCESS *Process; // r15
  _KPROCESS *v21; // rbx
  int v22; // r9d
  _KPROCESS *v23; // r12
  int v24; // ebx
  __int64 v25; // r9
  unsigned __int64 ExtendedFeatureDisableMask; // rdx
  unsigned int Flink_high; // r15d
  unsigned int v28; // r15d
  __int16 v29; // ax
  bool v30; // zf
  char v31; // al
  __int64 v32; // [rsp+20h] [rbp-10h]
  PCONTEXT_EX ContextEx; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength[2]; // [rsp+38h] [rbp+8h] BYREF
  struct _KTHREAD *v35; // [rsp+40h] [rbp+10h]
  ULONG v36; // [rsp+48h] [rbp+18h]
  void *Teb; // [rsp+50h] [rbp+20h]
  __int64 v38; // [rsp+58h] [rbp+28h]
  __int64 v39; // [rsp+60h] [rbp+30h]
  __int128 v40; // [rsp+68h] [rbp+38h] BYREF
  __int64 v41; // [rsp+78h] [rbp+48h]
  __int64 v42; // [rsp+C8h] [rbp+98h]

  v39 = a3;
  v38 = a2;
  ContextEx = 0LL;
  ContextLength[0] = 0;
  v40 = 0LL;
  v41 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v35 = CurrentThread;
  ULongFromUser = RtlReadULongFromUser(a1 + 48);
  v36 = ULongFromUser;
  if ( (unsigned __int64)a4 > 0xFF )
  {
    RtlCopyFromUser(&v40, a4, 0x18uLL);
    if ( (DWORD1(v40) & 0xFFFFFFFC) != 0 || v41 || (unsigned int)v40 >= 4 || *((_QWORD *)&v40 + 1) )
      return -1073741811;
  }
  v15 = RtlpValidateContextFlags(ULongFromUser, 0LL);
  if ( v15 >= 0 && (ULongFromUser & 0x100000) == 0 )
    v15 = -1073741811;
  if ( v15 == -1073741811 )
    ULongFromUser = ULongFromUser & 0xF800001F | 0x100000;
  v16 = 0;
  if ( v15 != -1073741811 )
    v16 = v15;
  if ( v16 < 0 )
    return v16;
  result = RtlGetExtendedContextLength(ULongFromUser, ContextLength);
  if ( result >= 0 )
  {
    v17 = ContextLength[0] + 15LL;
    if ( v17 <= ContextLength[0] )
      v17 = 0xFFFFFFFFFFFFFF0LL;
    v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
    memset_0(&ContextEx, 0, ContextLength[0]);
    result = RtlInitializeExtendedContext((PCONTEXT)&ContextEx, ULongFromUser, &ContextEx);
    if ( result >= 0 )
    {
      result = RtlpReadExtendedContext(v19, 2, (_DWORD)ContextEx, ULongFromUser, a1, 0LL);
      if ( result >= 0 )
      {
        ContextEx = 0LL;
        result = KeVerifyContextXStateCetU(CurrentThread, &ContextEx, &ContextEx);
        if ( result >= 0 )
        {
          Process = CurrentThread->Process;
          if ( (*(_DWORD *)&Process->0 & 0x20) != 0 && (v39 & 0x100001) == 0x100001 )
          {
            *(_QWORD *)ContextLength = v42;
            Teb = v35->Teb;
            if ( !(unsigned int)RtlGuardIsValidStackPointer(v42, Teb) )
            {
              v24 = -1073741811;
              if ( Process[1].ReadyTime )
              {
                v29 = WORD2(Process[3].PerProcessorCycleTimes);
                if ( v29 == 332 || (v30 = v29 == 452, v31 = 0, v30) )
                  v31 = 1;
                if ( v31
                  && *(_QWORD *)ContextLength < 0xFFFFFFFFuLL
                  && (unsigned int)RtlGuardIsValidWow64StackPointer(*(_QWORD *)ContextLength, Teb, 0LL) )
                {
                  v24 = 0;
                }
              }
              if ( v24 < 0 )
              {
LABEL_35:
                if ( v24 >= 0 )
                {
                  ExtendedFeatureDisableMask = v35->ExtendedFeatureDisableMask;
                  if ( ExtendedFeatureDisableMask
                    && (v39 & 0x100040) == 0x100040
                    && (ExtendedFeatureDisableMask & *(_QWORD *)((char *)&ContextLength[306] + SLODWORD(STACK[0x510]))) != 0 )
                  {
                    return -1073741811;
                  }
                  LOBYTE(v32) = 1;
                  KeContextToKframes(v39, v38, (unsigned int)&ContextEx, ULongFromUser, v32);
                  return 0;
                }
                return v24;
              }
            }
          }
          v21 = v35->Process;
          if ( (v39 & 0x100001) == 0x100001 )
          {
            if ( (unsigned __int16)PsWow64GetProcessMachine(v35->Process) != 332
              && (!v21[3].Padding[5] || (_WORD)v40 != 35) )
            {
              LOWORD(v40) = 51;
            }
            v23 = v35->ApcState.Process;
            if ( (v35->MiscFlags & 0x100000) == 0
              || (Flink_high = HIDWORD(v23[4].ThreadListHead.Flink), (Flink_high & 0x20000) == 0) )
            {
              v24 = 0;
              goto LABEL_30;
            }
            v28 = Flink_high >> 31;
            LOBYTE(v22) = v28;
            v24 = KiVerifyContextIpForUserCet(
                    (_DWORD)v35,
                    (unsigned int)&ContextEx,
                    (unsigned int)&v40,
                    v22,
                    (__int64)&ContextEx);
            if ( v24 != -1073740278 )
            {
LABEL_30:
              if ( v24 < 0 )
                return v24;
              goto LABEL_34;
            }
            LOBYTE(v25) = v28 ^ 1;
            if ( (HIDWORD(v23[4].ThreadListHead.Flink) & 0x40000) == 0 )
            {
              KiLogUserCetSetContextIpValidationFailure(2LL, (unsigned int)v40, a10, v25);
              goto LABEL_30;
            }
            KiLogUserCetSetContextIpValidationFailure(1LL, (unsigned int)v40, a10, v25);
          }
LABEL_34:
          v24 = 0;
          goto LABEL_35;
        }
      }
    }
  }
  return result;
}
