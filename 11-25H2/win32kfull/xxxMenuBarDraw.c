/*
 * XREFs of xxxMenuBarDraw @ 0x14020258C
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x14003EE4C (xxxDWP_DoNCActivate.c)
 *     xxxDrawWindowFrame @ 0x14025CE6C (xxxDrawWindowFrame.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetAppCompatFlags2 @ 0x140038130 (GetAppCompatFlags2.c)
 *     xxxMenuBarCompute @ 0x14004007C (xxxMenuBarCompute.c)
 *     MNIsFlatMenu @ 0x14004083C (MNIsFlatMenu.c)
 *     xxxMenuDraw @ 0x140043508 (xxxMenuDraw.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     GetCaptionHeight @ 0x140049968 (GetCaptionHeight.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GrePolyPatBlt @ 0x140055878 (GrePolyPatBlt.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1402EA738 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall xxxMenuBarDraw(_QWORD *a1, HDC a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rdi
  struct tagTHREADINFO *v14; // rax
  unsigned int v15; // r15d
  unsigned int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 UserSessionState; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  BOOL v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  struct tagMENU *v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rdx
  struct tagTHREADINFO *v38; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-29h] BYREF
  __int64 v41; // [rsp+40h] [rbp-21h]
  __int64 v42[2]; // [rsp+48h] [rbp-19h] BYREF
  struct tagMENU *v43; // [rsp+58h] [rbp-9h]
  _DWORD v44[4]; // [rsp+60h] [rbp-1h] BYREF
  __int64 v45; // [rsp+70h] [rbp+Fh]
  int v46; // [rsp+78h] [rbp+17h]
  unsigned int v47; // [rsp+7Ch] [rbp+1Bh]
  int v48; // [rsp+80h] [rbp+1Fh]
  int v49; // [rsp+84h] [rbp+23h]
  __int64 v50; // [rsp+88h] [rbp+27h]
  int v51; // [rsp+C8h] [rbp+67h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v42, (__int64)a2);
  v8 = a1[21];
  v51 = 0;
  v43 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v42, v8);
  if ( v43 || *(_QWORD *)v42[0] )
  {
    if ( (*(_BYTE *)(a1[5] + 16LL) & 0x40) != 0
      && *(_QWORD *)(a1[2] + 472LL) == *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18888)
      || (GetAppCompatFlags2(1024LL, v9) & 0x80u) != 0LL )
    {
      v12 = *(_QWORD *)v42[0];
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v42[0] + 40LL) + 40LL) &= ~0x10u;
    }
    else
    {
      v12 = *(_QWORD *)v42[0];
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v42[0] + 40LL) + 40LL) |= 0x10u;
    }
    v13 = (__int64)v43;
    if ( !v43 )
      v13 = *(_QWORD *)v42[0];
    v14 = PtiCurrent(v12, v9);
    Win32HM_LockIntoThread<0>((__int64)v14, v13, &BugCheckParameter3);
    *(_DWORD *)(*(_QWORD *)(v13 + 40) + 40LL) |= 0x200u;
    v15 = GetCaptionHeight((__int64)a1) + a4;
    v16 = *(_DWORD *)(a1[5] + 96LL) + -2 * a3 - *(_DWORD *)(a1[5] + 88LL);
    v17 = *(_QWORD *)v42[0];
    if ( a1 != *(_QWORD **)(*(_QWORD *)v42[0] + 80LL)
      || !*(_DWORD *)(*(_QWORD *)v42[0] + 64LL)
      || !*(_DWORD *)(*(_QWORD *)v42[0] + 68LL) )
    {
      xxxMenuBarCompute(
        (__int64)v42,
        (__int64)a1,
        v15,
        a3,
        *(_DWORD *)(a1[5] + 96LL) + -2 * a3 - *(_DWORD *)(a1[5] + 88LL));
    }
    v18 = *(_QWORD *)v42[0];
    if ( *(_DWORD *)(*(_QWORD *)v42[0] + 64LL) > v16
      || (v18 = v15 + *(_DWORD *)(*(_QWORD *)v42[0] + 68LL),
          v17 = (unsigned int)(*(_DWORD *)(a1[5] + 100LL) - *(_DWORD *)(a1[5] + 92LL) - a4),
          (int)v18 > (int)v17) )
    {
      UserSessionState = W32GetUserSessionState(v18, v17);
      GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
      v51 = 1;
      GreIntersectVisRect(
        a2,
        (unsigned int)(*(_DWORD *)(a1[5] + 88LL) + a3),
        *(unsigned int *)(a1[5] + 92LL),
        a3 + *(_DWORD *)(a1[5] + 88LL) + v16,
        *(_DWORD *)(a1[5] + 100LL) - a4);
      v22 = W32GetUserSessionState(v21, v20);
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v22 + 56968) + 48LL));
    }
    v23 = MNIsFlatMenu(v18, v17);
    v44[0] = a3;
    v44[1] = v15;
    v44[2] = *(_DWORD *)(*(_QWORD *)v42[0] + 64LL);
    v44[3] = *(_DWORD *)(*(_QWORD *)v42[0] + 68LL);
    v24 = *(_QWORD *)v42[0];
    v25 = *(_QWORD *)(*(_QWORD *)v42[0] + 40LL);
    if ( *(_QWORD *)(v25 + 24) )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v42[0] + 40LL) + 24LL);
    }
    else if ( v23 )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v25, v24) + 19872) + 4936LL);
    }
    else
    {
      v26 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v25, v24) + 19872) + 4728LL);
    }
    v45 = v26;
    v46 = a3;
    v27 = *(_QWORD *)v42[0];
    v49 = 1;
    v47 = v15 + *(_DWORD *)(v27 + 68);
    v28 = a1[5];
    v48 = *(_DWORD *)(*(_QWORD *)v42[0] + 64LL);
    if ( (*(_BYTE *)(v28 + 25) & 3) == 0 || (*(_BYTE *)(v28 + 20) & 8) != 0 )
      v29 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v28, v24) + 19872) + 4744LL);
    else
      v29 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v28, v24) + 19872) + 4816LL);
    v50 = v29;
    GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v44, 2u);
    v31 = a1[5];
    if ( (*(_BYTE *)(v31 + 25) & 3) == 0 || (*(_BYTE *)(v31 + 20) & 8) != 0 )
      v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v31, v30) + 19872) + 4744LL);
    else
      v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v31, v30) + 19872) + 4816LL);
    v33 = GreSelectBrush(a2, v32);
    v34 = v43;
    v35 = v33;
    if ( !v43 )
      v34 = *(struct tagMENU **)v42[0];
    xxxMenuDraw(a2, v34, 0LL);
    GreSelectBrush(a2, v35);
    if ( v51 )
      RecalcDCVisRgn(a2);
    v11 = *(_DWORD *)(*(_QWORD *)v42[0] + 68LL) + 1;
    v36 = v41;
    v37 = *(_QWORD *)(v41 + 40);
    *(_DWORD *)(v37 + 40) &= ~0x200u;
    v38 = PtiCurrent(v36, v37);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v38, &BugCheckParameter3);
  }
  else
  {
    v11 = 1;
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v42, v9);
  return v11;
}
