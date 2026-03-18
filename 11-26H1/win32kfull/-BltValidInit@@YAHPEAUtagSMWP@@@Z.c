/*
 * XREFs of ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x14001AA44
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14001996C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x14001AC48 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14004289C (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1402995D0 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 */

__int64 __fastcall BltValidInit(struct tagSMWP *a1)
{
  __int64 *v1; // rdi
  int v2; // ebp
  int v3; // r12d
  int v4; // r15d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  struct tagWND **v11; // r13
  __int16 v12; // si
  struct tagWND *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r14d
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  HRGN EmptyRgn; // rax

  v1 = (__int64 *)*((_QWORD *)a1 + 5);
  v2 = *((_DWORD *)a1 + 7);
  v3 = 0;
  v4 = 0;
  while ( --v2 >= 0 )
  {
    v16 = *((_DWORD *)v1 + 8);
    v1[12] = 0LL;
    v17 = *v1;
    if ( *v1 )
    {
      PtiCurrent();
      v6 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 19904);
      if ( (unsigned __int64)(unsigned __int16)v17 < *(_QWORD *)(v6 + 8)
        && ((UserSessionState = W32GetUserSessionState(v6, v5),
             v10 = *(_DWORD *)(W32GetUserSessionState(v9, v8) + 19928) * (unsigned int)(unsigned __int16)v17
                 + *(_QWORD *)(UserSessionState + 19920),
             v11 = (struct tagWND **)HMPkheFromPhe(v10),
             v12 = WORD1(v17) & 0x7FFF,
             (WORD1(v17) & 0x7FFF) == *(_WORD *)(v10 + 26))
         || v12 == 0x7FFF
         || !v12 && PsGetCurrentProcessWow64Process())
        && (*(_BYTE *)(v10 + 25) & 1) == 0
        && *(_BYTE *)(v10 + 24) == 1
        && (v13 = *v11) != 0LL
        && (unsigned int)IsStillWindowC((HWND)v1[1]) )
      {
        ++v3;
        if ( (v16 & 0x80000) != 0 || (v16 & 0x18E7) != 0x1807 )
          v4 = 1;
        if ( (v1[4] & 8) == 0 )
        {
          if ( !*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v15, v14) + 19904) + 2220LL) )
            PreventInterMonitorBlts((struct tagCVR *)v1);
          *((_DWORD *)v1 + 22) = 0;
          EmptyRgn = (HRGN)CreateEmptyRgn();
          v1[12] = (__int64)EmptyRgn;
          if ( !EmptyRgn || !(unsigned int)SwpCalcVisRgn(v13, EmptyRgn) )
            *((_DWORD *)v1 + 22) = 2;
        }
      }
      else
      {
        *v1 = 0LL;
        *((_DWORD *)v1 + 8) = 6159;
      }
    }
    v1 += 21;
  }
  return v3 & (unsigned int)-(v4 != 0);
}
