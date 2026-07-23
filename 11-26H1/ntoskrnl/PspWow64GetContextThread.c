/*
 * XREFs of PspWow64GetContextThread @ 0x140A2AB08
 * Callers:
 *     WbGetWowTrapFrame @ 0x14088677C (WbGetWowTrapFrame.c)
 *     WbSetWowTrapFrame @ 0x1409EA8D0 (WbSetWowTrapFrame.c)
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D9690 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1403D9D30 (RtlGetExtendedContextLength2.c)
 *     PsMultiResumeThread @ 0x1404F76A8 (PsMultiResumeThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     PspSuspendThread @ 0x140949620 (PspSuspendThread.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409E70D0 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     PsWow64GetProcessMachine @ 0x1409E8360 (PsWow64GetProcessMachine.c)
 *     PspGetContextThreadInternal @ 0x1409E8E80 (PspGetContextThreadInternal.c)
 *     RtlpWriteExtendedContext @ 0x1409E9164 (RtlpWriteExtendedContext.c)
 *     RtlpReadExtendedContext @ 0x1409EAB30 (RtlpReadExtendedContext.c)
 *     RtlCopyContext @ 0x140A4D9B0 (RtlCopyContext.c)
 *     RtlpWow64CtxFromAmd64 @ 0x140A660D0 (RtlpWow64CtxFromAmd64.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140A8925C (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140B81560 (PspWow64ReadOrWriteThreadCpuArea.c)
 */

