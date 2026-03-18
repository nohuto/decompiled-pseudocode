/*
 * XREFs of ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x14010AEE0
 * Callers:
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x14010AB30 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     memset @ 0x14024BD80 (memset.c)
 */

_OWORD *__fastcall QHelper::GetInputDestFromForegroundCapture(_OWORD *a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rdi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _OWORD v16[7]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  if ( *(_QWORD *)(W32GetUserSessionState(v3, v2, v4) + 18928) )
    v8 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 18928) + 112LL);
  else
    v8 = 0LL;
  if ( v8 )
  {
    memset(v16, 0, sizeof(v16));
    v9 = v16[1];
    LODWORD(v16[0]) = 4;
    *(_QWORD *)&v16[5] = v8;
    HIDWORD(v16[5]) = 2;
    *a1 = v16[0];
    v10 = v16[2];
    a1[1] = v9;
    v11 = v16[3];
    a1[2] = v10;
    v12 = v16[4];
    a1[3] = v11;
    v13 = v16[5];
    a1[4] = v12;
    v14 = v16[6];
    a1[5] = v13;
    a1[6] = v14;
  }
  return a1;
}
