/*
 * XREFs of ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1401F5CEC
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1401C1988 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x140021D08 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14002D590 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1402A4C60 (-OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1402A4D34 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxWindowHitTestFromTargetingProperty(__int64 a1, __int64 a2, int *a3, int *a4, int a5, __int64 a6)
{
  __int64 v8; // r12
  int v9; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  signed __int64 v15; // r14
  __int64 v16; // rdx
  unsigned __int16 v17; // r13
  __int64 v18; // rdi
  unsigned int v19; // r14d
  __int64 v20; // r8
  _DWORD *v21; // rdi
  __int64 v22; // rax
  struct tagWND *v23; // r14
  __int64 v24; // rdx
  struct tagPOINT v25; // [rsp+50h] [rbp-89h] BYREF
  struct tagPOINT v26; // [rsp+58h] [rbp-81h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-79h] BYREF
  int *v28; // [rsp+70h] [rbp-69h]
  int v29; // [rsp+80h] [rbp-59h] BYREF
  _BYTE v30[44]; // [rsp+84h] [rbp-55h] BYREF
  char v31; // [rsp+B0h] [rbp-29h]
  int v32; // [rsp+B1h] [rbp-28h]
  __int16 v33; // [rsp+B5h] [rbp-24h]
  char v34; // [rsp+B7h] [rbp-22h]
  __int64 v35; // [rsp+B8h] [rbp-21h]
  __int128 v36; // [rsp+C0h] [rbp-19h] BYREF

  v28 = a4;
  v25 = (struct tagPOINT)a2;
  *(_QWORD *)&v36 = a6;
  v8 = 0LL;
  v9 = 1;
  *a4 = 1;
  if ( a5 == 1
    && (*(struct tagTHREADINFO **)(a1 + 16) == PtiCurrent(a6, a2)
     || *(struct tagTHREADINFO **)(a1 + 264) == PtiCurrent(v12, v11)) )
  {
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, a1);
    EtwTraceTouchTargetingPointerTargetStart();
    v13 = *((_QWORD *)a3 + 5);
    v14 = *((unsigned __int16 *)a3 + 4);
    memset(&v30[8], 0, 32);
    v29 = v14;
    *(_QWORD *)v30 = *(_QWORD *)(v13 + 32);
    *(_OWORD *)&v30[8] = *(_OWORD *)(v13 + 16);
    *(_OWORD *)&v30[24] = *(_OWORD *)v13;
    *(_DWORD *)&v30[40] = *(_DWORD *)(v13 + 40);
    v15 = xxxSendTransformableMessageTimeout(
            (struct tagTHREADINFO **)a1,
            589LL,
            0LL,
            (struct tagDRAWITEMSTRUCT *)&v29,
            0,
            0,
            0LL,
            1,
            0);
    EtwTraceTouchTargetingPointerTargetStop();
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v16);
    v26 = 0LL;
    v17 = (v15 >> 20) & 0xFFF;
    if ( v17 <= 0xFFDu )
    {
      if ( v17 < (unsigned int)a3[16]
        || !*((_QWORD *)a3 + 7)
        || (a3[44] & 1) != 0
        && (v26.x = v25.x + a3[12],
            v26.y = v25.y + a3[13],
            PtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), *(_QWORD *)&v26)) )
      {
        v18 = (v15 >> 10) & 0x3FF;
        v26.x = v18;
        if ( (unsigned int)v18 > 0x1FF )
        {
          LODWORD(v18) = v18 - 1024;
          v26.x = v18;
        }
        v19 = v15 & 0x3FF;
        v26.y = v19;
        if ( v19 > 0x1FF )
        {
          v19 -= 1024;
          v26.y = v19;
        }
        if ( (unsigned int)OffsetInContact(v25, *((const struct tagTOUCHTARGETINGCONTACT **)a3 + 5), v26) )
        {
          v25.y += v19;
          v25.x += v18;
          if ( a3[21] )
          {
            v20 = *(_QWORD *)(a1 + 40);
            BugCheckParameter3[0] = (ULONG_PTR)v25;
            LogicalToPhysicalDPIPoint(BugCheckParameter3, &v25, *(unsigned int *)(v20 + 288), 0LL);
            v21 = a3 + 8;
            v29 = *a3;
            *(_QWORD *)&v30[20] = a3 + 8;
            *(_DWORD *)v30 = 0;
            *(_OWORD *)&v30[4] = *(_OWORD *)(a3 + 2);
            *(_DWORD *)&v30[28] = a3[9];
            *(_WORD *)&v30[33] = 0;
            v30[35] = 0;
            v32 = 0;
            v33 = 0;
            v34 = 0;
            v30[32] = 0;
            *(_QWORD *)&v30[36] = 0LL;
            v31 = 0;
            v35 = 0LL;
            v22 = xxxDCEWindowHitTestIndirect(
                    (struct tagWND *)a1,
                    (struct tagPOINT)BugCheckParameter3[0],
                    1,
                    (struct tagDCE_WINDOW_HIT_TEST_ARGS *)&v29);
          }
          else
          {
            v21 = a3 + 8;
            v22 = xxxWindowHitTest2(a1, v25, a3 + 8, a3[9]);
          }
          v8 = v22;
          if ( v22 )
          {
            v23 = (struct tagWND *)ValidateHwnd(v22);
            if ( v23 )
            {
              if ( (*(_DWORD *)(a1 + 380) & 0x40000000) != 0 )
                v17 = 0;
              else
                *v21 = 1;
              v24 = v36;
              v36 = *(_OWORD *)v36;
              TransformRectBetweenCoordinateSpaces(&v36, v24, v23, a1);
              *(_OWORD *)BugCheckParameter3 = v36;
              _TTUpdateBestTarget(
                (struct tagPNTRWINDOWHITTTESTARGS *)a3,
                v23,
                v17,
                &v26,
                0LL,
                1,
                (struct tagRECT *)BugCheckParameter3,
                1u);
              if ( !v17 || !*(_QWORD *)(a1 + 112) )
                v9 = 0;
              *v28 = v9;
            }
          }
        }
      }
    }
  }
  return v8;
}
