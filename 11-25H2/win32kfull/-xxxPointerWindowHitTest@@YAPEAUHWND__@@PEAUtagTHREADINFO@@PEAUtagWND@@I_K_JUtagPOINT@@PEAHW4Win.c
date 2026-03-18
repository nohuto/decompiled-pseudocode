/*
 * XREFs of ?xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@PEBUtagPOINTEREVENTINT@@2PEAU4@@Z @ 0x1401BF8B8
 * Callers:
 *     EditionPointerWindowHitTest @ 0x1401BF720 (EditionPointerWindowHitTest.c)
 * Callees:
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x140022DCC (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@PEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x14002C150 (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x14005BB80 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     TouchTargetingCreateContact @ 0x1401C0078 (TouchTargetingCreateContact.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1401C1988 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxPointerWindowHitTest(
        const struct tagTHREADINFO *a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        struct tagPOINT a6,
        int *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        struct tagPOINT *a11)
{
  __int64 v14; // rbx
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  struct tagTHREADINFO *v20; // rax
  __int64 v21; // rdx
  struct tagTHREADINFO *v22; // rax
  __int128 *v23; // rcx
  __int128 v24; // xmm0
  int v25; // eax
  const struct tagTHREADINFO *v26; // rsi
  __int64 v27; // r8
  __int64 v28; // rax
  _OWORD *v29; // rcx
  __int128 v30; // xmm0
  struct tagWND *v31; // rax
  void *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  struct tagPOINT v37; // [rsp+68h] [rbp-98h] BYREF
  __int128 v38; // [rsp+70h] [rbp-90h] BYREF
  __int128 v39; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v40[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-60h]
  _QWORD v42[3]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v43; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v44; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v45[3]; // [rsp+E0h] [rbp-20h] BYREF

  v37 = (struct tagPOINT)a1;
  EtwTraceTouchTargetingWindowHitTestStart();
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))TouchTargetingEnabledForInput)(a6, a9 + 8) )
  {
    v14 = xxxWindowHitTestWithoutTargeting(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
LABEL_3:
    EtwTraceTouchTargetingWindowHitTestStop();
    return v14;
  }
  v16 = (_QWORD *)Win32AllocPoolZInit(192LL, 1920103253LL);
  if ( v16 )
  {
    v19 = Win32AllocPoolZInit(184LL, 1920103253LL);
    if ( v19 )
    {
      v20 = PtiCurrent(v18, v17);
      v42[0] = *((_QWORD *)v20 + 48);
      *((_QWORD *)v20 + 48) = v42;
      v42[2] = Win32FreePool;
      v42[1] = v16;
      v22 = PtiCurrent((__int64)v42, v21);
      v43 = 0LL;
      v44 = 0LL;
      v40[0] = *((_QWORD *)v22 + 48);
      *((_QWORD *)v22 + 48) = v40;
      v41 = (__int64)Win32FreePool;
      *a11 = 0LL;
      v40[1] = v19;
      v16[23] = 0LL;
      *(_QWORD *)&v38 = 0LL;
      memset(v45, 0, sizeof(v45));
      if ( (unsigned int)_GetDeviceRects(a9 + 8, &v43, &v44) )
      {
        v38 = v44;
        v39 = v43;
        _SetHimetricToPixelRatio(&v39, &v38, v16);
        v23 = &v43;
      }
      else
      {
        v23 = (__int128 *)v38;
      }
      v24 = *(_OWORD *)(a9 + 112);
      v25 = *(_DWORD *)(a9 + 108);
      *(struct tagPOINT *)((char *)v45 + 4) = a6;
      *(_OWORD *)((char *)v45 + 12) = v24;
      *(_OWORD *)((char *)&v45[1] + 12) = v24;
      if ( (v25 & 2) != 0 )
        HIDWORD(v45[2]) = *(_DWORD *)(a9 + 144);
      else
        HIDWORD(v45[2]) = 0;
      TouchTargetingCreateContact(v45, v23, 1LL, v16);
      *(_QWORD *)(v19 + 8) = a4;
      *(_QWORD *)(v19 + 16) = a5;
      *(_QWORD *)(v19 + 24) = a10;
      *(_DWORD *)v19 = a3;
      *(_DWORD *)(v19 + 32) = *a7;
      *(_QWORD *)(v19 + 40) = v16;
      v26 = (const struct tagTHREADINFO *)v37;
      *(_DWORD *)(v19 + 36) = a8;
      *(struct tagPOINT *)(v19 + 48) = *a11;
      *(_QWORD *)(v19 + 56) = 0LL;
      *(_DWORD *)(v19 + 64) = 0;
      *(_DWORD *)(v19 + 84) = IsThreadDesktopComposed(v26);
      *(_DWORD *)(v19 + 88) = v27;
      *(_QWORD *)(v19 + 96) = v27;
      *(_QWORD *)(v19 + 168) = v27;
      *(_QWORD *)(v19 + 176) = v27;
      v37 = a6;
      v28 = Win32AllocPoolZInit(192LL, 1920103253LL);
      *(_QWORD *)&v38 = v28;
      if ( v28 )
      {
        v29 = *(_OWORD **)(v19 + 40);
        *(_OWORD *)v28 = *v29;
        *(_OWORD *)(v28 + 16) = v29[1];
        *(_OWORD *)(v28 + 32) = v29[2];
        *(_OWORD *)(v28 + 48) = v29[3];
        *(_OWORD *)(v28 + 64) = v29[4];
        *(_OWORD *)(v28 + 80) = v29[5];
        *(_OWORD *)(v28 + 96) = v29[6];
        v30 = v29[7];
        v29 += 8;
        *(_OWORD *)(v28 + 112) = v30;
        *(_OWORD *)(v28 + 128) = *v29;
        *(_OWORD *)(v28 + 144) = v29[1];
        *(_OWORD *)(v28 + 160) = v29[2];
        *(_OWORD *)(v28 + 176) = v29[3];
        v31 = TopLevelTouchTarget(a2, (struct tagTOUCHTARGETINGCONTACT *)v28, &v37, a11, *(_DWORD *)(v19 + 84));
        v32 = (void *)v38;
        *(_QWORD *)(v19 + 168) = v31;
        Win32FreePool(v32);
      }
      v39 = *(_OWORD *)(*((_QWORD *)a2 + 5) + 88LL);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxWindowHitTestWithTargeting)(a2, a6, v19, &v39, 0);
      if ( *(_DWORD *)(v19 + 180) )
      {
        v14 = xxxWindowHitTestWithoutTargeting(v26, (__int64)a2, a3, a4, a5, a6, a7, a8);
      }
      else
      {
        *a7 = *(_DWORD *)(v19 + 32);
        *a11 = *(struct tagPOINT *)(v19 + 48);
        v14 = *(_QWORD *)(v19 + 56);
      }
      PopAndFreeW32ThreadLock((__int64)v40, v33);
      v41 = -1LL;
      PopAndFreeW32ThreadLock((__int64)v42, v34);
      goto LABEL_3;
    }
    Win32FreePool(v16);
  }
  return 0LL;
}
