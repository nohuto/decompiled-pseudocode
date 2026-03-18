/*
 * XREFs of NtCreateTokenEx @ 0x140A44080
 * Callers:
 *     DifNtCreateTokenExWrapper @ 0x140674530 (DifNtCreateTokenExWrapper.c)
 *     NtCreateToken @ 0x140814940 (NtCreateToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     SeCaptureSid @ 0x1408E9720 (SeCaptureSid.c)
 *     SeCaptureSecurityQos @ 0x1408EBC60 (SeCaptureSecurityQos.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     SeCaptureAcl @ 0x1409F4CD0 (SeCaptureAcl.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140A43158 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140A43238 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140A44CF8 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x140A461FC (SeReleaseAcl.c)
 *     SeReleaseSid @ 0x140A9A0A8 (SeReleaseSid.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140AC3A68 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140AF0268 (SepCaptureTokenSecurityAttributesInformation.c)
 */

__int64 __fastcall NtCreateTokenEx(
        _QWORD *a1,
        int a2,
        __int64 a3,
        int a4,
        void *a5,
        __int64 *a6,
        __int64 a7,
        unsigned int *a8,
        unsigned int *a9,
        __int64 a10,
        __int64 a11,
        unsigned int *a12,
        int *a13,
        char **a14,
        char **a15,
        __int64 *a16,
        void *a17)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v18; // rdx
  __int64 result; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // ebx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int ULongFromUser; // r15d
  unsigned int v26; // eax
  char *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // r9d
  unsigned int v31; // esi
  char v32; // al
  unsigned __int16 *v33; // rax
  char *v34; // rax
  void *v35; // r12
  void *v36; // r13
  PSID v37; // rsi
  __int64 v38; // r14
  int v39; // [rsp+20h] [rbp-1E8h]
  int v40; // [rsp+28h] [rbp-1E0h]
  int v41; // [rsp+30h] [rbp-1D8h]
  int v42; // [rsp+A0h] [rbp-168h]
  char v43; // [rsp+C0h] [rbp-148h] BYREF
  char v44; // [rsp+C1h] [rbp-147h]
  KPROCESSOR_MODE v45; // [rsp+C2h] [rbp-146h]
  int v46; // [rsp+C4h] [rbp-144h]
  int v47; // [rsp+C8h] [rbp-140h]
  char v48; // [rsp+CCh] [rbp-13Ch]
  int v49; // [rsp+D0h] [rbp-138h]
  int v50; // [rsp+D4h] [rbp-134h]
  __int64 v51; // [rsp+D8h] [rbp-130h] BYREF
  int v52; // [rsp+E0h] [rbp-128h] BYREF
  int v53; // [rsp+E4h] [rbp-124h]
  __int64 v54; // [rsp+E8h] [rbp-120h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-118h] BYREF
  __int64 v56; // [rsp+F8h] [rbp-110h]
  PVOID P; // [rsp+100h] [rbp-108h] BYREF
  PVOID v58; // [rsp+108h] [rbp-100h] BYREF
  __int64 v59; // [rsp+110h] [rbp-F8h]
  __int64 v60; // [rsp+118h] [rbp-F0h]
  __int64 v61; // [rsp+120h] [rbp-E8h] BYREF
  PSID v62; // [rsp+128h] [rbp-E0h] BYREF
  unsigned int v63; // [rsp+130h] [rbp-D8h]
  int v64; // [rsp+134h] [rbp-D4h]
  __int64 ULong64FromUser; // [rsp+138h] [rbp-D0h] BYREF
  int v66[2]; // [rsp+140h] [rbp-C8h] BYREF
  char **v67; // [rsp+148h] [rbp-C0h]
  void *Src; // [rsp+150h] [rbp-B8h]
  __int64 v69; // [rsp+158h] [rbp-B0h] BYREF
  int v70[2]; // [rsp+160h] [rbp-A8h]
  _QWORD *v71; // [rsp+168h] [rbp-A0h]
  unsigned int v72; // [rsp+170h] [rbp-98h]
  unsigned int v73; // [rsp+174h] [rbp-94h]
  unsigned int v74; // [rsp+178h] [rbp-90h]
  __int64 v75; // [rsp+180h] [rbp-88h]
  __int64 *v76; // [rsp+188h] [rbp-80h]
  __int64 v77; // [rsp+190h] [rbp-78h]
  __int64 v78; // [rsp+198h] [rbp-70h]
  int *v79; // [rsp+1A0h] [rbp-68h]
  __int64 v80; // [rsp+1A8h] [rbp-60h] BYREF
  int v81; // [rsp+1B0h] [rbp-58h]
  __int128 v82; // [rsp+1B8h] [rbp-50h] BYREF

  v50 = a4;
  *(_QWORD *)v70 = a3;
  v64 = a2;
  v71 = a1;
  v75 = a7;
  v77 = a10;
  v78 = a11;
  v79 = a13;
  v67 = a15;
  v76 = a16;
  Src = a17;
  *(_QWORD *)v66 = 0LL;
  v43 = 0;
  v80 = 0LL;
  v81 = 0;
  ULong64FromUser = 0LL;
  v69 = 0LL;
  v59 = 0LL;
  v63 = 0;
  v60 = 0LL;
  v53 = 0;
  v47 = 0;
  v49 = 0;
  v61 = 0LL;
  v62 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v82 = 0LL;
  v52 = 0;
  v44 = 0;
  P = 0LL;
  v58 = 0LL;
  HIDWORD(v51) = 0;
  v56 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v45 = PreviousMode;
  if ( !SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.SListFaultAddress, PreviousMode) )
    return 3221225569LL;
  if ( (unsigned int)(v50 - 1) > 1 )
    return 3221225640LL;
  LOBYTE(v18) = PreviousMode;
  result = SeCaptureSecurityQos(*(_QWORD *)v70, v18, &v43, &v80);
  if ( (int)result >= 0 )
  {
    if ( v50 == 2 && !v43 )
      return 3221225637LL;
    v46 = 0;
    if ( PreviousMode )
      ULong64FromUser = RtlReadULong64FromUser(a5);
    else
      RtlCopyVolatileMemory(&ULong64FromUser, a5, 8uLL);
    if ( PreviousMode )
      v21 = RtlReadULong64FromUser(a6);
    else
      v21 = *a6;
    v69 = v21;
    v39 = 0;
    LOBYTE(v20) = PreviousMode;
    v22 = SeCaptureSidAndAttributesArray(v75, 1LL, v20);
    v46 = v22;
    if ( v22 < 0 )
    {
      ULongFromUser = v63;
    }
    else
    {
      if ( PreviousMode )
        ULongFromUser = RtlReadULongFromUser(a8);
      else
        ULongFromUser = *a8;
      v72 = ULongFromUser;
      v39 = 0;
      LOBYTE(v23) = PreviousMode;
      v22 = SeCaptureSidAndAttributesArray(a8 + 2, ULongFromUser, v23);
      v46 = v22;
      v53 = (-16 * ULongFromUser + v47 + 3) & 0xFFFFFFFC;
      v47 = v53;
    }
    if ( v22 >= 0 )
    {
      if ( PreviousMode )
        v26 = RtlReadULongFromUser(a9);
      else
        v26 = *a9;
      v49 = v26;
      v73 = v26;
      v22 = SeCaptureLuidAndAttributesArray(a9 + 1, v26, PreviousMode, v24, 0, v40, v41, &v61, &v51);
      v46 = v22;
    }
    if ( a14 )
    {
      if ( v22 < 0 )
      {
LABEL_22:
        if ( v76 && v22 >= 0 )
        {
          v33 = (unsigned __int16 *)(PreviousMode ? RtlReadULong64FromUser(v76) : *v76);
          if ( v33 )
          {
            v22 = SeCaptureAcl(v33, PreviousMode, v23, v24, 512, v40, (PVOID *)&v55, &v51);
            v46 = v22;
          }
        }
        if ( PreviousMode )
          RtlCopyFromUser(&v82, Src, 0x10uLL);
        else
          RtlCopyVolatileMemory(&v82, Src, 0x10uLL);
        if ( a12 && v22 >= 0 )
        {
          if ( PreviousMode )
            v31 = RtlReadULongFromUser(a12);
          else
            v31 = *a12;
          v74 = v31;
          LOBYTE(v29) = PreviousMode;
          v22 = SeCaptureSidAndAttributesArray(a12 + 2, v31, v29);
          v46 = v22;
        }
        else
        {
          v31 = HIDWORD(v51);
        }
        if ( v77 && v22 >= 0 )
        {
          LOBYTE(v30) = PreviousMode;
          v22 = SepCaptureTokenSecurityAttributesInformation(v77, 0, 1, v30, 0, (__int64)&P);
          v46 = v22;
        }
        if ( v78 && v22 >= 0 )
        {
          LOBYTE(v30) = PreviousMode;
          v22 = SepCaptureTokenSecurityAttributesInformation(v78, 0, 1, v30, 0, (__int64)&v58);
          v46 = v22;
        }
        if ( v79 && v22 >= 0 )
        {
          v52 = *v79;
          v32 = 1;
          v48 = 1;
        }
        else
        {
          v32 = v44;
        }
        v35 = (void *)v56;
        v36 = (void *)v61;
        if ( v22 >= 0 )
        {
          v42 = v31;
          v38 = v54;
          v37 = v62;
          v22 = SepCreateTokenEx(
                  (HANDLE *)v66,
                  PreviousMode,
                  v64,
                  *(__int64 *)v70,
                  v50,
                  SHIDWORD(v80),
                  (__int64)&ULong64FromUser,
                  &v69,
                  (void **)v59,
                  ULongFromUser,
                  v60,
                  v53,
                  v49,
                  v61,
                  v62,
                  (void *)v54,
                  (void *)v55,
                  &v82,
                  (__int64)P,
                  (__int64)v58,
                  v42,
                  v56,
                  (_DWORD *)((unsigned __int64)&v52 & -(__int64)(v32 != 0)),
                  0);
        }
        else
        {
          v37 = v62;
          v38 = v54;
        }
        if ( v59 )
          SeReleaseLuidAndAttributesArray((void *)v59, PreviousMode);
        if ( v60 )
          SeReleaseLuidAndAttributesArray((void *)v60, PreviousMode);
        if ( v36 )
          SeReleaseLuidAndAttributesArray(v36, PreviousMode);
        if ( v37 )
        {
          LOBYTE(v29) = 1;
          LOBYTE(v28) = PreviousMode;
          SeReleaseSid(v37, v28, v29);
        }
        if ( v38 )
        {
          LOBYTE(v29) = 1;
          LOBYTE(v28) = PreviousMode;
          SeReleaseSid(v38, v28, v29);
        }
        if ( v55 )
        {
          LOBYTE(v28) = PreviousMode;
          SeReleaseAcl(v55, v28);
        }
        if ( v35 )
          SeReleaseLuidAndAttributesArray(v35, PreviousMode);
        if ( P )
          SepFreeCapturedTokenSecurityAttributesInformation(P);
        if ( v58 )
          SepFreeCapturedTokenSecurityAttributesInformation(v58);
        if ( v22 >= 0 )
        {
          if ( PreviousMode )
            RtlWriteULong64ToUser(v71, *(__int64 *)v66);
          else
            *v71 = *(_QWORD *)v66;
        }
        return (unsigned int)v22;
      }
      if ( PreviousMode )
        v34 = (char *)RtlReadULong64FromUser(a14);
      else
        v34 = *a14;
      v22 = SeCaptureSid(v34, PreviousMode, v23, v24, v39, 1, &v62);
      v46 = v22;
    }
    if ( v22 >= 0 )
    {
      if ( PreviousMode )
        v27 = (char *)RtlReadULong64FromUser(v67);
      else
        v27 = *v67;
      v22 = SeCaptureSid(v27, PreviousMode, v23, v24, v39, 1, (PSID *)&v54);
      v46 = v22;
    }
    goto LABEL_22;
  }
  return result;
}
