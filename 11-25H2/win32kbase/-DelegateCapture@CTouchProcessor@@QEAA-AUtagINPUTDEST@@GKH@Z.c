/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1401FD2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D29C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9DE0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1401FD424 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1401FF184 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(
        PERESOURCE *a1,
        _OWORD *a2,
        unsigned __int16 a3,
        int a4,
        unsigned int a5)
{
  struct CInputPointerNode *NodeById; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  char *v16; // rcx
  char *v17; // rax
  char *v18; // rdi
  int v20; // [rsp+20h] [rbp-B1h]
  PERESOURCE *v21[7]; // [rsp+28h] [rbp-A9h] BYREF
  _OWORD v22[7]; // [rsp+60h] [rbp-71h] BYREF
  char v23; // [rsp+D0h] [rbp-1h]
  int v24; // [rsp+D1h] [rbp+0h]
  __int16 v25; // [rsp+D5h] [rbp+4h]
  char v26; // [rsp+D7h] [rbp+6h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v21, a1 + 4, 0LL);
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)a1, a3, 0, 0);
  if ( !NodeById )
    goto LABEL_2;
  v16 = (char *)NodeById + 240;
  v17 = (char *)*((_QWORD *)NodeById + 30);
  if ( v17 == v16 )
    goto LABEL_2;
  do
  {
    v18 = v17;
    if ( *((_DWORD *)v17 + 6) == a4 )
      break;
    v17 = *(char **)v17;
  }
  while ( v17 != v16 );
  if ( v17 == v16 )
  {
LABEL_2:
    v24 = 0;
    v25 = 0;
    v26 = 0;
    memset(v22, 0, sizeof(v22));
    v10 = v22[1];
    *a2 = v22[0];
    v23 = 0;
    v11 = v22[2];
    a2[1] = v10;
    v12 = v22[3];
    a2[2] = v11;
    v13 = v22[4];
    a2[3] = v12;
    v14 = v22[5];
    a2[4] = v13;
    v15 = v22[6];
    a2[5] = v14;
    a2[6] = v15;
    CInputDest::~CInputDest((CInputDest *)v22);
  }
  else
  {
    if ( *((_WORD *)v18 + 10) != a3 )
    {
      v20 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6217);
    }
    if ( *((_DWORD *)v18 + 6) != a4 )
    {
      v20 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6218);
    }
    CTouchProcessor::DelegateCaptureInt(a1, a2, v18, a5, v20);
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v21);
  return a2;
}
