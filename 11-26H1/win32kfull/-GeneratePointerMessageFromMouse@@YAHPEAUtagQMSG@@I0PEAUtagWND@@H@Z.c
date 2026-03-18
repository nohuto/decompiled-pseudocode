/*
 * XREFs of ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1402728F8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEAUtagWND@@AEBU1@@Z @ 0x1400309A0 (-MiPConvertPoint@@YA-AUtagPOINT@@PEAUtagWND@@AEBU1@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x140054760 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1401D034C (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GeneratePointerMessageFromMouse(
        struct tagQMSG *a1,
        unsigned int a2,
        struct tagQMSG *a3,
        struct tagWND *a4,
        int a5)
{
  struct tagTHREADINFO *v9; // rbx
  _DWORD *v10; // rax
  __int128 v11; // xmm0
  int NextFrameId; // eax
  _DWORD *v13; // r14
  __int64 v14; // r8
  int v15; // r8d
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rax
  _DWORD *v19; // rcx
  _DWORD *v21; // rax
  __int128 v22; // [rsp+38h] [rbp-21h] BYREF
  __int128 v23; // [rsp+48h] [rbp-11h]
  struct tagPOINT v24[2]; // [rsp+58h] [rbp-1h] BYREF
  __int128 v25; // [rsp+68h] [rbp+Fh]
  __int128 v26; // [rsp+78h] [rbp+1Fh] BYREF
  __int128 v27; // [rsp+88h] [rbp+2Fh] BYREF

  v9 = PtiCurrent((__int64)a1);
  memset_0(&v22, 0, 0x60uLL);
  v10 = (_DWORD *)*((_QWORD *)v9 + 189);
  if ( !v10 )
  {
    v10 = (_DWORD *)Win32AllocPoolZInit(392LL, 1347253077LL);
    if ( !v10 )
      goto LABEL_31;
    *((_QWORD *)v9 + 189) = v10;
  }
  if ( a5 && (*v10 & 0x10) != 0 )
  {
    *v10 &= ~0x10u;
    **((_DWORD **)v9 + 189) &= ~4u;
  }
  if ( (unsigned int)IsMiPMouseMessage(*((unsigned int *)a3 + 6)) )
  {
    v11 = *(_OWORD *)a3;
    *(_QWORD *)&v22 = 0x100000004LL;
    *(_OWORD *)a1 = v11;
    *((_OWORD *)a1 + 1) = *((_OWORD *)a3 + 1);
    *((_OWORD *)a1 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)a1 + 3) = *((_OWORD *)a3 + 3);
    *((_OWORD *)a1 + 4) = *((_OWORD *)a3 + 4);
    *((_OWORD *)a1 + 5) = *((_OWORD *)a3 + 5);
    *((_OWORD *)a1 + 6) = *((_OWORD *)a3 + 6);
    *((_OWORD *)a1 + 7) = *((_OWORD *)a3 + 7);
    *((_OWORD *)a1 + 8) = *((_OWORD *)a3 + 8);
    *((_OWORD *)a1 + 9) = *((_OWORD *)a3 + 9);
    *((_QWORD *)a1 + 20) = *((_QWORD *)a3 + 20);
    *((_QWORD *)a1 + 1) = 0LL;
    *(_QWORD *)a1 = 0LL;
    NextFrameId = GetNextFrameId();
    *(_QWORD *)&v23 = -1LL;
    DWORD2(v22) = NextFrameId;
    *((_QWORD *)&v23 + 1) = a4 ? *(_QWORD *)a4 : 0LL;
    v13 = (_DWORD *)((char *)a1 + 24);
    v14 = *((_QWORD *)a3 + 4);
    LODWORD(v26) = *((_DWORD *)a3 + 12);
    *(_QWORD *)&v27 = *((_QWORD *)a3 + 17);
    DWORD1(v26) = 1;
    HIDWORD(v22) = GetPointerFlagsFromMouse((char *)a1 + 24, a2, v14, (char *)&v26 + 12, (char *)&v27 + 8);
    v15 = HIDWORD(v22);
    if ( HIDWORD(v22) )
    {
      if ( (**((_DWORD **)v9 + 189) & 4) == 0 )
      {
        v15 = HIDWORD(v22) | 0x2000;
        HIDWORD(v22) |= 0x2000u;
      }
      if ( (*((_DWORD *)a3 + 25) & 0x1000) != 0 && *((_QWORD *)a4 + 34) )
        HIDWORD(v22) = v15 | 0x400000;
      v24[0].x = *((__int16 *)a3 + 20);
      v24[0].y = *((__int16 *)a3 + 21);
      v24[1] = MiPConvertPoint(a4, v24);
      v16 = HIDWORD(v22);
      v25 = *(_OWORD *)&v24[0].x;
      *((_QWORD *)a1 + 13) = v9;
      if ( (v16 & 0x180000) != 0 )
      {
        DWORD2(v26) = *((__int16 *)a3 + 17);
        v17 = WORD4(v26);
      }
      else
      {
        v17 = v16 & 0xFFFFE1F7;
      }
      *((_QWORD *)a1 + 4) = (v17 << 16) | 1LL;
      v18 = *((_QWORD *)v9 + 189);
      *(_OWORD *)(v18 + 24) = v22;
      *(_OWORD *)(v18 + 40) = v23;
      *(_OWORD *)(v18 + 56) = *(_OWORD *)&v24[0].x;
      *(_OWORD *)(v18 + 72) = v25;
      *(_OWORD *)(v18 + 88) = v26;
      *(_OWORD *)(v18 + 104) = v27;
      **((_DWORD **)v9 + 189) |= 1u;
      if ( a5 && (*v13 == 583 || *v13 == 579) )
      {
        v19 = (_DWORD *)*((_QWORD *)v9 + 189);
        if ( (*v19 & 4) != 0 )
        {
          *v19 |= 0x10u;
          **((_DWORD **)v9 + 189) &= ~2u;
        }
      }
      if ( *v13 == 577 || *v13 == 578 || (unsigned int)(*v13 - 581) < 2 )
      {
        *(_QWORD *)(*((_QWORD *)v9 + 189) + 384LL) = *((_QWORD *)a1 + 5);
        RefreshMiPIdleNotificationTimer(a4);
      }
      else
      {
        StopMiPIdleNotificationTimer(a4);
      }
      return 1LL;
    }
  }
LABEL_31:
  v21 = (_DWORD *)*((_QWORD *)v9 + 189);
  if ( v21 )
    *v21 &= ~1u;
  return 0LL;
}
