/*
 * XREFs of ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x14004EA98
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxSetWindowRgn @ 0x14004E0F4 (xxxSetWindowRgn.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1400659C0 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x14015D154 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x140236EBC (xxxSetWindowPosAndBand.c)
 *     ?xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x1402AA50C (-xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402DA4C0 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 *     xxxArrangeIconicWindows @ 0x1402EB4A4 (xxxArrangeIconicWindows.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     DestroySMWP @ 0x1400C8060 (DestroySMWP.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014DD7C (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     HWInsertAfter @ 0x1401A436C (HWInsertAfter.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall _DeferWindowPos(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __int64 v10; // r15
  __int64 v11; // rcx
  unsigned int v15; // ebx
  __int64 UserSessionState; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  int v23; // r8d
  unsigned int v24; // r8d
  int v25; // edx
  __int16 v26; // ax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // r8d
  int v31; // edx
  int v32; // ecx
  __int64 v33; // r8
  __int64 v35; // rax
  unsigned int v36; // ecx
  __int128 v37; // xmm0
  int v38; // ecx
  unsigned __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v42[16]; // [rsp+28h] [rbp-28h] BYREF
  __int128 v43; // [rsp+38h] [rbp-18h] BYREF

  v10 = 1LL;
  v11 = *(unsigned int *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 28) + 1 > (int)v11 )
  {
    v15 = v11 + 4;
    if ( (int)v11 + 4 < (unsigned int)v11
      || v15 > 0xC30C30
      || ((UserSessionState = W32GetUserSessionState(v11, a2),
           v17 = 168LL * v15,
           v18 = 168LL * *(int *)(a1 + 32),
           v19 = *(_QWORD *)(a1 + 40),
           a1 != UserSessionState + 63256)
        ? (v20 = UserReAllocPoolWithQuota(v19, v18, v17, 2004054869LL))
        : (v20 = UserReAllocPool(v19, v18, v17, 2004054869LL)),
          !v20) )
    {
      DestroySMWP(a1);
      return 0LL;
    }
    *(_QWORD *)(a1 + 40) = v20;
    *(_DWORD *)(a1 + 32) = v15;
  }
  v21 = *(int *)(a1 + 28);
  v22 = *(_QWORD *)(a1 + 40) + 168 * v21;
  *(_DWORD *)(a1 + 28) = v21 + 1;
  *(_QWORD *)v22 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 20LL) & 0x20) == 0 )
    v10 = HWInsertAfter(a3);
  *(_DWORD *)(v22 + 20) = a5;
  *(_DWORD *)(v22 + 24) = a6;
  *(_DWORD *)(v22 + 28) = a7;
  *(_QWORD *)(v22 + 8) = v10;
  *(_DWORD *)(v22 + 16) = a4;
  *(_DWORD *)(v22 + 32) = a8;
  v23 = *(_DWORD *)(v22 + 156);
  *(_QWORD *)(v22 + 112) = 0LL;
  *(_QWORD *)(v22 + 120) = 0LL;
  v24 = v23 & 0xFFFFFD1F;
  *(_QWORD *)(v22 + 128) = 0LL;
  *(_DWORD *)(v22 + 140) = 0;
  *(_DWORD *)(v22 + 136) = 0;
  *(_DWORD *)(v22 + 148) = 0;
  *(_DWORD *)(v22 + 144) = 0;
  *(_DWORD *)(v22 + 156) = v24;
  if ( (a8 & 3) != 3 || (v25 = v24, (a8 & 4) == 0) && a3 == -1 )
  {
    v25 = v24 | 0x20;
    *(_QWORD *)(v22 + 128) = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 256LL);
  }
  *(_DWORD *)(v22 + 156) = v25 & 0xFFFFF2E0;
  *(_DWORD *)(v22 + 152) = a9;
  v26 = IsRectEmptyInl((const struct tagRECT *)(*(_QWORD *)(a2 + 40) + 88LL));
  *(_DWORD *)(v22 + 156) = v27 ^ ((unsigned __int16)v27 ^ (unsigned __int16)(v26 << 12)) & 0x1000;
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v28, v27, v29) )
  {
    v30 = *(_DWORD *)(v22 + 32);
    if ( (v30 & 0xC00000) != 0 )
    {
      v31 = *(_DWORD *)(v22 + 20);
      LODWORD(v43) = *(_DWORD *)(v22 + 16);
      DWORD2(v43) = *(_DWORD *)(v22 + 24) + v43;
      v32 = v31 + *(_DWORD *)(v22 + 28);
      DWORD1(v43) = v31;
      HIDWORD(v43) = v32;
      if ( (v30 & 0x800000) != 0 )
        v33 = 18LL;
      else
        v33 = *(unsigned int *)(*(_QWORD *)(a2 + 40) + 288LL);
      v35 = MonitorFromRect(&v43, 2LL, v33);
      v36 = *(_DWORD *)(v22 + 32);
      v41 = v35;
      if ( (v36 & 0x800000) != 0 )
      {
        PhysicalToLogicalDPIRect(&v43, &v43, *(unsigned int *)(*(_QWORD *)(a2 + 40) + 288LL), &v41);
        v35 = v41;
        v36 = *(_DWORD *)(v22 + 32) & 0xFF7FFFFF;
        *(_DWORD *)(v22 + 32) = v36;
      }
      if ( (v36 & 0x400000) != 0 )
      {
        v37 = (__int128)*WindowMargins::ExtendRect(
                           (WindowMargins *)v42,
                           (struct tagRECT *)a2,
                           (const struct tagWND *)&v43,
                           (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(v35 + 40) + 60LL),
                           v41);
        *(_DWORD *)(v22 + 32) &= ~0x400000u;
        v43 = v37;
      }
      v38 = v43;
      v39 = v43;
      *(_DWORD *)(v22 + 24) = DWORD2(v43) - v43;
      v39 >>= 32;
      v40 = HIDWORD(v43) - v39;
      *(_DWORD *)(v22 + 16) = v38;
      *(_DWORD *)(v22 + 28) = v40;
      *(_DWORD *)(v22 + 20) = v39;
    }
  }
  return a1;
}
