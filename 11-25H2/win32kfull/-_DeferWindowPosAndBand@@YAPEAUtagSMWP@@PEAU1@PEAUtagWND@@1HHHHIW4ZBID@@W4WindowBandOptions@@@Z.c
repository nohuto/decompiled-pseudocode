/*
 * XREFs of ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x14015D154
 * Callers:
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x14015D040 (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 *     NtUserDeferWindowPosAndBand @ 0x1402487D0 (NtUserDeferWindowPosAndBand.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x14004EA98 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     IsValidBand @ 0x1401D9520 (IsValidBand.c)
 *     Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline @ 0x1402721FC (Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsValidBandForProcess@@YA_NPEBUtagPROCESSINFO@@W4ZBID@@PEAUtagWND@@@Z @ 0x1402B5D08 (-IsValidBandForProcess@@YA_NPEBUtagPROCESSINFO@@W4ZBID@@PEAUtagWND@@@Z.c)
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
  int v14; // ebp
  struct tagTHREADINFO *v15; // rsi
  int v16; // ecx
  int v17; // edi
  int v18; // ebx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // edx
  __int64 v22; // r8
  __int64 v23; // rcx
  _QWORD *v24; // rax
  unsigned int v25; // esi
  int v26; // ecx
  int v28; // r14d
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // edx

  if ( (a10 & 1) != 0 )
  {
    v14 = a9;
    v15 = PtiCurrent(a1, a2);
    if ( (unsigned __int64)a3 - 2 > 0xFFFFFFFFFFFFFFFBuLL
      || (v16 = *(_DWORD *)(a3[5] + 236LL), v16 == a9)
      || *(_DWORD *)(*(_QWORD *)(a2 + 40) + 236LL) == v16 )
    {
      v17 = 1;
      v18 = 0;
      if ( (a10 & 2) != 0 || (LOBYTE(v19) = IAMThreadAccessGranted(v15), v19) )
      {
        if ( !(unsigned int)IsValidBand(a9) )
          goto LABEL_34;
        if ( (unsigned __int8)IsValidBandForProcess(*((_QWORD *)v15 + 58), a9, 0LL)
          && a9 != 15
          && *(_DWORD *)(*(_QWORD *)(a2 + 40) + 236LL) != 15 )
        {
          if ( *(_QWORD *)(a2 + 104) != GetDesktopWindow(a2) || *(char *)(v20 + 20) < 0 )
            goto LABEL_34;
          if ( (unsigned __int64)a3 >= 2 )
          {
            if ( (unsigned __int64)a3 <= 0xFFFFFFFFFFFFFFFDuLL )
            {
              if ( *(_DWORD *)(a3[5] + 236LL) == a9 )
                goto LABEL_25;
              v21 = *(_DWORD *)(a1 + 28) - 1;
              if ( v21 >= 0 )
              {
                v22 = *(_QWORD *)(a1 + 40);
                v23 = v21;
                v24 = (_QWORD *)(v22 + 168LL * v21);
                while ( *v24 != *a3 )
                {
                  --v21;
                  v24 -= 21;
                  if ( --v23 < 0 )
                    goto LABEL_22;
                }
                if ( *(_DWORD *)(168LL * v21 + v22 + 152) != a9 )
                  goto LABEL_34;
              }
LABEL_22:
              if ( v21 != -1 )
                goto LABEL_25;
LABEL_34:
              v26 = 87;
              goto LABEL_27;
            }
            if ( a9 != 1 )
              goto LABEL_34;
          }
LABEL_25:
          v25 = a8 & 0xFFF9FBFF | 0x60000;
          goto LABEL_29;
        }
      }
    }
    v26 = 5;
LABEL_27:
    UserSetLastError(v26);
    return 0LL;
  }
  v18 = 0;
  v17 = 0;
  PtiCurrent(a1, a2);
  v25 = a8;
  v14 = 0;
LABEL_29:
  v28 = 1023;
  if ( !(unsigned int)Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline() )
    v28 = 66559;
  v29 = v28 | 0x60000;
  if ( !v17 )
    v29 = v28;
  if ( (~v29 & v25) != 0 )
    goto LABEL_34;
  if ( (v25 & 2) != 0 )
  {
    v30 = a5;
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
    v30 = a5;
    if ( a5 <= 0x7FFF )
    {
      if ( a5 < -32768 )
        v30 = -32768;
    }
    else
    {
      v30 = 0x7FFF;
    }
  }
  v31 = a6;
  if ( (v25 & 1) != 0 )
  {
    v18 = a7;
  }
  else
  {
    if ( a6 >= 0 )
    {
      if ( a6 > 0x7FFF )
        v31 = 0x7FFF;
    }
    else
    {
      v31 = 0;
    }
    v32 = a7;
    if ( a7 >= 0 )
    {
      if ( a7 > 0x7FFF )
        v32 = 0x7FFF;
      v18 = v32;
    }
  }
  return _DeferWindowPos(a1, a2, (__int64)a3, a4, v30, v31, v18, v25, v14);
}
