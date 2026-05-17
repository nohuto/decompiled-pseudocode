/*
 * XREFs of TppCritSetThread @ 0x1800E1D30
 * Callers:
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 * Callees:
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x18015F540 (NtOpenProcessTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x18015F760 (NtAdjustPrivilegesToken.c)
 *     NtDuplicateToken @ 0x18015F780 (NtDuplicateToken.c)
 *     NtSetInformationObject @ 0x18015FAB0 (NtSetInformationObject.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

int __fastcall TppCritSetThread(HANDLE *a1)
{
  struct _TEB *v2; // rax
  __int16 v4; // [rsp+30h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-90h] BYREF
  int v6; // [rsp+40h] [rbp-88h] BYREF
  HANDLE v7[2]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v8; // [rsp+58h] [rbp-70h] BYREF
  __int64 v9; // [rsp+60h] [rbp-68h] BYREF
  __int128 v10; // [rsp+68h] [rbp-60h]
  __int64 v11; // [rsp+78h] [rbp-50h]
  __int128 v12; // [rsp+80h] [rbp-48h]
  __int64 v13; // [rsp+90h] [rbp-38h] BYREF
  int v14; // [rsp+98h] [rbp-30h]
  __int128 v15; // [rsp+A0h] [rbp-28h] BYREF

  v15 = 0LL;
  v6 = 0;
  v4 = 0;
  v9 = 48LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v7[0] = 0LL;
  v13 = 0LL;
  v14 = 0;
  Handle = 0LL;
  *a1 = 0LL;
  v2 = NtCurrentTeb();
  if ( (v2->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) != 0 )
  {
    LODWORD(v2) = NtOpenProcessTokenEx(-1LL, 2LL, 0LL, v7);
    if ( (int)v2 >= 0 )
    {
      v13 = 0x20000000CLL;
      LOWORD(v14) = 0;
      *((_QWORD *)&v12 + 1) = &v13;
      if ( (int)NtDuplicateToken(v7[0], 36LL, &v9, 0LL, 2, &Handle) >= 0 )
      {
        v4 = 256;
        if ( (int)NtSetInformationObject(Handle, 4LL, &v4, 2LL) >= 0 )
        {
          if ( (int)NtSetInformationThread(-2LL, 5LL, &Handle, 8LL) >= 0 )
          {
            LODWORD(v15) = 1;
            v7[1] = (HANDLE)20;
            *(_QWORD *)((char *)&v15 + 4) = 20LL;
            HIDWORD(v15) = 2;
            if ( (int)NtAdjustPrivilegesToken(Handle, 0LL, &v15, 16LL, 0LL, 0LL) >= 0 )
            {
              v6 = 1;
              if ( (int)NtSetInformationThread(-2LL, 18LL, &v6, 4LL) >= 0 )
              {
                *a1 = Handle;
                Handle = 0LL;
              }
            }
            v8 = 0LL;
            NtSetInformationThread(-2LL, 5LL, &v8, 8LL);
          }
          if ( Handle )
          {
            v4 = 0;
            NtSetInformationObject(Handle, 4LL, &v4, 2LL);
          }
        }
        if ( Handle )
          NtClose(Handle);
      }
      LODWORD(v2) = NtClose(v7[0]);
    }
  }
  return (int)v2;
}
