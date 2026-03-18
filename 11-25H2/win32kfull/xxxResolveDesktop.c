/*
 * XREFs of xxxResolveDesktop @ 0x140244080
 * Callers:
 *     <none>
 * Callees:
 *     _UserTestForWinStaAccess @ 0x140112AF4 (_UserTestForWinStaAccess.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     xxxConnectService @ 0x14016629C (xxxConnectService.c)
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     MapDesktop @ 0x140172F80 (MapDesktop.c)
 *     CloseProtectedHandle @ 0x1401B60FC (CloseProtectedHandle.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1401BCE20 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     _OpenWindowStation @ 0x1401CE8D8 (_OpenWindowStation.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1401D5EB8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _OpenDesktop @ 0x1401D6EE8 (_OpenDesktop.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxResolveDesktop(void *a1, UNICODE_STRING *a2, HANDLE *a3, int a4, _QWORD *a5)
{
  BOOL v6; // r15d
  NTSTATUS result; // eax
  NTSTATUS ProcessLuid; // edi
  PVOID v9; // r12
  __int64 ProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  HANDLE v14; // rax
  __int64 UserSessionState; // r10
  UNICODE_STRING v16; // xmm1
  __int16 v17; // cx
  PWSTR Buffer; // r8
  PWSTR i; // rdx
  int v20; // eax
  int v21; // r13d
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  HANDLE v26; // rcx
  PVOID v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  PVOID v30; // rsi
  struct _UNICODE_STRING *v31; // rsi
  __int64 v32; // rdx
  NTSTATUS v33; // eax
  PVOID *Object; // [rsp+20h] [rbp-3B8h]
  PVOID BaseAddress; // [rsp+40h] [rbp-398h] BYREF
  HANDLE SourceHandle; // [rsp+48h] [rbp-390h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-388h] BYREF
  unsigned int v38; // [rsp+58h] [rbp-380h]
  int v39; // [rsp+5Ch] [rbp-37Ch]
  struct _UNICODE_STRING Destination; // [rsp+60h] [rbp-378h] BYREF
  PVOID v41; // [rsp+70h] [rbp-368h] BYREF
  PVOID v42; // [rsp+78h] [rbp-360h] BYREF
  BOOL v43; // [rsp+80h] [rbp-358h]
  int v44; // [rsp+84h] [rbp-354h]
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-350h] BYREF
  HANDLE *v46; // [rsp+90h] [rbp-348h]
  _QWORD *v47; // [rsp+98h] [rbp-340h]
  __int64 v48; // [rsp+A0h] [rbp-338h]
  struct _UNICODE_STRING *v49; // [rsp+A8h] [rbp-330h]
  int v50; // [rsp+B0h] [rbp-328h]
  void *TargetHandle; // [rsp+B8h] [rbp-320h] BYREF
  HANDLE SourceProcessHandle; // [rsp+C0h] [rbp-318h]
  UNICODE_STRING Source; // [rsp+D0h] [rbp-308h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-2F8h] BYREF
  PVOID v55[4]; // [rsp+F0h] [rbp-2E8h] BYREF
  _QWORD v56[5]; // [rsp+110h] [rbp-2C8h] BYREF
  int v57; // [rsp+138h] [rbp-2A0h]
  int v58; // [rsp+13Ch] [rbp-29Ch]
  WCHAR SourceString[32]; // [rsp+150h] [rbp-288h] BYREF
  char v60; // [rsp+190h] [rbp-248h] BYREF

  v39 = a4;
  v46 = a3;
  SourceProcessHandle = a1;
  v55[3] = a1;
  v55[2] = a3;
  v47 = a5;
  v6 = 0;
  v43 = 0;
  DestinationString = 0LL;
  Source = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v49 = 0LL;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  v55[0] = 0LL;
  result = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, v55, 0LL);
  ProcessLuid = result;
  v9 = v55[0];
  v55[1] = v55[0];
  if ( result >= 0 )
  {
    TargetHandle = 0LL;
    SourceHandle = 0LL;
    Handle = 0LL;
    *(_DWORD *)&Destination.Length = 34209792;
    Destination.Buffer = (PWSTR)&v60;
    ProcessWin32Process = PsGetProcessWin32Process(v55[0]);
    v13 = ProcessWin32Process;
    v42 = (PVOID)ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      v12 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
      v13 = v12 & ProcessWin32Process;
      v42 = (PVOID)(v12 & ProcessWin32Process);
    }
    if ( v13 )
    {
      if ( (*(_DWORD *)(v13 + 12) & 0x1000) != 0 )
      {
        ObfDereferenceObject(v9);
        return -1073741790;
      }
      if ( *(_QWORD *)(v13 + 656) && *(_QWORD *)(v13 + 376) )
      {
        if ( v9 == (PVOID)PsGetCurrentProcess(v12) )
        {
          SourceHandle = *(HANDLE *)(v13 + 656);
          Handle = *(HANDLE *)(v13 + 376);
        }
        else
        {
          ProcessLuid = ObOpenObjectByPointer(
                          *(PVOID *)(v13 + 648),
                          0,
                          0LL,
                          0x2000000u,
                          ExWindowStationObjectType,
                          1,
                          &SourceHandle);
          if ( ProcessLuid >= 0 )
          {
            ProcessLuid = ObOpenObjectByPointer(
                            *(PVOID *)(v13 + 336),
                            0,
                            0LL,
                            0x2000000u,
                            (POBJECT_TYPE)ExDesktopObjectType,
                            1,
                            &Handle);
            if ( ProcessLuid < 0 )
            {
              ObCloseHandle(SourceHandle, 1);
              SourceHandle = 0LL;
            }
          }
          if ( ProcessLuid < 0 )
            SetLastNtError(ProcessLuid);
        }
        ObfDereferenceObject(v9);
        *v46 = SourceHandle;
        v14 = Handle;
        if ( Handle )
          ProcessLuid = 0;
        goto LABEL_101;
      }
    }
    UserSessionState = W32GetUserSessionState(v12, v11);
    v48 = UserSessionState;
    if ( a2 && a2->Length )
    {
      v16 = *a2;
      Source = v16;
      v17 = (unsigned __int16)_mm_cvtsi128_si32((__m128i)v16) >> 1;
      Buffer = a2->Buffer;
      for ( i = Buffer; v17; --v17 )
      {
        if ( *i == 92 )
          break;
        ++i;
      }
      v20 = 0;
      v38 = 0;
      if ( !v17 )
      {
        DestinationString = v16;
        v21 = 1;
        v44 = 1;
        goto LABEL_29;
      }
      DestinationString.Buffer = i + 1;
      DestinationString.MaximumLength = 2 * v17 - 2;
      DestinationString.Length = DestinationString.MaximumLength;
      Source.Length = 2 * (i - Buffer);
      v21 = 0;
      v44 = 0;
      RtlAppendUnicodeToString(&Destination, (PCWSTR)(UserSessionState + 63608));
      RtlAppendUnicodeToString(&Destination, L"\\");
      RtlAppendUnicodeStringToString(&Destination, &Source);
      ProcessLuid = UserTestForWinStaAccess(&Destination, 1);
      if ( ProcessLuid < 0 )
        goto LABEL_97;
      v20 = 0;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"Default");
      v20 = 1;
      v38 = 1;
      v21 = 1;
      v44 = 1;
    }
    UserSessionState = v48;
LABEL_29:
    v22 = 0;
    if ( !v20 )
      v22 = v39;
    v39 = v22;
    v50 = v22;
    if ( !*(_QWORD *)(UserSessionState + 63520) )
      goto LABEL_68;
    if ( v21 )
    {
      RtlInitUnicodeString(&Source, L"WinSta0");
      RtlAppendUnicodeToString(&Destination, (PCWSTR)(v48 + 63608));
      RtlAppendUnicodeToString(&Destination, L"\\");
      RtlAppendUnicodeStringToString(&Destination, &Source);
      if ( *(_DWORD *)(W32GetUserSessionState(v24, v23) + 68612) )
        v6 = UserTestForWinStaAccess(&Destination, 1) >= 0;
      else
        LOBYTE(v6) = UserTestForWinStaAccess(&Destination, v39) >= 0;
      v43 = v6;
      if ( !v6 )
      {
        v41 = 0LL;
        ProcessLuid = GetProcessLuid(0LL, &v41);
        if ( ProcessLuid < 0 )
          goto LABEL_97;
        LODWORD(Object) = (_DWORD)v41;
        RtlStringCchPrintfW(SourceString, 29LL, L"Service-0x%x-%x$", HIDWORD(v41), Object);
        RtlInitUnicodeString(&Source, SourceString);
      }
      if ( (unsigned __int8)ObFindHandleForObject(v9, 0LL, ExWindowStationObjectType, 0LL, &SourceHandle)
        && v9 != (PVOID)PsGetCurrentProcess(v25) )
      {
        ProcessLuid = ZwDuplicateObject(
                        SourceProcessHandle,
                        SourceHandle,
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        &TargetHandle,
                        0,
                        0,
                        2u);
        if ( ProcessLuid < 0 )
        {
          SourceHandle = 0LL;
LABEL_52:
          if ( ProcessLuid >= 0 && !SourceHandle )
          {
            Destination.Length = 0;
            RtlAppendUnicodeToString(&Destination, (PCWSTR)(v48 + 63608));
            RtlAppendUnicodeToString(&Destination, L"\\");
            RtlAppendUnicodeStringToString(&Destination, &Source);
            RegionSize = 586LL;
            ProcessLuid = ZwAllocateVirtualMemory(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            &BaseAddress,
                            0LL,
                            &RegionSize,
                            0x1000u,
                            4u);
            v49 = (struct _UNICODE_STRING *)((char *)BaseAddress + 48);
            v41 = (char *)BaseAddress + 48;
            if ( ProcessLuid >= 0 )
            {
              SafeCopyUnicodeString((PUNICODE_STRING)BaseAddress + 3, &Destination);
              *(_DWORD *)BaseAddress = 48;
              *((_QWORD *)BaseAddress + 1) = 0LL;
              *((_DWORD *)BaseAddress + 6) = 64;
              *((_QWORD *)BaseAddress + 2) = v49;
              *((_QWORD *)BaseAddress + 4) = 0LL;
              *((_QWORD *)BaseAddress + 5) = 0LL;
              if ( v39 )
                *((_DWORD *)BaseAddress + 6) |= 2u;
              SourceHandle = (HANDLE)OpenWindowStation((__int64)BaseAddress, 0x2000000, v28);
            }
          }
          if ( !*(_DWORD *)(W32GetUserSessionState(v26, i) + 68612) && ProcessLuid >= 0 && !SourceHandle && !v6 && v21 )
          {
            ProcessLuid = xxxConnectService((__int64)&Destination, &Handle, v46);
            if ( BaseAddress )
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
            ObfDereferenceObject(v9);
            if ( ProcessLuid < 0 )
              return ProcessLuid;
            goto LABEL_100;
          }
          v20 = v38;
LABEL_68:
          if ( !SourceHandle )
          {
            ProcessLuid = -1073741823;
            goto LABEL_97;
          }
          if ( Handle )
          {
LABEL_97:
            if ( BaseAddress )
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
            ObfDereferenceObject(v9);
            *v46 = SourceHandle;
LABEL_100:
            v14 = Handle;
LABEL_101:
            *v47 = v14;
            return ProcessLuid;
          }
          if ( !v20 || !(unsigned __int8)ObFindHandleForObject(v9, 0LL, ExDesktopObjectType, 0LL, &Handle) )
          {
LABEL_82:
            if ( ProcessLuid < 0 )
            {
LABEL_94:
              if ( !Handle )
              {
                ObCloseHandle(SourceHandle, 1);
                SourceHandle = 0LL;
              }
              goto LABEL_97;
            }
            if ( !Handle )
            {
              RtlCopyUnicodeString(&Destination, &DestinationString);
              if ( BaseAddress )
              {
                v31 = v49;
              }
              else
              {
                RegionSize = 586LL;
                ProcessLuid = ZwAllocateVirtualMemory(
                                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                &BaseAddress,
                                0LL,
                                &RegionSize,
                                0x1000u,
                                4u);
                v31 = (struct _UNICODE_STRING *)((char *)BaseAddress + 48);
              }
              if ( ProcessLuid >= 0 )
              {
                SafeCopyUnicodeString(v31, &Destination);
                *(_DWORD *)BaseAddress = 48;
                *((_QWORD *)BaseAddress + 1) = SourceHandle;
                v32 = v38;
                *((_DWORD *)BaseAddress + 6) = (v38 << 7) | 0x40;
                *((_QWORD *)BaseAddress + 2) = v31;
                *((_QWORD *)BaseAddress + 4) = 0LL;
                *((_QWORD *)BaseAddress + 5) = 0LL;
                if ( v39 )
                  *((_DWORD *)BaseAddress + 6) |= 2u;
                if ( (_DWORD)v32 )
                  v33 = xxxCreateDesktopEx((__int64)BaseAddress, 0LL, 0x2000000, 0, &Handle, 0);
                else
                  v33 = OpenDesktop((struct _OBJECT_ATTRIBUTES *)BaseAddress, v32, 0LL, 0x2000000, &Handle);
                ProcessLuid = v33;
              }
              goto LABEL_94;
            }
            goto LABEL_97;
          }
          if ( v9 != (PVOID)PsGetCurrentProcess(v29) )
          {
            v42 = 0LL;
            ProcessLuid = ZwDuplicateObject(SourceProcessHandle, Handle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &v42, 0, 0, 2u);
            if ( ProcessLuid < 0 )
            {
LABEL_81:
              CloseProtectedHandle(Handle, 1);
              Handle = 0LL;
              goto LABEL_82;
            }
            Handle = v42;
          }
          if ( !Handle || !v13 )
            goto LABEL_82;
          v42 = 0LL;
          ProcessLuid = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 0, &v42, 0LL);
          if ( ProcessLuid >= 0 )
          {
            v56[0] = 0LL;
            v56[1] = 0LL;
            v56[2] = 1LL;
            v56[3] = v9;
            v30 = v42;
            v56[4] = v42;
            v57 = 0;
            v58 = 1;
            ProcessLuid = MapDesktop((__int64)v56);
            if ( ProcessLuid < 0 )
            {
              CloseProtectedHandle(Handle, 1);
              Handle = 0LL;
            }
            ObfDereferenceObject(v30);
            goto LABEL_82;
          }
          goto LABEL_81;
        }
        SourceHandle = TargetHandle;
      }
    }
    v26 = SourceHandle;
    if ( SourceHandle )
    {
      v41 = 0LL;
      ProcessLuid = ObReferenceObjectByHandle(SourceHandle, 0, ExWindowStationObjectType, 0, &v41, 0LL);
      if ( ProcessLuid >= 0 )
      {
        v27 = v41;
        if ( ((*((_DWORD *)v41 + 16) & 4) == 0) != v6 )
        {
          if ( TargetHandle )
          {
            CloseProtectedHandle(SourceHandle, 1);
            v27 = v41;
          }
          SourceHandle = 0LL;
        }
        ObfDereferenceObject(v27);
      }
    }
    goto LABEL_52;
  }
  return result;
}
