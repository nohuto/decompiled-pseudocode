/*
 * XREFs of ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x140179780
 * Callers:
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x140179668 (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 *     NtUserDeferWindowPosAndBand @ 0x1402B0DD0 (NtUserDeferWindowPosAndBand.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x140049970 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     IsPseudoPwnd @ 0x14012E280 (IsPseudoPwnd.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     IsValidBand @ 0x140208510 (IsValidBand.c)
 *     ?IsValidBandForProcess@@YA_NPEBUtagPROCESSINFO@@W4ZBID@@PEAUtagWND@@@Z @ 0x140209288 (-IsValidBandForProcess@@YA_NPEBUtagPROCESSINFO@@W4ZBID@@PEAUtagWND@@@Z.c)
 *     Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline @ 0x140287538 (Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall _DeferWindowPosAndBand(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        char a10)
{
  int v10; // r15d
  struct tagTHREADINFO *v15; // rbx
  int v16; // ebp
  int v17; // edi
  int v18; // edx
  __int64 v19; // rdx
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // esi
  int v25; // ecx
  int v27; // ebx
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // edx

  v10 = 1;
  if ( (a10 & 1) != 0 )
  {
    v15 = PtiCurrent(a1);
    v16 = a9;
    v17 = 0;
    if ( IsPseudoPwnd((__int64)a3)
      || (v18 = *(_DWORD *)(a3[5] + 236LL), v18 == a9)
      || *(_DWORD *)(*(_QWORD *)(a2 + 40) + 236LL) == v18 )
    {
      if ( (a10 & 2) != 0 || (unsigned int)IAMThreadAccessGranted(v15) )
      {
        if ( !(unsigned int)IsValidBand(a9) )
          goto LABEL_34;
        if ( (unsigned __int8)IsValidBandForProcess(*((_QWORD *)v15 + 57), a9, 0LL)
          && a9 != 15
          && *(_DWORD *)(*(_QWORD *)(a2 + 40) + 236LL) != 15 )
        {
          if ( *(_QWORD *)(a2 + 104) == GetDesktopWindow(a2) && *(char *)(v19 + 20) >= 0 )
          {
            if ( (unsigned __int64)a3 < 2 )
              goto LABEL_25;
            if ( a3 != (_QWORD *)-2LL && a3 != (_QWORD *)-1LL )
            {
              if ( *(_DWORD *)(a3[5] + 236LL) != a9 )
              {
                v20 = *(_DWORD *)(a1 + 28) - 1;
                v21 = v20;
                v22 = 168LL * v20;
                while ( v21 >= 0 )
                {
                  v23 = *(_QWORD *)(a1 + 40);
                  if ( *(_QWORD *)(v22 + v23) == *a3 )
                  {
                    if ( *(_DWORD *)(168LL * v20 + v23 + 152) != a9 )
                      goto LABEL_34;
                    break;
                  }
                  --v20;
                  --v21;
                  v22 -= 168LL;
                }
                if ( v20 == -1 )
                  goto LABEL_34;
              }
              goto LABEL_25;
            }
            if ( a9 == 1 )
            {
LABEL_25:
              v24 = a8 & 0xFFF9FBFF | 0x60000;
              goto LABEL_29;
            }
          }
LABEL_34:
          v25 = 87;
          goto LABEL_27;
        }
      }
    }
    v25 = 5;
LABEL_27:
    UserSetLastError(v25);
    return 0LL;
  }
  v17 = 0;
  v10 = 0;
  PtiCurrent(a1);
  v24 = a8;
  v16 = 0;
LABEL_29:
  v27 = 1023;
  if ( !(unsigned int)Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline() )
    v27 = 66559;
  v28 = v27 | 0x60000;
  if ( !v10 )
    v28 = v27;
  if ( (~v28 & v24) != 0 )
    goto LABEL_34;
  if ( (v24 & 2) != 0 )
  {
    v29 = a5;
  }
  else
  {
    if ( a4 <= 0x7FFF )
    {
      if ( a4 < -32768 )
        a4 = -32768;
    }
    else
    {
      a4 = 0x7FFF;
    }
    v29 = a5;
    if ( a5 <= 0x7FFF )
    {
      if ( a5 < -32768 )
        v29 = -32768;
    }
    else
    {
      v29 = 0x7FFF;
    }
  }
  v30 = a6;
  if ( (v24 & 1) != 0 )
  {
    v17 = a7;
  }
  else
  {
    if ( a6 >= 0 )
    {
      if ( a6 > 0x7FFF )
        v30 = 0x7FFF;
    }
    else
    {
      v30 = 0;
    }
    v31 = a7;
    if ( a7 >= 0 )
    {
      if ( a7 > 0x7FFF )
        v31 = 0x7FFF;
      v17 = v31;
    }
  }
  return _DeferWindowPos(a1, a2, (__int64)a3, a4, v29, v30, v17, v24, v16);
}
