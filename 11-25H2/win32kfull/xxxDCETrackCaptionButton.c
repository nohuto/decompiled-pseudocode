/*
 * XREFs of xxxDCETrackCaptionButton @ 0x140117458
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1401BAE34 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     xxxReleaseCapture @ 0x14006247C (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x140062528 (xxxSetCapture.c)
 *     xxxInternalGetMessage @ 0x1401153B0 (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x140116D64 (xxxDispatchMessage.c)
 *     xxxSleepThread @ 0x140117848 (xxxSleepThread.c)
 *     ?xxxDCECalcCaptionButton@@YAXPEAUtagWND@@HPEAG@Z @ 0x140117864 (-xxxDCECalcCaptionButton@@YAXPEAUtagWND@@HPEAG@Z.c)
 *     DwmSyncHitTestQuery @ 0x140118B24 (DwmSyncHitTestQuery.c)
 *     xxxTrackCaptionButton @ 0x1401192EC (xxxTrackCaptionButton.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 */

__int64 __fastcall xxxDCETrackCaptionButton(struct tagWND *a1, __int64 a2)
{
  unsigned __int16 v2; // si
  unsigned int v3; // r12d
  unsigned int v5; // r15d
  unsigned __int16 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // rdi
  __int64 v12; // rdx
  unsigned __int16 v13; // r12
  __int16 v14; // bx
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  void *v22; // rdi
  unsigned __int16 v23; // ax
  struct tagTHREADINFO *v24; // rdi
  unsigned __int64 v25; // [rsp+20h] [rbp-59h]
  unsigned __int16 v26[2]; // [rsp+50h] [rbp-29h] BYREF
  int v27; // [rsp+54h] [rbp-25h]
  int v28; // [rsp+58h] [rbp-21h]
  int v29; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v30; // [rsp+60h] [rbp-19h] BYREF
  struct tagTHREADINFO *v31; // [rsp+68h] [rbp-11h]
  __int128 v32; // [rsp+70h] [rbp-9h] BYREF
  __int64 v33[2]; // [rsp+80h] [rbp+7h]
  __int128 v34; // [rsp+90h] [rbp+17h]
  int v35; // [rsp+E8h] [rbp+6Fh]
  char v36; // [rsp+F0h] [rbp+77h] BYREF
  char v37; // [rsp+F8h] [rbp+7Fh] BYREF

  v35 = a2;
  v2 = 0;
  v29 = a2;
  v26[0] = 0;
  v3 = a2;
  LOWORD(v28) = 0;
  v27 = 0;
  v5 = 0;
  v30 = 1;
  v6 = 0;
  v32 = 0LL;
  *(_OWORD *)v33 = 0LL;
  v34 = 0LL;
  v31 = PtiCurrent((__int64)a1, a2);
  PtiCurrent(v8, v7);
  v11 = (void *)ReferenceDwmApiPort(v10, v9);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v36, 1);
  DwmSyncHitTestQuery(v11, 1LL, 0LL, v3, (__int64)&v29, (__int64)&v30);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v36);
  if ( !v30 )
    return xxxTrackCaptionButton(a1, v3);
  switch ( v3 )
  {
    case 8u:
      v5 = 2;
      v6 = 1344;
      break;
    case 9u:
      v5 = 3;
      v6 = 1312;
      break;
    case 0x14u:
      v5 = 5;
      v6 = 1296;
      break;
    case 0x15u:
      v5 = 4;
      v6 = 1408;
      break;
  }
  xxxDCECalcCaptionButton(a1, v5, v26);
  v13 = v26[0];
  if ( v26[0] )
  {
    v28 = 1;
    v14 = 1;
    SetOrClrWF(1, a1, v6, 1);
    xxxWindowEvent(0x800Au, a1, -2, v5, 0);
  }
  else
  {
    v14 = v28;
    v5 = 0;
  }
  xxxSetCapture(a1, v12);
  v15 = 0;
  while ( !v15 )
  {
    LODWORD(v25) = 1;
    if ( (unsigned int)xxxInternalGetMessage((__int64)&v32, 0LL, 512, 526, v25, 0) )
    {
      if ( DWORD2(v32) == 514 )
      {
        xxxReleaseCapture(v17, v16);
        v15 = 1;
        v27 = 1;
        goto LABEL_14;
      }
      if ( DWORD2(v32) != 512 || !v13 )
        goto LABEL_14;
      PtiCurrent(v17, v16);
      v22 = (void *)ReferenceDwmApiPort(v21, v20);
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v37, 1);
      DwmSyncHitTestQuery(v22, v33[0], v33[1], v35, (__int64)&v29, (__int64)&v30);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v37);
      v16 = 1LL;
      if ( v29 == v35 )
      {
        v23 = 1;
        v17 = 1LL;
      }
      else
      {
        v23 = 0;
        v17 = 0LL;
      }
      v14 = v28;
      if ( (_WORD)v28 != v23 )
      {
        v14 = v23;
        v28 = v23;
        SetOrClrWF(v17, a1, v6, 1);
        xxxWindowEvent(0x800Au, a1, -2, v5, 0);
      }
      goto LABEL_29;
    }
    LODWORD(v25) = 1;
    if ( (unsigned int)xxxInternalGetMessage((__int64)&v32, 0LL, 577, 599, v25, 0) )
    {
      v24 = v31;
      _InterlockedOr((volatile signed __int32 *)v31 + 132, 0x8000u);
      xxxDispatchMessage((struct tagMSG *)&v32, v19);
      _InterlockedAnd((volatile signed __int32 *)v24 + 132, 0xFFFF7FFF);
      v13 = v26[0];
LABEL_29:
      v15 = v27;
      goto LABEL_14;
    }
    if ( !(unsigned int)xxxSleepThread(4102LL, 0LL, 1LL) )
      break;
LABEL_14:
    if ( a1 != *(struct tagWND **)(*((_QWORD *)PtiCurrent(v17, v16) + 59) + 112LL) )
      break;
  }
  if ( v13 )
  {
    if ( v14 && v13 != 0xF180 )
    {
      SetOrClrWF(0, a1, v6, 1);
      xxxWindowEvent(0x800Au, a1, -2, v5, 0);
    }
    if ( v15 )
    {
      if ( v29 == v35 )
        return v13;
    }
  }
  return v2;
}
