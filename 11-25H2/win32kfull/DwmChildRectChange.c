/*
 * XREFs of DwmChildRectChange @ 0x140036870
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     zzzUpdateLayeredWindow @ 0x14005335C (zzzUpdateLayeredWindow.c)
 *     OffsetWindow @ 0x14005B9D0 (OffsetWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x14018FE40 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140233E58 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x14001D2A8 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140037578 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x140037D74 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     ScaleDPIRect @ 0x140159C30 (ScaleDPIRect.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

LONG_PTR __fastcall DwmChildRectChange(struct tagWND *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  INT v12; // r14d
  __int64 v13; // rdi
  void *v14; // rbx
  LONG_PTR result; // rax
  unsigned __int16 ScaledLogPixels; // ax
  __int64 v17; // rbx
  INT v18; // edi
  INT a; // [rsp+30h] [rbp-89h] BYREF
  struct tagRECT v20; // [rsp+38h] [rbp-81h] BYREF
  int v21; // [rsp+50h] [rbp-69h] BYREF
  __int16 v22; // [rsp+54h] [rbp-65h]
  int v23; // [rsp+78h] [rbp-41h]
  __int64 v24; // [rsp+7Ch] [rbp-3Dh]
  __int128 v25; // [rsp+84h] [rbp-35h]
  __int128 v26; // [rsp+94h] [rbp-25h]
  __int128 v27; // [rsp+A4h] [rbp-15h]
  INT v28; // [rsp+B4h] [rbp-5h]
  __int128 v29; // [rsp+C0h] [rbp+7h] BYREF
  __int128 v30; // [rsp+D0h] [rbp+17h] BYREF
  __int128 v31; // [rsp+E0h] [rbp+27h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  a = 0;
  v29 = *(_OWORD *)(v1 + 88);
  v30 = *(_OWORD *)(v1 + 104);
  v31 = (__int128)*CalculateContentRect(&v20, a1, &a);
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v4, v3);
  if ( CurrentThreadNonPaged
    && *CurrentThreadNonPaged
    && *((_QWORD *)PtiCurrent(v7, v6) + 62)
    && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v9, v8) + 62) + 8LL) + 64LL) & 1) != 0
    && (v10 = *((_QWORD *)a1 + 5), v11 = *(_DWORD *)(v10 + 288), (v11 & 0xF) == 0)
    && (v11 & 0x40000000) != 0
    && *(_WORD *)(v10 + 284) != 96 )
  {
    *(_QWORD *)&v20.left = 0LL;
    ScaledLogPixels = GreGetScaledLogPixels();
    v17 = *(_QWORD *)&v20.left;
    v18 = ScaledLogPixels;
    ScaleDPIRect(
      (unsigned int)&v29,
      (unsigned int)&v29,
      ScaledLogPixels,
      96,
      *(__int64 *)&v20.left,
      *(__int64 *)&v20.left);
    ScaleDPIRect((unsigned int)&v30, (unsigned int)&v30, (unsigned __int16)v18, 96, v17, v17);
    ScaleDPIRect((unsigned int)&v31, (unsigned int)&v31, (unsigned __int16)v18, 96, v17, v17);
    v12 = EngMulDiv(a, v18, 96);
  }
  else
  {
    v12 = a;
  }
  WindowMargins::CheckForChanges(a1, 5LL);
  v13 = *(_QWORD *)a1;
  v14 = (void *)ReferenceDwmApiPort();
  result = IncrementDWMWindowUniqueness();
  if ( v14 )
  {
    memset_0(&v21, 0, 0x68uLL);
    v21 = 6815808;
    v25 = v29;
    v22 = 0x8000;
    v23 = 1073741845;
    v24 = v13;
    v27 = v31;
    v28 = v12;
    v26 = v30;
    EtwUpdateEvent(v13, 1073741845LL);
    LpcRequestPort(v14, &v21);
    return ObfDereferenceObject(v14);
  }
  return result;
}
