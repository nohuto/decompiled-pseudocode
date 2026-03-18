/*
 * XREFs of ?DrvDriverFailure@@YAJXZ @ 0x1401D7CA4
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x140170DB4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     ??4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z @ 0x1401D7B6C (--4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z.c)
 *     DrvCollectDriverFailureData @ 0x1401F67E8 (DrvCollectDriverFailureData.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 DrvDriverFailure(void)
{
  int v0; // ebx
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  int v4; // edx
  int v5; // r8d
  int v6; // edx
  int v7; // r8d
  int v8; // edx
  int v9; // r8d
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  int v15; // r8d
  int v16; // edx
  int v17; // r8d
  int v18; // edx
  int v19; // r8d
  int v20; // edx
  int v21; // r8d
  int v22; // edx
  int v23; // r8d
  int v24; // edx
  int v25; // r8d
  int v26; // edx
  int v27; // r8d
  int v28; // edx
  int v29; // r8d
  int v30; // edx
  int v31; // r8d
  int v32; // edx
  int v33; // r8d
  int v34; // edx
  int v35; // r8d
  int v36; // edx
  int v37; // r8d
  int v38; // edx
  int v39; // r8d
  int v40; // edx
  int v41; // r8d
  int v42; // edx
  int v43; // r8d
  int v44; // edx
  int v45; // r8d
  int v46; // edx
  int v47; // r8d
  int v48; // edx
  int v49; // r8d
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 i; // rax
  int v54; // edx
  __int64 v55; // rcx
  int v56; // r8d
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-C8h]
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-C0h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v67[30]; // [rsp+90h] [rbp-70h] BYREF
  void *KeyHandle; // [rsp+190h] [rbp+90h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  v0 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v67, 0, 0xE8uLL);
  LOBYTE(v67[0]) = 0;
  v67[1] = *(_QWORD *)(W32GetUserSessionState(v2, v1, v3) + 56968);
  LODWORD(v67[2]) = *(_DWORD *)(W32GetUserSessionState(v67[1], v4, v5) + 43276);
  HIDWORD(v67[2]) = *(_DWORD *)(W32GetUserGdiSessionState(LODWORD(v67[2])) + 28);
  LODWORD(v67[3]) = *(_DWORD *)(W32GetUserSessionState(HIDWORD(v67[2]), v6, v7) + 19692);
  v67[4] = *(_QWORD *)(W32GetUserSessionState(v67[3], v8, v9) + 63296);
  v67[5] = *(_QWORD *)(W32GetUserSessionState(v67[4], v10, v11) + 63304);
  v67[6] = *(_QWORD *)(W32GetUserSessionState(v67[5], v12, v13) + 63312);
  v67[7] = *(_QWORD *)(W32GetUserSessionState(v67[6], v14, v15) + 63320);
  v67[8] = *(_QWORD *)(W32GetUserSessionState(v67[7], v16, v17) + 63328);
  v67[9] = *(_QWORD *)(W32GetUserSessionState(v67[8], v18, v19) + 63336);
  v67[10] = *(_QWORD *)(W32GetUserSessionState(v67[9], v20, v21) + 63344);
  v67[11] = *(_QWORD *)(W32GetUserSessionState(v67[10], v22, v23) + 63352);
  v67[12] = *(_QWORD *)(W32GetUserSessionState(v67[11], v24, v25) + 63360);
  v67[13] = *(_QWORD *)(W32GetUserSessionState(v67[12], v26, v27) + 43248);
  v67[14] = *(_QWORD *)(W32GetUserSessionState(v67[13], v28, v29) + 43256);
  v67[15] = *(_QWORD *)(W32GetUserSessionState(v67[14], v30, v31) + 43088);
  v67[19] = *(_QWORD *)(W32GetUserSessionState(v67[15], v32, v33) + 43104);
  v67[20] = *(_QWORD *)(W32GetUserSessionState(v67[19], v34, v35) + 43112);
  v67[21] = *(_QWORD *)(W32GetUserSessionState(v67[20], v36, v37) + 43120);
  v67[22] = *(_QWORD *)(W32GetUserSessionState(v67[21], v38, v39) + 43128);
  v67[23] = *(_QWORD *)(W32GetUserSessionState(v67[22], v40, v41) + 43136);
  v67[24] = *(_QWORD *)(W32GetUserSessionState(v67[23], v42, v43) + 43144);
  v67[25] = *(_QWORD *)(W32GetUserSessionState(v67[24], v44, v45) + 43152);
  v67[26] = gpWin32kDriverObject;
  LODWORD(v67[27]) = *(_DWORD *)(W32GetUserSessionState(v67[25], v46, v47) + 360);
  if ( *(_DWORD *)(W32GetUserSessionState(v67[27], v48, v49) + 36436) )
  {
    v0 = 1;
  }
  else
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) == -1073741431 )
    {
      v0 = 1;
      WdLogSingleEntry1(2LL, -1073741431LL);
      WdLogGlobalForLineNumber = 849;
    }
    else
    {
      v50 = *(_QWORD *)(W32GetSessionState(v51) + 88);
      v52 = *(_QWORD *)(v50 + 1256);
      if ( v52 )
      {
        v50 = *(_QWORD *)(W32GetSessionState(v50) + 88);
        for ( i = *(_QWORD *)(v50 + 1184); i; i = *(_QWORD *)(i + 128) )
        {
          if ( v52 == i )
          {
            v0 = 2;
            break;
          }
        }
      }
    }
  }
  v55 = *(_QWORD *)(W32GetSessionState(v50) + 88);
  if ( *(_DWORD *)(v55 + 1144) )
    v0 = *(_DWORD *)(v55 + 1144);
  if ( v0 != 1 )
  {
    BugCheckParameter1 = -1LL;
    BugCheckParameter2 = -1LL;
    BugCheckParameter3 = -1LL;
    if ( *(_QWORD *)(W32GetUserSessionState(v55, v54, v56) + 56968) )
    {
      UserSessionState = W32GetUserSessionState(v58, v57, v59);
      tagKERNELDISPLAYINFO::operator=(&v67[28], *(_DWORD ***)(UserSessionState + 56968));
    }
    DrvCollectDriverFailureData(&BugCheckParameter1, v67);
    KeBugCheckEx(0xB4u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, v0);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 3221225865LL;
}
