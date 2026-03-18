/*
 * XREFs of RtlUnwindEx @ 0x1402E8510
 * Callers:
 *     RtlUnwind @ 0x1403D65D0 (RtlUnwind.c)
 *     __C_specific_handler @ 0x140533760 (__C_specific_handler.c)
 *     KiSystemServiceHandler @ 0x14073B500 (KiSystemServiceHandler.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140263CC0 (RtlpGetStackLimits.c)
 *     KeQueryCurrentStackInformationEx @ 0x140263F70 (KeQueryCurrentStackInformationEx.c)
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     RtlpCopyContext @ 0x1402E8FD0 (RtlpCopyContext.c)
 *     RtlVirtualUnwind2 @ 0x1402E9210 (RtlVirtualUnwind2.c)
 *     RtlLookupFunctionEntry @ 0x1402E92C0 (RtlLookupFunctionEntry.c)
 *     RtlInitializeExtendedContext @ 0x1403D5E20 (RtlInitializeExtendedContext.c)
 *     RtlpGetStackLimitsEx @ 0x1403D6560 (RtlpGetStackLimitsEx.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D66C0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength @ 0x1403D6A40 (RtlGetExtendedContextLength.c)
 *     RtlGuardCheckExceptionHandler @ 0x1404570C0 (RtlGuardCheckExceptionHandler.c)
 *     RtlVirtualUnwind @ 0x14052B970 (RtlVirtualUnwind.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140530D10 (RtlGuardCheckLongJumpTarget.c)
 *     RtlCaptureContext2 @ 0x140534B20 (RtlCaptureContext2.c)
 *     RtlRestoreContext @ 0x140534CC0 (RtlRestoreContext.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x140726290 (ZwRaiseException.c)
 *     KeGetCurrentStackPointer @ 0x140727390 (KeGetCurrentStackPointer.c)
 *     _alloca_probe @ 0x140731080 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1407316D0 (RtlpExecuteHandlerForUnwind.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall RtlUnwindEx(ULONG_PTR a1, __int64 a2, int *a3, __int64 a4, int *a5, __int64 a6)
{
  int *v7; // r13
  unsigned int v9; // ebx
  unsigned __int64 CurrentStackPointer; // rax
  char v11; // r15
  char v12; // di
  unsigned int v13; // r14d
  int v14; // ebx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  void *v18; // rsp
  int *v19; // r14
  int *v20; // r15
  __int64 v21; // rcx
  ULONG_PTR v22; // r12
  char *v23; // r13
  int v24; // eax
  __int64 v25; // rbx
  __int64 v26; // r8
  int v27; // r8d
  __int64 v28; // rbx
  int v29; // r9d
  int v30; // eax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  void *v33; // rsp
  void *v34; // rsp
  ULONG_PTR v35; // r10
  int v36; // r15d
  bool v37; // zf
  int v38; // r10d
  int *v39; // rcx
  __int64 v40; // rax
  int v41; // ebx
  int v42; // r8d
  __int64 v43; // r8
  int *v44; // rax
  int v45; // et0
  char v46; // al
  char v47; // al
  int *v48; // rax
  int *v49; // rbx
  int v50; // eax
  __int64 v52; // r15
  int *v53; // r11
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // r9d
  int v57; // r10d
  int v58; // [rsp+70h] [rbp+0h] BYREF
  unsigned int v59; // [rsp+74h] [rbp+4h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp+8h] BYREF
  ULONG_PTR v61; // [rsp+80h] [rbp+10h] BYREF
  char *v62; // [rsp+88h] [rbp+18h] BYREF
  int *v63; // [rsp+90h] [rbp+20h]
  __int64 v64; // [rsp+98h] [rbp+28h] BYREF
  __int64 v65; // [rsp+A0h] [rbp+30h] BYREF
  int *v66; // [rsp+A8h] [rbp+38h]
  __int64 v67; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v68; // [rsp+B8h] [rbp+48h]
  int *v69; // [rsp+C0h] [rbp+50h]
  __int64 v70; // [rsp+C8h] [rbp+58h] BYREF
  __int64 v71; // [rsp+D0h] [rbp+60h]
  __int64 v72; // [rsp+D8h] [rbp+68h]
  __int64 v73; // [rsp+E0h] [rbp+70h]
  __int64 v74; // [rsp+F0h] [rbp+80h] BYREF
  __int64 v75; // [rsp+F8h] [rbp+88h]
  __int64 v76; // [rsp+100h] [rbp+90h]
  ULONG_PTR v77; // [rsp+108h] [rbp+98h]
  __int64 v78; // [rsp+110h] [rbp+A0h]
  int *v79; // [rsp+118h] [rbp+A8h]
  __int64 v80; // [rsp+120h] [rbp+B0h]
  __int64 v81; // [rsp+128h] [rbp+B8h]
  __int64 v82; // [rsp+130h] [rbp+C0h]
  int v83; // [rsp+138h] [rbp+C8h]
  int *v84; // [rsp+140h] [rbp+D0h]
  int v85; // [rsp+150h] [rbp+E0h] BYREF
  __int64 v86; // [rsp+158h] [rbp+E8h]
  __int64 v87; // [rsp+160h] [rbp+F0h]
  int v88; // [rsp+168h] [rbp+F8h]

  v7 = a5;
  v69 = a3;
  v73 = a2;
  v66 = a5;
  v68 = a6;
  v72 = a4;
  memset_0(&v74, 0, 0x50uLL);
  memset_0(&v85, 0, 0x98uLL);
  v64 = 0LL;
  v9 = 0;
  v65 = 0LL;
  v61 = 0LL;
  v67 = 0LL;
  v59 = 0;
  v62 = 0LL;
  v58 = 0;
  CurrentStackPointer = KeGetCurrentStackPointer();
  KeQueryCurrentStackInformationEx(CurrentStackPointer, &v58, &v62, &v61);
  v11 = 1;
  v12 = v58 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v62, (__int64)&v61) )
LABEL_20:
    RtlRaiseStatus(-1073741784);
  v13 = 1048587;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v13 = 1048715;
    if ( (a5[12] & 0x100080) != 0x100080 )
    {
      RtlGetExtendedContextLength(1048715LL, &v59);
      v9 = v59;
      v31 = v59 + 15LL;
      if ( v31 <= v59 )
        v31 = 0xFFFFFFFFFFFFFF0LL;
      v32 = v31 & 0xFFFFFFFFFFFFFFF0uLL;
      v33 = alloca(v32);
      v34 = alloca(v32);
      v7 = &v58;
      v66 = &v58;
      RtlInitializeExtendedContext(&v58, 1048715LL, &v70);
    }
    if ( !(_BYTE)KiKernelCetEnabled )
      goto LABEL_7;
    v11 = 5;
  }
  else
  {
    v66 = a5;
  }
  v14 = 1296;
  if ( (v11 & 4) == 0 )
    v14 = 1264;
  v9 = v14 + 15;
LABEL_7:
  v15 = v9 + 15LL;
  if ( v15 <= v9 )
    v15 = 0xFFFFFFFFFFFFFF0LL;
  v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
  v17 = alloca(v16);
  v18 = alloca(v16);
  v84 = &v58;
  RtlInitializeExtendedContext2(&v58, v13, &v70, 0LL);
  v63 = &v58;
  v19 = v7;
  v20 = &v58;
  RtlCaptureContext2(v7);
  v21 = v68;
  if ( v68 )
    *(_BYTE *)(v68 + 6) = 1;
  if ( !a3 )
  {
    v85 = -1073741785;
    v86 = 0LL;
    v87 = *((_QWORD *)v7 + 31);
    v69 = &v85;
    v88 = 0;
  }
  v22 = v61;
  v23 = v62;
  v24 = 2;
  BugCheckParameter1 = 0LL;
  if ( !a1 )
    v24 = 6;
  v58 = v24;
  while ( 1 )
  {
    v25 = *((_QWORD *)v19 + 31);
    v71 = v25;
    v70 = RtlLookupFunctionEntry(v25, &v67, v21);
    RtlpCopyContext(v20, v19, v26, v70);
    v27 = v25;
    v28 = v67;
    v30 = RtlVirtualUnwind2(
            2,
            v67,
            v27,
            v29,
            (__int64)v20,
            0LL,
            (__int64)&v65,
            (__int64)&BugCheckParameter1,
            0LL,
            0LL,
            0LL,
            (__int64)&v64,
            0);
    if ( v30 < 0 )
      RtlRaiseStatus(v30);
    v35 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 >= v22 || BugCheckParameter1 < (unsigned __int64)v23 )
    {
      if ( v12 != 1 )
        goto LABEL_20;
      v12 = 2;
      if ( !(unsigned __int8)RtlpGetStackLimitsEx(BugCheckParameter1, 0LL) )
        goto LABEL_20;
      v35 = BugCheckParameter1;
      v22 = v61;
      v23 = v62;
    }
    if ( a1 && !v12 && a1 < v35 )
      goto LABEL_20;
    if ( v64 )
    {
      v36 = 0;
      v78 = v73;
      while ( 1 )
      {
        v37 = a1 == v35;
        v38 = v58;
        if ( v37 )
        {
          v38 = v58 | 0x20;
          v58 |= 0x20u;
        }
        v39 = v69;
        v40 = v72;
        v69[1] = v38;
        *((_QWORD *)v19 + 15) = v40;
        v74 = v71;
        v76 = v70;
        v80 = v64;
        v81 = v65;
        v75 = v28;
        v82 = v68;
        v77 = BugCheckParameter1;
        v79 = v19;
        v83 = v36;
        v41 = v19[12] & 0x100040;
        v42 = RtlpExecuteHandlerForUnwind(v39, BugCheckParameter1, v19, &v74);
        if ( v41 != 1048640 && (v19[12] & 0x100040) == 0x100040 )
          v19[12] &= ~0x40u;
        v58 &= 0xFFFFFF9F;
        v43 = (unsigned int)(v42 - 1);
        if ( (_DWORD)v43 )
        {
          if ( (_DWORD)v43 != 2 )
            RtlRaiseStatus(-1073741786);
          v28 = v75;
          v71 = v74;
          v67 = v75;
          v70 = v76;
          RtlpCopyContext(v66, v79, v43, v76);
          v52 = (__int64)v84;
          v63 = v84;
          v19 = v53;
          RtlpCopyContext(v84, v53, v54, v55);
          v64 = RtlVirtualUnwind(2, v28, v57, v56, v52, (__int64)&v65, (__int64)&BugCheckParameter1, 0LL);
          if ( v64 != v80 || (v35 = BugCheckParameter1, BugCheckParameter1 != v77) || v65 != v81 )
            __fastfail(0x27u);
          v36 = v83;
          v68 = v82;
          v46 = v58 | 0x40;
          v58 |= 0x40u;
          if ( (BugCheckParameter1 & 7) == 0 && BugCheckParameter1 < v22 && BugCheckParameter1 >= (unsigned __int64)v23
            || v12 != 1 )
          {
            goto LABEL_45;
          }
          v12 = 2;
          RtlpGetStackLimitsEx(BugCheckParameter1, 0LL);
          v22 = v61;
          v23 = v62;
        }
        else
        {
          if ( BugCheckParameter1 != a1 )
          {
            v44 = v19;
            v19 = v63;
            v63 = v44;
          }
          v45 = _mm_getcsr();
          v59 = v45;
          v28 = v67;
          v19[13] = v45;
          v19[70] = v45;
        }
        v46 = v58;
        v35 = BugCheckParameter1;
LABEL_45:
        if ( (v46 & 0x40) == 0 )
        {
          v20 = v63;
          goto LABEL_47;
        }
      }
    }
    if ( v35 != a1 )
    {
      v48 = v19;
      v19 = v20;
      v20 = v48;
      v63 = v48;
    }
LABEL_47:
    v47 = 0;
    if ( v12 != 2 )
      v47 = v12;
    if ( (v35 & 7) != 0 || v35 >= v22 || v35 < (unsigned __int64)v23 )
      break;
    if ( v35 == a1 )
      goto LABEL_57;
    v21 = v68;
    v12 = v47;
  }
  if ( v35 == a1 )
  {
LABEL_57:
    v49 = v69;
    *((_QWORD *)v19 + 15) = v72;
    v50 = *v49;
    if ( *v49 != -2147483607 )
    {
      *((_QWORD *)v19 + 31) = v73;
      v50 = *v49;
      if ( *v49 != -2147483610 )
      {
        *v49 = -1073741785;
        v50 = -1073741785;
      }
    }
    if ( v49 )
    {
      if ( v50 == -1073741785 )
      {
        if ( !(_BYTE)KiKernelCetEnabled )
          RtlGuardCheckExceptionHandler(*((_QWORD *)v19 + 31));
      }
      else if ( v50 == -2147483610 && !(_BYTE)KiKernelCetEnabled )
      {
        RtlGuardCheckLongJumpTarget(*(_QWORD *)(*((_QWORD *)v49 + 4) + 80LL));
      }
    }
    return RtlRestoreContext(v19, v49);
  }
  else
  {
    if ( v71 == *((_QWORD *)v19 + 31) )
      RtlRaiseStatus(-1073741569);
    return ZwRaiseException(v69, v19, 0LL);
  }
}
