/*
 * XREFs of NtMapViewOfSection @ 0x140993880
 * Callers:
 *     DifNtMapViewOfSectionWrapper @ 0x14067F750 (DifNtMapViewOfSectionWrapper.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x140257D70 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x140259590 (EtwpTiFillProcessIdentity.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     RtlFindMostSignificantBit @ 0x140473540 (RtlFindMostSignificantBit.c)
 *     EtwpTiFillThreadIdentity @ 0x14049BCE8 (EtwpTiFillThreadIdentity.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     MiMapViewOfSectionCommon @ 0x140993EA0 (MiMapViewOfSectionCommon.c)
 *     MiMapViewOfSection @ 0x1409941C8 (MiMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x1409947C4 (DbgkMapViewOfSection.c)
 */

NTSTATUS __cdecl NtMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  ULONG_PTR v10; // rbx
  PSIZE_T v13; // rcx
  char PreviousMode; // si
  NTSTATUS result; // eax
  unsigned __int64 v16; // r15
  char v17; // cl
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  NTSTATUS v20; // ebx
  _KPROCESS *v21; // r14
  _KPROCESS *v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rax
  const EVENT_DESCRIPTOR *v25; // r12
  int v26; // eax
  int v27; // eax
  int v28; // r9d
  int v29; // eax
  int v30; // r9d
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37[2]; // [rsp+58h] [rbp-260h] BYREF
  __int128 v38; // [rsp+68h] [rbp-250h] BYREF
  PVOID Object[2]; // [rsp+78h] [rbp-240h]
  ULONG v40; // [rsp+88h] [rbp-230h] BYREF
  _DWORD v41[4]; // [rsp+90h] [rbp-228h] BYREF
  PSIZE_T v42; // [rsp+A0h] [rbp-218h]
  PVOID *v43; // [rsp+A8h] [rbp-210h]
  __int64 v44; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-200h] BYREF
  char v46[8]; // [rsp+C0h] [rbp-1F8h] BYREF
  unsigned __int64 v47; // [rsp+C8h] [rbp-1F0h]
  __int64 v48; // [rsp+D0h] [rbp-1E8h]
  __int64 v49; // [rsp+D8h] [rbp-1E0h]
  ULONG v50; // [rsp+E8h] [rbp-1D0h]
  ULONG v51; // [rsp+ECh] [rbp-1CCh]
  ULONG v52; // [rsp+F0h] [rbp-1C8h]
  char v53; // [rsp+F5h] [rbp-1C3h]
  int v54; // [rsp+F8h] [rbp-1C0h]
  int v55; // [rsp+FCh] [rbp-1BCh]
  PVOID v56; // [rsp+118h] [rbp-1A0h]
  _KPROCESS *Process; // [rsp+120h] [rbp-198h]
  unsigned __int64 v58; // [rsp+140h] [rbp-178h] BYREF
  unsigned __int64 v59; // [rsp+148h] [rbp-170h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[18]; // [rsp+150h] [rbp-168h] BYREF

  v10 = ZeroBits;
  v43 = BaseAddress;
  v13 = ViewSize;
  v42 = ViewSize;
  *(_OWORD *)v37 = 0LL;
  v38 = 0LL;
  *(_OWORD *)Object = 0LL;
  if ( ZeroBits )
  {
    if ( ZeroBits < 0x20 )
    {
      v10 = ZeroBits + 32;
    }
    else
    {
      v10 = 63 - RtlFindMostSignificantBit(ZeroBits);
      v13 = v42;
    }
    if ( v10 > 0x35 )
      return -1073741811;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = MiMapViewOfSectionCommon(
             (ULONG_PTR)ProcessHandle,
             (ULONG_PTR)SectionHandle,
             (__int64)v13,
             (__int64)SectionOffset,
             Win32Protect,
             v10,
             PreviousMode,
             (__int64)v37);
  if ( result >= 0 )
  {
    v16 = MiSectionControlArea((__int64)Object[0]);
    memset_0(v46, 0, 0x80uLL);
    Process = KeGetCurrentThread()->ApcState.Process;
    v56 = Object[1];
    v53 = KeGetCurrentThread()->PreviousMode;
    v52 = AllocationType & 0x7F;
    if ( v52 > (unsigned __int16)KeNumberNodes )
    {
      v20 = -1073741811;
    }
    else
    {
      v50 = AllocationType & 0xFFFFFF80;
      v51 = Win32Protect;
      v55 = 0;
      v17 = v54;
      if ( v37[0] )
      {
        v17 = v54 | 1;
        v54 |= 1u;
      }
      v49 = v37[1];
      if ( (*(_DWORD *)(v16 + 56) & 0x20) == 0 && (v17 & 1) != 0 )
      {
        v19 = *((_QWORD *)Object[1] + 109) - 1LL;
        if ( v19 >= 0x7FFFFFFEFFFFLL )
          v19 = 0x7FFFFFFEFFFFLL;
      }
      else
      {
        v18 = 0x7FFFFFFEFFFFLL;
        if ( v10 )
        {
          v36 = 0xFFFFFFFFFFFFFFFFuLL >> v10;
          if ( 0xFFFFFFFFFFFFFFFFuLL >> v10 > 0x7FFFFFFEFFFFLL )
            v36 = 0x7FFFFFFEFFFFLL;
          v18 = v36;
        }
        v19 = *((_QWORD *)Object[1] + 109) - 1LL;
        if ( v18 <= v19 )
          v19 = v18;
      }
      v47 = v19;
      v48 = 0x10000LL;
      if ( (*(_DWORD *)(v16 + 56) & 0x420) == 0 )
      {
        if ( (AllocationType & 0x20000000) != 0 )
        {
          v48 = 0x200000LL;
        }
        else if ( (AllocationType & 0x40000000) != 0 )
        {
          v48 = 4096LL;
        }
      }
      v20 = 0;
    }
    if ( v20 < 0 )
    {
      if ( v37[0] )
      {
LABEL_19:
        ++*(_DWORD *)&stru_140E2ED08.SchedulerApcFill5[52];
LABEL_43:
        ObfDereferenceObjectWithTag(Object[0], 0x77566D4Du);
        ObfDereferenceObjectWithTag(Object[1], 0x77566D4Du);
        return v20;
      }
    }
    else
    {
      v20 = MiMapViewOfSection(
              Object[0],
              (unsigned int)v46,
              (unsigned int)v37,
              CommitSize,
              (__int64)&v38,
              InheritDisposition,
              0);
      v41[2] = v20;
      if ( v20 >= 0 )
      {
        if ( (v54 & 4) != 0 )
          DbgkMapViewOfSection(Object[1], Object[0], v37[0]);
        if ( (*((_DWORD *)Object[0] + 14) & 0x20) == 0 && (BYTE8(v38) & 2) != 0 )
        {
          v41[0] = Win32Protect;
          v40 = AllocationType;
          v45 = v49;
          v44 = v37[0];
          v21 = (_KPROCESS *)Object[1];
          if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xF00uLL) )
          {
            v22 = KeGetCurrentThread()->ApcState.Process;
            v23 = 0LL;
            if ( v22 == v21 )
              v23 = 1LL;
            v24 = 2LL;
            if ( PreviousMode )
              v24 = 0LL;
            v25 = (const EVENT_DESCRIPTOR *)off_1400019F0[v24 + v23];
            if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v25) )
            {
              v26 = EtwpTiFillProcessIdentity(UserData, (__int64)v22, &v58);
              v27 = EtwpTiFillThreadIdentity(&UserData[v26].Ptr, (__int64)KeGetCurrentThread());
              v29 = EtwpTiFillProcessIdentity(&UserData[v27 + v28].Ptr, (__int64)v21, &v59);
              v31 = v29 + v30;
              v32 = (unsigned int)(v29 + v30);
              UserData[v32].Ptr = (ULONGLONG)&v44;
              *(_QWORD *)&UserData[v32].Size = 8LL;
              v33 = (unsigned int)(v31 + 1);
              UserData[v33].Ptr = (ULONGLONG)&v45;
              *(_QWORD *)&UserData[v33].Size = 8LL;
              v34 = (unsigned int)(v31 + 2);
              UserData[v34].Ptr = (ULONGLONG)&v40;
              *(_QWORD *)&UserData[v34].Size = 4LL;
              v35 = (unsigned int)(v31 + 3);
              UserData[v35].Ptr = (ULONGLONG)v41;
              *(_QWORD *)&UserData[v35].Size = 4LL;
              EtwWrite(EtwThreatIntProvRegHandle, v25, 0LL, v31 + 4, UserData);
            }
          }
        }
        ObfDereferenceObjectWithTag(Object[0], 0x77566D4Du);
        ObfDereferenceObjectWithTag(Object[1], 0x77566D4Du);
        if ( PreviousMode )
          RtlWriteULong64ToUser(v42, v49);
        else
          *v42 = v49;
        if ( PreviousMode )
          RtlWriteULong64ToUser(v43, v37[0]);
        else
          *v43 = (PVOID)v37[0];
        if ( SectionOffset )
        {
          if ( PreviousMode )
            RtlWriteULong64ToUser(SectionOffset, v38);
          else
            SectionOffset->QuadPart = v38;
        }
        return v20;
      }
      if ( v37[0] )
        goto LABEL_19;
    }
    ++*(_DWORD *)&stru_140E2ED08.SchedulerApcFill5[48];
    goto LABEL_43;
  }
  ++*(_DWORD *)&stru_140E2ED08.SchedulerApcFill5[48];
  return result;
}
