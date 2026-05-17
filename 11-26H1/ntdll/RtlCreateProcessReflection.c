/*
 * XREFs of RtlCreateProcessReflection @ 0x1801397C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180076230 (RtlpCreateUserThreadEx.c)
 *     RtlpProcessReflectionStartup @ 0x180139D90 (RtlpProcessReflectionStartup.c)
 *     NtWaitForSingleObject @ 0x18015EFC0 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x18015F100 (ZwSetEvent.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x18015F260 (NtQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x18015F6C0 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x18015F840 (ZwCreateEvent.c)
 *     NtCreateSection @ 0x18015F880 (NtCreateSection.c)
 *     ZwQuerySystemTime @ 0x18015FA80 (ZwQuerySystemTime.c)
 *     NtWaitForMultipleObjects @ 0x18015FA90 (NtWaitForMultipleObjects.c)
 */

__int64 __fastcall RtlCreateProcessReflection(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  HANDLE v7; // rsi
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  int UserThread; // eax
  HANDLE v23; // rcx
  int v24; // eax
  int ReturnLength; // [rsp+28h] [rbp-99h]
  int ReturnLengtha; // [rsp+28h] [rbp-99h]
  __int64 v27; // [rsp+38h] [rbp-89h]
  __int64 v28; // [rsp+68h] [rbp-59h] BYREF
  __int64 v29; // [rsp+70h] [rbp-51h] BYREF
  __int64 v30; // [rsp+78h] [rbp-49h] BYREF
  HANDLE v31; // [rsp+80h] [rbp-41h] BYREF
  ULONG ProcessInformationLength[2]; // [rsp+88h] [rbp-39h] BYREF
  PVOID ProcessInformation; // [rsp+90h] [rbp-31h] BYREF
  __int64 v34; // [rsp+98h] [rbp-29h] BYREF
  HANDLE v35; // [rsp+A0h] [rbp-21h] BYREF
  HANDLE v36; // [rsp+A8h] [rbp-19h] BYREF
  HANDLE Handle[2]; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-1h] BYREF
  __int64 v39; // [rsp+C8h] [rbp+7h] BYREF
  __int64 v40; // [rsp+D0h] [rbp+Fh] BYREF
  __int64 v41; // [rsp+D8h] [rbp+17h] BYREF

  *(_QWORD *)ProcessInformationLength = 4096LL;
  Handle[0] = 0LL;
  v29 = 0LL;
  v7 = 0LL;
  ProcessInformation = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  v35 = 0LL;
  v39 = 0LL;
  v38 = 0LL;
  v34 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v36 = 0LL;
  v31 = 0LL;
  ZwQuerySystemTime(&v40);
  if ( (a2 & 0xFFFFFFE1) != 0 )
    return 3221225712LL;
  if ( (a2 & 8) != 0 && a3 )
    return 3221225715LL;
  if ( a6 )
  {
    *(_OWORD *)a6 = 0LL;
    *(_OWORD *)(a6 + 16) = 0LL;
  }
  v12 = ZwAllocateVirtualMemory(-1LL, &ProcessInformation, 0LL, ProcessInformationLength, 12288, 4);
  if ( v12 < 0 )
  {
    ProcessInformation = 0LL;
    goto LABEL_41;
  }
  NtQueryInformationProcess(
    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
    ProcessImageFileName,
    ProcessInformation,
    ProcessInformationLength[0],
    ProcessInformationLength);
  *(_QWORD *)ProcessInformationLength = 4096LL;
  ZwFreeVirtualMemory(-1LL, &ProcessInformation, ProcessInformationLength, 0x8000LL);
  v30 = 88LL;
  v12 = ZwAllocateVirtualMemory(-1LL, &v28, 0LL, &v30, 12288, 4);
  if ( v12 < 0 )
  {
    v28 = 0LL;
    goto LABEL_41;
  }
  v13 = v28;
  v14 = v30;
  *(_QWORD *)(v28 + 24) = a4;
  *(_QWORD *)(v13 + 16) = a3;
  *(_QWORD *)v13 = v14;
  *(_DWORD *)(v13 + 8) = a2;
  *(_QWORD *)(v13 + 48) = a5;
  if ( a1 == -1 )
  {
    *(_DWORD *)(v13 + 8) = a2 | 0x10;
    v12 = RtlpProcessReflectionStartup(v28);
    if ( v12 >= 0 && a6 )
    {
      v15 = v28;
      *(_QWORD *)a6 = *(_QWORD *)(v28 + 56);
      v16 = *(_QWORD *)(v15 + 64);
      v17 = v28;
      *(_QWORD *)(a6 + 8) = v16;
      v18 = *(_QWORD *)(v17 + 72);
      v19 = v28;
LABEL_40:
      *(_QWORD *)(a6 + 16) = v18;
      *(_QWORD *)(a6 + 24) = *(_QWORD *)(v19 + 80);
      goto LABEL_41;
    }
    goto LABEL_41;
  }
  v39 = v30;
  v12 = NtCreateSection(&v35, 6LL, 0LL, &v39, 4, 0x8000000, 0LL);
  if ( v12 < 0 )
    goto LABEL_41;
  v38 = v30;
  v12 = ZwMapViewOfSection(v35, a1, &v34, 0LL, v30, 0LL, &v38, 2, 0, 4);
  if ( v12 >= 0 )
  {
    v12 = ZwMapViewOfSection(v35, -1LL, &v29, 0LL, v30, 0LL, &v38, 2, 0, 4);
    if ( v12 < 0 )
    {
      v29 = 0LL;
      goto LABEL_41;
    }
    if ( !a6
      || (LOBYTE(ReturnLength) = 0, v12 = ZwCreateEvent(&v36, 2031619LL, 0LL, 0LL, ReturnLength), v12 >= 0)
      && (LOBYTE(ReturnLengtha) = 0, v12 = ZwCreateEvent(&v31, 2031619LL, 0LL, 0LL, ReturnLengtha), v12 >= 0)
      && (v12 = ZwDuplicateObject(-1LL, v36, a1, v28 + 32, 2031619, 0, 2), v12 >= 0)
      && (v12 = ZwDuplicateObject(-1LL, v31, a1, v28 + 40, 2031619, 0, 2), v12 >= 0)
      && (!a5 || (v12 = ZwDuplicateObject(-1LL, a5, a1, v28 + 48, 2031619, 0, 2), v12 >= 0)) )
    {
      v20 = v28;
      v21 = v29;
      *(_OWORD *)v29 = *(_OWORD *)v28;
      *(_OWORD *)(v21 + 16) = *(_OWORD *)(v20 + 16);
      *(_OWORD *)(v21 + 32) = *(_OWORD *)(v20 + 32);
      *(_OWORD *)(v21 + 48) = *(_OWORD *)(v20 + 48);
      *(_OWORD *)(v21 + 64) = *(_OWORD *)(v20 + 64);
      *(_QWORD *)(v21 + 80) = *(_QWORD *)(v20 + 80);
      UserThread = RtlpCreateUserThreadEx(
                     a1,
                     0LL,
                     2,
                     0,
                     0LL,
                     0LL,
                     v27,
                     (__int64)RtlpProcessReflectionStartup,
                     v34,
                     Handle,
                     0LL);
      v7 = Handle[0];
      v12 = UserThread;
      if ( UserThread >= 0 )
      {
        if ( a6 )
        {
          Handle[1] = v36;
          if ( (unsigned int)NtWaitForMultipleObjects(2LL, Handle, 1LL, 0LL, 0LL) == 1 )
          {
            if ( *(_QWORD *)(v29 + 56) )
            {
              if ( (int)ZwDuplicateObject(a1, *(_QWORD *)(v29 + 56), -1LL, a6, 0x1FFFFF, 0, 2) >= 0 )
              {
                v24 = ZwDuplicateObject(a1, *(_QWORD *)(v29 + 64), -1LL, a6 + 8, 0x1FFFFF, 0, 2);
                v23 = v31;
                if ( v24 >= 0 )
                {
                  v12 = ZwSetEvent(v31, 0LL);
                  v18 = *(_QWORD *)(v29 + 72);
                  v19 = v29;
                  goto LABEL_40;
                }
              }
              else
              {
                v23 = v31;
              }
              v12 = ZwSetEvent(v23, 0LL);
              goto LABEL_41;
            }
            NtWaitForSingleObject(v7, 0, 0LL);
          }
          v12 = -1073741823;
        }
      }
    }
LABEL_41:
    if ( v34 )
      NtUnmapViewOfSection(a1, v34);
    goto LABEL_43;
  }
  v34 = 0LL;
LABEL_43:
  if ( v29 )
    NtUnmapViewOfSection(-1LL, v29);
  if ( v35 )
    NtClose(v35);
  if ( v28 )
    ZwFreeVirtualMemory(-1LL, &v28, &v30, 0x8000LL);
  if ( v36 )
    NtClose(v36);
  if ( v31 )
    NtClose(v31);
  if ( v7 )
    NtClose(v7);
  ZwQuerySystemTime(&v41);
  return (unsigned int)v12;
}
