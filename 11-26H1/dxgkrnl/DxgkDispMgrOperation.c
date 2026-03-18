/*
 * XREFs of DxgkDispMgrOperation @ 0x14040BE80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1401C7154 (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1403BDA5C (--1-$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkDispMgrOperation(void *Src)
{
  NTSTATUS v1; // ebx
  __int64 v3; // rdi
  NTSTATUS v4; // eax
  DXGGLOBAL *Global; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGSESSIONDATA *SessionData; // rbx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // eax
  __int128 v19; // [rsp+50h] [rbp-28h] BYREF
  __int128 v20; // [rsp+60h] [rbp-18h]
  PVOID v21; // [rsp+88h] [rbp+10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  RtlCopyFromUser(&v19, Src, 0x20uLL);
  Object = 0LL;
  v1 = ObReferenceObjectByHandleWithTag(
         *((HANDLE *)&v19 + 1),
         0x20000u,
         g_pDxgkDisplayManagerObjectType,
         1,
         0x4B677844u,
         &Object,
         0LL);
  if ( v1 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 895;
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x4B677844u);
    return (unsigned int)v1;
  }
  if ( !*(_QWORD *)Object )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 901;
    LODWORD(v3) = -1073741811;
LABEL_19:
    NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&Object);
    return (unsigned int)v3;
  }
  if ( (_DWORD)v19 != 1 )
  {
    LODWORD(v3) = -1073741811;
LABEL_28:
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x4B677844u);
    return (unsigned int)v3;
  }
  v21 = 0LL;
  v4 = ObReferenceObjectByHandleWithTag((HANDLE)v20, 0x1F0001u, LpcPortObjectType, 1, 0x4B677844u, &v21, 0LL);
  LODWORD(v3) = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry2(3LL, v20, v4);
    WdLogGlobalForLineNumber = 913;
LABEL_18:
    NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&v21);
    goto LABEL_19;
  }
  if ( !DWORD2(v20) )
  {
LABEL_26:
    if ( v21 )
      ObfDereferenceObjectWithTag(v21, 0x4B677844u);
    goto LABEL_28;
  }
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v6, v7, v8);
  Current = DXGPROCESS::GetCurrent(v10);
  if ( Current && SessionData && ((*((_DWORD *)Current + 102) & 4) != 0 || *((_BYTE *)SessionData + 18500)) )
  {
    v12 = DXGSESSIONDATA::ConnectSessionDisplayBroker(SessionData);
    v3 = v12;
    if ( v12 < 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v13);
      ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
      WdLogSingleEntry2(2LL, v3, ProcessSessionId);
      WdLogGlobalForLineNumber = 933;
      v17 = PsGetCurrentProcess(v16);
      v18 = PsGetProcessSessionId(v17);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to connect to session broker with status 0x%I64x in session 0x%I64x",
        v3,
        v18,
        0LL,
        0LL,
        0LL);
      goto LABEL_18;
    }
    goto LABEL_26;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 925;
  if ( v21 )
  {
    ObfDereferenceObjectWithTag(v21, 0x4B677844u);
    v21 = 0LL;
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x4B677844u);
  return 3221225506LL;
}
