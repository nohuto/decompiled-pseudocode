/*
 * XREFs of CitGetMonitorInfo @ 0x140089270
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x14008A304 (DrvGetCurrentDpiInfoFromHDev.c)
 *     memset @ 0x140243000 (memset.c)
 */

char __fastcall CitGetMonitorInfo(__int64 a1, __int64 a2)
{
  int CurrentDpiInfoFromHDev; // eax
  char v5; // bl
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  char v9; // bl
  unsigned __int16 v10; // cx
  __int64 v11; // rcx
  _BYTE v13[96]; // [rsp+20h] [rbp-68h] BYREF

  LOBYTE(CurrentDpiInfoFromHDev) = (unsigned __int8)memset(v13, 0, sizeof(v13));
  if ( a1 )
  {
    v5 = 0;
    v6 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 40) + 36LL) - *(_WORD *)(*(_QWORD *)(a1 + 40) + 28LL));
    *(_WORD *)(a2 + 4) = v6;
    v7 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 40) + 40LL) - *(_WORD *)(*(_QWORD *)(a1 + 40) + 32LL));
    *(_WORD *)(a2 + 6) = v7;
    v8 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v7) + 56968) + 112LL);
    while ( v8 && v8 != a1 )
    {
      v8 = *(_QWORD *)(v8 + 56);
      ++v5;
    }
    v9 = v5 & 7;
    *(_BYTE *)(a2 + 10) = v9;
    v10 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 60LL);
    if ( v10 <= 0x60u )
    {
      LOBYTE(CurrentDpiInfoFromHDev) = 0;
    }
    else if ( v10 > 0x78u )
    {
      if ( v10 > 0x90u )
      {
        if ( v10 <= 0xA8u )
        {
          LOBYTE(CurrentDpiInfoFromHDev) = 48;
        }
        else if ( v10 > 0xC0u )
        {
          if ( v10 > 0xF0u )
          {
            LOBYTE(CurrentDpiInfoFromHDev) = 112;
            if ( v10 <= 0x120u )
              LOBYTE(CurrentDpiInfoFromHDev) = 96;
          }
          else
          {
            LOBYTE(CurrentDpiInfoFromHDev) = 80;
          }
        }
        else
        {
          LOBYTE(CurrentDpiInfoFromHDev) = 64;
        }
      }
      else
      {
        LOBYTE(CurrentDpiInfoFromHDev) = 32;
      }
    }
    else
    {
      LOBYTE(CurrentDpiInfoFromHDev) = 16;
    }
    *(_BYTE *)(a2 + 10) = CurrentDpiInfoFromHDev | v9;
    v11 = *(_QWORD *)(a1 + 80);
    if ( v11 )
    {
      CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v11, v13);
      if ( CurrentDpiInfoFromHDev >= 0 && (v13[92] & 4) != 0 )
        *(_BYTE *)(a2 + 10) |= 8u;
    }
  }
  return CurrentDpiInfoFromHDev;
}
