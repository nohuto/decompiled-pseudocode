/*
 * XREFs of NtMapViewOfSection @ 0x1409C28A0
 * Callers:
 *     DifNtMapViewOfSectionWrapper @ 0x14067BB70 (DifNtMapViewOfSectionWrapper.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x1402563E0 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x140257DB0 (EtwpTiFillProcessIdentity.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     RtlFindMostSignificantBit @ 0x140479BE0 (RtlFindMostSignificantBit.c)
 *     EtwpTiFillThreadIdentity @ 0x1404A21B8 (EtwpTiFillThreadIdentity.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     MiMapViewOfSectionCommon @ 0x1409C2EC0 (MiMapViewOfSectionCommon.c)
 *     MiMapViewOfSection @ 0x1409C31E8 (MiMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x1409C37E4 (DbgkMapViewOfSection.c)
 */

__int64 __fastcall NtMapViewOfSection(
        ULONG_PTR a1,
        ULONG_PTR BugCheckParameter1,
        _QWORD *a3,
        ULONGLONG a4,
        __int64 a5,
        _QWORD *a6,
        _QWORD *a7,
        int a8,
        int a9,
        int a10)
{
  unsigned __int64 v10; // rbx
  _QWORD *v13; // rcx
  char PreviousMode; // si
  __int64 result; // rax
  unsigned __int64 v16; // r15
  char v17; // cl
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  int v20; // ebx
  int v21; // r9d
  _KPROCESS *v22; // r14
  _KPROCESS *v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rax
  const EVENT_DESCRIPTOR *v26; // r12
  int v27; // eax
  int v28; // eax
  int v29; // r9d
  int v30; // eax
  int v31; // r9d
  int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38[2]; // [rsp+58h] [rbp-260h] BYREF
  __int128 v39; // [rsp+68h] [rbp-250h] BYREF
  PVOID Object[2]; // [rsp+78h] [rbp-240h]
  int v41; // [rsp+88h] [rbp-230h] BYREF
  _DWORD v42[4]; // [rsp+90h] [rbp-228h] BYREF
  _QWORD *v43; // [rsp+A0h] [rbp-218h]
  _QWORD *v44; // [rsp+A8h] [rbp-210h]
  __int64 v45; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-200h] BYREF
  char v47[8]; // [rsp+C0h] [rbp-1F8h] BYREF
  unsigned __int64 v48; // [rsp+C8h] [rbp-1F0h]
  __int64 v49; // [rsp+D0h] [rbp-1E8h]
  __int64 v50; // [rsp+D8h] [rbp-1E0h]
  unsigned int v51; // [rsp+E8h] [rbp-1D0h]
  int v52; // [rsp+ECh] [rbp-1CCh]
  unsigned int v53; // [rsp+F0h] [rbp-1C8h]
  char v54; // [rsp+F5h] [rbp-1C3h]
  int v55; // [rsp+F8h] [rbp-1C0h]
  int v56; // [rsp+FCh] [rbp-1BCh]
  PVOID v57; // [rsp+118h] [rbp-1A0h]
  _KPROCESS *Process; // [rsp+120h] [rbp-198h]
  unsigned __int64 v59; // [rsp+140h] [rbp-178h] BYREF
  unsigned __int64 v60; // [rsp+148h] [rbp-170h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[18]; // [rsp+150h] [rbp-168h] BYREF

  v10 = a4;
  v44 = a3;
  v13 = a7;
  v43 = a7;
  *(_OWORD *)v38 = 0LL;
  v39 = 0LL;
  *(_OWORD *)Object = 0LL;
  if ( a4 )
  {
    if ( a4 < 0x20 )
    {
      v10 = a4 + 32;
    }
    else
    {
      v10 = 63 - RtlFindMostSignificantBit(a4);
      v13 = v43;
    }
    if ( v10 > 0x35 )
      return 3221225485LL;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = MiMapViewOfSectionCommon(
             BugCheckParameter1,
             a1,
             (__int64)v13,
             (__int64)a6,
             a10,
             v10,
             PreviousMode,
             (__int64)v38);
  if ( (int)result >= 0 )
  {
    v16 = MiSectionControlArea((__int64)Object[0]);
    memset_0(v47, 0, 0x80uLL);
    Process = KeGetCurrentThread()->ApcState.Process;
    v57 = Object[1];
    v54 = KeGetCurrentThread()->PreviousMode;
    v53 = a9 & 0x7F;
    if ( v53 > (unsigned __int16)KeNumberNodes )
    {
      v20 = -1073741811;
    }
    else
    {
      v51 = a9 & 0xFFFFFF80;
      v52 = a10;
      v56 = 0;
      v17 = v55;
      if ( v38[0] )
      {
        v17 = v55 | 1;
        v55 |= 1u;
      }
      v50 = v38[1];
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
          v37 = 0xFFFFFFFFFFFFFFFFuLL >> v10;
          if ( 0xFFFFFFFFFFFFFFFFuLL >> v10 > 0x7FFFFFFEFFFFLL )
            v37 = 0x7FFFFFFEFFFFLL;
          v18 = v37;
        }
        v19 = *((_QWORD *)Object[1] + 109) - 1LL;
        if ( v18 <= v19 )
          v19 = v18;
      }
      v48 = v19;
      v49 = 0x10000LL;
      if ( (*(_DWORD *)(v16 + 56) & 0x420) == 0 )
      {
        if ( (a9 & 0x20000000) != 0 )
        {
          v49 = 0x200000LL;
        }
        else if ( (a9 & 0x40000000) != 0 )
        {
          v49 = 4096LL;
        }
      }
      v20 = 0;
    }
    if ( v20 < 0 )
    {
      if ( v38[0] )
      {
LABEL_19:
        ++*(_DWORD *)&stru_140E2EB88.SchedulerApcFill5[52];
LABEL_43:
        ObfDereferenceObjectWithTag(Object[0], 0x77566D4Du);
        ObfDereferenceObjectWithTag(Object[1], 0x77566D4Du);
        return (unsigned int)v20;
      }
    }
    else
    {
      v20 = MiMapViewOfSection(Object[0], (unsigned int)v47, (unsigned int)v38, a5, (__int64)&v39, a8, 0);
      v42[2] = v20;
      if ( v20 >= 0 )
      {
        if ( (v55 & 4) != 0 )
          DbgkMapViewOfSection(Object[1], Object[0], v38[0], v21);
        if ( (*((_DWORD *)Object[0] + 14) & 0x20) == 0 && (BYTE8(v39) & 2) != 0 )
        {
          v42[0] = a10;
          v41 = a9;
          v46 = v50;
          v45 = v38[0];
          v22 = (_KPROCESS *)Object[1];
          if ( EtwProviderEnabled(*(REGHANDLE *)&EtwpSecurityLock.AbWaitEntryCount, 0, 0xF00uLL) )
          {
            v23 = KeGetCurrentThread()->ApcState.Process;
            v24 = 0LL;
            if ( v23 == v22 )
              v24 = 1LL;
            v25 = 2LL;
            if ( PreviousMode )
              v25 = 0LL;
            v26 = (const EVENT_DESCRIPTOR *)off_140001CA8[v25 + v24];
            if ( EtwEventEnabled(*(REGHANDLE *)&EtwpSecurityLock.AbWaitEntryCount, v26) )
            {
              v27 = EtwpTiFillProcessIdentity(UserData, (__int64)v23, &v59);
              v28 = EtwpTiFillThreadIdentity(&UserData[v27].Ptr, (__int64)KeGetCurrentThread());
              v30 = EtwpTiFillProcessIdentity(&UserData[v28 + v29].Ptr, (__int64)v22, &v60);
              v32 = v30 + v31;
              v33 = (unsigned int)(v30 + v31);
              UserData[v33].Ptr = (ULONGLONG)&v45;
              *(_QWORD *)&UserData[v33].Size = 8LL;
              v34 = (unsigned int)(v32 + 1);
              UserData[v34].Ptr = (ULONGLONG)&v46;
              *(_QWORD *)&UserData[v34].Size = 8LL;
              v35 = (unsigned int)(v32 + 2);
              UserData[v35].Ptr = (ULONGLONG)&v41;
              *(_QWORD *)&UserData[v35].Size = 4LL;
              v36 = (unsigned int)(v32 + 3);
              UserData[v36].Ptr = (ULONGLONG)v42;
              *(_QWORD *)&UserData[v36].Size = 4LL;
              EtwWrite(*(REGHANDLE *)&EtwpSecurityLock.AbWaitEntryCount, v26, 0LL, v32 + 4, UserData);
            }
          }
        }
        ObfDereferenceObjectWithTag(Object[0], 0x77566D4Du);
        ObfDereferenceObjectWithTag(Object[1], 0x77566D4Du);
        if ( PreviousMode )
          RtlWriteULong64ToUser(v43, v50);
        else
          *v43 = v50;
        if ( PreviousMode )
          RtlWriteULong64ToUser(v44, v38[0]);
        else
          *v44 = v38[0];
        if ( a6 )
        {
          if ( PreviousMode )
            RtlWriteULong64ToUser(a6, v39);
          else
            *a6 = v39;
        }
        return (unsigned int)v20;
      }
      if ( v38[0] )
        goto LABEL_19;
    }
    ++*(_DWORD *)&stru_140E2EB88.SchedulerApcFill5[48];
    goto LABEL_43;
  }
  ++*(_DWORD *)&stru_140E2EB88.SchedulerApcFill5[48];
  return result;
}
