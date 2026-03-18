/*
 * XREFs of ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x14003CB60
 * Callers:
 *     NtGdiGetDeviceCaps @ 0x14003C450 (NtGdiGetDeviceCaps.c)
 *     GreGetDeviceCaps @ 0x14003C780 (GreGetDeviceCaps.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140028330 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     EngMulDiv @ 0x140081830 (EngMulDiv.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsGetColorManagementCapsSupported @ 0x140137438 (IsGetColorManagementCapsSupported.c)
 *     ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x140137470 (-cFonts@PDEVOBJ@@QEAAKXZ.c)
 *     GetColorManagementCapsWrap @ 0x1401374D8 (GetColorManagementCapsWrap.c)
 */

__int64 __fastcall GreGetDeviceCapsInternal(struct PDEVOBJ *a1, int a2)
{
  unsigned int *v2; // rbx
  unsigned int v5; // edi
  unsigned int v6; // ebp
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v9; // rcx
  char v10; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rcx
  int v13; // eax
  int v15; // ecx
  __int64 v16; // rcx
  struct _ERESOURCE *v17; // rbx
  int v18; // r8d
  __int64 v19; // rax
  int v20; // eax
  int v21; // ecx
  int v22; // edi
  int v23; // eax

  v2 = (unsigned int *)(*(_QWORD *)a1 + 2120LL);
  v5 = 0;
  if ( a2 > 36 )
  {
    if ( a2 > 110 )
    {
      switch ( a2 )
      {
        case 'o':
          return *(unsigned int *)(*(_QWORD *)a1 + 2220LL);
        case 'p':
          return *(unsigned int *)(*(_QWORD *)a1 + 2208LL);
        case 'q':
          return *(unsigned int *)(*(_QWORD *)a1 + 2212LL);
        case 't':
          return *(unsigned int *)(*(_QWORD *)a1 + 2368LL);
        case 'u':
          return *(unsigned int *)(*(_QWORD *)a1 + 2140LL);
        case 'v':
          return *(unsigned int *)(*(_QWORD *)a1 + 2136LL);
        case 'w':
          return *(unsigned int *)(*(_QWORD *)a1 + 2372LL);
        case 'x':
          return *(unsigned int *)(*(_QWORD *)a1 + 2424LL);
      }
      if ( a2 == 121 && (int)IsGetColorManagementCapsSupported() >= 0 )
      {
        GetColorManagementCapsWrap(*(_QWORD *)a1);
        return v5;
      }
    }
    else
    {
      if ( a2 == 110 )
        return *(unsigned int *)(*(_QWORD *)a1 + 2216LL);
      if ( a2 == 90 )
      {
        v5 = *(_DWORD *)(*(_QWORD *)a1 + 2164LL);
LABEL_21:
        if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1) == 0 )
          return v5;
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
        v10 = CurrentThreadDpiAwarenessContext;
        v6 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
        if ( !v6 )
        {
          v6 = v2[11];
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
          if ( CurrentProcessWin32Process )
          {
            if ( *(_QWORD *)CurrentProcessWin32Process && *(_WORD *)(CurrentProcessWin32Process + 272) )
              v6 = *(unsigned __int16 *)(CurrentProcessWin32Process + 272);
          }
        }
        if ( ((a2 - 88) & 0xFFFFFFFD) == 0 )
          return v6;
        if ( (v10 & 0xF) == 2 )
          return v5;
        v12 = *(_QWORD *)a1;
        v13 = *(_DWORD *)(*(_QWORD *)a1 + 2448LL);
        if ( !v13
          && ((*(_DWORD *)(v12 + 40) & 0x20000) == 0
           || (v16 = *(_QWORD *)(*(_QWORD *)(v12 + 1784) + 40LL)) == 0
           || (*(_DWORD *)(v16 + 40) & 1) == 0
           || (v13 = *(_DWORD *)(v16 + 2448)) == 0) )
        {
          v13 = 100;
        }
        return (unsigned int)EngMulDiv(v5, v6, (96 * v13 + 50) / 0x64u);
      }
      if ( a2 > 90 )
      {
        switch ( a2 )
        {
          case '^':
            v17 = **(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
            GreAcquireSemaphoreInternal(v17);
            GrepAcquireLockValidate<19>();
            v19 = *(_QWORD *)(*(_QWORD *)a1 + 2568LL);
            if ( v19 )
            {
              if ( v19 != -4 )
              {
                v20 = *(_DWORD *)(v19 + 160);
                v5 = (v20 & 8) << 11;
                if ( (v20 & 0x2000000) != 0 )
                  v5 |= 0x8000u;
              }
            }
            if ( v17 )
              GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
                (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
                (__int64)v17,
                v18);
            return v5;
          case 'h':
            return *(unsigned int *)(*(_QWORD *)a1 + 2224LL);
          case 'j':
            return 20;
          case 'l':
            return (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 2172LL)
                                + *(_DWORD *)(*(_QWORD *)a1 + 2176LL)
                                + *(_DWORD *)(*(_QWORD *)a1 + 2180LL));
        }
      }
      else
      {
        switch ( a2 )
        {
          case '*':
            return *(unsigned int *)(*(_QWORD *)a1 + 2188LL);
          case '(':
            return *(unsigned int *)(*(_QWORD *)a1 + 2184LL);
          case '&':
            return *(unsigned int *)(*(_QWORD *)a1 + 2156LL);
          case ',':
            return *(unsigned int *)(*(_QWORD *)a1 + 2192LL);
          case 'X':
            v5 = *(_DWORD *)(*(_QWORD *)a1 + 2160LL);
            goto LABEL_21;
        }
      }
    }
  }
  else
  {
    if ( a2 == 36 )
      return 1;
    if ( a2 > 16 )
    {
      switch ( a2 )
      {
        case 18:
          v23 = *(_DWORD *)(*(_QWORD *)a1 + 2152LL);
          if ( v23 != -1 )
            return (unsigned int)(5 * v23);
          return (unsigned int)-1;
        case 20:
          return 0;
        case 24:
          return *(unsigned int *)(*(_QWORD *)a1 + 2152LL);
        case 22:
          return PDEVOBJ::cFonts(a1);
        case 26:
          return 0;
        case 28:
          return 511;
        case 30:
          return 254;
        case 32:
          return 255;
        case 34:
          v21 = *(_DWORD *)(*(_QWORD *)a1 + 2168LL);
          v22 = v2[12] | 0x4000;
          if ( !v2[1] )
            v22 = v21;
          return v22 | 0x1800u;
      }
      goto LABEL_20;
    }
    if ( a2 == 16 )
      return (unsigned int)-1;
    if ( a2 > 6 )
    {
      switch ( a2 )
      {
        case 8:
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 2136LL);
          goto LABEL_21;
        case 10:
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 2140LL);
          goto LABEL_21;
        case 12:
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 2144LL);
          if ( v5 == 15 )
            return 16;
          return v5;
        case 14:
          return *(unsigned int *)(*(_QWORD *)a1 + 2148LL);
      }
      goto LABEL_20;
    }
    switch ( a2 )
    {
      case 6:
        v15 = *(_DWORD *)(*(_QWORD *)a1 + 2132LL);
        return (v15 + 500) / 0x3E8u;
      case -2147483648:
        return *(unsigned int *)(*(_QWORD *)a1 + 2128LL);
      case -2147483646:
        return *(unsigned int *)(*(_QWORD *)a1 + 2132LL);
      case 0:
        return *v2;
      case 2:
        return *(unsigned int *)(*(_QWORD *)a1 + 2124LL);
      case 4:
        v15 = *(_DWORD *)(*(_QWORD *)a1 + 2128LL);
        return (v15 + 500) / 0x3E8u;
    }
  }
LABEL_20:
  v5 = 0;
  if ( a2 == 10 || a2 == 8 || a2 == 88 || a2 == 90 )
    goto LABEL_21;
  return v5;
}
