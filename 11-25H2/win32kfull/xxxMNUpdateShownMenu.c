/*
 * XREFs of xxxMNUpdateShownMenu @ 0x1402E23B4
 * Callers:
 *     xxxEnableMenuItem @ 0x140045E50 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140046AC4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x140049828 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxSetMenuInfo @ 0x1401B2AB8 (xxxSetMenuInfo.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x140034CF8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140034D4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     MNGetpItemFromIndex @ 0x140042B84 (MNGetpItemFromIndex.c)
 *     MNIspItemValid @ 0x140043458 (MNIspItemValid.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     _GetClientRect @ 0x14004BA3C (_GetClientRect.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     xxxScrollWindowEx @ 0x140260308 (xxxScrollWindowEx.c)
 *     xxxInvalidateRect @ 0x1402BEDA4 (xxxInvalidateRect.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

_QWORD *__fastcall xxxMNUpdateShownMenu(__int64 *a1, __int64 *a2, char a3)
{
  __int64 v3; // rax
  struct tagWND *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // r15d
  int v10; // r12d
  int v11; // r14d
  __int64 v12; // rcx
  unsigned __int16 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // r8d
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r10
  int v21; // r8d
  __int64 v22; // rcx
  __int64 *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // r8d
  __int64 v30[2]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v31; // [rsp+50h] [rbp-39h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+58h] [rbp-31h] BYREF
  ULONG_PTR v33[3]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v34[2]; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v35; // [rsp+90h] [rbp+7h] BYREF

  v3 = *a1;
  *(_OWORD *)v34 = 0LL;
  v6 = *(struct tagWND **)(*(_QWORD *)v3 + 16LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v30, *(_QWORD *)(*(_QWORD *)*a1 + 40LL));
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v33, (__int64)v6);
  v7 = v31;
  if ( !v31 )
    v7 = *(_QWORD *)v30[0];
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v7);
  GetClientRect((__int64)v6, (__int64)v34);
  if ( *(_DWORD *)(*(_QWORD *)v30[0] + 64LL) )
    goto LABEL_30;
  v35 = *(struct tagRECT *)v34;
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v34, 12));
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v34, 8));
  v11 = *(_DWORD *)(*(_QWORD *)v30[0] + 124LL);
  xxxSendMessage(v6, 0x1E2u);
  v12 = v31;
  if ( !v31 )
    v12 = *(_QWORD *)v30[0];
  if ( !MNIspItemValid(v12, (__int64)a2) )
    goto LABEL_25;
  a3 &= ~4u;
  if ( ((*(_BYTE *)(*(_QWORD *)v30[0] + 124LL) ^ (unsigned __int8)v11) & 3) != 0 )
    goto LABEL_25;
  LODWORD(v34[1]) = v13;
  if ( !a2 )
    goto LABEL_30;
  if ( v13 != v10 )
  {
LABEL_25:
    v23 = 0LL;
LABEL_26:
    xxxInvalidateRect(v6, (__int64)v23, 1);
    goto LABEL_27;
  }
  HIDWORD(v34[1]) = *(_DWORD *)(*(_QWORD *)v30[0] + 68LL);
  if ( (*(_DWORD *)(*(_QWORD *)v30[0] + 124LL) & 3) != 0 )
  {
    if ( SHIDWORD(v34[1]) <= v9 )
    {
      v14 = v31;
      if ( !v31 )
        v14 = *(_QWORD *)v30[0];
      v15 = MNGetpItemFromIndex(v14, *(_DWORD *)(v14 + 116));
      v17 = v16 - *(_DWORD *)(*(_QWORD *)v15 + 68LL);
      HIDWORD(v34[0]) = v17;
      goto LABEL_36;
    }
    GetClientRect((__int64)v6, (__int64)&v35);
  }
  if ( v31 )
    v18 = v31;
  else
    v18 = *(_QWORD *)v30[0];
  v19 = MNGetpItemFromIndex(v18, *(_DWORD *)(v18 + 116));
  v35.top = v21 - *(_DWORD *)(*(_QWORD *)v19 + 68LL);
  HIDWORD(v34[0]) = v35.top;
  if ( v35.top >= 0 )
  {
    if ( v35.top < *(_DWORD *)(*(_QWORD *)v30[0] + 68LL) )
    {
      xxxScrollWindowEx(v6, 0LL, HIDWORD(v34[1]) - v9, &v35, (struct tagRECT *)v34, 0LL, 0LL, 6);
      if ( v31 )
        v22 = v31;
      else
        v22 = *(_QWORD *)v30[0];
      if ( !MNIspItemValid(v22, (__int64)a2) )
        goto LABEL_25;
      goto LABEL_31;
    }
LABEL_30:
    v20 = v31;
  }
LABEL_31:
  if ( (a3 & 2) != 0 )
    goto LABEL_29;
  if ( !a2 )
    goto LABEL_25;
  if ( !v20 )
    v20 = *(_QWORD *)v30[0];
  v27 = *(_QWORD *)MNGetpItemFromIndex(v20, *(_DWORD *)(v20 + 116));
  v28 = *a2;
  v17 = v29 - *(_DWORD *)(v27 + 68);
  HIDWORD(v34[0]) = v17;
  HIDWORD(v34[1]) = v17 + *(_DWORD *)(v28 + 76);
LABEL_36:
  if ( v17 >= 0 && SHIDWORD(v34[0]) < *(_DWORD *)(*(_QWORD *)v30[0] + 68LL) )
  {
    v23 = v34;
    goto LABEL_26;
  }
LABEL_27:
  if ( (a3 & 4) != 0 )
    xxxSetWindowPos(v6, 0LL, 0LL, 0LL, 0, 0, 567);
LABEL_29:
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v8);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v33, v24);
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v30, v25);
}
