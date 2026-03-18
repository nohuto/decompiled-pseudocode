/*
 * XREFs of PspWow64GetContextThread @ 0x140A214E8
 * Callers:
 *     WbGetWowTrapFrame @ 0x14088037C (WbGetWowTrapFrame.c)
 *     WbSetWowTrapFrame @ 0x1409EE100 (WbSetWowTrapFrame.c)
 *     NtQueryInformationThread @ 0x140A1F330 (NtQueryInformationThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D66C0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1403D6D60 (RtlGetExtendedContextLength2.c)
 *     PsMultiResumeThread @ 0x1404FE168 (PsMultiResumeThread.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140731080 (_alloca_probe.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409EA900 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     PsWow64GetProcessMachine @ 0x1409EBB90 (PsWow64GetProcessMachine.c)
 *     PspGetContextThreadInternal @ 0x1409EC6B0 (PspGetContextThreadInternal.c)
 *     RtlpWriteExtendedContext @ 0x1409EC994 (RtlpWriteExtendedContext.c)
 *     RtlpReadExtendedContext @ 0x1409EE360 (RtlpReadExtendedContext.c)
 *     RtlCopyContext @ 0x140A32A50 (RtlCopyContext.c)
 *     RtlpWow64CtxFromAmd64 @ 0x140A58B50 (RtlpWow64CtxFromAmd64.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140A83F08 (RtlpWow64SanitizeContextFlags.c)
 *     PspSuspendThread @ 0x140AD5030 (PspSuspendThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140B792F0 (PspWow64ReadOrWriteThreadCpuArea.c)
 */

