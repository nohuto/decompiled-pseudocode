/*
 * XREFs of NtPnpOpenDeviceInterfaceKey @ 0x14001E4A8
 * Callers:
 *     SmpRunSecureKernelTrustlets @ 0x140017AB0 (SmpRunSecureKernelTrustlets.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14001D37C (RtlStringCchLengthW.c)
 */

__int64 __fastcall NtPnpOpenDeviceInterfaceKey(const wchar_t *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  NTSTATUS v5; // ecx
  void *v6; // r11
  size_t pcchLength; // [rsp+50h] [rbp-11h] BYREF
  __int128 OutputBuffer; // [rsp+58h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+7h] BYREF
  _QWORD InputBuffer[3]; // [rsp+78h] [rbp+17h] BYREF
  int v12; // [rsp+90h] [rbp+2Fh]
  int v13; // [rsp+94h] [rbp+33h]
  __int64 v14; // [rsp+98h] [rbp+37h]
  __int64 v15; // [rsp+A0h] [rbp+3Fh]

  OutputBuffer = 0LL;
  IoStatusBlock = 0LL;
  if ( NtPnpDeviceApiDriverHandle )
  {
    if ( a1 && a4 )
    {
      *a4 = 0LL;
      pcchLength = 0LL;
      InputBuffer[1] = 4LL;
      v12 = 0;
      v15 = 16LL;
      InputBuffer[0] = 48LL;
      v13 = 1;
      v14 = 2LL;
      InputBuffer[2] = a1;
      v5 = RtlStringCchLengthW(a1, 0x7FFFFFFFuLL, &pcchLength);
      if ( v5 >= 0 )
      {
        v12 = 2 * pcchLength + 2;
        v5 = NtDeviceIoControlFile(
               v6,
               0LL,
               0LL,
               0LL,
               &IoStatusBlock,
               0x470853u,
               InputBuffer,
               0x30u,
               &OutputBuffer,
               0x10u);
        if ( v5 >= 0 )
        {
          v5 = DWORD1(OutputBuffer);
          if ( (SDWORD1(OutputBuffer) & 0x80000000) == 0 )
            *a4 = *((_QWORD *)&OutputBuffer + 1);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073740759;
  }
  return (unsigned int)v5;
}
