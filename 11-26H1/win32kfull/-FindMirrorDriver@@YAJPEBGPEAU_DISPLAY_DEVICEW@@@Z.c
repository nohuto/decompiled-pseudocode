/*
 * XREFs of ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1402D275C
 * Callers:
 *     xxxRemoteConsoleShadowStart @ 0x1402D2D90 (xxxRemoteConsoleShadowStart.c)
 * Callees:
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x140131830 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14013EFD0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall FindMirrorDriver(PCWSTR SourceString, struct _DISPLAY_DEVICEW *a2)
{
  char v3; // di
  unsigned int v4; // r14d
  __int64 v5; // rdx
  unsigned __int64 i; // rcx
  unsigned int v7; // ebx
  __int64 UserSessionState; // rax
  __int64 v9; // rax
  UNICODE_STRING String1; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+88h] [rbp-78h]
  int v15; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  __int64 v17; // [rsp+A0h] [rbp-60h]
  int v18; // [rsp+A8h] [rbp-58h]
  __int64 v19; // [rsp+B0h] [rbp-50h]
  int v20; // [rsp+B8h] [rbp-48h]
  _BYTE v21[2]; // [rsp+BEh] [rbp-42h] BYREF
  WCHAR Path[133]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v23[6]; // [rsp+1CAh] [rbp+CAh] BYREF
  _BYTE v24[256]; // [rsp+1D0h] [rbp+D0h] BYREF

  v3 = 0;
  v4 = 0;
  String1 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  a2->cb = 840;
  while ( 1 )
  {
    v7 = v4++;
    UserSessionState = W32GetUserSessionState(i, v5);
    if ( (int)DrvEnumDisplayDevices(
                0LL,
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 96LL) + 80LL),
                v7,
                a2) < 0 )
      return v3 == 0 ? 0xC0000001 : 0;
    if ( (a2->StateFlags & 8) != 0 && (int)RtlStringCchCopyNW((char *)Path, 133LL, (char *)a2->DeviceKey, 0x80uLL) >= 0 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( Path[v9] );
      for ( i = (unsigned __int64)&v21[2 * v9]; i > (unsigned __int64)Path; i -= 2LL )
      {
        if ( *(_WORD *)i == 92 )
          goto LABEL_12;
      }
      if ( *(_WORD *)i != 92 )
        continue;
LABEL_12:
      QueryTable.QueryRoutine = 0LL;
      QueryTable.Name = L"Service";
      QueryTable.Flags = 288;
      QueryTable.EntryContext = &String1;
      QueryTable.DefaultType = 16777217;
      QueryTable.DefaultData = 0LL;
      QueryTable.DefaultLength = 0;
      v14 = 0LL;
      v15 = 0;
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0;
      v19 = 0LL;
      v20 = 0;
      if ( (int)RtlStringCchCopyW((char *)(i + 2), (__int64)&v23[-i - 2] >> 1, (char *)L"Video") >= 0 )
      {
        memset_0(v24, 0, sizeof(v24));
        *(_DWORD *)&String1.Length = 0x1000000;
        String1.Buffer = (PWSTR)v24;
        if ( RtlQueryRegistryValues(0, Path, &QueryTable, 0LL, 0LL) >= 0
          && !RtlCompareUnicodeString(&String1, &DestinationString, 1u) )
        {
          v3 = 1;
          return v3 == 0 ? 0xC0000001 : 0;
        }
      }
    }
  }
}
