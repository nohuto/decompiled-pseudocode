/*
 * XREFs of NtCreateTokenEx @ 0x1409E2210
 * Callers:
 *     DifNtCreateTokenExWrapper @ 0x140678110 (DifNtCreateTokenExWrapper.c)
 *     NtCreateToken @ 0x14081AA30 (NtCreateToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     SeCaptureSid @ 0x1408EFCE0 (SeCaptureSid.c)
 *     SeCaptureSecurityQos @ 0x1408F2220 (SeCaptureSecurityQos.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     SeCaptureAcl @ 0x1409E0A20 (SeCaptureAcl.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1409E2108 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1409E21E8 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1409E2E88 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x1409E439C (SeReleaseAcl.c)
 *     SeReleaseSid @ 0x140A9E228 (SeReleaseSid.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140AC56D8 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140AF2E38 (SepCaptureTokenSecurityAttributesInformation.c)
 */

NTSTATUS __cdecl NtCreateTokenEx(
        PHANDLE TokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TOKEN_TYPE Type,
        PLUID AuthenticationId,
        PLARGE_INTEGER ExpirationTime,
        PTOKEN_USER User,
        PTOKEN_GROUPS Groups,
        PTOKEN_PRIVILEGES Privileges,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION UserAttributes,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION DeviceAttributes,
        PTOKEN_GROUPS DeviceGroups,
        PTOKEN_MANDATORY_POLICY MandatoryPolicy,
        PTOKEN_OWNER Owner,
        PTOKEN_PRIMARY_GROUP PrimaryGroup,
        PTOKEN_DEFAULT_DACL DefaultDacl,
        PTOKEN_SOURCE Source)
{
  char PreviousMode; // di
  __int64 v18; // rdx
  NTSTATUS result; // eax
  __int64 v20; // r8
  __int64 QuadPart; // rax
  NTSTATUS v22; // ebx
  __int64 v23; // r8
  __int64 v24; // r9
  ULONG ULongFromUser; // r15d
  unsigned int PrivilegeCount; // eax
  char *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // r9d
  unsigned int GroupCount; // esi
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
  char v45; // [rsp+C2h] [rbp-146h]
  NTSTATUS v46; // [rsp+C4h] [rbp-144h]
  int v47; // [rsp+C8h] [rbp-140h]
  char v48; // [rsp+CCh] [rbp-13Ch]
  int v49; // [rsp+D0h] [rbp-138h]
  int v50; // [rsp+D4h] [rbp-134h]
  __int64 v51; // [rsp+D8h] [rbp-130h] BYREF
  unsigned int Policy; // [rsp+E0h] [rbp-128h] BYREF
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
  ULONG v63; // [rsp+130h] [rbp-D8h]
  int v64; // [rsp+134h] [rbp-D4h]
  __int64 ULong64FromUser; // [rsp+138h] [rbp-D0h] BYREF
  int v66[2]; // [rsp+140h] [rbp-C8h] BYREF
  PTOKEN_PRIMARY_GROUP v67; // [rsp+148h] [rbp-C0h]
  void *Src; // [rsp+150h] [rbp-B8h]
  __int64 v69; // [rsp+158h] [rbp-B0h] BYREF
  int v70[2]; // [rsp+160h] [rbp-A8h]
  _QWORD *v71; // [rsp+168h] [rbp-A0h]
  ULONG v72; // [rsp+170h] [rbp-98h]
  unsigned int v73; // [rsp+174h] [rbp-94h]
  unsigned int v74; // [rsp+178h] [rbp-90h]
  PTOKEN_USER v75; // [rsp+180h] [rbp-88h]
  PTOKEN_DEFAULT_DACL v76; // [rsp+188h] [rbp-80h]
  PTOKEN_SECURITY_ATTRIBUTES_INFORMATION v77; // [rsp+190h] [rbp-78h]
  PTOKEN_SECURITY_ATTRIBUTES_INFORMATION v78; // [rsp+198h] [rbp-70h]
  PTOKEN_MANDATORY_POLICY v79; // [rsp+1A0h] [rbp-68h]
  __int64 v80; // [rsp+1A8h] [rbp-60h] BYREF
  int v81; // [rsp+1B0h] [rbp-58h]
  __int128 v82; // [rsp+1B8h] [rbp-50h] BYREF

  v50 = Type;
  *(_QWORD *)v70 = ObjectAttributes;
  v64 = DesiredAccess;
  v71 = TokenHandle;
  v75 = User;
  v77 = UserAttributes;
  v78 = DeviceAttributes;
  v79 = MandatoryPolicy;
  v67 = PrimaryGroup;
  v76 = DefaultDacl;
  Src = Source;
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
  Policy = 0;
  v44 = 0;
  P = 0LL;
  v58 = 0LL;
  HIDWORD(v51) = 0;
  v56 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v45 = PreviousMode;
  if ( !SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.SListFaultAddress, PreviousMode) )
    return -1073741727;
  if ( (unsigned int)(v50 - 1) > 1 )
    return -1073741656;
  LOBYTE(v18) = PreviousMode;
  result = SeCaptureSecurityQos(*(_QWORD *)v70, v18, &v43, &v80);
  if ( result >= 0 )
  {
    if ( v50 == 2 && !v43 )
      return -1073741659;
    v46 = 0;
    if ( PreviousMode )
      ULong64FromUser = RtlReadULong64FromUser(AuthenticationId);
    else
      RtlCopyVolatileMemory(&ULong64FromUser, AuthenticationId, 8uLL);
    if ( PreviousMode )
      QuadPart = RtlReadULong64FromUser(ExpirationTime);
    else
      QuadPart = ExpirationTime->QuadPart;
    v69 = QuadPart;
    LOBYTE(v20) = PreviousMode;
    v22 = SeCaptureSidAndAttributesArray(v75, 1LL, v20, 0LL, 0);
    v46 = v22;
    if ( v22 < 0 )
    {
      ULongFromUser = v63;
    }
    else
    {
      if ( PreviousMode )
        ULongFromUser = RtlReadULongFromUser(&Groups->GroupCount);
      else
        ULongFromUser = Groups->GroupCount;
      v72 = ULongFromUser;
      LOBYTE(v23) = PreviousMode;
      v22 = SeCaptureSidAndAttributesArray(Groups->Groups, ULongFromUser, v23, 0LL, 0);
      v46 = v22;
      v53 = (-16 * ULongFromUser + v47 + 3) & 0xFFFFFFFC;
      v47 = v53;
    }
    if ( v22 >= 0 )
    {
      if ( PreviousMode )
        PrivilegeCount = RtlReadULongFromUser(&Privileges->PrivilegeCount);
      else
        PrivilegeCount = Privileges->PrivilegeCount;
      v49 = PrivilegeCount;
      v73 = PrivilegeCount;
      v22 = SeCaptureLuidAndAttributesArray(
              Privileges->Privileges,
              PrivilegeCount,
              PreviousMode,
              v24,
              v39,
              v40,
              v41,
              &v61,
              &v51);
      v46 = v22;
    }
    if ( Owner )
    {
      if ( v22 < 0 )
      {
LABEL_22:
        if ( v76 && v22 >= 0 )
        {
          v33 = PreviousMode ? (unsigned __int16 *)RtlReadULong64FromUser(v76) : (unsigned __int16 *)v76->DefaultDacl;
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
        if ( DeviceGroups && v22 >= 0 )
        {
          if ( PreviousMode )
            GroupCount = RtlReadULongFromUser(&DeviceGroups->GroupCount);
          else
            GroupCount = DeviceGroups->GroupCount;
          v74 = GroupCount;
          LOBYTE(v29) = PreviousMode;
          v22 = SeCaptureSidAndAttributesArray(DeviceGroups->Groups, GroupCount, v29, 0LL, 0);
          v46 = v22;
        }
        else
        {
          GroupCount = HIDWORD(v51);
        }
        if ( v77 && v22 >= 0 )
        {
          LOBYTE(v30) = PreviousMode;
          v22 = SepCaptureTokenSecurityAttributesInformation((_DWORD)v77, 0, 1, v30, 0, (__int64)&P);
          v46 = v22;
        }
        if ( v78 && v22 >= 0 )
        {
          LOBYTE(v30) = PreviousMode;
          v22 = SepCaptureTokenSecurityAttributesInformation((_DWORD)v78, 0, 1, v30, 0, (__int64)&v58);
          v46 = v22;
        }
        if ( v79 && v22 >= 0 )
        {
          Policy = v79->Policy;
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
          v42 = GroupCount;
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
                  (_SID_AND_ATTRIBUTES *)v59,
                  ULongFromUser,
                  (_SID_AND_ATTRIBUTES *)v60,
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
                  (_DWORD *)((unsigned __int64)&Policy & -(__int64)(v32 != 0)),
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
        return v22;
      }
      if ( PreviousMode )
        v34 = (char *)RtlReadULong64FromUser(Owner);
      else
        v34 = (char *)Owner->Owner;
      v22 = SeCaptureSid(v34, PreviousMode, v23, v24, v39, 1, &v62);
      v46 = v22;
    }
    if ( v22 >= 0 )
    {
      if ( PreviousMode )
        v27 = (char *)RtlReadULong64FromUser(v67);
      else
        v27 = (char *)v67->PrimaryGroup;
      v22 = SeCaptureSid(v27, PreviousMode, v23, v24, v39, 1, (PSID *)&v54);
      v46 = v22;
    }
    goto LABEL_22;
  }
  return result;
}
