/*
 * XREFs of EtwpPsProvTraceProcess @ 0x1409CE5FC
 * Callers:
 *     EtwpPsProvProcessEnumCallback @ 0x1409BA820 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpWriteProcessEvent @ 0x1409D04C4 (EtwpWriteProcessEvent.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     SeQueryTokenIntegrity @ 0x14043A468 (SeQueryTokenIntegrity.c)
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 *     MmGetProcessPartitionId @ 0x1404A34A8 (MmGetProcessPartitionId.c)
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     EtwpQueryProcessEnabledSecurityMitigations @ 0x1404C83E8 (EtwpQueryProcessEnabledSecurityMitigations.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     PsQueryStatisticsProcess @ 0x1409CDFC0 (PsQueryStatisticsProcess.c)
 *     ObGetProcessHandleCount @ 0x1409CED00 (ObGetProcessHandleCount.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall EtwpPsProvTraceProcess(__int64 a1, char a2, unsigned int *a3, int *a4, __int16 a5)
{
  NTSTATUS result; // eax
  __int64 v10; // r8
  __int64 v11; // rdi
  const EVENT_DESCRIPTOR *v12; // r15
  ULONG v13; // esi
  void *v14; // rcx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  void *v17; // r14
  int v18; // eax
  UNICODE_STRING *p_DestinationString; // rax
  unsigned int Length; // ecx
  unsigned int v21; // eax
  __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  void *v24; // r14
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rbx
  int v31; // [rsp+38h] [rbp-D0h] BYREF
  int v32; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v33; // [rsp+40h] [rbp-C8h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp-C0h] BYREF
  int ProcessHandleCount; // [rsp+50h] [rbp-B8h] BYREF
  int v36; // [rsp+54h] [rbp-B4h] BYREF
  int v37; // [rsp+58h] [rbp-B0h] BYREF
  int v38; // [rsp+5Ch] [rbp-ACh] BYREF
  int v39; // [rsp+60h] [rbp-A8h] BYREF
  int v40; // [rsp+64h] [rbp-A4h] BYREF
  int SessionId; // [rsp+68h] [rbp-A0h] BYREF
  int v42; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v43; // [rsp+70h] [rbp-98h] BYREF
  PEPROCESS Process; // [rsp+78h] [rbp-90h] BYREF
  int v45; // [rsp+80h] [rbp-88h] BYREF
  __int64 v46; // [rsp+88h] [rbp-80h] BYREF
  __int64 v47; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 CycleTime; // [rsp+98h] [rbp-70h] BYREF
  PVOID P; // [rsp+A0h] [rbp-68h] BYREF
  _SID_AND_ATTRIBUTES IntegritySA; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v52[3]; // [rsp+C8h] [rbp-40h] BYREF
  char v53; // [rsp+E0h] [rbp-28h] BYREF
  int v54; // [rsp+F0h] [rbp-18h]
  int v55; // [rsp+F4h] [rbp-14h]
  int v56; // [rsp+F8h] [rbp-10h]
  int v57; // [rsp+FCh] [rbp-Ch]
  __int64 v58; // [rsp+108h] [rbp+0h]
  __int64 v59; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+138h] [rbp+30h] BYREF
  __int64 v61; // [rsp+148h] [rbp+40h]
  __int64 v62; // [rsp+150h] [rbp+48h]
  __int64 v63; // [rsp+158h] [rbp+50h]
  __int64 v64; // [rsp+160h] [rbp+58h]
  int *v65; // [rsp+168h] [rbp+60h]
  __int64 v66; // [rsp+170h] [rbp+68h]
  unsigned __int64 *p_CycleTime; // [rsp+178h] [rbp+70h]
  __int64 v68; // [rsp+180h] [rbp+78h]
  int *p_SessionId; // [rsp+188h] [rbp+80h]
  __int64 v70; // [rsp+190h] [rbp+88h]
  __int64 *p_ProcessHandleCount; // [rsp+198h] [rbp+90h]
  __int64 v72; // [rsp+1A0h] [rbp+98h]
  int *v73; // [rsp+1A8h] [rbp+A0h]
  __int64 v74; // [rsp+1B0h] [rbp+A8h]
  int *v75; // [rsp+1B8h] [rbp+B0h]
  __int64 v76; // [rsp+1C0h] [rbp+B8h]
  char *Sid; // [rsp+1C8h] [rbp+C0h]
  __int64 v78; // [rsp+1D0h] [rbp+C8h]
  wchar_t *Buffer; // [rsp+1D8h] [rbp+D0h]
  __int64 v80; // [rsp+1E0h] [rbp+D8h]
  __int64 *v81; // [rsp+1E8h] [rbp+E0h]
  __int64 v82; // [rsp+1F0h] [rbp+E8h]
  int *v83; // [rsp+1F8h] [rbp+F0h]
  __int64 v84; // [rsp+200h] [rbp+F8h]
  int *v85; // [rsp+208h] [rbp+100h]
  __int64 v86; // [rsp+210h] [rbp+108h]
  unsigned int *v87; // [rsp+218h] [rbp+110h]
  __int64 v88; // [rsp+220h] [rbp+118h]
  unsigned int *v89; // [rsp+228h] [rbp+120h]
  unsigned int v90; // [rsp+230h] [rbp+128h]
  int v91; // [rsp+234h] [rbp+12Ch]
  __int64 *v92; // [rsp+238h] [rbp+130h]
  __int64 v93; // [rsp+240h] [rbp+138h]
  char *v94; // [rsp+248h] [rbp+140h]
  __int64 v95; // [rsp+250h] [rbp+148h]
  int *v96; // [rsp+258h] [rbp+150h]
  __int64 v97; // [rsp+260h] [rbp+158h]
  wchar_t pszDest[16]; // [rsp+268h] [rbp+160h] BYREF

  LODWORD(v33) = 0;
  v40 = 0;
  SessionId = 0;
  v32 = 0;
  ProcessHandleCount = 0;
  v46 = 0LL;
  v47 = 0LL;
  result = (unsigned int)memset_0(v52, 0, 0x68uLL);
  v11 = -1LL;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  CycleTime = -1LL;
  v42 = -1;
  v43 = 0LL;
  LOWORD(v31) = 0;
  DestinationString = 0LL;
  IntegritySA = 0LL;
  switch ( a5 )
  {
    case 769:
      v12 = &ProcessStart;
      break;
    case 770:
      v12 = (const EVENT_DESCRIPTOR *)ProcessStop;
      break;
    case 771:
      v12 = (const EVENT_DESCRIPTOR *)ProcessRundown;
      break;
    default:
      return result;
  }
  v45 = *(_DWORD *)(a1 + 464);
  v13 = 3;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v45;
  v61 = a1 + 1656;
  v63 = a1 + 504;
  v62 = 8LL;
  v64 = 8LL;
  if ( ((a5 - 769) & 0xFFFD) != 0 )
  {
    if ( a5 == 770 )
    {
      TokenInformation = 0LL;
      PsQueryStatisticsProcess((_QWORD *)a1, v52, v10, (struct _KLOCK_ENTRIES *)0x301);
      v66 = 8LL;
      v65 = (int *)(a1 + 1472);
      v68 = 4LL;
      p_CycleTime = (unsigned __int64 *)(a1 + 1364);
      v24 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u, v22, v23);
      if ( SeQueryInformationToken(v24, TokenElevationType, &TokenInformation) >= 0 )
      {
        if ( *(_DWORD *)TokenInformation == 1 )
        {
          Process = 0LL;
          if ( SeQueryInformationToken(v24, TokenElevation, (PVOID *)&Process) >= 0 )
            v32 = Process->Header.LockNV != 0 ? 1 : 4;
          if ( Process )
            ExFreePoolWithTag(Process, 0);
        }
        else
        {
          v32 = *(_DWORD *)TokenInformation;
        }
      }
      ObFastDereferenceObject((signed __int64 *)(a1 + 584), (ULONG_PTR)v24, 0x746C6644u);
      if ( TokenInformation )
        ExFreePoolWithTag(TokenInformation, 0);
      v70 = 4LL;
      p_SessionId = &v32;
      ProcessHandleCount = ObGetProcessHandleCount(a1, 0LL);
      v72 = 4LL;
      p_ProcessHandleCount = (__int64 *)&ProcessHandleCount;
      v46 = *(_QWORD *)(a1 + 984) << 12;
      v73 = (int *)&v46;
      v47 = *(_QWORD *)(a1 + 992) << 12;
      v75 = (int *)&v47;
      Sid = &v53;
      v25 = v54;
      if ( v55 )
        v25 = -1;
      v74 = 8LL;
      v36 = v25;
      Buffer = (wchar_t *)&v36;
      v26 = v56;
      if ( v57 )
        v26 = -1;
      v76 = 8LL;
      v27 = v58 >> 10;
      v37 = v26;
      v81 = (__int64 *)&v37;
      v58 = v27;
      v78 = 8LL;
      if ( HIDWORD(v27) )
        LODWORD(v27) = -1;
      v83 = &v38;
      v38 = v27;
      v59 >>= 10;
      v28 = v59;
      v80 = 4LL;
      v82 = 4LL;
      if ( HIDWORD(v59) )
        v28 = -1;
      v85 = &v39;
      v29 = a1 + 1192;
      v84 = 4LL;
      v30 = a1 + 824;
      v39 = v28;
      v89 = (unsigned int *)v30;
      v86 = 4LL;
      v87 = (unsigned int *)v29;
      v88 = 4LL;
      do
        ++v11;
      while ( *(_BYTE *)(v30 + v11) );
      v91 = 0;
      v90 = v11 + 1;
      v13 = 16;
    }
  }
  else
  {
    v40 = *(_DWORD *)(a1 + 720);
    Process = 0LL;
    TokenInformation = 0LL;
    P = 0LL;
    v14 = *(void **)(a1 + 720);
    v65 = &v40;
    v66 = 4LL;
    if ( PsLookupProcessByProcessId(v14, &Process) >= 0 )
    {
      CycleTime = Process[3].CycleTime;
      ObfDereferenceObject(Process);
    }
    v68 = 8LL;
    p_CycleTime = &CycleTime;
    SessionId = PsGetSessionId(a1);
    p_SessionId = &SessionId;
    v70 = 4LL;
    if ( (a2 & 1) != 0 )
      LODWORD(v33) = 1;
    else
      v13 = 2;
    if ( (a2 & 8) != 0 )
      LODWORD(v33) = v13;
    v72 = 4LL;
    p_ProcessHandleCount = &v33;
    v17 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u, v15, v16);
    if ( SeQueryInformationToken(v17, TokenElevationType, &TokenInformation) >= 0 )
      LODWORD(v11) = *(_DWORD *)TokenInformation;
    v32 = v11;
    v73 = &v32;
    v74 = 4LL;
    if ( TokenInformation )
      ExFreePoolWithTag(TokenInformation, 0);
    if ( SeQueryInformationToken(v17, TokenElevation, &P) >= 0 )
      v42 = *(_DWORD *)P;
    v76 = 4LL;
    v75 = &v42;
    if ( P )
      ExFreePoolWithTag(P, 0);
    SeQueryTokenIntegrity(v17, &IntegritySA);
    v18 = *((unsigned __int8 *)IntegritySA.Sid + 1);
    Sid = (char *)IntegritySA.Sid;
    v78 = (unsigned int)(4 * v18 + 8);
    ObFastDereferenceObject((signed __int64 *)(a1 + 584), (ULONG_PTR)v17, 0x746C6644u);
    p_DestinationString = *(UNICODE_STRING **)(a1 + 848);
    if ( !p_DestinationString || !p_DestinationString->Length )
    {
      RtlStringCchPrintfW(pszDest, 0xFuLL, L"%S", a1 + 824);
      RtlInitUnicodeString(&DestinationString, pszDest);
      p_DestinationString = &DestinationString;
    }
    Length = p_DestinationString->Length;
    Buffer = p_DestinationString->Buffer;
    v81 = &EtwpNull;
    v85 = a4 + 1;
    v87 = a3 + 6;
    v88 = *a3;
    v89 = a3 + 70;
    v21 = a3[2];
    v80 = Length;
    v90 = v21;
    v82 = 2LL;
    v83 = a4;
    v84 = 4LL;
    v86 = 4LL;
    v91 = 0;
    LODWORD(v43) = EtwpQueryProcessEnabledSecurityMitigations(a1);
    v93 = 4LL;
    v92 = &v43;
    v13 = 19;
    HIDWORD(v43) = (unsigned __int16)MmGetProcessPartitionId(a1);
    v94 = (char *)&v43 + 4;
    LOWORD(v31) = *(_WORD *)(a1 + 1772);
    v96 = &v31;
    v95 = 4LL;
    v97 = 2LL;
  }
  return EtwWrite((REGHANDLE)stru_140F03830.Affinity, v12, 0LL, v13, &UserData);
}
