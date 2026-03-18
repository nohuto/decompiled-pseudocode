/*
 * XREFs of RtlDispatchException @ 0x1403D5F30
 * Callers:
 *     KiDispatchException @ 0x1403D3400 (KiDispatchException.c)
 *     RtlRaiseNoncontinuableException @ 0x140535190 (RtlRaiseNoncontinuableException.c)
 *     RtlRaiseException @ 0x140619230 (RtlRaiseException.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x140263F70 (KeQueryCurrentStackInformationEx.c)
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     RtlpCopyContext @ 0x1402E8FD0 (RtlpCopyContext.c)
 *     RtlVirtualUnwind2 @ 0x1402E9210 (RtlVirtualUnwind2.c)
 *     RtlLookupFunctionEntry @ 0x1402E92C0 (RtlLookupFunctionEntry.c)
 *     RtlpGetStackLimitsEx @ 0x1403D6560 (RtlpGetStackLimitsEx.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D66C0 (RtlInitializeExtendedContext2.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x140523030 (RtlpLookupPrimaryFunctionEntry.c)
 *     RtlpLogExceptionDispatch @ 0x140525EC4 (RtlpLogExceptionDispatch.c)
 *     RtlVirtualUnwind @ 0x14052B970 (RtlVirtualUnwind.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140731080 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x140731650 (RtlpExecuteHandlerForException.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

char __fastcall RtlDispatchException(ULONG_PTR a1, __int64 a2)
{
  int v4; // edi
  ULONG_PTR v5; // rcx
  __int64 v6; // rdx
  char v7; // cl
  int v8; // ebx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // rsp
  unsigned __int64 v12; // r12
  unsigned int *v13; // rax
  ULONG_PTR v14; // r13
  unsigned int *v15; // rax
  unsigned __int64 v16; // rbx
  ULONG_PTR v17; // rcx
  char v18; // al
  int v19; // edx
  __int64 v20; // r9
  __int64 v21; // rbx
  bool v22; // zf
  int v23; // eax
  ULONG_PTR v24; // r8
  char result; // al
  char v26; // al
  char v27; // dl
  int v28; // r9d
  int v29; // r10d
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v30; // rax
  char v31; // dl
  volatile unsigned int UserIdealProcessor; // r10d
  volatile unsigned int v33; // ett
  signed __int32 v34; // r11d
  char v35; // al
  char StackLimits; // al
  unsigned int *v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rbx
  __int128 *v40; // rax
  __int128 *v41; // rcx
  __int64 v42; // rdx
  __int128 v43; // xmm0
  __int128 v44; // xmm0
  _BYTE v45[4]; // [rsp+70h] [rbp+0h] BYREF
  int v46; // [rsp+74h] [rbp+4h] BYREF
  char v47; // [rsp+78h] [rbp+8h]
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp+10h] BYREF
  ULONG_PTR v49; // [rsp+88h] [rbp+18h] BYREF
  char *v50; // [rsp+90h] [rbp+20h] BYREF
  unsigned __int64 v51; // [rsp+98h] [rbp+28h] BYREF
  unsigned int *v52; // [rsp+A0h] [rbp+30h]
  __int64 v53; // [rsp+A8h] [rbp+38h] BYREF
  int v54; // [rsp+B0h] [rbp+40h]
  ULONG_PTR v55; // [rsp+B8h] [rbp+48h] BYREF
  ULONG_PTR v56; // [rsp+C0h] [rbp+50h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v57; // [rsp+C8h] [rbp+58h] BYREF
  unsigned __int64 v58; // [rsp+D0h] [rbp+60h] BYREF
  unsigned __int64 v59; // [rsp+D8h] [rbp+68h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v60; // [rsp+E0h] [rbp+70h]
  ULONG_PTR v61; // [rsp+E8h] [rbp+78h]
  _BYTE *v62; // [rsp+F8h] [rbp+88h]
  __int64 v63; // [rsp+100h] [rbp+90h]
  ULONG_PTR v64; // [rsp+108h] [rbp+98h]
  unsigned int *v65; // [rsp+110h] [rbp+A0h]
  int v66; // [rsp+118h] [rbp+A8h]
  _DWORD v67[2]; // [rsp+120h] [rbp+B0h] BYREF
  __int64 v68; // [rsp+128h] [rbp+B8h]
  __int64 v69; // [rsp+130h] [rbp+C0h]
  char v70[48]; // [rsp+138h] [rbp+C8h] BYREF
  unsigned __int64 v71; // [rsp+168h] [rbp+F8h]

  memset_0(&v58, 0, 0x50uLL);
  v47 = 0;
  BugCheckParameter1 = 0LL;
  v53 = 0LL;
  v55 = 0LL;
  v49 = 0LL;
  v51 = 0LL;
  v50 = 0LL;
  v46 = 0;
  memset_0(v70, 0, 0xC0uLL);
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v47 = 1;
    RtlpLogExceptionDispatch(a1, a2);
  }
  v4 = *(_DWORD *)(a1 + 4) & 0x81;
  KeQueryCurrentStackInformationEx(*(_QWORD *)(a2 + 152), &v46, &v50, &v49);
  v5 = *(_QWORD *)(a2 + 152);
  v46 = v46 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimitsEx(v5, a1) )
  {
LABEL_40:
    v4 |= 8u;
    goto LABEL_41;
  }
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v6 = 1048715LL;
    v7 = 5;
  }
  else
  {
    v6 = 1048587LL;
    v7 = 1;
  }
  v8 = 1296;
  if ( (v7 & 4) == 0 )
    v8 = 1264;
  v9 = (unsigned int)(v8 + 15);
  v10 = v9 + 15;
  if ( v9 + 15 <= v9 )
    v10 = 0xFFFFFFFFFFFFFF0LL;
  v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2(v45, v6, &v57, 0LL);
  RtlpCopyContext((__int64)v45, a2);
  v12 = *(_QWORD *)(a2 + 248);
  v13 = v67;
  v52 = v67;
  v56 = 0LL;
  v67[0] = 0;
  v69 = 0LL;
  v67[1] = 0x1000000;
  v68 = -1LL;
LABEL_11:
  v14 = v49;
  while ( 1 )
  {
    v15 = RtlLookupFunctionEntry(v12, &v51, v13);
    v16 = v51;
    v57 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)v15;
    if ( (int)RtlVirtualUnwind2(
                1,
                v51,
                v12,
                (int)v15,
                (__int64)v45,
                0LL,
                (__int64)&v55,
                (__int64)&BugCheckParameter1,
                0LL,
                0LL,
                0LL,
                (__int64)&v53,
                0) < 0 )
      goto LABEL_41;
    v17 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 >= v14 || BugCheckParameter1 < (unsigned __int64)v50 )
    {
      v35 = v46;
      if ( (_BYTE)v46 == 1 )
      {
        StackLimits = RtlpGetStackLimitsEx(BugCheckParameter1, a1);
        v17 = BugCheckParameter1;
        v14 = v49;
        LOBYTE(v46) = 2;
        if ( StackLimits )
          goto LABEL_16;
        v35 = v46;
      }
      if ( !v35 )
        goto LABEL_40;
    }
LABEL_16:
    if ( v53 )
      break;
LABEL_17:
    v12 = v71;
    if ( (v64 & 7) == 0 && v64 >= (unsigned __int64)v50 )
    {
      v13 = v52;
      if ( v64 < v14 )
        continue;
    }
    if ( (_BYTE)v46 == 1 )
    {
      v18 = RtlpGetStackLimitsEx(v64, a1);
      LOBYTE(v46) = 0;
      if ( v18 )
      {
        v13 = v52;
        goto LABEL_11;
      }
    }
LABEL_41:
    result = 0;
    *(_DWORD *)(a1 + 4) = v4;
    return result;
  }
  v19 = 0;
  v54 = 0;
  while ( 1 )
  {
    v20 = v53;
    v60 = v57;
    v59 = v16;
    v21 = 0LL;
    v22 = RtlpExceptionLog2 == 0;
    v64 = v55;
    v65 = v52;
    *(_DWORD *)(a1 + 4) = v4;
    v45[0] = 0;
    v58 = v12;
    v61 = v17;
    v62 = v45;
    v63 = v20;
    v66 = v19;
    if ( !v22 && v47 )
    {
      UserIdealProcessor = NormalizationListLock.UserIdealProcessor;
      v33 = NormalizationListLock.UserIdealProcessor;
      v34 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&NormalizationListLock.UserIdealProcessor,
              (NormalizationListLock.UserIdealProcessor + 1) % 0x32,
              NormalizationListLock.UserIdealProcessor);
      if ( v33 != v34 )
      {
        do
        {
          UserIdealProcessor = v34;
          v34 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&NormalizationListLock.UserIdealProcessor,
                  (v34 + 1) % 0x32u,
                  v34);
        }
        while ( v34 != UserIdealProcessor );
      }
      v39 = 1424LL * UserIdealProcessor;
      v22 = RtlpExceptionLog2 + v39 == 0;
      v21 = RtlpExceptionLog2 + v39;
      *(_QWORD *)(v21 + 1400) = KeGetCurrentThread();
      if ( !v22 )
      {
        *(_DWORD *)(v21 + 1392) = 2;
        v40 = (__int128 *)(v21 + 160);
        *(_DWORD *)(v21 + 1396) = -1;
        v41 = (__int128 *)v45;
        v42 = 9LL;
        *(_OWORD *)v21 = *(_OWORD *)a1;
        *(_OWORD *)(v21 + 16) = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(v21 + 32) = *(_OWORD *)(a1 + 32);
        *(_OWORD *)(v21 + 48) = *(_OWORD *)(a1 + 48);
        *(_OWORD *)(v21 + 64) = *(_OWORD *)(a1 + 64);
        *(_OWORD *)(v21 + 80) = *(_OWORD *)(a1 + 80);
        *(_OWORD *)(v21 + 96) = *(_OWORD *)(a1 + 96);
        *(_OWORD *)(v21 + 112) = *(_OWORD *)(a1 + 112);
        *(_OWORD *)(v21 + 128) = *(_OWORD *)(a1 + 128);
        *(_QWORD *)(v21 + 144) = *(_QWORD *)(a1 + 144);
        do
        {
          v40 += 8;
          v43 = *v41;
          v41 += 8;
          *(v40 - 8) = v43;
          *(v40 - 7) = *(v41 - 7);
          *(v40 - 6) = *(v41 - 6);
          *(v40 - 5) = *(v41 - 5);
          *(v40 - 4) = *(v41 - 4);
          *(v40 - 3) = *(v41 - 3);
          *(v40 - 2) = *(v41 - 2);
          *(v40 - 1) = *(v41 - 1);
          --v42;
        }
        while ( v42 );
        *v40 = *v41;
        v40[1] = v41[1];
        v40[2] = v41[2];
        v40[3] = v41[3];
        v44 = v41[4];
        *(_QWORD *)(v21 + 1408) = v12;
        *(_QWORD *)(v21 + 1416) = v20;
        v40[4] = v44;
        *(_DWORD *)(v21 + 208) &= 0x10001Fu;
      }
      v17 = BugCheckParameter1;
    }
    v23 = RtlpExecuteHandlerForException(a1, v17, a2, &v58);
    if ( v21 )
      *(_DWORD *)(v21 + 1396) = v23;
    v24 = v56;
    v4 |= *(_DWORD *)(a1 + 4) & 1;
    v17 = BugCheckParameter1;
    if ( v56 == BugCheckParameter1 )
    {
      v4 &= ~0x10u;
      v24 = 0LL;
      v56 = 0LL;
    }
    if ( !v23 )
      break;
    if ( v23 == 1 )
      goto LABEL_33;
    if ( v23 == 2 )
    {
      v4 |= 0x10u;
      v31 = 1;
      if ( (_BYTE)v46 && ((v61 & 7) != 0 || v61 < (unsigned __int64)v50 || v61 >= v14) )
        v31 = 0;
      if ( v61 > v24 || !v31 )
        v56 = v61;
LABEL_33:
      v26 = v45[0];
      v16 = v51;
LABEL_34:
      v27 = v46;
      goto LABEL_35;
    }
    if ( v23 != 3 )
      RtlRaiseStatus(-1073741786);
    v12 = v58;
    v51 = v59;
    RtlpCopyContext((__int64)v45, (__int64)v62);
    v53 = RtlVirtualUnwind(1, v29, v12, v28, (__int64)v45, (__int64)&v55, (__int64)&BugCheckParameter1, 0LL);
    BugCheckParameter1 = v61;
    v30 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlLookupFunctionEntry(v12, &v51, v52);
    v57 = v30;
    if ( v30 != v60 )
      goto LABEL_45;
    v16 = v51;
    v37 = (unsigned int *)(v16 + *(unsigned int *)(RtlpLookupPrimaryFunctionEntry(v30) + 8));
    v52 = v37;
    if ( v16 < 0x7FFFFFFF0000LL )
    {
      ProbeForRead(v37, 1uLL, 4u);
      v37 = v52;
    }
    if ( (*(_BYTE *)v37 & 0x10) != 0 )
    {
      v38 = *((unsigned __int8 *)v37 + 2) + (*((_BYTE *)v37 + 2) & 1u);
      v55 = (ULONG_PTR)v37 + 2 * (unsigned int)(v38 + 2) + 4;
      v53 = v16 + *(unsigned int *)((char *)v37 + 2 * v38 + 4);
    }
    if ( v53 != v63 || v55 != v64 )
LABEL_45:
      __fastfail(0x27u);
    v17 = BugCheckParameter1;
    v52 = v65;
    v54 = v66;
    v26 = 1;
    v45[0] = 1;
    if ( (BugCheckParameter1 & 7) == 0 && BugCheckParameter1 < v14 && BugCheckParameter1 >= (unsigned __int64)v50 )
      goto LABEL_34;
    v27 = v46;
    if ( (_BYTE)v46 == 1 )
    {
      RtlpGetStackLimitsEx(BugCheckParameter1, a1);
      v17 = BugCheckParameter1;
      v14 = v49;
LABEL_36:
      v26 = v45[0];
      LOBYTE(v46) = 0;
      goto LABEL_37;
    }
LABEL_35:
    if ( v27 == 2 )
      goto LABEL_36;
LABEL_37:
    v19 = v54;
    if ( !v26 )
      goto LABEL_17;
  }
  if ( (v4 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  return 1;
}
