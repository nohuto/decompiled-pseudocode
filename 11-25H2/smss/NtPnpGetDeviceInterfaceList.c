/*
 * XREFs of NtPnpGetDeviceInterfaceList @ 0x14001E40C
 * Callers:
 *     SmpRunSecureKernelTrustlets @ 0x140017E00 (SmpRunSecureKernelTrustlets.c)
 * Callees:
 *     NtPnpGetObjectProperty @ 0x14001E86C (NtPnpGetObjectProperty.c)
 *     RtlStringCchCopyExW @ 0x14001ECEC (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
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
  char *OutputBuffer; // rax
  char *v10; // rsi
  ULONG v11; // ebx
  char *Heap; // rax
  unsigned int v13; // ecx
  const wchar_t *v14; // rax
  size_t v15; // r13
  __int64 v16; // r12
  size_t v17; // r12
  ULONG IoControlCode; // [rsp+30h] [rbp-D8h]
  ULONG dwFlags; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v21; // [rsp+5Ch] [rbp-ACh]
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+68h] [rbp-A0h] BYREF
  size_t pcchRemaining; // [rsp+70h] [rbp-98h] BYREF
  NTSTRSAFE_PCWSTR IoStatusBlock[3]; // [rsp+78h] [rbp-90h] BYREF
  __int64 InputBuffer; // [rsp+90h] [rbp-78h] BYREF
  GUID v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A8h] [rbp-60h]
  int v29; // [rsp+B0h] [rbp-58h]
  int v30; // [rsp+B4h] [rbp-54h]
  _WORD v31[200]; // [rsp+B8h] [rbp-50h] BYREF

  *(_OWORD *)&IoStatusBlock[1] = 0LL;
  if ( NtPnpDeviceApiDriverHandle )
  {
    if ( a5 && a4 < 2 )
      return (unsigned int)-1073741811;
    v29 = 0;
    InputBuffer = 40LL;
    v27 = GUID_DEVINTERFACE_SECUREKERNEL_TRUSTLET;
    v30 = 20;
    v28 = 0LL;
    OutputBufferLength = 2 * a4 + 20;
    OutputBuffer = (char *)RtlAllocateHeap(
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
           (PIO_STATUS_BLOCK)&IoStatusBlock[1],
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
        if ( !a4 )
        {
          v7 = -1073741789;
          goto LABEL_53;
        }
        v7 = 0;
        goto LABEL_14;
      }
      if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741789 )
        goto LABEL_53;
      if ( (*((_DWORD *)v10 + 2) & 0xFFFFFFFE) == 2 )
      {
LABEL_19:
        if ( a6 )
          *a6 = 1;
        if ( v7 < 0 )
          goto LABEL_53;
        if ( !a4 )
        {
          v7 = -1073741595;
          goto LABEL_53;
        }
LABEL_14:
        *a5 = 0;
        goto LABEL_53;
      }
      if ( v7 != -1073741789 )
        goto LABEL_28;
      v11 = *((_DWORD *)v10 + 2) + 20;
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v10);
      Heap = (char *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v11);
      v10 = Heap;
      if ( !Heap )
        return (unsigned int)-1073741670;
      v7 = NtDeviceIoControlFile(
             NtPnpDeviceApiDriverHandle,
             0LL,
             0LL,
             0LL,
             (PIO_STATUS_BLOCK)&IoStatusBlock[1],
             0x470807u,
             &InputBuffer,
             0x28u,
             Heap,
             v11);
      if ( v7 >= 0 )
      {
        v7 = *((_DWORD *)v10 + 1);
        if ( v7 >= 0 )
        {
LABEL_28:
          if ( (*((_DWORD *)v10 + 2) & 0xFFFFFFFE) != 2 )
          {
            v13 = 0;
            ppszDestEnd = a5;
            v14 = (const wchar_t *)(v10 + 16);
            v21 = 0;
            IoStatusBlock[0] = (NTSTRSAFE_PCWSTR)(v10 + 16);
            v15 = a4 - 1;
            for ( pcchRemaining = v15; *v14; IoStatusBlock[0] = v14 )
            {
              v16 = -1LL;
              do
                ++v16;
              while ( v14[v16] );
              v22 = 0x19000000000LL;
              v31[0] = 0;
              v17 = v16 + 1;
              if ( (int)NtPnpGetObjectProperty(
                          4,
                          (int)v14,
                          2 * (int)v17,
                          (int)&DEVPKEY_Device_InstanceId,
                          (__int64)&v22,
                          v31,
                          (__int64)&v22 + 4) >= 0
                && (_DWORD)v22 == 18
                && HIDWORD(v22) >= 2
                && (v22 = 0x100000000LL,
                    LOBYTE(dwFlags) = 0,
                    (int)NtPnpGetObjectProperty(
                           1,
                           (int)v31,
                           400,
                           (int)&DEVPKEY_Device_IsPresent,
                           (__int64)&v22,
                           &dwFlags,
                           (__int64)&v22 + 4) >= 0)
                && v22 == 0x100000011LL
                && (_BYTE)dwFlags == 0xFF )
              {
                if ( v15 >= v17 )
                {
                  v7 = RtlStringCchCopyExW(
                         ppszDestEnd,
                         v15,
                         IoStatusBlock[0],
                         &ppszDestEnd,
                         &pcchRemaining,
                         IoControlCode);
                  if ( v7 < 0 )
                    goto LABEL_45;
                  ++ppszDestEnd;
                  v15 = --pcchRemaining;
                }
                v13 = v17 + v21;
                v21 += v17;
              }
              else
              {
                v13 = v21;
              }
              v14 = &IoStatusBlock[0][v17];
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
            }
            else
            {
LABEL_45:
              if ( a4 )
                *a5 = 0;
            }
            goto LABEL_53;
          }
          goto LABEL_19;
        }
      }
    }
LABEL_53:
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v10);
    return (unsigned int)v7;
  }
  return (unsigned int)-1073740759;
}
