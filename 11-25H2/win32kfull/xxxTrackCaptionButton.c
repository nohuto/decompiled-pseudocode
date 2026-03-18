/*
 * XREFs of xxxTrackCaptionButton @ 0x1401192EC
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x140117458 (xxxDCETrackCaptionButton.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1401BAE34 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     xxxReleaseCapture @ 0x14006247C (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x140062528 (xxxSetCapture.c)
 *     xxxInternalGetMessage @ 0x1401153B0 (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x140116D64 (xxxDispatchMessage.c)
 *     xxxSleepThread @ 0x140117848 (xxxSleepThread.c)
 *     xxxCalcCaptionButton @ 0x140118DE4 (xxxCalcCaptionButton.c)
 *     BitBltSysBmp @ 0x14019276C (BitBltSysBmp.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxTrackCaptionButton(struct tagWND *a1, __int64 a2)
{
  unsigned __int16 v2; // di
  unsigned __int16 v3; // r14
  int v4; // ebx
  struct tagTHREADINFO *v6; // r13
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // rdx
  unsigned __int16 v13; // r15
  HDC DCEx; // rbx
  __int16 v15; // bx
  __int64 v16; // rdx
  _BOOL8 v17; // rcx
  HDC v18; // rbx
  __int64 v19; // rdx
  HDC v20; // rbx
  unsigned __int64 v22; // [rsp+28h] [rbp-49h]
  _WORD v23[2]; // [rsp+38h] [rbp-39h] BYREF
  int v24; // [rsp+3Ch] [rbp-35h]
  int v25; // [rsp+40h] [rbp-31h] BYREF
  int v26; // [rsp+44h] [rbp-2Dh]
  int v27; // [rsp+48h] [rbp-29h]
  int v28; // [rsp+4Ch] [rbp-25h]
  BOOL v29; // [rsp+50h] [rbp-21h]
  __int128 v30; // [rsp+58h] [rbp-19h] BYREF
  _OWORD v31[2]; // [rsp+68h] [rbp-9h] BYREF
  __int128 v32; // [rsp+88h] [rbp+17h]

  v2 = 0;
  v23[0] = 0;
  v3 = 0;
  memset(v31, 0, sizeof(v31));
  v25 = 0;
  v4 = a2;
  LOWORD(v24) = 0;
  v32 = 0LL;
  v28 = 0;
  v30 = 0LL;
  v6 = PtiCurrent((__int64)a1, a2);
  v7 = v4 - 8;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 11;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v10 = 4;
          v3 = 1408;
        }
        else
        {
          v10 = 0;
        }
      }
      else
      {
        v10 = 5;
        v3 = 1296;
      }
    }
    else
    {
      v10 = 3;
      v3 = 1312;
    }
  }
  else
  {
    v10 = 2;
    v3 = 1344;
  }
  v11 = xxxCalcCaptionButton((__int64)a1, v10, v23, &v30, &v25, 0);
  v13 = v23[0];
  v26 = SHIWORD(v11);
  v27 = (__int16)v11;
  if ( v23[0] )
  {
    DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
    BitBltSysBmp(DCEx, v27, v26, 1);
    _ReleaseDC(DCEx);
    v24 = 1;
    v15 = 1;
    SetOrClrWF(1, a1, v3, 1);
    xxxWindowEvent(0x800Au, a1, -2, v10, 0);
  }
  else
  {
    v15 = v24;
    v10 = 0;
  }
  xxxSetCapture(a1, v12);
  while ( !v28 )
  {
    LODWORD(v22) = 1;
    if ( (unsigned int)xxxInternalGetMessage((__int64)v31, 0LL, 512, 526, v22, 0) )
    {
      if ( DWORD2(v31[0]) == 514 )
      {
        xxxReleaseCapture(v17, v16);
        v28 = 1;
      }
      else if ( DWORD2(v31[0]) == 512 )
      {
        if ( v13 )
        {
          v29 = PtInRect(&v30, *(unsigned __int64 *)((char *)&v32 + 4));
          v17 = v29;
          if ( v15 != v17 )
          {
            LOWORD(v24) = v29;
            v18 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
            BitBltSysBmp(v18, v27, v26, 1);
            _ReleaseDC(v18);
            SetOrClrWF(v29, a1, v3, 1);
            xxxWindowEvent(0x800Au, a1, -2, v10, 0);
          }
        }
      }
    }
    else
    {
      LODWORD(v22) = 1;
      if ( (unsigned int)xxxInternalGetMessage((__int64)v31, 0LL, 577, 599, v22, 0) )
      {
        _InterlockedOr((volatile signed __int32 *)v6 + 132, 0x8000u);
        xxxDispatchMessage((struct tagMSG *)v31, v19);
        _InterlockedAnd((volatile signed __int32 *)v6 + 132, 0xFFFF7FFF);
        v13 = v23[0];
      }
      else if ( !(unsigned int)xxxSleepThread(0x1006u, 0, 1, 0) )
      {
        break;
      }
    }
    if ( a1 != *(struct tagWND **)(*((_QWORD *)PtiCurrent(v17, v16) + 59) + 112LL) )
      break;
    v15 = v24;
  }
  if ( v13 )
  {
    if ( (_WORD)v24 && v13 != 0xF180 )
    {
      v20 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
      BitBltSysBmp(v20, v27, v26, 1);
      _ReleaseDC(v20);
      SetOrClrWF(0, a1, v3, 1);
      xxxWindowEvent(0x800Au, a1, -2, v10, 0);
    }
    if ( v28 && PtInRect(&v30, *(unsigned __int64 *)((char *)&v32 + 4)) )
      return v13;
  }
  return v2;
}
