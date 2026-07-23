/*
 * XREFs of RtlpSysVolTakeOwnership @ 0x14080BCAC
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x140A98FD0 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     NtSetSecurityObject @ 0x1408F31F0 (NtSetSecurityObject.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409A9150 (RtlSetOwnerSecurityDescriptor.c)
 *     NtAdjustPrivilegesToken @ 0x1409E1580 (NtAdjustPrivilegesToken.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     NtOpenProcessTokenEx @ 0x140A87780 (NtOpenProcessTokenEx.c)
 */

int __fastcall RtlpSysVolTakeOwnership(__int64 a1)
{
  int result; // eax
  NTSTATUS v3; // eax
  HANDLE v4; // rcx
  SIZE_T Length; // [rsp+50h] [rbp-B0h]
  HANDLE TokenHandle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle[2]; // [rsp+88h] [rbp-78h] BYREF
  int v8[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v9; // [rsp+A0h] [rbp-60h]
  __int64 v10; // [rsp+A8h] [rbp-58h]
  int v11; // [rsp+B0h] [rbp-50h]
  int v12; // [rsp+B4h] [rbp-4Ch]
  __int128 v13; // [rsp+B8h] [rbp-48h]
  _OWORD SecurityDescriptor[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v15; // [rsp+E8h] [rbp-18h]
  int v16[4]; // [rsp+F0h] [rbp-10h] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [rsp+100h] [rbp+0h] BYREF
  __int16 Owner; // [rsp+110h] [rbp+10h] BYREF
  int v19; // [rsp+112h] [rbp+12h]
  __int16 v20; // [rsp+116h] [rbp+16h]
  int v21; // [rsp+118h] [rbp+18h]
  int v22; // [rsp+11Ch] [rbp+1Ch]

  TokenHandle = 0LL;
  Handle[0] = 0LL;
  v8[1] = 0;
  v12 = 0;
  v15 = 0LL;
  *(_OWORD *)v16 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, &TokenHandle);
  if ( result >= 0 )
  {
    Handle[1] = (HANDLE)9;
    NewState.Privileges[0].Luid = (LUID)9LL;
    NewState.PrivilegeCount = 1;
    NewState.Privileges[0].Attributes = 2;
    if ( NtAdjustPrivilegesToken(TokenHandle, 0, &NewState, 0x10u, 0LL, 0LL) >= 0 )
    {
      v10 = a1;
      v8[0] = 48;
      v9 = 0LL;
      LODWORD(Length) = 0;
      v11 = 576;
      v13 = 0LL;
      if ( (int)IopCreateFile(
                  (int)Handle,
                  1572864,
                  (int)v8,
                  (int)v16,
                  0LL,
                  0,
                  7,
                  1,
                  33,
                  0LL,
                  Length,
                  0,
                  0LL,
                  0,
                  32,
                  0LL) >= 0 )
      {
        RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        v19 = 0;
        v20 = 1280;
        Owner = 513;
        v21 = 32;
        v22 = 544;
        v3 = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, 0);
        v4 = Handle[0];
        if ( v3 >= 0 )
        {
          NtSetSecurityObject(Handle[0], 1u, SecurityDescriptor);
          v4 = Handle[0];
        }
        NtClose(v4);
      }
    }
    return NtClose(TokenHandle);
  }
  return result;
}
