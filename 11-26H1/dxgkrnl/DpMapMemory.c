/*
 * XREFs of DpMapMemory @ 0x14041C3D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiVerifyResources @ 0x140401138 (DpiVerifyResources.c)
 */

__int64 __fastcall DpMapMemory(
        __int64 a1,
        union _LARGE_INTEGER a2,
        unsigned int a3,
        char a4,
        char a5,
        int a6,
        PVOID *BaseAddress)
{
  ULONG_PTR v7; // r12
  PVOID *v10; // r15
  __int64 v11; // r13
  int v12; // eax
  unsigned int v13; // edi
  union _LARGE_INTEGER v14; // rbx
  char v15; // r14
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // r8
  __int64 Pool2; // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 CurrentProcess; // rax
  __int64 *v24; // rax
  __int64 v25; // rdx
  PVOID v26; // rcx
  char CommitSize; // [rsp+28h] [rbp-81h]
  int v29; // [rsp+58h] [rbp-51h]
  void *SectionHandle; // [rsp+60h] [rbp-49h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-41h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-21h] BYREF
  unsigned int v35; // [rsp+F8h] [rbp+4Fh]
  union _LARGE_INTEGER v36; // [rsp+100h] [rbp+57h] BYREF
  char v37; // [rsp+110h] [rbp+67h]

  v37 = a4;
  v36 = a2;
  v7 = a3;
  if ( !a1 || (v10 = BaseAddress) == 0LL || !a3 )
  {
    v13 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1823;
    return v13;
  }
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 || *(_DWORD *)(v11 + 16) != 1953656900 || (v12 = *(_DWORD *)(v11 + 20), v12 != 2) && v12 != 3 )
  {
    v13 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1836;
    return v13;
  }
  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1846;
  }
  CommitSize = a5;
  *v10 = 0LL;
  v13 = DpiVerifyResources(a1, (__int64 *)&v36, (unsigned int)v7, a4, CommitSize, &a6, (__int64)v10);
  if ( (v13 & 0x80000000) == 0 && !*v10 )
  {
    v29 = a6;
    if ( v37 == 1 )
    {
      v14 = v36;
      v15 = 0;
      *v10 = (PVOID)v36.QuadPart;
LABEL_41:
      Pool2 = ExAllocatePool2(256LL, 80LL, 1953656900LL);
      v22 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = 1953656900;
        *(_DWORD *)(Pool2 + 20) = 8;
        *(_DWORD *)(Pool2 + 24) = 1;
        *(union _LARGE_INTEGER *)(Pool2 + 32) = v14;
        *(_DWORD *)(Pool2 + 40) = v7;
        *(_BYTE *)(Pool2 + 44) = v37;
        *(_BYTE *)(Pool2 + 45) = a5;
        CurrentProcess = PsGetCurrentProcess(v21);
        *(_BYTE *)(v22 + 72) = v15;
        *(_QWORD *)(v22 + 48) = CurrentProcess;
        *(_DWORD *)(v22 + 56) = v29;
        *(_QWORD *)(v22 + 64) = *v10;
        KeWaitForSingleObject((PVOID)(v11 + 2544), Executive, 0, 0, 0LL);
        v24 = (__int64 *)(v11 + 2528);
        v25 = *(_QWORD *)(v11 + 2528);
        if ( *(_QWORD *)(v25 + 8) != v11 + 2528 )
          __fastfail(3u);
        *(_QWORD *)(v25 + 8) = v22;
        *(_QWORD *)v22 = v25;
        *(_QWORD *)(v22 + 8) = v24;
        *v24 = v22;
        KeReleaseMutex((PRKMUTEX)(v11 + 2544), 0);
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 2119;
      }
      else
      {
        v13 = -1073741801;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 2087;
        if ( v15 == 1 )
        {
          *(_DWORD *)(v11 + 2600) -= ((unsigned int)v7 + (unsigned __int64)(*(_DWORD *)v10 & 0xFFF) + 4095) >> 12;
          v26 = *v10;
          if ( a5 == 1 )
            ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v26);
          else
            MmUnmapIoSpace(v26, (unsigned int)v7);
        }
      }
      return v13;
    }
    v35 = 0;
    if ( a5 == 1 )
    {
      *(&ObjectAttributes.Length + 1) = 0;
      *(&ObjectAttributes.Attributes + 1) = 0;
      SectionHandle = 0LL;
      DestinationString = 0LL;
      ViewSize = v7;
      RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v13 = ZwOpenSection(&SectionHandle, 0xF001Fu, &ObjectAttributes);
      if ( (v13 & 0x80000000) != 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1929;
        return v13;
      }
      v14 = v36;
      SectionOffset = v36;
      if ( byte_140168DD0 == 1 || !v29 )
      {
        v16 = 512;
      }
      else
      {
        if ( v29 != 2 )
        {
          v16 = 0;
          goto LABEL_24;
        }
        v16 = 1024;
      }
      v35 = v16;
LABEL_24:
      v13 = ZwMapViewOfSection(
              SectionHandle,
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              v10,
              0LL,
              v7,
              &SectionOffset,
              &ViewSize,
              ViewUnmap,
              0,
              v16 | 4);
      ZwClose(SectionHandle);
      if ( (v13 & 0x80000000) != 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1974;
        return v13;
      }
      if ( v14.LowPart < SectionOffset.LowPart )
      {
        v13 = -1073741823;
        WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741823LL);
        WdLogGlobalForLineNumber = 1993;
        return v13;
      }
      LODWORD(v7) = SectionOffset.LowPart + ViewSize - v14.LowPart;
      v17 = (__int64)*v10 + v14.QuadPart - SectionOffset.QuadPart;
      goto LABEL_38;
    }
    v18 = 4;
    v35 = 4;
    if ( !a6 || byte_140168DD0 )
    {
      v18 = 516;
    }
    else
    {
      if ( a6 == 1 )
      {
LABEL_37:
        v19 = v18;
        v14 = v36;
        v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmMapIoSpaceEx)(
                (union _LARGE_INTEGER)v36.QuadPart,
                v7,
                v19);
LABEL_38:
        *v10 = (PVOID)v17;
        if ( !v17 )
        {
          v13 = -1073741811;
          WdLogSingleEntry2(2LL, (unsigned int)v7, v35);
          WdLogGlobalForLineNumber = 2054;
          return v13;
        }
        v15 = 1;
        *(_DWORD *)(v11 + 2600) += ((unsigned int)v7 + (unsigned __int64)(*(_DWORD *)v10 & 0xFFF) + 4095) >> 12;
        goto LABEL_41;
      }
      if ( a6 != 2 )
      {
        WdLogSingleEntry2(2LL, a6, v11);
        WdLogGlobalForLineNumber = 2039;
        goto LABEL_37;
      }
      v18 = 1028;
    }
    v35 = v18;
    goto LABEL_37;
  }
  return v13;
}
