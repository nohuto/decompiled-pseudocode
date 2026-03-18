/*
 * XREFs of KiContinuePreviousModeUser @ 0x1403D5A70
 * Callers:
 *     KiContinueEx @ 0x1403D58B0 (KiContinueEx.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x1403D5E20 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403D6A40 (RtlGetExtendedContextLength.c)
 *     RtlpValidateContextFlags @ 0x1403D6B50 (RtlpValidateContextFlags.c)
 *     KeVerifyContextXStateCetU @ 0x1403D6C44 (KeVerifyContextXStateCetU.c)
 *     KiVerifyContextIpForUserCet @ 0x1403D7500 (KiVerifyContextIpForUserCet.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1403D7700 (KiLogUserCetSetContextIpValidationFailure.c)
 *     KeContextToKframes @ 0x140533AE0 (KeContextToKframes.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140731080 (_alloca_probe.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     PsWow64GetProcessMachine @ 0x1409EBB90 (PsWow64GetProcessMachine.c)
 *     RtlpReadExtendedContext @ 0x1409EE360 (RtlpReadExtendedContext.c)
 *     RtlGuardIsValidStackPointer @ 0x140A7CE44 (RtlGuardIsValidStackPointer.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x140AA99A8 (RtlGuardIsValidWow64StackPointer.c)
 */

__int64 __fastcall KiContinuePreviousModeUser(
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
  unsigned int ULongFromUser; // edi
  __int64 result; // rax
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
  __int64 v33; // [rsp+30h] [rbp+0h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp+8h] BYREF
  struct _KTHREAD *v35; // [rsp+40h] [rbp+10h]
  unsigned int v36; // [rsp+48h] [rbp+18h]
  void *Teb; // [rsp+50h] [rbp+20h]
  __int64 v38; // [rsp+58h] [rbp+28h]
  __int64 v39; // [rsp+60h] [rbp+30h]
  __int128 v40; // [rsp+68h] [rbp+38h] BYREF
  __int64 v41; // [rsp+78h] [rbp+48h]
  unsigned __int64 v42; // [rsp+C8h] [rbp+98h]

  v39 = a3;
  v38 = a2;
  v33 = 0LL;
  LODWORD(v34) = 0;
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
      return 3221225485LL;
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
    return (unsigned int)v16;
  result = RtlGetExtendedContextLength(ULongFromUser, &v34);
  if ( (int)result >= 0 )
  {
    v17 = (unsigned int)v34 + 15LL;
    if ( v17 <= (unsigned int)v34 )
      v17 = 0xFFFFFFFFFFFFFF0LL;
    v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
    memset_0(&v33, 0, (unsigned int)v34);
    result = RtlInitializeExtendedContext(&v33, ULongFromUser, &v33);
    if ( (int)result >= 0 )
    {
      result = RtlpReadExtendedContext(v19, 2, v33, ULongFromUser, a1, 0LL);
      if ( (int)result >= 0 )
      {
        v33 = 0LL;
        result = KeVerifyContextXStateCetU(CurrentThread, &v33, &v33);
        if ( (int)result >= 0 )
        {
          Process = CurrentThread->Process;
          if ( (*(_DWORD *)&Process->0 & 0x20) != 0 && (v39 & 0x100001) == 0x100001 )
          {
            v34 = v42;
            Teb = v35->Teb;
            if ( !(unsigned int)RtlGuardIsValidStackPointer(v42, Teb) )
            {
              v24 = -1073741811;
              if ( Process[1].ReadyTime )
              {
                v29 = WORD2(Process[3].PerProcessorCycleTimes);
                if ( v29 == 332 || (v30 = v29 == 452, v31 = 0, v30) )
                  v31 = 1;
                if ( v31 && v34 < 0xFFFFFFFF && (unsigned int)RtlGuardIsValidWow64StackPointer(v34, Teb, 0LL) )
                  v24 = 0;
              }
              if ( v24 < 0 )
              {
LABEL_35:
                if ( v24 >= 0 )
                {
                  ExtendedFeatureDisableMask = v35->ExtendedFeatureDisableMask;
                  if ( ExtendedFeatureDisableMask
                    && (v39 & 0x100040) == 0x100040
                    && (ExtendedFeatureDisableMask & *(__int64 *)((char *)&v33 + SLODWORD(STACK[0x510]) + 1232)) != 0 )
                  {
                    return 3221225485LL;
                  }
                  LOBYTE(v32) = 1;
                  KeContextToKframes(v39, v38, (unsigned int)&v33, ULongFromUser, v32);
                  return 0LL;
                }
                return (unsigned int)v24;
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
            v24 = KiVerifyContextIpForUserCet((_DWORD)v35, (unsigned int)&v33, (unsigned int)&v40, v22, (__int64)&v33);
            if ( v24 != -1073740278 )
            {
LABEL_30:
              if ( v24 < 0 )
                return (unsigned int)v24;
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