__int64 __fastcall PspWow64GetContextThread(__int64 a1, unsigned int *a2, int a3, char a4)
{
  int ExtendedContextLength2; // ebx
  __int64 v8; // rdx
  ULONG64 CpuAreaEnabledFeatures; // r12
  ULONG v10; // r14d
  unsigned __int64 v11; // rax
  void *v12; // rsp
  _CONTEXT *v13; // r15
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  void *v18; // rsp
  struct _KTHREAD *CurrentThread; // rax
  ULONG v20; // ecx
  ULONG v21; // ebx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  void *v24; // rsp
  void *v25; // rsp
  ULONG64 v26; // rax
  NTSTATUS v27; // eax
  __int64 P1Home_low; // rcx
  ULONG v29; // r13d
  __int64 v30; // rcx
  PCONTEXT_EX v31; // r12
  int v32; // edx
  int v34; // [rsp+28h] [rbp-28h]
  int v35; // [rsp+28h] [rbp-28h]
  char v36; // [rsp+50h] [rbp+0h] BYREF
  char v37; // [rsp+51h] [rbp+1h]
  char v38; // [rsp+52h] [rbp+2h]
  ULONG ULongFromUser; // [rsp+54h] [rbp+4h] BYREF
  ULONG ContextLength; // [rsp+58h] [rbp+8h] BYREF
  char v41; // [rsp+5Ch] [rbp+Ch]
  ULONG v42; // [rsp+60h] [rbp+10h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+68h] [rbp+18h] BYREF
  int v44; // [rsp+70h] [rbp+20h]
  PCONTEXT_EX v45; // [rsp+78h] [rbp+28h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp+30h]
  unsigned int *v47; // [rsp+88h] [rbp+38h]
  PCONTEXT_EX v48; // [rsp+90h] [rbp+40h]
  __int64 v49; // [rsp+98h] [rbp+48h]
  PCONTEXT_EX v50; // [rsp+A0h] [rbp+50h] BYREF
  _OWORD v51[2]; // [rsp+A8h] [rbp+58h] BYREF

  v41 = a4;
  v47 = a2;
  v49 = a1;
  v38 = 0;
  if ( a3 != 716 )
  {
    ExtendedContextLength2 = -1073741820;
    goto LABEL_48;
  }
  BugCheckParameter1 = *(_QWORD *)(a1 + 544);
  if ( PsWow64GetProcessMachine(BugCheckParameter1) != 332 )
  {
    ExtendedContextLength2 = -1073741811;
    goto LABEL_48;
  }
  ULongFromUser = 0x10000;
  CpuAreaEnabledFeatures = RtlWow64GetCpuAreaEnabledFeatures((int *)&ULongFromUser);
  if ( a4 )
    ULongFromUser = RtlReadULongFromUser(a2);
  else
    ULongFromUser = *a2;
  LOBYTE(v8) = a4;
  ExtendedContextLength2 = RtlpWow64SanitizeContextFlags(&ULongFromUser, v8);
  if ( ExtendedContextLength2 < 0 )
    goto LABEL_48;
  ContextLength = 0;
  ContextEx = 0LL;
  memset(v51, 0, sizeof(v51));
  if ( a4 )
  {
    v10 = ULongFromUser;
    ExtendedContextLength2 = RtlGetExtendedContextLength2(ULongFromUser, &ContextLength, CpuAreaEnabledFeatures);
    if ( ExtendedContextLength2 < 0 )
      goto LABEL_48;
    v11 = ContextLength + 15LL;
    if ( v11 <= ContextLength )
      v11 = 0xFFFFFFFFFFFFFF0LL;
    v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
    v13 = (_CONTEXT *)&v36;
    memset_0(&v36, 0, ContextLength);
    ExtendedContextLength2 = RtlInitializeExtendedContext2((PCONTEXT)&v36, v10, &ContextEx, CpuAreaEnabledFeatures);
    if ( ExtendedContextLength2 < 0 )
      goto LABEL_48;
    v48 = ContextEx;
    ExtendedContextLength2 = RtlpReadExtendedContext(v14, 3u, (__int64)ContextEx, v10, (__int64)v47, v51);
    if ( ExtendedContextLength2 < 0 )
      goto LABEL_48;
  }
  else
  {
    v13 = (_CONTEXT *)a2;
    v48 = (PCONTEXT_EX)(a2 + 179);
    v10 = ULongFromUser;
  }
  v42 = CpuAreaEnabledFeatures != 0 ? 1074790495 : 1074790431;
  ContextLength = 0;
  ExtendedContextLength2 = RtlGetExtendedContextLength2(v42, &ContextLength, CpuAreaEnabledFeatures);
  if ( ExtendedContextLength2 >= 0 )
  {
    v15 = ContextLength + 15LL;
    if ( v15 <= ContextLength )
      v15 = 0xFFFFFFFFFFFFFF0LL;
    v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
    v17 = alloca(v16);
    v18 = alloca(v16);
    ContextEx = (PCONTEXT_EX)&v36;
    ExtendedContextLength2 = RtlInitializeExtendedContext2((PCONTEXT)&v36, v42, &v45, CpuAreaEnabledFeatures);
    if ( ExtendedContextLength2 >= 0 )
    {
      if ( (struct _KTHREAD *)a1 != KeGetCurrentThread() )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        if ( (int)PspSuspendThread(a1, 0, 0LL, 0LL) < 0 )
          KeLeaveCriticalRegion();
        else
          v38 = 1;
      }
      ExtendedContextLength2 = PspGetContextThreadInternal(a1, (__int64)ContextEx, 0, 1, 1);
      if ( ExtendedContextLength2 >= 0 )
      {
        v20 = 65599;
        if ( CpuAreaEnabledFeatures )
          v20 = 65663;
        v42 = v20;
        ContextLength = 0;
        ExtendedContextLength2 = RtlGetExtendedContextLength2(v20, &ContextLength, CpuAreaEnabledFeatures);
        if ( ExtendedContextLength2 >= 0 )
        {
          v36 = 0;
          ULongFromUser = 0;
          v21 = ContextLength;
          v22 = ContextLength + 15LL;
          if ( v22 <= ContextLength )
            v22 = 0xFFFFFFFFFFFFFF0LL;
          v23 = v22 & 0xFFFFFFFFFFFFFFF0uLL;
          v24 = alloca(v23);
          v25 = alloca(v23);
          v45 = (PCONTEXT_EX)&v36;
          v26 = RtlWow64GetCpuAreaEnabledFeatures((int *)&v42);
          RtlInitializeExtendedContext2((PCONTEXT)&v36, v42, &v50, v26);
          ExtendedContextLength2 = PspWow64ReadOrWriteThreadCpuArea(
                                     BugCheckParameter1,
                                     v21,
                                     v34,
                                     (__int64)&ULongFromUser,
                                     (__int64)&v36);
          if ( ExtendedContextLength2 >= 0 )
          {
            v37 = 0;
            if ( v36 )
            {
              v27 = RtlCopyContext(v13, v10, (PCONTEXT)&v36);
LABEL_43:
              ExtendedContextLength2 = v27;
              if ( v27 < 0 )
                goto LABEL_48;
              goto LABEL_44;
            }
            if ( LOWORD(ContextEx[1].KernelCet.Offset) == 35 )
            {
              v27 = RtlpWow64CtxFromAmd64(v10, ContextEx, v13);
              goto LABEL_43;
            }
            v29 = ULongFromUser;
            if ( (ULongFromUser & 1) == 0 )
            {
              v30 = CpuAreaEnabledFeatures != 0 ? 65656 : 65592;
              v31 = v45;
              ExtendedContextLength2 = RtlpWow64CtxFromAmd64(v30, ContextEx, v45);
              if ( ExtendedContextLength2 < 0 )
                goto LABEL_48;
              memset_0(&v31[11].Legacy.Length, 0, 0x60uLL);
              ULongFromUser = v29 | 1;
              v37 = 1;
            }
            ExtendedContextLength2 = RtlCopyContext(v13, v10, (PCONTEXT)v45);
            if ( ExtendedContextLength2 >= 0 )
            {
              if ( (v10 & 0x40000000) != 0 )
              {
                P1Home_low = LODWORD(v13->P1Home);
                LODWORD(v13->P1Home) &= 0x67FFFFFFu;
                v32 = ContextEx[1].XState.Offset ^ (P1Home_low ^ ContextEx[1].XState.Offset) & 0x67FFFFFF;
                LODWORD(v13->P1Home) = v32;
                if ( (v32 & 0x18000000) == 0 )
                  LODWORD(v13->P1Home) = v32 | 0x88000000;
              }
LABEL_44:
              if ( !v37
                || (ExtendedContextLength2 = PspWow64ReadOrWriteThreadCpuArea(
                                               BugCheckParameter1,
                                               ContextLength,
                                               v35,
                                               (__int64)&ULongFromUser,
                                               0LL),
                    ExtendedContextLength2 >= 0) )
              {
                if ( v41 )
                {
                  ExtendedContextLength2 = RtlpWriteExtendedContext(
                                             P1Home_low,
                                             (__int64)(v47 + 179),
                                             (__int64)v51,
                                             v10,
                                             (__int64)v48);
                  v44 = ExtendedContextLength2;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_48:
  if ( v38 )
  {
    PsMultiResumeThread(a1, 0LL, 1LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)ExtendedContextLength2;
}
