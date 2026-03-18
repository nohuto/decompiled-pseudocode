/*
 * XREFs of _lambda_89c28751b319d20abeaa919f1ef3608e_::operator() @ 0x1401C6B10
 * Callers:
 *     _DXGKCALLONEXIT__lambda_89c28751b319d20abeaa919f1ef3608e____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140075F24 (_DXGKCALLONEXIT__lambda_89c28751b319d20abeaa919f1ef3608e____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x14005A8AC (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline @ 0x14006798C (Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403EF9BC (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1403F6C4C (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 */

__int64 __fastcall lambda_89c28751b319d20abeaa919f1ef3608e_::operator()(int **a1)
{
  __int64 v2; // rcx
  int *v3; // rax
  int v4; // ecx
  __int64 v5; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int ProcessSessionId; // eax
  int *v13; // rax
  int *v14; // r9
  int *v15; // rax
  int v16; // ecx
  unsigned __int64 *v17; // rdx
  __int64 v19; // [rsp+30h] [rbp-41h]
  DispBrokerClientHandle *v20[2]; // [rsp+58h] [rbp-19h] BYREF
  _DWORD v21[2]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v22; // [rsp+70h] [rbp-1h]
  __int128 v23; // [rsp+78h] [rbp+7h]
  __int64 v24; // [rsp+88h] [rbp+17h]
  int v25; // [rsp+90h] [rbp+1Fh]
  int v26; // [rsp+94h] [rbp+23h]
  int v27; // [rsp+98h] [rbp+27h]
  int v28; // [rsp+9Ch] [rbp+2Bh]
  __int64 v29; // [rsp+A0h] [rbp+2Fh]
  __int64 v30; // [rsp+A8h] [rbp+37h]

  v2 = *(_QWORD *)a1[3];
  if ( v2 && !*(_BYTE *)(v2 + 18496) )
  {
    WdLogSingleEntry3(2LL, (unsigned int)*a1[2], **a1, -1071775725LL);
    v3 = a1[2];
    v19 = **a1;
    WdLogGlobalForLineNumber = 670;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Display broker was just disabled during UpdateDisplayConfig in session 0x%I64x, override ntStatus from 0x"
                "%I64x to 0x%I64x.",
      (unsigned int)*v3,
      v19,
      -1071775725LL,
      0LL,
      0LL);
    **a1 = -1071775725;
  }
  Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline();
  v4 = **a1;
  if ( v4 < 0 && v4 != -1071775725 )
  {
    v5 = -1LL;
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( SessionData )
    {
      if ( *((_QWORD *)SessionData + 2379) )
      {
        DispBrokerClient::ReferencePort((char *)SessionData + 18984, v20);
        v5 = *((_QWORD *)v20[0] + 2);
        DispBrokerClientReference::Assign(v20, 0LL);
      }
    }
    else
    {
      CurrentProcess = PsGetCurrentProcess(v8);
      PsGetProcessSessionId(CurrentProcess);
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 715;
      v11 = PsGetCurrentProcess(v10);
      ProcessSessionId = PsGetProcessSessionId(v11);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Called DxgkIddHandleSetDisplayConfig without session data in session 0x%I64x",
        ProcessSessionId,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v13 = *a1;
    v14 = a1[2];
    v20[0] = (DispBrokerClientHandle *)0x100000000LL;
    DxgCreateLiveDumpWithWdLogs2(403LL, 2078LL, *v13, *(_QWORD *)v14, v5, 0x100000000LL);
  }
  v15 = a1[1];
  v22 = 0LL;
  v23 = 0LL;
  v26 = 0;
  v16 = **a1;
  v30 = *(_QWORD *)v15;
  v17 = (unsigned __int64 *)a1[2];
  v28 = v16;
  v21[0] = 30;
  v21[1] = 72;
  v25 = 0;
  v24 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v27 = 106;
  v29 = 0LL;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v21, *v17);
}
