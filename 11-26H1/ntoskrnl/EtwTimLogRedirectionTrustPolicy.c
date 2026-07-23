/*
 * XREFs of EtwTimLogRedirectionTrustPolicy @ 0x140831560
 * Callers:
 *     IoCheckRedirectionTrustLevel @ 0x1404A3AD0 (IoCheckRedirectionTrustLevel.c)
 *     IoCheckRedirectionTrustLevel2 @ 0x1404F5590 (IoCheckRedirectionTrustLevel2.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     EtwpTiFillProcessIdentity @ 0x140259590 (EtwpTiFillProcessIdentity.c)
 *     RtlWalkFrameChain @ 0x1402622E0 (RtlWalkFrameChain.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x14041DAC0 (RtlStringCbCopyW.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x140728420 (ZwQueryVirtualMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpQueryProcessCommandLine @ 0x1409D37CC (EtwpQueryProcessCommandLine.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTimLogRedirectionTrustPolicy(
        int a1,
        const EVENT_DESCRIPTOR *a2,
        int a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  PCEVENT_DESCRIPTOR v6; // r13
  signed __int64 v7; // r15
  UNICODE_STRING *v8; // rbx
  signed __int32 v9; // esi
  unsigned int v10; // r14d
  char v11; // r12
  unsigned __int16 v12; // di
  unsigned __int16 i; // cx
  unsigned int v14; // edx
  void *Pool2; // rax
  bool v16; // cf
  int v17; // ecx
  __int64 v18; // r15
  void *v19; // rax
  _QWORD *v20; // r12
  PVOID *v21; // rsi
  wchar_t *p_Length; // r14
  unsigned __int16 j; // dx
  __int64 *v24; // rax
  __int64 *v25; // r14
  __int64 *v26; // rax
  unsigned __int16 Length; // si
  int v28; // eax
  const wchar_t *v29; // rcx
  int v30; // eax
  __int16 v31; // si
  int v32; // eax
  unsigned __int16 *v33; // r10
  unsigned int v34; // r8d
  __int64 v35; // rax
  ULONG v36; // eax
  const wchar_t *v37; // r10
  ULONG v38; // r9d
  __int16 v39; // ax
  __int64 v40; // rax
  unsigned __int16 v41; // r15
  UNICODE_STRING *v42; // r11
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned int v45; // ecx
  unsigned __int16 MaximumLength; // r8
  wchar_t *v47; // r12
  ULONG v48; // r9d
  int v49; // r13d
  __int64 v50; // rax
  const wchar_t *v51; // r10
  int v52; // eax
  int v53; // r8d
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rsi
  __int64 v57; // r14
  __int64 v58; // r10
  bool v59; // cc
  ULONG v60; // ecx
  PVOID *v61; // rdx
  __int64 v62; // rax
  unsigned __int16 v63; // r8
  UNICODE_STRING *p_DestinationString; // rcx
  UNICODE_STRING *v65; // rcx
  UNICODE_STRING *v66; // rcx
  UNICODE_STRING *v67; // rcx
  UNICODE_STRING *v68; // rcx
  UNICODE_STRING *v69; // rcx
  unsigned __int8 v70; // [rsp+30h] [rbp-D0h] BYREF
  char v71; // [rsp+31h] [rbp-CFh]
  unsigned __int16 v72; // [rsp+32h] [rbp-CEh] BYREF
  _WORD v73[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v74[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v75; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v76; // [rsp+40h] [rbp-C0h] BYREF
  PVOID *v77; // [rsp+48h] [rbp-B8h] BYREF
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  int v80; // [rsp+68h] [rbp-98h] BYREF
  int v81; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v82; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v83; // [rsp+78h] [rbp-88h] BYREF
  PVOID v84; // [rsp+88h] [rbp-78h]
  UNICODE_STRING v85; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v86; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v87; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v88; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v89; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v90; // [rsp+C0h] [rbp-40h] BYREF
  PVOID P; // [rsp+C8h] [rbp-38h]
  _OWORD MemoryInformation[3]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v93[2]; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING *v94; // [rsp+120h] [rbp+20h]
  __int64 v95; // [rsp+128h] [rbp+28h]
  PVOID **v96; // [rsp+130h] [rbp+30h]
  __int64 v97; // [rsp+138h] [rbp+38h]
  int *v98; // [rsp+140h] [rbp+40h]
  __int64 v99; // [rsp+148h] [rbp+48h]
  unsigned __int8 *v100; // [rsp+150h] [rbp+50h]
  __int64 v101; // [rsp+158h] [rbp+58h]
  unsigned __int8 *v102; // [rsp+160h] [rbp+60h]
  __int64 v103; // [rsp+168h] [rbp+68h]
  int *v104; // [rsp+170h] [rbp+70h]
  __int64 v105; // [rsp+178h] [rbp+78h]
  wchar_t *v106; // [rsp+180h] [rbp+80h]
  int v107; // [rsp+188h] [rbp+88h] BYREF
  int v108; // [rsp+18Ch] [rbp+8Ch]
  PCEVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+190h] [rbp+90h]
  __int64 v110; // [rsp+198h] [rbp+98h]
  _DWORD *v111; // [rsp+1A0h] [rbp+A0h]
  __int64 v112; // [rsp+1A8h] [rbp+A8h]
  wchar_t *v113; // [rsp+1B0h] [rbp+B0h]
  _DWORD v114[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  PVOID *v115; // [rsp+1C0h] [rbp+C0h]
  __int64 v116; // [rsp+1C8h] [rbp+C8h]
  _DWORD *v117; // [rsp+1D0h] [rbp+D0h]
  __int64 v118; // [rsp+1D8h] [rbp+D8h]
  wchar_t *v119; // [rsp+1E0h] [rbp+E0h]
  _DWORD v120[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  PVOID *v121; // [rsp+1F0h] [rbp+F0h]
  __int64 v122; // [rsp+1F8h] [rbp+F8h]
  _DWORD *v123; // [rsp+200h] [rbp+100h]
  __int64 v124; // [rsp+208h] [rbp+108h]
  wchar_t *v125; // [rsp+210h] [rbp+110h]
  _DWORD v126[2]; // [rsp+218h] [rbp+118h] BYREF
  PVOID *v127; // [rsp+220h] [rbp+120h]
  __int64 v128; // [rsp+228h] [rbp+128h]
  _DWORD *v129; // [rsp+230h] [rbp+130h]
  __int64 v130; // [rsp+238h] [rbp+138h]
  wchar_t *v131; // [rsp+240h] [rbp+140h]
  _DWORD v132[2]; // [rsp+248h] [rbp+148h] BYREF
  PVOID *v133; // [rsp+250h] [rbp+150h]
  __int64 v134; // [rsp+258h] [rbp+158h]
  _DWORD *v135; // [rsp+260h] [rbp+160h]
  __int64 v136; // [rsp+268h] [rbp+168h]
  wchar_t *v137; // [rsp+270h] [rbp+170h]
  _DWORD v138[2]; // [rsp+278h] [rbp+178h] BYREF
  UNICODE_STRING *v139; // [rsp+280h] [rbp+180h]
  __int64 v140; // [rsp+288h] [rbp+188h]
  PVOID Callers[16]; // [rsp+290h] [rbp+190h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+310h] [rbp+210h] BYREF
  const wchar_t *v143; // [rsp+320h] [rbp+220h]
  int v144; // [rsp+328h] [rbp+228h]
  int v145; // [rsp+32Ch] [rbp+22Ch]
  _WORD *v146; // [rsp+330h] [rbp+230h]
  __int64 v147; // [rsp+338h] [rbp+238h]
  wchar_t *Buffer; // [rsp+340h] [rbp+240h]
  int v149; // [rsp+348h] [rbp+248h]
  int v150; // [rsp+34Ch] [rbp+24Ch]
  __int64 v151[86]; // [rsp+350h] [rbp+250h] BYREF
  int v152; // [rsp+660h] [rbp+560h] BYREF

  v152 = a3;
  EventDescriptor = a2;
  v75 = a1;
  v6 = a2;
  v86 = 0LL;
  v73[0] = 0;
  v74[0] = 0;
  v76 = 0;
  v82 = a4;
  v83 = 0LL;
  DestinationString = 0LL;
  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  memset_0(Callers, 0, sizeof(Callers));
  v7 = *(_QWORD *)&v6[123].Id;
  v80 = a5;
  v8 = 0LL;
  v9 = 0;
  v81 = a6;
  v10 = 0;
  v71 = 0;
  v84 = 0LL;
  v11 = 1;
  v12 = RtlWalkFrameChain(Callers, 0x10u, 1u);
  for ( i = 1; ; ++i )
  {
    v14 = 7;
    if ( v12 <= 7u )
      v14 = v12;
    if ( i >= v14 )
      break;
    v9 += LODWORD(Callers[i]);
  }
  if ( !v9 )
    v9 = 1;
  while ( 1 )
  {
    if ( v7 )
      goto LABEL_13;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      break;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)&v6[123], (signed __int64)Pool2, 0LL);
    if ( v7 )
      ExFreePoolWithTag(Pool2, 0);
    else
      v7 = (signed __int64)Pool2;
LABEL_13:
    while ( 1 )
    {
      v16 = v10 < 0xA;
      if ( v10 >= 0xA )
        break;
      v17 = *(_DWORD *)(v7 + 4LL * v10);
      if ( !v17 )
      {
        v16 = v10 < 0xA;
        break;
      }
      if ( v17 == v9 )
        return;
      ++v10;
    }
    v11 = v16 ? v11 : 0;
    if ( !v11 )
      break;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)&v6[123].Id + 4LL * v10), v9, 0) )
    {
      RtlInitUnicodeString(&DestinationString, L"Unknown");
      if ( v12 )
      {
        v18 = v12;
        v8 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
        v19 = (void *)ExAllocatePool2(0x100uLL);
        v84 = v19;
        v20 = v19;
        if ( v8 && v19 )
        {
          v21 = Callers;
          p_Length = &v8[1].Length;
          do
          {
            if ( ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   *v21,
                   MemoryMappedFilenameInformation,
                   v20,
                   0x218uLL,
                   0LL) < 0
              || *(_WORD *)v20 <= 1u )
            {
              goto LABEL_33;
            }
            for ( j = (*(_WORD *)v20 >> 1) - 1; j; --j )
            {
              if ( *(_WORD *)(v20[1] + 2LL * j) == 92 )
              {
                ++j;
                break;
              }
            }
            RtlStringCbCopyW(p_Length, 0x40uLL, (NTSTRSAFE_PCWSTR)(v20[1] + 2LL * j));
            RtlInitUnicodeString((PUNICODE_STRING)p_Length - 1, p_Length);
            if ( ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   *v21,
                   MemoryBasicInformation,
                   MemoryInformation,
                   0x30uLL,
                   0LL) < 0 )
LABEL_33:
              *v21 = 0LL;
            else
              *v21 = (char *)*v21 - *((_QWORD *)&MemoryInformation[0] + 1);
            p_Length += 40;
            ++v21;
            --v18;
          }
          while ( v18 );
          v6 = EventDescriptor;
        }
        else
        {
          memset_0(Callers, 0, 8LL * v12);
        }
      }
      v24 = MITIGATION_AUDIT_REDIRECTION_TRUST_POLICY;
      if ( v75 != 1 )
        v24 = MITIGATION_ENFORCE_REDIRECTION_TRUST_POLICY;
      v25 = &EmptyUnicodeString;
      EventDescriptor = (PCEVENT_DESCRIPTOR)v24;
      v26 = *(__int64 **)&v6[53].Id;
      v85 = 0LL;
      if ( v26 )
        v25 = v26;
      EtwpQueryProcessCommandLine(v6, &v85);
      Length = v85.Length;
      if ( v85.Length )
      {
        v71 = 1;
      }
      else
      {
        RtlInitUnicodeString(&v85, L"Unknown");
        Length = v85.Length;
      }
      if ( !v82 )
        RtlInitUnicodeString(&v83, L"Unknown");
      if ( v25 && *(_WORD *)v25 )
      {
        v73[0] = *(_WORD *)v25 >> 1;
        UserData.Ptr = (ULONGLONG)v73;
        *(_QWORD *)&UserData.Size = 2LL;
        v28 = *(unsigned __int16 *)v25;
        v29 = (const wchar_t *)v25[1];
      }
      else
      {
        v73[0] = 6;
        UserData.Ptr = (ULONGLONG)v73;
        v29 = L"(null)";
        v28 = 12;
        *(_QWORD *)&UserData.Size = 2LL;
      }
      v144 = v28;
      P = v85.Buffer;
      v143 = v29;
      v145 = 0;
      v147 = 2LL;
      if ( Length )
      {
        Buffer = v85.Buffer;
        v30 = Length;
        v146 = v74;
        v31 = Length >> 1;
      }
      else
      {
        Buffer = L"(null)";
        v146 = v74;
        v31 = 6;
        v30 = 12;
      }
      v74[0] = v31;
      v149 = v30;
      v150 = 0;
      v32 = EtwpTiFillProcessIdentity(v151, (__int64)v6, &v86);
      v34 = v32 + 5;
      v35 = 2LL * (unsigned int)(v32 + 4);
      *(&UserData.Ptr + v35) = (ULONGLONG)&v152;
      *((_QWORD *)&UserData.Size + v35) = 4LL;
      if ( v33 && (v36 = *v33, (_WORD)v36) )
      {
        v37 = (const wchar_t *)*((_QWORD *)v33 + 1);
        v38 = v36;
        v39 = (unsigned __int16)v36 >> 1;
      }
      else
      {
        v38 = 12;
        v37 = L"(null)";
        v39 = 6;
      }
      v76 = v39;
      v40 = 2LL * v34;
      v41 = 0;
      v42 = v8;
      *(&UserData.Ptr + v40) = (ULONGLONG)&v76;
      v43 = 2LL * (v34 + 1);
      *((_QWORD *)&UserData.Size + v40) = 2LL;
      v44 = 2LL * (v34 + 2);
      *(&UserData.Ptr + v43) = (ULONGLONG)v37;
      v45 = v34 + 3;
      *(&UserData.Size + 2 * v43) = v38;
      *(&UserData.Reserved + 2 * v43) = 0;
      MaximumLength = DestinationString.MaximumLength;
      v47 = DestinationString.Buffer;
      v48 = v45 + 1;
      v49 = DestinationString.Length;
      *(&UserData.Ptr + v44) = (ULONGLONG)&v80;
      *((_QWORD *)&UserData.Size + v44) = 4LL;
      v50 = 2LL * v45;
      v72 = MaximumLength;
      *(&UserData.Ptr + v50) = (ULONGLONG)&v81;
      *((_QWORD *)&UserData.Size + v50) = 4LL;
      v77 = Callers;
      do
      {
        if ( v41 < v12 && v8 )
        {
          if ( v42 && (v51 = v42->Buffer) != 0LL && (v52 = v42->Length, (_WORD)v52) )
          {
            v53 = v52 + 2;
            if ( v42->MaximumLength <= (unsigned int)(v52 + 1) )
              v53 = v42->Length;
          }
          else
          {
            v53 = 14;
            v51 = L"(null)";
          }
          v54 = (__int64)(&UserData + v48);
          v55 = 1;
          v56 = 8LL;
          v57 = v54;
          *(_QWORD *)v54 = v51;
          v58 = 12LL;
        }
        else
        {
          if ( v47 && (_WORD)v49 )
          {
            v58 = (__int64)(&UserData + v48);
            v59 = MaximumLength <= (unsigned int)(v49 + 1);
            v53 = v49 + 2;
            if ( v59 )
              v53 = v49;
            *(_QWORD *)v58 = v47;
          }
          else
          {
            v53 = 14;
            v58 = (__int64)(&UserData + v48);
            *(_QWORD *)v58 = L"(null)";
          }
          v57 = 8LL;
          v55 = v48;
          v48 = 1;
          v56 = v58;
          v54 = 12LL;
        }
        *(_DWORD *)(v57 + v56) = v53;
        v60 = v55 + v48;
        *(_DWORD *)(v54 + v58) = 0;
        v48 += v55 + 1;
        v61 = v77;
        v62 = 2LL * v60;
        MaximumLength = v72;
        v42 += 5;
        ++v41;
        *(&UserData.Ptr + v62) = (ULONGLONG)v77;
        *((_QWORD *)&UserData.Size + v62) = 8LL;
        v77 = v61 + 1;
      }
      while ( v41 < 0x10u );
      EtwWrite(*(REGHANDLE *)&stru_140F03830.SavedApcStateFill[40], EventDescriptor, 0LL, v48, &UserData);
      if ( v8 )
      {
        if ( (unsigned int)dword_140E08F78 > 5 && tlgKeywordOn((__int64)&dword_140E08F78, 0x400000000000LL) )
        {
          v82 = 0x2000000LL;
          v94 = (UNICODE_STRING *)&v82;
          LODWORD(v77) = v152;
          v96 = &v77;
          v98 = &v75;
          v70 = a5;
          v100 = &v70;
          LOBYTE(v72) = a6;
          v102 = (unsigned __int8 *)&v72;
          v95 = 8LL;
          v97 = 4LL;
          v99 = 4LL;
          v101 = 1LL;
          v103 = 1LL;
          if ( v12 <= 1u || (p_DestinationString = v8 + 5, !v8[5].Buffer) )
            p_DestinationString = &DestinationString;
          v108 = 0;
          v104 = &v107;
          v106 = p_DestinationString->Buffer;
          v107 = p_DestinationString->Length;
          EventDescriptor = (PCEVENT_DESCRIPTOR)Callers[1];
          p_EventDescriptor = &EventDescriptor;
          v105 = 2LL;
          v110 = 8LL;
          if ( v12 <= 2u || (v65 = v8 + 10, !v8[10].Buffer) )
            v65 = &DestinationString;
          v112 = 2LL;
          v111 = v114;
          v113 = v65->Buffer;
          v114[0] = v65->Length;
          v87 = Callers[2];
          v115 = &v87;
          v114[1] = 0;
          v116 = 8LL;
          if ( v12 <= 3u || (v66 = v8 + 15, !v8[15].Buffer) )
            v66 = &DestinationString;
          v118 = 2LL;
          v117 = v120;
          v119 = v66->Buffer;
          v120[0] = v66->Length;
          v88 = Callers[3];
          v121 = &v88;
          v120[1] = 0;
          v122 = 8LL;
          if ( v12 <= 4u || (v67 = v8 + 20, !v8[20].Buffer) )
            v67 = &DestinationString;
          v124 = 2LL;
          v123 = v126;
          v125 = v67->Buffer;
          v126[0] = v67->Length;
          v89 = Callers[4];
          v127 = &v89;
          v126[1] = 0;
          v128 = 8LL;
          if ( v12 <= v63 || (v68 = v8 + 25, !v8[25].Buffer) )
            v68 = &DestinationString;
          v130 = 2LL;
          v129 = v132;
          v131 = v68->Buffer;
          v132[0] = v68->Length;
          v90 = Callers[5];
          v133 = &v90;
          v132[1] = 0;
          v134 = 8LL;
          if ( v12 <= 6u || (v69 = v8 + 30, !v8[30].Buffer) )
            v69 = &DestinationString;
          v136 = 2LL;
          v135 = v138;
          v137 = v69->Buffer;
          v138[0] = v69->Length;
          *(PVOID *)&v83.Length = Callers[6];
          v139 = &v83;
          v138[1] = 0;
          v140 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E08F78,
            (unsigned __int8 *)&word_140055846,
            0LL,
            0LL,
            0x19u,
            v93);
        }
      }
      else if ( (unsigned int)dword_140E08F78 > 5 && tlgKeywordOn((__int64)&dword_140E08F78, 0x400000000000LL) )
      {
        *(_QWORD *)&v83.Length = 0x2000000LL;
        v94 = &v83;
        LODWORD(v77) = v152;
        v96 = &v77;
        v98 = &v75;
        LOBYTE(v72) = a5;
        v100 = (unsigned __int8 *)&v72;
        v70 = a6;
        v102 = &v70;
        v104 = &v107;
        v95 = 8LL;
        v97 = 4LL;
        v99 = 4LL;
        v101 = 1LL;
        v103 = 1LL;
        v105 = 2LL;
        v106 = v47;
        v107 = v49;
        v108 = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E08F78,
          (unsigned __int8 *)byte_1400557D8,
          0LL,
          0LL,
          9u,
          v93);
      }
      if ( v71 )
        ExFreePoolWithTag(P, 0);
      if ( v84 )
        ExFreePoolWithTag(v84, 0);
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      return;
    }
  }
}
