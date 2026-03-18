/*
 * XREFs of xxxCallHandleMenuMessages @ 0x14022EC60
 * Callers:
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMNDragOver @ 0x1402E9810 (xxxMNDragOver.c)
 * Callees:
 *     xxxHandleMenuMessages @ 0x1400439DC (xxxHandleMenuMessages.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxMNEndMenuState @ 0x14015BDC0 (xxxMNEndMenuState.c)
 *     xxxEndMenuLoop @ 0x140258BF0 (xxxEndMenuLoop.c)
 *     MNCheckButtonDownState @ 0x1402BF3A8 (MNCheckButtonDownState.c)
 */

__int64 __fastcall xxxCallHandleMenuMessages(_QWORD *a1, __int64 *a2, int a3, __int64 a4, __int64 a5)
{
  int v5; // r10d
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // rdx
  int v14; // edx
  __int64 v15; // rdx
  __int64 v17[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  int v19; // [rsp+38h] [rbp-28h]
  int v20; // [rsp+3Ch] [rbp-24h]
  __int64 v21; // [rsp+40h] [rbp-20h]
  __int64 v22; // [rsp+48h] [rbp-18h]
  __int128 v23; // [rsp+50h] [rbp-10h]

  v5 = *((_DWORD *)a1 + 2);
  v20 = 0;
  v23 = 0LL;
  if ( (v5 & 0x4008) == 0x4008 )
  {
    MNCheckButtonDownState(a1);
    v5 = *((_DWORD *)a1 + 2);
  }
  if ( a2 )
    v18 = *a2;
  else
    v18 = 0LL;
  v19 = a3;
  v21 = a4;
  if ( (unsigned int)(a3 - 512) > 0xE )
    v10 = a5;
  else
    v10 = ((unsigned __int16)(*(_WORD *)(a2[5] + 108) + WORD1(a5)) << 16) | (unsigned __int16)(*(_WORD *)(a2[5] + 104)
                                                                                             + a5);
  v11 = *a1;
  v22 = v10;
  *((_DWORD *)a1 + 2) = v5 | 0x200;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v17, v11);
  v12 = xxxHandleMenuMessages((__int64)&v18, (__int64)a1, v17);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v17, v13);
  v14 = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 2) = v14 & 0xFFFFFDFF;
  if ( v12 && (v14 & 0x100) != 0 && ((v14 & 4) == 0 || (*(_DWORD *)*a1 & 0x8000) != 0) )
  {
    xxxEndMenuLoop(a1, *a1);
    xxxMNEndMenuState(a1, v15);
  }
  return v12;
}
