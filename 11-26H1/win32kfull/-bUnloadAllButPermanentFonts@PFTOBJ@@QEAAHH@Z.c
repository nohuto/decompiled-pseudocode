/*
 * XREFs of ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x14020EAF0
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x14020EA48 (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     bKillPFFOBJ @ 0x1400D38E8 (bKillPFFOBJ.c)
 *     prfntKillList @ 0x1400F60E8 (prfntKillList.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x140104D2C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?vKill@PFFOBJ@@QEAAXXZ @ 0x140105C88 (-vKill@PFFOBJ@@QEAAXXZ.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x14021B928 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?PffBucket@PFT@@QEBA?AVPffIterator@@K@Z @ 0x14025A850 (-PffBucket@PFT@@QEBA-AVPffIterator@@K@Z.c)
 *     ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4 (--EPffIterator@@QEAAAEAV0@XZ.c)
 *     vKillRFONTList @ 0x140327774 (vKillRFONTList.c)
 *     ?vRemovePFF@PFF@@QEAAXXZ @ 0x140327A04 (-vRemovePFF@PFF@@QEAAXXZ.c)
 */

__int64 __fastcall PFTOBJ::bUnloadAllButPermanentFonts(PFTOBJ *this, __int64 a2)
{
  int v2; // r13d
  int v4; // ecx
  __int64 v5; // r8
  unsigned int v6; // edi
  __int64 v7; // rdx
  char *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r15
  char *v11; // rbx
  __int64 v12; // r10
  _QWORD *v13; // r14
  __int64 v14; // r10
  int v15; // eax
  PFF *v16; // r10
  __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rbx
  _DWORD *v23; // r14
  char *v24; // r15
  _QWORD v26[3]; // [rsp+20h] [rbp-18h] BYREF
  int v27; // [rsp+80h] [rbp+48h]
  int v28; // [rsp+88h] [rbp+50h]
  __int64 v29; // [rsp+90h] [rbp+58h] BYREF
  __int64 v30; // [rsp+98h] [rbp+60h] BYREF

  v2 = 0;
  v28 = 0;
  v30 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96) + 20320LL);
  GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v30);
  v6 = 1;
  v7 = *(unsigned int *)(*(_QWORD *)this + 28LL);
  if ( !(_DWORD)v7 )
    goto LABEL_5;
  if ( (unsigned int)v7 <= 0x40 )
  {
    v8 = (char *)(*(_QWORD *)(W32GetSessionState(v4, v7) + 96) + 20416LL);
  }
  else
  {
    v8 = (char *)PALLOCNOZ(56 * (int)v7, 1769367111LL, v5);
    if ( !v8 )
    {
      v6 = 0;
LABEL_5:
      SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v30);
      return v6;
    }
    v2 = 1;
    v28 = 1;
  }
  v9 = *(_QWORD *)this;
  v10 = 0LL;
  v11 = v8;
  if ( *(_DWORD *)(*(_QWORD *)this + 24LL) )
  {
    do
    {
      PFT::PffBucket(v9, &v29, (unsigned int)v10);
      v12 = v29;
      if ( v29 )
      {
        v13 = v11 + 8;
        do
        {
          v26[0] = v12;
          PffIterator::operator++(&v29);
          v15 = *(_DWORD *)(v14 + 52) & 0x200;
          *(_QWORD *)(v14 + 56) = 0LL;
          v27 = v15;
          PFFOBJ::vKill((PFFOBJ *)v26);
          if ( *(PFF **)(*(_QWORD *)this + 8 * v10 + 40) == v16 )
            *(_QWORD *)(*(_QWORD *)this + 8 * v10 + 40) = *((_QWORD *)v16 + 1);
          PFF::vRemovePFF(v16);
          *(_QWORD *)v11 = v17;
          PFFOBJ::vRemoveHash((PFFOBJ *)v26, v18, v19);
          v21 = *(_QWORD *)this;
          if ( !v27 )
            ++*(_DWORD *)(v21 + 32);
          --*(_DWORD *)(v21 + 28);
          v13[1] = v13;
          *v13 = v13;
          prfntKillList(v26, (int **)v13, v20);
          if ( (_QWORD *)*v13 == v13 )
            *((_DWORD *)v13 + 10) = bKillPFFOBJ((PFFOBJ *)v26, (struct PFFCLEANUP *)(v13 + 2));
          v12 = v29;
          v11 += 56;
          v13 += 7;
        }
        while ( v29 );
      }
      v9 = *(_QWORD *)this;
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < *(_DWORD *)(*(_QWORD *)this + 24LL) );
    v2 = v28;
  }
  SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v30);
  v22 = 0x6DB6DB6DB6DB6DB7LL * ((v11 - v8) >> 3);
  if ( (_DWORD)v22 )
  {
    v23 = v8 + 48;
    v22 = (unsigned int)v22;
    v24 = v8 + 8;
    do
    {
      if ( *((char **)v23 - 5) == v24 )
      {
        if ( *v23 )
          vCleanupFontFile((struct PFFCLEANUP *)(v24 + 16));
      }
      else
      {
        v26[0] = *((_QWORD *)v23 - 6);
        vKillRFONTList((PFFOBJ *)v26);
      }
      v24 += 56;
      v23 += 14;
      --v22;
    }
    while ( v22 );
  }
  if ( v2 )
    Win32FreePool(v8);
  return v6;
}
