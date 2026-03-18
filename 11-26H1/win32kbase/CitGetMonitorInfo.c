/*
 * XREFs of CitGetMonitorInfo @ 0x140156F90
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x140087A68 (DrvGetCurrentDpiInfoFromHDev.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

char __fastcall CitGetMonitorInfo(__int64 a1, __int64 a2)
{
  int CurrentDpiInfoFromHDev; // eax
  int v5; // r8d
  char v6; // si
  int v7; // ecx
  int v8; // edx
  __int64 v9; // rax
  char v10; // si
  unsigned __int16 v11; // cx
  __int64 v12; // rcx
  _BYTE v14[96]; // [rsp+20h] [rbp-68h] BYREF

  LOBYTE(CurrentDpiInfoFromHDev) = (unsigned __int8)memset(v14, 0, sizeof(v14));
  if ( a1 )
  {
    v6 = 0;
    v7 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 40) + 36LL) - *(_WORD *)(*(_QWORD *)(a1 + 40) + 28LL));
    *(_WORD *)(a2 + 4) = v7;
    v8 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 40) + 40LL) - *(_WORD *)(*(_QWORD *)(a1 + 40) + 32LL));
    *(_WORD *)(a2 + 6) = v8;
    v9 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v8, v5) + 56968) + 104LL);
    while ( v9 && v9 != a1 )
    {
      v9 = *(_QWORD *)(v9 + 56);
      ++v6;
    }
    v10 = v6 & 7;
    *(_BYTE *)(a2 + 10) = v10;
    v11 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 60LL);
    if ( v11 > 0x60u )
    {
      if ( v11 > 0x78u )
      {
        if ( v11 > 0x90u )
        {
          if ( v11 <= 0xA8u )
          {
            LOBYTE(CurrentDpiInfoFromHDev) = 48;
          }
          else if ( v11 > 0xC0u )
          {
            if ( v11 > 0xF0u )
            {
              LOBYTE(CurrentDpiInfoFromHDev) = 112;
              if ( v11 <= 0x120u )
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
    }
    else
    {
      LOBYTE(CurrentDpiInfoFromHDev) = 0;
    }
    *(_BYTE *)(a2 + 10) = CurrentDpiInfoFromHDev | v10;
    v12 = *(_QWORD *)(a1 + 80);
    if ( v12 )
    {
      CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v12, (__int64)v14);
      if ( CurrentDpiInfoFromHDev >= 0 && (v14[92] & 4) != 0 )
        *(_BYTE *)(a2 + 10) |= 8u;
    }
  }
  return CurrentDpiInfoFromHDev;
}
