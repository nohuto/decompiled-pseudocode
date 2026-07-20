/*
 * XREFs of SmpInitializeKnownDllsInternal @ 0x1400088B0
 * Callers:
 *     SmpInitializeKnownDlls @ 0x1400154E0 (SmpInitializeKnownDlls.c)
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmpFindRegistryValueEx @ 0x140008F4C (SmpFindRegistryValueEx.c)
 *     SmpFindModuleInModuleList @ 0x140008FB0 (SmpFindModuleInModuleList.c)
 *     SmpRandomizeDllList @ 0x140009070 (SmpRandomizeDllList.c)
 *     SmpFreeSavedRegistryEntry @ 0x14000D2D4 (SmpFreeSavedRegistryEntry.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     SmpTerminate @ 0x140018DC4 (SmpTerminate.c)
 */

__int64 __fastcall SmpInitializeKnownDllsInternal(__int64 a1, void *a2, int a3, int a4, char a5)
{
  unsigned __int8 v7; // r15
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // r12d
  _QWORD *v11; // r13
  unsigned int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // r14
  _WORD *v15; // rsi
  int v16; // edx
  _WORD *v17; // rax
  __m128i *Heap; // rsi
  __int16 v19; // cx
  __int16 v20; // ax
  signed int v21; // esi
  __int64 v22; // rcx
  __int64 *v23; // rbx
  unsigned int v24; // esi
  __int64 *v25; // rdi
  int v26; // eax
  _QWORD *v27; // rcx
  __int64 *v28; // rdx
  __int64 v29; // r8
  char v31[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v32; // [rsp+32h] [rbp-CEh]
  ULONG ObjectInformationLength; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v34; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v36; // [rsp+48h] [rbp-B8h]
  void *FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+60h] [rbp-A0h] BYREF
  __int128 ObjectInformation; // [rsp+70h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v42[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-48h]
  __int64 v44; // [rsp+C0h] [rbp-40h]
  int v45; // [rsp+C8h] [rbp-38h]
  int v46; // [rsp+CCh] [rbp-34h]
  _WORD *v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  _QWORD v49[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v51[2]; // [rsp+100h] [rbp+0h] BYREF
  int (__fastcall *v52)(_QWORD *, const char *); // [rsp+108h] [rbp+8h]
  _QWORD *v53; // [rsp+110h] [rbp+10h]
  HANDLE Handle; // [rsp+118h] [rbp+18h]
  int v55; // [rsp+120h] [rbp+20h]
  int v56; // [rsp+124h] [rbp+24h]
  _DWORD *v57; // [rsp+128h] [rbp+28h]
  int v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+134h] [rbp+34h]
  int v60; // [rsp+13Ch] [rbp+3Ch]
  unsigned __int64 Parameters[3]; // [rsp+140h] [rbp+40h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+158h] [rbp+58h] BYREF

  FileHandle = 0LL;
  v49[0] = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v32 = 0;
  ObjectInformationLength = 0;
  DestinationString = 0LL;
  v7 = 0;
  v42[1] = 0;
  IoStatusBlock = 0LL;
  v46 = 0;
  ObjectInformation = 0LL;
  v31[0] = 0;
  Destination = 0LL;
  Handle = 0LL;
  v56 = 0;
  v59 = 0LL;
  v60 = 0;
  BaseAddress = 0LL;
  v34 = 0;
  v8 = SmpRandomizeDllList(&SmpKnownDllsList, &BaseAddress, &v34);
  v9 = v8;
  if ( v8 >= 0 )
  {
    ObjectAttributes.Length = 48;
    v49[1] = &v35;
    ObjectAttributes.RootDirectory = a2;
    v53 = v49;
    v52 = SmpProcessModuleImports;
    v47 = SmpKnownDllSecurityDescriptor;
    v57 = v42;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v51[0] = 64;
    v51[1] = 7;
    v42[0] = 48;
    v43 = a1;
    v45 = 80;
    v44 = 0LL;
    v48 = 0LL;
    v55 = 983071;
    v58 = 16;
    while ( 1 )
    {
      v10 = v34;
      v11 = BaseAddress;
      v12 = 0;
      v36 = &v35;
      v35 = (__int64)&v35;
      while ( v12 < v10 )
      {
        v13 = SmpExcludeKnownDllsList;
        v14 = v11[2 * v12 + 1];
        v15 = (_WORD *)(v14 + 16);
        while ( 1 )
        {
          if ( (__int64 *)v13 == &SmpExcludeKnownDllsList )
            goto LABEL_11;
          v15 = (_WORD *)(v14 + 16);
          if ( !RtlCompareUnicodeString((PCUNICODE_STRING)(v13 + 16), (PCUNICODE_STRING)(v14 + 16), 1u) )
            break;
          v13 = *(_QWORD *)v13;
        }
        if ( !v13 )
        {
LABEL_11:
          if ( SmpFindRegistryValueEx(&SmpExcludeKnownDllsList, v14 + 32) )
            goto LABEL_45;
          v16 = 0;
          if ( *v15 >= 2u )
          {
            v17 = *(_WORD **)(v14 + 24);
            LOBYTE(v16) = *v17 == 95;
            if ( *v17 == 42 )
            {
              if ( (a5 & 2) != 0 )
                goto LABEL_45;
            }
            else if ( (a5 & 3) == 1 )
            {
              goto LABEL_45;
            }
          }
          LODWORD(v59) = 0x1000000;
          if ( v16 )
          {
            if ( a3 || !a4 )
              goto LABEL_45;
            LODWORD(v59) = 17825792;
          }
          ObjectAttributes.ObjectName = (PUNICODE_STRING)(v14 + 32);
          if ( (*(_DWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 188LL) & 0x40000) != 0 )
          {
            LODWORD(ObjectInformation) = 0;
            *((_QWORD *)&ObjectInformation + 1) = 0LL;
            ObjectInformationLength = 0;
            if ( NtQueryObject(
                   ObjectAttributes.RootDirectory,
                   ObjectNameInformation,
                   &ObjectInformation,
                   0,
                   &ObjectInformationLength) == -1073741820 )
            {
              ObjectInformationLength += 2;
              ObjectInformationLength += ObjectAttributes.ObjectName->Length;
              Heap = (__m128i *)RtlAllocateHeap(
                                  *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                  0,
                                  ObjectInformationLength);
              if ( Heap )
              {
                if ( NtQueryObject(
                       ObjectAttributes.RootDirectory,
                       ObjectNameInformation,
                       Heap,
                       ObjectInformationLength,
                       &ObjectInformationLength) >= 0 )
                {
                  v19 = _mm_cvtsi128_si32(*Heap);
                  Destination = (struct _UNICODE_STRING)*Heap;
                  Destination.MaximumLength = ObjectAttributes.ObjectName->Length + v19 + 2;
                  if ( RtlAppendUnicodeToString(&Destination, L"\\") >= 0 )
                  {
                    if ( RtlAppendUnicodeStringToString(&Destination, ObjectAttributes.ObjectName) >= 0 )
                      NtSystemDebugControl(SysDbgClearUmAttachPid|SysDbgSetTracepoint, &Destination, 0x10u, 0LL, 0, 0LL);
                    v7 = v32;
                  }
                }
                RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
              }
            }
          }
          if ( NtOpenFile(&FileHandle, 0x120020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0 )
          {
            v44 = v14 + 32;
            v49[0] = v14 + 32;
            if ( v47 )
            {
              v20 = v47[1];
              v7 = v20 & 8;
              v32 = v20 & 8;
              v47[1] = v20 | 8;
            }
            v21 = LdrVerifyImageMatchesChecksumEx((unsigned __int64)FileHandle | 1, v51);
            if ( v47 )
              v47[1] ^= (v7 ^ (unsigned __int8)v47[1]) & 8;
            if ( v21 >= 0 )
            {
              if ( (v59 & 0x200000000000LL) == 0 )
              {
                RtlInitUnicodeString(&DestinationString, L"Non-DLL file included in KnownDLL list.");
                v21 = -1073740945;
LABEL_61:
                Parameters[2] = v14 + 32;
                Parameters[0] = (unsigned __int64)&DestinationString;
                Parameters[1] = v21;
                SmpLogFailureString((__int64)"SmpInitializeKnownDllsInternal", 0x1448u, *(_QWORD *)(v14 + 24), v21);
                SmpTerminate(Parameters, 5u, 3u);
                __debugbreak();
              }
              NtClose(Handle);
            }
            else
            {
              v31[0] = 1;
              if ( v21 == -1073740760 )
              {
                if ( (int)RtlAppxIsFileOwnedByTrustedInstaller(FileHandle, v31) < 0 || v31[0] )
                {
LABEL_39:
                  RtlInitUnicodeString(&DestinationString, L"Verification of a KnownDLL failed.");
                  goto LABEL_61;
                }
              }
              else if ( v21 != -1073741771 )
              {
                goto LABEL_39;
              }
            }
            NtClose(FileHandle);
          }
        }
LABEL_45:
        ++v12;
      }
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v11);
      v23 = (__int64 *)v35;
      BaseAddress = 0LL;
      v24 = 0;
      v34 = 0;
      if ( (__int64 *)v35 == &v35 )
        return 0;
      do
      {
        v25 = v23;
        v23 = (__int64 *)*v23;
        if ( SmpFindModuleInModuleList(v22, v25 + 2) )
          SmpFreeSavedRegistryEntry(v25);
        else
          ++v24;
      }
      while ( v23 != &v35 );
      v34 = v24;
      if ( !v24 )
        return 0;
      v26 = SmpRandomizeDllList(&v35, &BaseAddress, &v34);
      v27 = (_QWORD *)v35;
      v9 = v26;
      v28 = v36;
      if ( *(__int64 **)(v35 + 8) != &v35
        || (__int64 *)*v36 != &v35
        || (*v36 = v35, v27[1] = v28, v29 = qword_140031A58, *(__int64 **)(SmpKnownDllsList + 8) != &SmpKnownDllsList)
        || *(__int64 **)qword_140031A58 != &SmpKnownDllsList
        || *(_QWORD **)(*v27 + 8LL) != v27
        || (_QWORD *)*v28 != v27 )
      {
        __fastfail(3u);
      }
      *(_QWORD *)qword_140031A58 = v27;
      qword_140031A58 = v27[1];
      *(_QWORD *)v27[1] = &SmpKnownDllsList;
      v27[1] = v29;
      if ( v26 < 0 )
      {
        SmpLogFailure("SmpInitializeKnownDllsInternal", 5244LL, (unsigned int)v26);
        return v9;
      }
    }
  }
  SmpLogFailure("SmpInitializeKnownDllsInternal", 4917LL, (unsigned int)v8);
  return v9;
}
