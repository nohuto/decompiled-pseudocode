/*
 * XREFs of HmgNextOwned @ 0x140045150
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x140085594 (-vCleanupLCSPs@@YAXK@Z.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x140085D1C (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x140085DF4 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?vCleanupBrushes@@YAXK@Z @ 0x140085EE8 (-vCleanupBrushes@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x140086260 (-vCleanupSurfaces@@YAXK@Z.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1400F2D7C (HmgIsProcessCleanupRequiredByW32Pid.c)
 */

__int64 __fastcall HmgNextOwned(unsigned int a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r13
  __int64 v8; // r15
  unsigned int v9; // r11d
  __int64 v10; // rdi
  unsigned int v11; // esi
  unsigned int v12; // r14d
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v21; // r11
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-38h]
  HSEMAPHORE v25; // [rsp+A8h] [rbp+20h] BYREF

  if ( !(unsigned int)HmgIsProcessCleanupRequiredByW32Pid(a2) )
    return 0LL;
  SEMOBJ<20>::SEMOBJ<20>(&v25);
  v7 = *(_QWORD *)(W32GetSessionState(v6) + 88);
  CurrentThread = KeGetCurrentThread();
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v7 + 5672);
        v9 = *(_DWORD *)v8;
        while ( 1 )
        {
          if ( ++a1 >= v9 )
            goto LABEL_23;
          v10 = *(_QWORD *)(v8 + 16);
          v11 = *(_DWORD *)(v10 + 2056);
          v12 = v11 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16);
          if ( a1 < v12 )
          {
            if ( a1 >= v11 )
            {
              v13 = *(_QWORD *)(v10 + 8LL * (((a1 - v11) >> 16) + 1) + 8);
              v14 = a1 + -65536 * ((a1 - v11) >> 16) - v11;
            }
            else
            {
              v13 = *(_QWORD *)(v10 + 8);
              v14 = a1;
            }
            v15 = 0LL;
            if ( v14 < *(_DWORD *)(v13 + 20)
              && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * ((unsigned __int64)v14 >> 8))
                           + 16LL * (unsigned __int8)v14
                           + 8) )
            {
              v15 = *(_QWORD *)v13 + 24LL * v14;
            }
            if ( v15 )
              break;
          }
        }
        if ( !a1 )
        {
LABEL_23:
          SEMOBJ<20>::vUnlock(&v25);
          return 0LL;
        }
        if ( *(_BYTE *)(v15 + 14) && ((*(_DWORD *)(v15 + 8) ^ a2 & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
        {
          v16 = a1;
          if ( a1 >= 0x10000 )
          {
            v17 = (unsigned __int16)a1;
            if ( v9 <= 0x10000 )
            {
              v16 = (unsigned __int16)a1;
            }
            else
            {
              if ( (unsigned __int16)a1 >= v12 )
              {
                v19 = 0LL;
              }
              else
              {
                if ( (unsigned __int16)a1 >= v11 )
                {
                  v18 = *(_QWORD *)(v10 + 8LL * ((((unsigned __int16)a1 - v11) >> 16) + 1) + 8);
                  v17 = -65536 * (((unsigned __int16)a1 - v11) >> 16) - v11 + (unsigned __int16)a1;
                }
                else
                {
                  v18 = *(_QWORD *)(v10 + 8);
                }
                v19 = 0LL;
                if ( v17 < *(_DWORD *)(v18 + 20) )
                  v19 = *(_QWORD *)v18 + 24LL * v17;
              }
              if ( *(unsigned __int8 *)(v19 + 13) == HIWORD(a1) )
                v16 = (unsigned __int16)a1;
            }
          }
          if ( (unsigned int)v16 >= v11 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16)
            || ((unsigned int)v16 >= v11
              ? (v21 = *(_QWORD *)(v10 + 8LL * ((((unsigned int)v16 - v11) >> 16) + 1) + 8),
                 v16 = -65536 * (((unsigned int)v16 - v11) >> 16) - v11 + (unsigned int)v16)
              : (v21 = *(_QWORD *)(v10 + 8)),
                (unsigned int)v16 >= *(_DWORD *)(v21 + 20)) )
          {
            v22 = 0LL;
          }
          else
          {
            v22 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * (v16 >> 8)) + 16LL * (unsigned __int8)v16 + 8);
          }
          if ( (*(_BYTE *)(v15 + 15) & 0x40) == 0
            || *(_WORD *)(v22 + 12) && *(struct _KTHREAD **)(v22 + 16) == CurrentThread )
          {
            break;
          }
        }
      }
      v23 = (unsigned __int16)a1 | (unsigned __int64)(*(unsigned __int16 *)(v15 + 12) << 16);
      if ( (_DWORD)v23 == (unsigned int)*(_QWORD *)v22 )
        break;
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 47LL, v15, *(_QWORD *)v22, v23, 0LL, 0LL, 0);
      *a3 = 0LL;
    }
    *a3 = v23;
  }
  while ( !v23 );
  SEMOBJ<20>::vUnlock(&v25);
  return a1;
}
