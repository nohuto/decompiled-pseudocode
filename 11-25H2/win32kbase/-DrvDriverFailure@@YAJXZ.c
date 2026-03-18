/*
 * XREFs of ?DrvDriverFailure@@YAJXZ @ 0x1401B55F8
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x140135AA0 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     ??4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z @ 0x1401B54C0 (--4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z.c)
 *     DrvCollectDriverFailureData @ 0x1401CCE70 (DrvCollectDriverFailureData.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 DrvDriverFailure(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 i; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-C8h]
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-C0h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v44[30]; // [rsp+90h] [rbp-70h] BYREF
  void *KeyHandle; // [rsp+190h] [rbp+90h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v44, 0, 0xE8uLL);
  LOBYTE(v44[0]) = 0;
  v44[1] = *(_QWORD *)(W32GetUserSessionState(v1, v0) + 56968);
  LODWORD(v44[2]) = *(_DWORD *)(W32GetUserSessionState(v44[1], v2) + 43276);
  HIDWORD(v44[2]) = *(_DWORD *)(W32GetUserGdiSessionState(LODWORD(v44[2])) + 28);
  LODWORD(v44[3]) = *(_DWORD *)(W32GetUserSessionState(HIDWORD(v44[2]), v3) + 19660);
  v44[4] = *(_QWORD *)(W32GetUserSessionState(LODWORD(v44[3]), v4) + 63312);
  v44[5] = *(_QWORD *)(W32GetUserSessionState(v44[4], v5) + 63320);
  v44[6] = *(_QWORD *)(W32GetUserSessionState(v44[5], v6) + 63328);
  v44[7] = *(_QWORD *)(W32GetUserSessionState(v44[6], v7) + 63336);
  v44[8] = *(_QWORD *)(W32GetUserSessionState(v44[7], v8) + 63344);
  v44[9] = *(_QWORD *)(W32GetUserSessionState(v44[8], v9) + 63352);
  v44[10] = *(_QWORD *)(W32GetUserSessionState(v44[9], v10) + 63360);
  v44[11] = *(_QWORD *)(W32GetUserSessionState(v44[10], v11) + 63368);
  v44[12] = *(_QWORD *)(W32GetUserSessionState(v44[11], v12) + 63376);
  v44[13] = *(_QWORD *)(W32GetUserSessionState(v44[12], v13) + 43248);
  v44[14] = *(_QWORD *)(W32GetUserSessionState(v44[13], v14) + 43256);
  v44[15] = *(_QWORD *)(W32GetUserSessionState(v44[14], v15) + 43064);
  v44[16] = *(_QWORD *)(W32GetUserSessionState(v44[15], v16) + 43080);
  v44[17] = *(_QWORD *)(W32GetUserSessionState(v44[16], v17) + 43088);
  v44[18] = *(_QWORD *)(W32GetUserSessionState(v44[17], v18) + 43096);
  v44[19] = *(_QWORD *)(W32GetUserSessionState(v44[18], v19) + 43104);
  v44[20] = *(_QWORD *)(W32GetUserSessionState(v44[19], v20) + 43112);
  v44[21] = *(_QWORD *)(W32GetUserSessionState(v44[20], v21) + 43120);
  v44[22] = *(_QWORD *)(W32GetUserSessionState(v44[21], v22) + 43128);
  v44[23] = *(_QWORD *)(W32GetUserSessionState(v44[22], v23) + 43136);
  v44[24] = *(_QWORD *)(W32GetUserSessionState(v44[23], v24) + 43144);
  v44[25] = *(_QWORD *)(W32GetUserSessionState(v44[24], v25) + 43152);
  v44[26] = gpWin32kDriverObject;
  LODWORD(v44[27]) = *(_DWORD *)(W32GetUserSessionState(v44[25], v26) + 360);
  if ( *(_DWORD *)(W32GetUserSessionState(LODWORD(v44[27]), v27) + 36396) )
  {
    v29 = 1;
  }
  else
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) == -1073741431 )
    {
      v29 = 1;
      WdLogSingleEntry1(2LL, -1073741431LL);
      WdLogGlobalForLineNumber = 863;
    }
    else
    {
      v29 = 0;
      v28 = *(_QWORD *)(W32GetSessionState(v30) + 88);
      v31 = *(_QWORD *)(v28 + 1168);
      if ( v31 )
      {
        v28 = *(_QWORD *)(W32GetSessionState(v28) + 88);
        for ( i = *(_QWORD *)(v28 + 1096); i; i = *(_QWORD *)(i + 128) )
        {
          if ( v31 == i )
          {
            v29 = 2;
            break;
          }
        }
      }
    }
  }
  v34 = *(_QWORD *)(W32GetSessionState(v28) + 88);
  if ( *(_DWORD *)(v34 + 1056) )
    v29 = *(_DWORD *)(v34 + 1056);
  if ( v29 != 1 )
  {
    BugCheckParameter1 = -1LL;
    BugCheckParameter2 = -1LL;
    BugCheckParameter3 = -1LL;
    if ( *(_QWORD *)(W32GetUserSessionState(v34, v33) + 56968) )
    {
      UserSessionState = W32GetUserSessionState(v36, v35);
      tagKERNELDISPLAYINFO::operator=((__int64)&v44[28], *(_QWORD *)(UserSessionState + 56968));
    }
    DrvCollectDriverFailureData(&BugCheckParameter1, v44);
    KeBugCheckEx(0xB4u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, v29);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 3221225865LL;
}
