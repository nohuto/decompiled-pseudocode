/*
 * XREFs of RtlpFileIsWin32WithRCManifest @ 0x180036E3C
 * Callers:
 *     RtlGetFileMUIPath @ 0x180035550 (RtlGetFileMUIPath.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1800318E0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180044540 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlInitUnicodeStringEx @ 0x1800A4880 (RtlInitUnicodeStringEx.c)
 *     RtlReleaseRelativeName @ 0x1800A6DC0 (RtlReleaseRelativeName.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18015F880 (NtCreateSection.c)
 *     ZwCreateFile @ 0x18015F9E0 (ZwCreateFile.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

char __fastcall RtlpFileIsWin32WithRCManifest(__int64 a1)
{
  char v1; // di
  char v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // esi
  int v6; // ebx
  unsigned __int64 v7; // rbx
  __int64 v9; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE v11; // [rsp+70h] [rbp-90h] BYREF
  __int128 v12; // [rsp+78h] [rbp-88h] BYREF
  unsigned int *v13; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v14; // [rsp+90h] [rbp-70h] BYREF
  __int128 v15; // [rsp+98h] [rbp-68h] BYREF
  __int64 v16; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v17; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v18; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v19; // [rsp+C8h] [rbp-38h]
  __int128 v20; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v21; // [rsp+E8h] [rbp-18h]
  __int128 v22; // [rsp+F8h] [rbp-8h]
  __int128 v23; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v24[3]; // [rsp+118h] [rbp+18h] BYREF

  v1 = 0;
  v16 = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  v2 = 0;
  v9 = 0LL;
  v14 = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  *(_QWORD *)&v22 = 0LL;
  v20 = 0LL;
  DWORD2(v22) = 0;
  v21 = 0LL;
  v13 = 0LL;
  v23 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v12 = 0LL;
  if ( (int)RtlInitUnicodeStringEx(&v12, a1) >= 0
    && (int)RtlpDosPathNameToRelativeNtPathName(2, (unsigned int)&v12, 0, (unsigned int)&v15, 0LL, 0LL, (__int64)&v18) >= 0 )
  {
    v3 = *((_QWORD *)&v15 + 1);
    if ( (_WORD)v18 )
    {
      v4 = v19;
      v15 = v18;
    }
    else
    {
      v4 = 0LL;
      *(_QWORD *)&v19 = 0LL;
    }
    LODWORD(v20) = 48;
    DWORD2(v21) = 64;
    *((_QWORD *)&v20 + 1) = v4 & -(__int64)(v3 != 0);
    *(_QWORD *)&v21 = &v15;
    v22 = 0LL;
    v5 = ZwCreateFile(&v11, 2148532352LL, &v20, &v23, 0LL, 0, 5, 1, 0, 0LL, 0);
    if ( v3 )
    {
      RtlReleaseRelativeName(&v18);
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v3);
    }
    if ( v5 >= 0 )
    {
      v2 = 1;
      if ( (int)NtCreateSection(&Handle, 983045LL, 0LL, 0LL, 2, 0x8000000, v11) >= 0 )
      {
        v6 = ZwMapViewOfSection(Handle, -1LL, &v9, 0LL, 0LL, &v17, &v16, 1, 0, 8);
        NtClose(Handle);
        if ( v6 >= 0 )
        {
          *(_QWORD *)&v12 = 0LL;
          RtlImageNtHeaderEx(1LL, v9, 0LL, &v12);
          if ( (_QWORD)v12 )
          {
            v24[0] = L"MUI";
            v24[1] = 1LL;
            v7 = v9 | 1;
            v24[2] = 0LL;
            if ( (int)LdrpSearchResourceSection_U(v9 | 1, (__int64)v24, 3u, 0x30u, (unsigned __int64 *)&v13) >= 0
              && (int)LdrpAccessResourceDataNoMultipleLanguage(v7, v13, (unsigned __int64 *)&v14, &v12) >= 0
              && *v14 == -20054323 )
            {
              v1 = 1;
            }
          }
        }
      }
    }
  }
  if ( v9 )
    NtUnmapViewOfSection(-1LL, v9);
  if ( v2 )
    NtClose(v11);
  return v1;
}
