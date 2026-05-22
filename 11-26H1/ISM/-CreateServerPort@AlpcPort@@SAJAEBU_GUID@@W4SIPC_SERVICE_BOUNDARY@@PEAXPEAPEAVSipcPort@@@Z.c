/*
 * XREFs of ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXPEAPEAVSipcPort@@@Z @ 0x1800750D0
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEAX@Z44PEAPEAU4@@Z @ 0x18005E1E4 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_.c)
 * Callees:
 *     ??0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z @ 0x180075308 (--0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z.c)
 *     ?Initialize@SipcPort@@IEAAJXZ @ 0x18009528C (-Initialize@SipcPort@@IEAAJXZ.c)
 *     ??0AlpcPort@@AEAA@G@Z @ 0x180096870 (--0AlpcPort@@AEAA@G@Z.c)
 *     ??1?$unique_ptr@VAlpcPort@@U?$default_delete@VAlpcPort@@@utl@@@utl@@QEAA@XZ @ 0x1800995C8 (--1-$unique_ptr@VAlpcPort@@U-$default_delete@VAlpcPort@@@utl@@@utl@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x18010F9B0 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall AlpcPort::CreateServerPort(__int64 a1, __int64 a2, __int64 a3, AlpcPort **a4)
{
  AlpcPort *v5; // rax
  SipcPort *v6; // rax
  AlpcPort *v7; // rsi
  int v8; // ebx
  signed int LastError; // eax
  int Port; // eax
  PSECURITY_DESCRIPTOR v11; // rcx
  unsigned int v12; // edi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+20h] [rbp-E0h] BYREF
  SipcPort *v15; // [rsp+28h] [rbp-D8h] BYREF
  _OWORD v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v17; // [rsp+50h] [rbp-B0h]
  _BYTE v18[192]; // [rsp+60h] [rbp-A0h] BYREF

  *a4 = 0LL;
  v5 = (AlpcPort *)operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 )
  {
    v15 = 0LL;
    goto LABEL_23;
  }
  v6 = AlpcPort::AlpcPort(v5, 0);
  v15 = v6;
  v7 = v6;
  if ( !v6 )
  {
LABEL_23:
    v8 = -2147024882;
    goto LABEL_24;
  }
  v8 = SipcPort::Initialize(v6);
  if ( v8 < 0 )
  {
LABEL_24:
    utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v15);
    return (unsigned int)v8;
  }
  AlpcPortString::AlpcPortString(v18, &xmmword_180201748, 1LL);
  SecurityDescriptor = 0LL;
  v16[0] = *(_OWORD *)&AlpcPort::c_serverObjectAttributes.Length;
  v16[1] = (unsigned __int64)v18;
  v17 = unk_1801E3708;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GA;;;WD)(A;;0x001F0001;;;AC)(A;;0x001F0001;;;SY)(A;;0x00020001;;;BA)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v8 = -2147418113;
    if ( LastError < 0 )
      v8 = LastError;
    if ( SecurityDescriptor )
    {
      LocalFree(SecurityDescriptor);
      SecurityDescriptor = 0LL;
    }
    goto LABEL_24;
  }
  *(_QWORD *)&v17 = SecurityDescriptor;
  Port = NtAlpcCreatePort((char *)v7 + 48, v16, &AlpcPort::c_serverPortAlpcAttributes);
  v11 = SecurityDescriptor;
  if ( Port >= 0 )
  {
    if ( *((_QWORD *)v7 + 6) )
    {
      v15 = 0LL;
      *a4 = v7;
      if ( v11 )
      {
        LocalFree(v11);
        SecurityDescriptor = 0LL;
      }
      v8 = 0;
    }
    else
    {
      v12 = Port | 0x90000000;
      if ( SecurityDescriptor )
      {
        LocalFree(SecurityDescriptor);
        SecurityDescriptor = 0LL;
      }
      v8 = v12;
    }
    goto LABEL_24;
  }
  v8 = Port | 0x10000000;
  if ( SecurityDescriptor )
  {
    LocalFree(SecurityDescriptor);
    SecurityDescriptor = 0LL;
  }
  AlpcPort::`scalar deleting destructor'(v7, 1u);
  return (unsigned int)v8;
}
