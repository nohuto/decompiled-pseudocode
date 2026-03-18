/*
 * XREFs of CitGetWindowInfo @ 0x1401DEF10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     GetNormalRect @ 0x1401A86B0 (GetNormalRect.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall CitGetWindowInfo(__int64 a1, _WORD *a2)
{
  __int64 result; // rax
  const struct tagWND *v4; // rdi
  __int64 v5; // rcx
  __int16 v6; // bx
  __int64 v7; // rax
  char v8; // cl
  __int16 v9; // si
  __int16 v10; // dx
  __int16 v11; // dx
  unsigned __int16 v12; // ax
  __int16 v13; // dx
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF

  result = GetTopLevelWindow(a1);
  v4 = (const struct tagWND *)result;
  if ( result )
  {
    v5 = *(_QWORD *)(result + 40);
    v6 = 32;
    v14 = 0LL;
    v15 = *(_OWORD *)(v5 + 88);
    if ( (*(_BYTE *)(*(_QWORD *)(result + 40) + 31LL) & 0x20) != 0
      && (unsigned int)GetNormalRect((const struct tagWND *)result, &v14) )
    {
      v15 = v14;
    }
    LogicalToPhysicalDPIRect(&v15, &v15, *(unsigned int *)(*((_QWORD *)v4 + 5) + 288LL), 0LL);
    *a2 = WORD4(v15) - v15;
    a2[1] = WORD6(v15) - WORD2(v15);
    v7 = MonitorFromRect((INT *)&v15, 1u, 0x12u);
    if ( v7 )
      CitGetMonitorInfo(v7, a2);
    v8 = *(_BYTE *)(*((_QWORD *)v4 + 5) + 31LL);
    if ( (v8 & 0x20) != 0 )
    {
      v9 = 1;
    }
    else if ( (v8 & 1) != 0 )
    {
      v9 = 2;
    }
    else
    {
      v9 = 0;
      if ( IsArranged(v4) )
        v9 = 3;
    }
    v10 = 0;
    if ( (*(_DWORD *)(*((_QWORD *)v4 + 5) + 288LL) & 0xF) == 1 )
    {
      v10 = 1;
    }
    else if ( (*(_DWORD *)(*((_QWORD *)v4 + 5) + 288LL) & 0xF) == 2 )
    {
      v10 = 2;
    }
    v11 = v9 | (8 * v10);
    a2[4] = v11;
    v12 = *(_WORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 464LL) + 272LL);
    if ( v12 > 0x60u )
    {
      if ( v12 > 0x78u )
      {
        if ( v12 > 0x90u )
        {
          if ( v12 <= 0xA8u )
          {
            v6 = 96;
          }
          else
          {
            v6 = 192;
            if ( v12 > 0xC0u )
            {
              if ( v12 > 0xF0u )
              {
                if ( v12 > 0x120u )
                  v6 = 224;
              }
              else
              {
                v6 = 160;
              }
            }
            else
            {
              v6 = 128;
            }
          }
        }
        else
        {
          v6 = 64;
        }
      }
    }
    else
    {
      v6 = 0;
    }
    v13 = v6 | v11;
    a2[4] = v13;
    result = *((_QWORD *)v4 + 5);
    if ( *(char *)(result + 233) < 0 )
    {
      result = 256LL;
      a2[4] = v13 | 0x100;
    }
  }
  return result;
}
