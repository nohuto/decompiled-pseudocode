/*
 * XREFs of ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1401554B0
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1400345C0 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x140155710 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     SpbCheckRect @ 0x1401566D4 (SpbCheckRect.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x140271D54 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 */

__int64 __fastcall BltValidInit(struct tagSMWP *a1, __int64 a2)
{
  __int64 *v2; // rdi
  int v3; // r14d
  int v4; // r12d
  int v5; // r15d
  __int64 UserSessionState; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct tagWND **v10; // r13
  __int16 v11; // si
  struct tagWND *v12; // rbx
  int v13; // ebp
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  HRGN EmptyRgn; // rax

  v2 = (__int64 *)*((_QWORD *)a1 + 5);
  v3 = *((_DWORD *)a1 + 7);
  v4 = 0;
  v5 = 0;
  while ( --v3 >= 0 )
  {
    v13 = *((_DWORD *)v2 + 8);
    v2[12] = 0LL;
    v14 = *v2;
    if ( *v2 )
    {
      W32GetCurrentThreadNonPaged(a1, a2);
      a1 = *(struct tagSMWP **)(W32GetUserSessionState(v16, v15) + 19872);
      if ( (unsigned __int64)(unsigned __int16)v14 < *((_QWORD *)a1 + 1)
        && ((UserSessionState = W32GetUserSessionState(a1, a2),
             v9 = *(_DWORD *)(W32GetUserSessionState(v8, v7) + 19896) * (unsigned int)(unsigned __int16)v14
                + *(_QWORD *)(UserSessionState + 19888),
             v10 = (struct tagWND **)HMPkheFromPhe(v9),
             v11 = WORD1(v14) & 0x7FFF,
             (WORD1(v14) & 0x7FFF) == *(_WORD *)(v9 + 26))
         || v11 == 0x7FFF
         || !v11 && PsGetCurrentProcessWow64Process(a1, a2))
        && (*(_BYTE *)(v9 + 25) & 1) == 0
        && *(_BYTE *)(v9 + 24) == 1
        && (v12 = *v10) != 0LL
        && (unsigned int)IsStillWindowC((HWND)v2[1]) )
      {
        a1 = *(struct tagSMWP **)(W32GetUserSessionState(a1, a2) + 56968);
        if ( *((_QWORD *)a1 + 5) && (v13 & 8) == 0 )
          SpbCheckRect(v12, (struct tagRECT *)(*((_QWORD *)v12 + 5) + 88LL), 1u);
        ++v4;
        if ( (v13 & 0x80000) != 0 || (v13 & 0x18E7) != 0x1807 )
          v5 = 1;
        if ( (v2[4] & 8) == 0 )
        {
          v19 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
          if ( !*(_DWORD *)(v19 + 2220) )
            PreventInterMonitorBlts((struct tagCVR *)v2);
          *((_DWORD *)v2 + 22) = 0;
          EmptyRgn = (HRGN)CreateEmptyRgn(v19, v18, v20, v21);
          v2[12] = (__int64)EmptyRgn;
          if ( !EmptyRgn || !(unsigned int)SwpCalcVisRgn(v12, EmptyRgn) )
            *((_DWORD *)v2 + 22) = 2;
        }
      }
      else
      {
        *v2 = 0LL;
        *((_DWORD *)v2 + 8) = 6159;
      }
    }
    v2 += 21;
  }
  return v4 & (unsigned int)-(v5 != 0);
}
