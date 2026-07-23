/*
 * XREFs of SyspartResolveEfiEspCallback @ 0x14089B930
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SiLogMessage @ 0x140774464 (SiLogMessage.c)
 *     SiGetDriveLayoutInformation @ 0x14089AE64 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x14089AF6C (SiIssueSynchronousIoctl.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall SyspartResolveEfiEspCallback(const WCHAR *a1, unsigned int a2, _DWORD *a3)
{
  bool v6; // r14
  int DriveLayoutInformation; // eax
  _DWORD *v8; // rdi
  unsigned int v9; // r13d
  __int64 v10; // rcx
  unsigned int *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  const wchar_t *v14; // rax
  PVOID P; // [rsp+30h] [rbp-39h] BYREF
  int v17; // [rsp+38h] [rbp-31h] BYREF
  __int64 v18; // [rsp+3Ch] [rbp-2Dh]
  __int128 v19; // [rsp+48h] [rbp-21h] BYREF
  __int64 v20; // [rsp+58h] [rbp-11h]
  __int128 v21; // [rsp+60h] [rbp-9h] BYREF
  __int128 v22; // [rsp+70h] [rbp+7h]

  v20 = 0LL;
  HIDWORD(v18) = 0;
  P = 0LL;
  v19 = 0LL;
  if ( (int)SiIssueSynchronousIoctl(a1, 0x700010u, 0LL, 0, &v19, 0x18u) >= 0 && DWORD1(v19) == 2 )
  {
    SiLogMessage(1, L"Skipping MPIO disk %lu", a2);
  }
  else
  {
    v18 = 0LL;
    v17 = 1;
    v6 = 0;
    v21 = 0LL;
    v22 = 0LL;
    if ( (int)SiIssueSynchronousIoctl(a1, 0x2D1400u, &v17, 0xCu, &v21, 0x20u) >= 0 )
    {
      if ( BYTE8(v22) == 15 )
      {
        SiLogMessage(1, L"Skipping VHD disk %lu", a2);
        return 0;
      }
      v6 = BYTE8(v22) == 16;
    }
    DriveLayoutInformation = SiGetDriveLayoutInformation(a1, &P);
    v8 = P;
    if ( DriveLayoutInformation >= 0 )
    {
      if ( *(_DWORD *)P == 1 )
      {
        v9 = 0;
        if ( *((_DWORD *)P + 1) )
        {
          v10 = *(_QWORD *)PARTITION_SYSTEM_GUID.Data4;
          v11 = (unsigned int *)((char *)P + 72);
          v12 = *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1;
          do
          {
            v13 = *((_QWORD *)v11 + 1) - v12;
            if ( !v13 )
              v13 = *((_QWORD *)v11 + 2) - v10;
            if ( !v13 )
            {
              if ( !*a3 || !a3[1] && v6 )
              {
                a3[2] = a2;
                a3[3] = *v11;
              }
              v14 = L"Y";
              if ( !v6 )
                v14 = L"N";
              SiLogMessage(2, L"Found ESP partition on disk %lu, partition %lu. Is storage space: %ws", a2, *v11, v14);
              ++*a3;
              if ( v6 )
                ++a3[1];
              v12 = *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1;
              v10 = *(_QWORD *)PARTITION_SYSTEM_GUID.Data4;
            }
            ++v9;
            v11 += 36;
          }
          while ( v9 < v8[1] );
        }
      }
    }
    else
    {
      SiLogMessage(3, L"Failed to get drive layout for disk %lu. Status: %x", a2, (unsigned int)DriveLayoutInformation);
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  return 0;
}
