/*
 * XREFs of ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x14023EA98
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEAUtagWND@@AEBU1@@Z @ 0x1400908E8 (-MiPConvertPoint@@YA-AUtagPOINT@@PEAUtagWND@@AEBU1@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x14015DD4C (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x14019EF1C (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     Feature_MiPTransform__private_IsEnabledDeviceUsageNoInline @ 0x140281B90 (Feature_MiPTransform__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall GeneratePointerMessageFromMouse(
        struct tagQMSG *a1,
        __int64 a2,
        struct tagQMSG *a3,
        struct tagWND *a4,
        int a5)
{
  unsigned int v7; // r13d
  struct tagTHREADINFO *v9; // rbx
  _DWORD *v10; // rax
  __int128 v11; // xmm0
  int NextFrameId; // eax
  _DWORD *v13; // r14
  __int64 v14; // r8
  int PointerFlagsFromMouse; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  struct tagPOINT v17; // rax
  bool v18; // zf
  int v19; // ecx
  __int64 v20; // rax
  _DWORD *v21; // rcx
  _DWORD *v23; // rax
  __int128 v24; // [rsp+38h] [rbp-21h] BYREF
  __int128 v25; // [rsp+48h] [rbp-11h]
  struct tagPOINT v26[2]; // [rsp+58h] [rbp-1h] BYREF
  __int128 v27; // [rsp+68h] [rbp+Fh]
  __int128 v28; // [rsp+78h] [rbp+1Fh] BYREF
  __int128 v29; // [rsp+88h] [rbp+2Fh] BYREF

  v7 = a2;
  v9 = PtiCurrent((__int64)a1, a2);
  memset_0(&v24, 0, 0x60uLL);
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
    *(_QWORD *)&v24 = 0x100000004LL;
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
    *(_QWORD *)&v25 = -1LL;
    DWORD2(v24) = NextFrameId;
    *((_QWORD *)&v25 + 1) = a4 ? *(_QWORD *)a4 : 0LL;
    v13 = (_DWORD *)((char *)a1 + 24);
    v14 = *((_QWORD *)a3 + 4);
    LODWORD(v28) = *((_DWORD *)a3 + 12);
    *(_QWORD *)&v29 = *((_QWORD *)a3 + 17);
    DWORD1(v28) = 1;
    PointerFlagsFromMouse = GetPointerFlagsFromMouse((char *)a1 + 24, v7, v14, (char *)&v28 + 12, (char *)&v29 + 8);
    HIDWORD(v24) = PointerFlagsFromMouse;
    if ( PointerFlagsFromMouse )
    {
      if ( (**((_DWORD **)v9 + 189) & 4) == 0 )
        HIDWORD(v24) = PointerFlagsFromMouse | 0x2000;
      IsEnabledDeviceUsageNoInline = Feature_MiPTransform__private_IsEnabledDeviceUsageNoInline();
      if ( (*((_DWORD *)a3 + 25) & 0x1000) != 0 && (!IsEnabledDeviceUsageNoInline || *((_QWORD *)a4 + 34)) )
        HIDWORD(v24) |= 0x400000u;
      v26[0].x = *((__int16 *)a3 + 20);
      v26[0].y = *((__int16 *)a3 + 21);
      v17 = MiPConvertPoint(a4, v26);
      v18 = (HIDWORD(v24) & 0x180000) == 0;
      *(struct tagPOINT *)&v27 = v26[0];
      v26[1] = v17;
      *((struct tagPOINT *)&v27 + 1) = v17;
      *((_QWORD *)a1 + 13) = v9;
      if ( v18 )
      {
        v19 = WORD6(v24) & 0xE1F7;
      }
      else
      {
        DWORD2(v28) = *((__int16 *)a3 + 17);
        v19 = WORD4(v28);
      }
      *((_QWORD *)a1 + 4) = (unsigned int)(v19 << 16) | 1LL;
      v20 = *((_QWORD *)v9 + 189);
      *(_OWORD *)(v20 + 24) = v24;
      *(_OWORD *)(v20 + 40) = v25;
      *(_OWORD *)(v20 + 56) = *(_OWORD *)&v26[0].x;
      *(_OWORD *)(v20 + 72) = v27;
      *(_OWORD *)(v20 + 88) = v28;
      *(_OWORD *)(v20 + 104) = v29;
      **((_DWORD **)v9 + 189) |= 1u;
      if ( a5 )
      {
        if ( ((*v13 - 579) & 0xFFFFFFFB) == 0 )
        {
          v21 = (_DWORD *)*((_QWORD *)v9 + 189);
          if ( (*v21 & 4) != 0 )
          {
            *v21 |= 0x10u;
            **((_DWORD **)v9 + 189) &= ~2u;
          }
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
  v23 = (_DWORD *)*((_QWORD *)v9 + 189);
  if ( v23 )
    *v23 &= ~1u;
  return 0LL;
}
