/*
 * XREFs of ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x140049970
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x140049010 (xxxSetWindowPosAndBand.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x140049730 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x140178774 (-xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 *     xxxSetWindowRgn @ 0x140179368 (xxxSetWindowRgn.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x140179780 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402ED554 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 *     xxxArrangeIconicWindows @ 0x1402FAF24 (xxxArrangeIconicWindows.c)
 * Callees:
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     HWInsertAfter @ 0x14012EC8C (HWInsertAfter.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14016320C (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     DestroySMWP @ 0x1401B8480 (DestroySMWP.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall _DeferWindowPos(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v13; // rdx
  unsigned int v16; // ebx
  __int64 UserSessionState; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rbx
  unsigned int v25; // r8d
  int v26; // edx
  __int16 v27; // ax
  int v28; // edx
  int v29; // r8d
  int v30; // edx
  int v31; // ecx
  unsigned int v32; // r8d
  __int64 v34; // rax
  unsigned int v35; // ecx
  __int128 v36; // xmm0
  int v37; // ecx
  unsigned __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v41[16]; // [rsp+28h] [rbp-28h] BYREF
  __int128 v42; // [rsp+38h] [rbp-18h] BYREF

  v10 = 1LL;
  v11 = *(unsigned int *)(a1 + 32);
  v13 = 0LL;
  if ( *(_DWORD *)(a1 + 28) + 1 > (int)v11 )
  {
    v16 = v11 + 4;
    if ( (int)v11 + 4 < (unsigned int)v11
      || v16 > 0xC30C30
      || ((UserSessionState = W32GetUserSessionState(v11, 0LL),
           v18 = 168LL * v16,
           v19 = 168LL * *(int *)(a1 + 32),
           v20 = *(_QWORD *)(a1 + 40),
           a1 != UserSessionState + 63240)
        ? (v21 = UserReAllocPoolWithQuota(v20, v19, v18, 2004054869LL))
        : (v21 = UserReAllocPool(v20, v19, v18, 2004054869LL)),
          v13 = 0LL,
          !v21) )
    {
      DestroySMWP(a1);
      return 0LL;
    }
    *(_QWORD *)(a1 + 40) = v21;
    *(_DWORD *)(a1 + 32) = v16;
  }
  v22 = *(int *)(a1 + 28);
  v23 = *(_QWORD *)(a1 + 40);
  v24 = 168 * v22;
  *(_DWORD *)(a1 + 28) = v22 + 1;
  *(_QWORD *)(168 * v22 + v23) = *(_QWORD *)a2;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 20LL) & 0x20) == 0 )
    v10 = HWInsertAfter(a3);
  *(_DWORD *)(v24 + v23 + 20) = a5;
  *(_DWORD *)(v24 + v23 + 24) = a6;
  *(_DWORD *)(v24 + v23 + 28) = a7;
  *(_QWORD *)(v24 + v23 + 8) = v10;
  *(_DWORD *)(v24 + v23 + 16) = a4;
  *(_DWORD *)(v24 + v23 + 32) = a8;
  v25 = *(_DWORD *)(v24 + v23 + 156) & 0xFFFFFD1F;
  *(_QWORD *)(v24 + v23 + 112) = v13;
  *(_QWORD *)(v24 + v23 + 120) = v13;
  *(_QWORD *)(v24 + v23 + 128) = v13;
  *(_QWORD *)(v24 + v23 + 136) = 0LL;
  *(_QWORD *)(v24 + v23 + 144) = 0LL;
  *(_DWORD *)(v24 + v23 + 156) = v25;
  if ( (a8 & 3) != 3 || (v26 = v25, (a8 & 4) == 0) && a3 == -1 )
  {
    v26 = v25 | 0x20;
    *(_QWORD *)(v24 + v23 + 128) = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 256LL);
  }
  *(_DWORD *)(v24 + v23 + 156) = v26 & 0xFFFFF2E0;
  *(_DWORD *)(v24 + v23 + 152) = a9;
  v27 = IsRectEmptyInl((const struct tagRECT *)(*(_QWORD *)(a2 + 40) + 88LL));
  *(_DWORD *)(v24 + v23 + 156) = v28 ^ ((unsigned __int16)v28 ^ (unsigned __int16)(v27 << 12)) & 0x1000;
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    v29 = *(_DWORD *)(v24 + v23 + 32);
    if ( (v29 & 0xC00000) != 0 )
    {
      v30 = *(_DWORD *)(v24 + v23 + 20);
      LODWORD(v42) = *(_DWORD *)(v24 + v23 + 16);
      DWORD2(v42) = *(_DWORD *)(v24 + v23 + 24) + v42;
      v31 = v30 + *(_DWORD *)(v24 + v23 + 28);
      DWORD1(v42) = v30;
      HIDWORD(v42) = v31;
      if ( (v29 & 0x800000) != 0 )
        v32 = 18;
      else
        v32 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 288LL);
      v34 = MonitorFromRect((__int32 *)&v42, 2LL, v32);
      v35 = *(_DWORD *)(v24 + v23 + 32);
      v40 = v34;
      if ( (v35 & 0x800000) != 0 )
      {
        PhysicalToLogicalDPIRect(&v42, &v42, *(unsigned int *)(*(_QWORD *)(a2 + 40) + 288LL), &v40);
        v34 = v40;
        v35 = *(_DWORD *)(v24 + v23 + 32) & 0xFF7FFFFF;
        *(_DWORD *)(v24 + v23 + 32) = v35;
      }
      if ( (v35 & 0x400000) != 0 )
      {
        v36 = (__int128)*WindowMargins::ExtendRect(
                           (WindowMargins *)v41,
                           (struct tagRECT *)a2,
                           (const struct tagWND *)&v42,
                           (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(v34 + 40) + 60LL),
                           v40);
        *(_DWORD *)(v24 + v23 + 32) &= ~0x400000u;
        v42 = v36;
      }
      v37 = v42;
      v38 = v42;
      *(_DWORD *)(v24 + v23 + 24) = DWORD2(v42) - v42;
      v38 >>= 32;
      v39 = HIDWORD(v42) - v38;
      *(_DWORD *)(v24 + v23 + 16) = v37;
      *(_DWORD *)(v24 + v23 + 28) = v39;
      *(_DWORD *)(v24 + v23 + 20) = v38;
    }
  }
  return a1;
}
