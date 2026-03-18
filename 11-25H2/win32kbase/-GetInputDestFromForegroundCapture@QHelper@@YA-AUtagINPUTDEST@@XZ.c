/*
 * XREFs of ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x140124C94
 * Callers:
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x140220B58 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     memset @ 0x140243000 (memset.c)
 */

_OWORD *__fastcall QHelper::GetInputDestFromForegroundCapture(_OWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD v14[7]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  if ( *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18888) )
    v6 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18888) + 112LL);
  else
    v6 = 0LL;
  if ( v6 )
  {
    memset(v14, 0, sizeof(v14));
    v8 = v14[1];
    LODWORD(v14[0]) = 4;
    *(_QWORD *)&v14[5] = v6;
    HIDWORD(v14[5]) = 2;
    *a1 = v14[0];
    v9 = v14[2];
    a1[1] = v8;
    v10 = v14[3];
    a1[2] = v9;
    v11 = v14[4];
    a1[3] = v10;
    v12 = v14[5];
    a1[4] = v11;
    v13 = v14[6];
    a1[5] = v12;
    a1[6] = v13;
  }
  return a1;
}