__int64 __fastcall PspWow64GetContextThread(__int64 a1, unsigned int *a2, int a3, char a4)
{
  int ExtendedContextLength2; // ebx
  __int64 v8; // rdx
  unsigned __int64 CpuAreaEnabledFeatures; // r12
  unsigned int v10; // r14d
  unsigned __int64 v11; // rax
  void *v12; // rsp
  unsigned int *v13; // r15
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  void *v18; // rsp
  struct _KTHREAD *CurrentThread; // rax
  int v20; // ecx
  int v21; // ebx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  void *v24; // rsp
  void *v25; // rsp
  unsigned __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // r13d
  __int64 v30; // rcx
  char *v31; // r12
  unsigned int v32; // edx
  int v34[2]; // [rsp+20h] [rbp-30h]
  __int64 v35; // [rsp+28h] [rbp-28h]
  int v36; // [rsp+28h] [rbp-28h]
  char v37; // [rsp+50h] [rbp+0h] BYREF
  char v38; // [rsp+51h] [rbp+1h]
  char v39; // [rsp+52h] [rbp+2h]
  int ULongFromUser; // [rsp+54h] [rbp+4h] BYREF
  unsigned int v41; // [rsp+58h] [rbp+8h] BYREF
  char v42; // [rsp+5Ch] [rbp+Ch]
  int v43; // [rsp+60h] [rbp+10h] BYREF
  unsigned int *v44; // [rsp+68h] [rbp+18h] BYREF
  int v45; // [rsp+70h] [rbp+20h]
  char *v46; // [rsp+78h] [rbp+28h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp+30h]
  unsigned int *v48; // [rsp+88h] [rbp+38h]
  unsigned int *v49; // [rsp+90h] [rbp+40h]
  __int64 v50; // [rsp+98h] [rbp+48h]
  __int64 v51; // [rsp+A0h] [rbp+50h] BYREF
  _OWORD v52[2]; // [rsp+A8h] [rbp+58h] BYREF

  v42 = a4;
  v48 = a2;
  v50 = a1;
  v39 = 0;
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
  CpuAreaEnabledFeatures = RtlWow64GetCpuAreaEnabledFeatures(&ULongFromUser);
  if ( a4 )
    ULongFromUser = RtlReadULongFromUser(a2);
  else
    ULongFromUser = *a2;
  LOBYTE(v8) = a4;
  ExtendedContextLength2 = RtlpWow64SanitizeContextFlags(&ULongFromUser, v8);
  if ( ExtendedContextLength2 < 0 )
    goto LABEL_48;
  v41 = 0;
  v44 = 0LL;
  memset(v52, 0, sizeof(v52));
  if ( a4 )
  {
    v10 = ULongFromUser;
    ExtendedContextLength2 = RtlGetExtendedContextLength2(ULongFromUser, &v41, CpuAreaEnabledFeatures);
    if ( ExtendedContextLength2 < 0 )
      goto LABEL_48;
    v11 = v41 + 15LL;
    if ( v11 <= v41 )
      v11 = 0xFFFFFFFFFFFFFF0LL;
    v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
    v13 = (unsigned int *)&v37;
    memset_0(&v37, 0, v41);
    ExtendedContextLength2 = RtlInitializeExtendedContext2((__int64)&v37, v10, &v44, CpuAreaEnabledFeatures);
    if ( ExtendedContextLength2 < 0 )
      goto LABEL_48;
    v49 = v44;
    ExtendedContextLength2 = RtlpReadExtendedContext(v14, 3u, (__int64)v44, v10, (__int64)v48, v52);
    if ( ExtendedContextLength2 < 0 )
      goto LABEL_48;
  }
  else
  {
    v13 = a2;
    v49 = a2 + 179;
    v10 = ULongFromUser;
  }
  v43 = CpuAreaEnabledFeatures != 0 ? 1074790495 : 1074790431;
  v41 = 0;
  ExtendedContextLength2 = RtlGetExtendedContextLength2(v43, &v41, CpuAreaEnabledFeatures);
  if ( ExtendedContextLength2 >= 0 )
  {
    v15 = v41 + 15LL;
    if ( v15 <= v41 )
      v15 = 0xFFFFFFFFFFFFFF0LL;
    v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
    v17 = alloca(v16);
    v18 = alloca(v16);
    v44 = (unsigned int *)&v37;
    ExtendedContextLength2 = RtlInitializeExtendedContext2((__int64)&v37, v43, &v46, CpuAreaEnabledFeatures);
    if ( ExtendedContextLength2 >= 0 )
    {
      if ( (struct _KTHREAD *)a1 != KeGetCurrentThread() )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        if ( (int)PspSuspendThread(a1, 0LL, 0LL, 0LL, *(_QWORD *)v34, v35) < 0 )
          KeLeaveCriticalRegion();
        else
          v39 = 1;
      }
      ExtendedContextLength2 = PspGetContextThreadInternal(a1, (__int64)v44, 0, 1, 1);
      if ( ExtendedContextLength2 >= 0 )
      {
        v20 = 65599;
        if ( CpuAreaEnabledFeatures )
          v20 = 65663;
        v43 = v20;
        v41 = 0;
        ExtendedContextLength2 = RtlGetExtendedContextLength2(v20, &v41, CpuAreaEnabledFeatures);
        if ( ExtendedContextLength2 >= 0 )
        {
          v37 = 0;
          ULongFromUser = 0;
          v21 = v41;
          v22 = v41 + 15LL;
          if ( v22 <= v41 )
            v22 = 0xFFFFFFFFFFFFFF0LL;
          v23 = v22 & 0xFFFFFFFFFFFFFFF0uLL;
          v24 = alloca(v23);
          v25 = alloca(v23);
          v46 = &v37;
          v26 = RtlWow64GetCpuAreaEnabledFeatures(&v43);
          RtlInitializeExtendedContext2((__int64)&v37, v43, &v51, v26);
          ExtendedContextLength2 = PspWow64ReadOrWriteThreadCpuArea(
                                     BugCheckParameter1,
                                     v21,
                                     v35,
                                     (__int64)&ULongFromUser,
                                     (__int64)&v37);
          if ( ExtendedContextLength2 >= 0 )
          {
            v38 = 0;
            if ( v37 )
            {
              v27 = RtlCopyContext(v13, v10, &v37);
LABEL_43:
              ExtendedContextLength2 = v27;
              if ( v27 < 0 )
                goto LABEL_48;
              goto LABEL_44;
            }
            if ( *((_WORD *)v44 + 28) == 35 )
            {
              v27 = RtlpWow64CtxFromAmd64(v10, v44, v13);
              goto LABEL_43;
            }
            v29 = ULongFromUser;
            if ( (ULongFromUser & 1) == 0 )
            {
              v30 = CpuAreaEnabledFeatures != 0 ? 65656 : 65592;
              v31 = v46;
              ExtendedContextLength2 = RtlpWow64CtxFromAmd64(v30, v44, v46);
              if ( ExtendedContextLength2 < 0 )
                goto LABEL_48;
              memset_0(v31 + 364, 0, 0x60uLL);
              ULongFromUser = v29 | 1;
              v38 = 1;
            }
            ExtendedContextLength2 = RtlCopyContext(v13, v10, v46);
            if ( ExtendedContextLength2 >= 0 )
            {
              if ( (v10 & 0x40000000) != 0 )
              {
                v28 = *v13;
                *v13 &= 0x67FFFFFFu;
                v32 = v44[12] ^ (v28 ^ v44[12]) & 0x67FFFFFF;
                *v13 = v32;
                if ( (v32 & 0x18000000) == 0 )
                  *v13 = v32 | 0x88000000;
              }
LABEL_44:
              if ( !v38
                || (ExtendedContextLength2 = PspWow64ReadOrWriteThreadCpuArea(
                                               BugCheckParameter1,
                                               v41,
                                               v36,
                                               (__int64)&ULongFromUser,
                                               0LL),
                    ExtendedContextLength2 >= 0) )
              {
                if ( v42 )
                {
                  ExtendedContextLength2 = RtlpWriteExtendedContext(
                                             v28,
                                             (__int64)(v48 + 179),
                                             (__int64)v52,
                                             v10,
                                             (__int64)v49);
                  v45 = ExtendedContextLength2;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_48:
  if ( v39 )
  {
    PsMultiResumeThread(a1, 0LL, 1LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)ExtendedContextLength2;
}
