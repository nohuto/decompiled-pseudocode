/*
 * XREFs of McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x140082FD8
 * Callers:
 *     RaidAdapterStorageTcgActivateLocking @ 0x140083308 (RaidAdapterStorageTcgActivateLocking.c)
 *     RaidAdapterStorageTcgAssignLockingObject @ 0x140083864 (RaidAdapterStorageTcgAssignLockingObject.c)
 *     RaidAdapterStorageTcgDeassignLockingObject @ 0x140083E90 (RaidAdapterStorageTcgDeassignLockingObject.c)
 *     RaidAdapterStorageTcgEnumerateLockingObjects @ 0x140084420 (RaidAdapterStorageTcgEnumerateLockingObjects.c)
 *     RaidAdapterStorageTcgEraseLockingObject @ 0x140084A2C (RaidAdapterStorageTcgEraseLockingObject.c)
 *     RaidAdapterStorageTcgGetLockingObjectMetadata @ 0x140084FAC (RaidAdapterStorageTcgGetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgQueryCapability @ 0x140085584 (RaidAdapterStorageTcgQueryCapability.c)
 *     RaidAdapterStorageTcgResetState @ 0x140085A88 (RaidAdapterStorageTcgResetState.c)
 *     RaidAdapterStorageTcgRevertConfig @ 0x140085F48 (RaidAdapterStorageTcgRevertConfig.c)
 *     RaidAdapterStorageTcgSetLockingObject @ 0x140086498 (RaidAdapterStorageTcgSetLockingObject.c)
 *     RaidAdapterStorageTcgSetLockingObjectAuthKey @ 0x140086A78 (RaidAdapterStorageTcgSetLockingObjectAuthKey.c)
 *     RaidAdapterStorageTcgSetLockingObjectMetadata @ 0x140087028 (RaidAdapterStorageTcgSetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgSetSpAuthorityKey @ 0x1400875CC (RaidAdapterStorageTcgSetSpAuthorityKey.c)
 *     RaidUnitStorageTcgActivateLocking @ 0x140087B5C (RaidUnitStorageTcgActivateLocking.c)
 *     RaidUnitStorageTcgAssignLockingObject @ 0x1400880D0 (RaidUnitStorageTcgAssignLockingObject.c)
 *     RaidUnitStorageTcgDeassignLockingObject @ 0x140088708 (RaidUnitStorageTcgDeassignLockingObject.c)
 *     RaidUnitStorageTcgEnumerateLockingObjects @ 0x140088CB4 (RaidUnitStorageTcgEnumerateLockingObjects.c)
 *     RaidUnitStorageTcgEraseLockingObject @ 0x1400892C4 (RaidUnitStorageTcgEraseLockingObject.c)
 *     RaidUnitStorageTcgGetLockingObjectMetadata @ 0x140089860 (RaidUnitStorageTcgGetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgQueryCapability @ 0x140089E3C (RaidUnitStorageTcgQueryCapability.c)
 *     RaidUnitStorageTcgResetState @ 0x14008A358 (RaidUnitStorageTcgResetState.c)
 *     RaidUnitStorageTcgRevertConfig @ 0x14008A830 (RaidUnitStorageTcgRevertConfig.c)
 *     RaidUnitStorageTcgSetLockingObject @ 0x14008AD88 (RaidUnitStorageTcgSetLockingObject.c)
 *     RaidUnitStorageTcgSetLockingObjectAuthKey @ 0x14008B3A0 (RaidUnitStorageTcgSetLockingObjectAuthKey.c)
 *     RaidUnitStorageTcgSetLockingObjectMetadata @ 0x14008B974 (RaidUnitStorageTcgSetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgSetSpAuthorityKey @ 0x14008BF3C (RaidUnitStorageTcgSetSpAuthorityKey.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        const wchar_t *a10,
        const char *a11,
        const char *a12,
        const char *a13,
        const wchar_t *a14,
        const char *a15,
        const char *a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22)
{
  const wchar_t *v22; // rcx
  int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // edx
  int v27; // r8d
  const char *v28; // rcx
  __int64 v29; // rdx
  int v30; // edx
  const char *v31; // rcx
  __int64 v32; // rdx
  int v33; // edx
  const char *v34; // rcx
  __int64 v35; // rdx
  int v36; // edx
  const wchar_t *v37; // rcx
  bool v38; // zf
  __int64 v39; // rdx
  const char *v40; // rcx
  __int64 v41; // rdx
  int v42; // edx
  const char *v43; // rcx
  bool v44; // zf
  __int64 v46; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+50h] [rbp-B0h] BYREF
  int *v50; // [rsp+60h] [rbp-A0h]
  __int64 v51; // [rsp+68h] [rbp-98h]
  char *v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h]
  char *v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h]
  char *v56; // [rsp+90h] [rbp-70h]
  __int64 v57; // [rsp+98h] [rbp-68h]
  __int64 v58; // [rsp+A0h] [rbp-60h]
  __int64 v59; // [rsp+A8h] [rbp-58h]
  __int64 v60; // [rsp+B0h] [rbp-50h]
  __int64 v61; // [rsp+B8h] [rbp-48h]
  const wchar_t *v62; // [rsp+C0h] [rbp-40h]
  int v63; // [rsp+C8h] [rbp-38h]
  int v64; // [rsp+CCh] [rbp-34h]
  const char *v65; // [rsp+D0h] [rbp-30h]
  int v66; // [rsp+D8h] [rbp-28h]
  int v67; // [rsp+DCh] [rbp-24h]
  const char *v68; // [rsp+E0h] [rbp-20h]
  int v69; // [rsp+E8h] [rbp-18h]
  int v70; // [rsp+ECh] [rbp-14h]
  const char *v71; // [rsp+F0h] [rbp-10h]
  int v72; // [rsp+F8h] [rbp-8h]
  int v73; // [rsp+FCh] [rbp-4h]
  const wchar_t *v74; // [rsp+100h] [rbp+0h]
  int v75; // [rsp+108h] [rbp+8h]
  int v76; // [rsp+10Ch] [rbp+Ch]
  const char *v77; // [rsp+110h] [rbp+10h]
  int v78; // [rsp+118h] [rbp+18h]
  int v79; // [rsp+11Ch] [rbp+1Ch]
  const char *v80; // [rsp+120h] [rbp+20h]
  int v81; // [rsp+128h] [rbp+28h]
  int v82; // [rsp+12Ch] [rbp+2Ch]
  char *v83; // [rsp+130h] [rbp+30h]
  __int64 v84; // [rsp+138h] [rbp+38h]
  char *v85; // [rsp+140h] [rbp+40h]
  __int64 v86; // [rsp+148h] [rbp+48h]
  char *v87; // [rsp+150h] [rbp+50h]
  __int64 v88; // [rsp+158h] [rbp+58h]
  char *v89; // [rsp+160h] [rbp+60h]
  __int64 v90; // [rsp+168h] [rbp+68h]
  char *v91; // [rsp+170h] [rbp+70h]
  __int64 v92; // [rsp+178h] [rbp+78h]
  char *v93; // [rsp+180h] [rbp+80h]
  __int64 v94; // [rsp+188h] [rbp+88h]
  __int64 *v95; // [rsp+190h] [rbp+90h]
  __int64 v96; // [rsp+198h] [rbp+98h]
  __int64 *v97; // [rsp+1A0h] [rbp+A0h]
  __int64 v98; // [rsp+1A8h] [rbp+A8h]
  __int64 *v99; // [rsp+1B0h] [rbp+B0h]
  __int64 v100; // [rsp+1B8h] [rbp+B8h]
  int v101; // [rsp+1F8h] [rbp+F8h] BYREF

  v101 = a4;
  v22 = a10;
  v50 = &v101;
  v48 = 0LL;
  v52 = &a5;
  v54 = &a6;
  v56 = &a7;
  v23 = 10;
  v58 = a8;
  v60 = a9;
  v24 = -1LL;
  v47 = 0LL;
  v46 = 0LL;
  v51 = 4LL;
  v53 = 1LL;
  v55 = 1LL;
  v57 = 1LL;
  v59 = 16LL;
  v61 = 16LL;
  if ( a10 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a10[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v26 = 10;
  }
  v63 = v26;
  v64 = 0;
  if ( !a10 )
    v22 = L"NULL";
  v27 = 5;
  v62 = v22;
  v28 = a11;
  if ( a11 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a11[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5;
  }
  v66 = v30;
  v67 = 0;
  if ( !a11 )
    v28 = "NULL";
  v65 = v28;
  v31 = a12;
  if ( a12 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a12[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v33 = 5;
  }
  v69 = v33;
  v70 = 0;
  if ( !a12 )
    v31 = "NULL";
  v68 = v31;
  v34 = a13;
  if ( a13 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a13[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v36 = 5;
  }
  v72 = v36;
  v73 = 0;
  if ( !a13 )
    v34 = "NULL";
  v71 = v34;
  v37 = a14;
  v38 = a14 == 0LL;
  if ( a14 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( a14[v39] );
    v23 = 2 * v39 + 2;
    v38 = a14 == 0LL;
  }
  if ( v38 )
    v37 = L"NULL";
  v75 = v23;
  v74 = v37;
  v40 = a15;
  v76 = 0;
  if ( a15 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( a15[v41] );
    v42 = v41 + 1;
  }
  else
  {
    v42 = 5;
  }
  v78 = v42;
  v79 = 0;
  if ( !a15 )
    v40 = "NULL";
  v77 = v40;
  v43 = a16;
  v44 = a16 == 0LL;
  if ( a16 )
  {
    do
      ++v24;
    while ( a16[v24] );
    v27 = v24 + 1;
    v44 = a16 == 0LL;
  }
  if ( v44 )
    v43 = "NULL";
  v81 = v27;
  v80 = v43;
  v83 = &a17;
  v82 = 0;
  v85 = &a18;
  v84 = 4LL;
  v87 = &a19;
  v86 = 8LL;
  v89 = &a20;
  v91 = &a21;
  v93 = &a22;
  v95 = &v46;
  v97 = &v47;
  v99 = &v48;
  v88 = 8LL;
  v90 = 8LL;
  v92 = 8LL;
  v94 = 8LL;
  v96 = 8LL;
  v98 = 8LL;
  v100 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v43, &TcgIoctlFailure, 0LL, 0x17u, &v49);
}
