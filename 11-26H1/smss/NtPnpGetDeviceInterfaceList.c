/*
 * XREFs of NtPnpGetDeviceInterfaceList @ 0x14001DD20
 * Callers:
 *     SmpRunSecureKernelTrustlets @ 0x140017AB0 (SmpRunSecureKernelTrustlets.c)
 * Callees:
 *     NtPnpGetObjectProperty @ 0x14001E188 (NtPnpGetObjectProperty.c)
 *     RtlStringCchCopyExW @ 0x14001E5D4 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 __fastcall NtPnpGetDeviceInterfaceList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        wchar_t *a5,
        _DWORD *a6)
{
  NTSTATUS v7; // ebx
  ULONG OutputBufferLength; // ebx
  wchar_t *OutputBuffer; // rax
  wchar_t *v10; // r14
  ULONG v11; // ebx
  wchar_t *Heap; // rax
  unsigned int v13; // ecx
  size_t v14; // r13
  const wchar_t *i; // rax
  __int64 v16; // rcx
  int v17; // eax
  ULONG IoControlCode; // [rsp+28h] [rbp-D8h]
  ULONG dwFlags; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v21; // [rsp+54h] [rbp-ACh]
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+60h] [rbp-A0h] BYREF
  size_t pcchRemaining; // [rsp+68h] [rbp-98h] BYREF
  size_t v25; // [rsp+70h] [rbp-90h]
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+78h] [rbp-88h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-80h] BYREF
  __int64 InputBuffer; // [rsp+90h] [rbp-70h] BYREF
  GUID v29; // [rsp+98h] [rbp-68h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  int v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B4h] [rbp-4Ch]
  _WORD v33[200]; // [rsp+C0h] [rbp-40h] BYREF

  IoStatusBlock = 0LL;
  if ( NtPnpDeviceApiDriverHandle )
  {
    if ( a5 && a4 < 2 )
      return (unsigned int)-1073741811;
    v31 = 0;
    OutputBufferLength = 2 * a4 + 20;
    InputBuffer = 40LL;
    v29 = GUID_DEVINTERFACE_SECUREKERNEL_TRUSTLET;
    v32 = 20;
    v30 = 0LL;
    OutputBuffer = (wchar_t *)RtlAllocateHeap(
                                *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                0,
                                OutputBufferLength);
    v10 = OutputBuffer;
    if ( !OutputBuffer )
      return (unsigned int)-1073741670;
    v7 = NtDeviceIoControlFile(
           NtPnpDeviceApiDriverHandle,
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           0x470807u,
           &InputBuffer,
           0x28u,
           OutputBuffer,
           OutputBufferLength);
    if ( v7 >= 0 )
    {
      v7 = *((_DWORD *)v10 + 1);
      if ( v7 == -1073741772 )
      {
        if ( a6 )
          *a6 = 1;
        if ( a4 )
        {
          v7 = 0;
LABEL_46:
          *a5 = 0;
          goto LABEL_53;
        }
        v7 = -1073741789;
      }
      else
      {
        if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741789 )
          goto LABEL_53;
        if ( *((_DWORD *)v10 + 2) >> 1 != 1 )
        {
          if ( v7 == -1073741789 )
          {
            v11 = *((_DWORD *)v10 + 2) + 20;
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v10);
            Heap = (wchar_t *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v11);
            v10 = Heap;
            if ( !Heap )
              return (unsigned int)-1073741670;
            v7 = NtDeviceIoControlFile(
                   NtPnpDeviceApiDriverHandle,
                   0LL,
                   0LL,
                   0LL,
                   &IoStatusBlock,
                   0x470807u,
                   &InputBuffer,
                   0x28u,
                   Heap,
                   v11);
            if ( v7 < 0 )
              goto LABEL_53;
            v7 = *((_DWORD *)v10 + 1);
            if ( v7 < 0 )
              goto LABEL_53;
          }
          if ( *((_DWORD *)v10 + 2) >> 1 != 1 )
          {
            v13 = 0;
            ppszDestEnd = a5;
            v14 = a4 - 1;
            v21 = 0;
            pcchRemaining = v14;
            for ( i = v10 + 8; ; i = &pszSrc[v25] )
            {
              pszSrc = i;
              if ( !*i )
                break;
              v16 = -1LL;
              do
                ++v16;
              while ( i[v16] );
              v22 = 0x19000000000LL;
              v25 = v16 + 1;
              v33[0] = 0;
              if ( (int)NtPnpGetObjectProperty(
                          4,
                          (int)i,
                          2 * ((int)v16 + 1),
                          (int)&DEVPKEY_Device_InstanceId,
                          (__int64)&v22,
                          v33,
                          (__int64)&v22 + 4) >= 0
                && (_DWORD)v22 == 18
                && HIDWORD(v22) >= 2
                && (v22 = 0x100000000LL,
                    LOBYTE(dwFlags) = 0,
                    (int)NtPnpGetObjectProperty(
                           1,
                           (int)v33,
                           400,
                           (int)&DEVPKEY_Device_IsPresent,
                           (__int64)&v22,
                           &dwFlags,
                           (__int64)&v22 + 4) >= 0)
                && v22 == 0x100000011LL
                && (_BYTE)dwFlags == 0xFF )
              {
                v17 = v25;
                if ( v14 >= v25 )
                {
                  v7 = RtlStringCchCopyExW(ppszDestEnd, v14, pszSrc, &ppszDestEnd, &pcchRemaining, IoControlCode);
                  if ( v7 < 0 )
                    goto LABEL_45;
                  ++ppszDestEnd;
                  v17 = v25;
                  v14 = --pcchRemaining;
                }
                v13 = v17 + v21;
                v21 += v17;
              }
              else
              {
                v13 = v21;
              }
            }
            if ( v7 >= 0 )
            {
              if ( v13 >= a4 )
              {
                v7 = -1073741789;
                if ( a4 )
                  *a5 = 0;
              }
              else
              {
                a5[v13] = 0;
              }
              if ( a6 )
                *a6 = v13 + 1;
              goto LABEL_53;
            }
LABEL_45:
            if ( !a4 )
              goto LABEL_53;
            goto LABEL_46;
          }
        }
        if ( a6 )
          *a6 = 1;
        if ( v7 < 0 )
          goto LABEL_53;
        if ( a4 )
          goto LABEL_46;
        v7 = -1073741595;
      }
    }
LABEL_53:
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v10);
    return (unsigned int)v7;
  }
  return (unsigned int)-1073740759;
}
