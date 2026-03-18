/*
 * XREFs of ?GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z @ 0x140331348
 * Callers:
 *     GreRealizeDefaultPalette @ 0x14021B5C0 (GreRealizeDefaultPalette.c)
 *     NtGdiSetSystemPaletteUse @ 0x14032BEB0 (NtGdiSetSystemPaletteUse.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C6B4 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006FAEC (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140071BDC (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x1401D6F9C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??0NEEDPDEVPOINTERLOCK@@QEAA@PEAUHDEV__@@@Z @ 0x14020DB64 (--0NEEDPDEVPOINTERLOCK@@QEAA@PEAUHDEV__@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepSetSystemPaletteUse(struct XDCOBJ *a1, int a2)
{
  int v3; // edi
  unsigned int v4; // ebx
  _QWORD *v5; // rsi
  int v6; // r14d
  _DWORD *v7; // rax
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rdx
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // rdx
  int v19; // ecx
  unsigned int v20; // r8d
  __int64 v21; // rdx
  unsigned int v22; // ecx
  __int64 i; // r8
  __int64 v25; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v26[8]; // [rsp+38h] [rbp-91h] BYREF
  __int64 v27; // [rsp+40h] [rbp-89h] BYREF
  _BYTE v28[208]; // [rsp+50h] [rbp-79h] BYREF
  _DWORD *v29; // [rsp+130h] [rbp+67h] BYREF
  int v30; // [rsp+138h] [rbp+6Fh]
  __int64 v31; // [rsp+140h] [rbp+77h] BYREF
  HSEMAPHORE v32; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = a2;
  if ( (unsigned int)(a2 - 1) > 2 )
    v3 = 1;
  v4 = 0;
  v5 = (_QWORD *)*((_QWORD *)a1 + 2);
  v6 = 0;
  v31 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v27);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v26, (struct PDEVOBJ *)&v31);
  NEEDPDEVPOINTERLOCK::NEEDPDEVPOINTERLOCK((NEEDPDEVPOINTERLOCK *)&v25, *(_QWORD **)(*(_QWORD *)a1 + 48LL));
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v28, (struct PDEVOBJ *)&v31);
  v29 = *(_DWORD **)(v31 + 1792);
  if ( (*(_DWORD *)(v31 + 2156) & 0x100) != 0 )
  {
    SEMOBJ<13>::SEMOBJ<13>(&v32, v5);
    v7 = v29;
    v8 = v29[6];
    if ( (v8 & 0x1000) != 0 )
    {
      v4 = 2;
      v9 = v8 & 0x10000;
    }
    else
    {
      v4 = 3;
      v9 = v8 & 0x10000;
      if ( !v9 )
        v4 = 1;
    }
    if ( v3 == 1 )
    {
      if ( (v29[6] & 0x1000) != 0 || v9 )
      {
        v10 = v5[484];
        v11 = v29[15] >> 1;
        v12 = 10LL;
        if ( v11 > 0xA || (v12 = v11) != 0 )
        {
          v13 = 0LL;
          v14 = (unsigned int)v12;
          do
          {
            v15 = *((_QWORD *)v7 + 14);
            v30 = *(_DWORD *)(v13 + *(_QWORD *)(v10 + 112));
            HIBYTE(v30) = 48;
            *(_DWORD *)(v13 + v15) = v30;
            v13 += 4LL;
            v7 = v29;
            --v14;
          }
          while ( v14 );
        }
        else
        {
          v12 = 0LL;
        }
        LODWORD(v16) = v7[7];
        LODWORD(v17) = 20;
        if ( (_DWORD)v12 )
        {
          while ( 1 )
          {
            v17 = (unsigned int)(v17 - 1);
            v16 = (unsigned int)(v16 - 1);
            v18 = *((_QWORD *)v7 + 14);
            v30 = *(_DWORD *)(*(_QWORD *)(v10 + 112) + 4 * v17);
            HIBYTE(v30) = 48;
            *(_DWORD *)(v18 + 4 * v16) = v30;
            if ( !--v12 )
              break;
            v7 = v29;
          }
        }
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xFu;
        v29[6] &= 0xFFFEEFFF;
        XEPALOBJ::vUpdateTime((XEPALOBJ *)&v29);
        v6 = 1;
      }
      goto LABEL_31;
    }
    if ( v3 == 2 )
    {
      v19 = v29[7];
      if ( !v19 )
      {
        v4 = 0;
LABEL_31:
        SEMOBJ<13>::vUnlock(&v32);
        if ( v6 && (*(_DWORD *)(v31 + 40) & 0x400) == 0 )
        {
          if ( *(_QWORD *)(v31 + 1752) )
            (*(void (__fastcall **)(_QWORD, _DWORD **, _QWORD, _QWORD, _DWORD))(v31 + 1752))(
              *(_QWORD *)(*(_QWORD *)(v31 + 24) + 1784LL),
              &v29,
              0LL,
              0LL,
              v29[7]);
          else
            v4 = 0;
        }
        goto LABEL_36;
      }
      v20 = 1;
      if ( (unsigned int)(v19 - 1) > 1 )
      {
        do
        {
          v21 = v20++;
          *(_BYTE *)(*((_QWORD *)v7 + 14) + 4 * v21 + 3) = 0;
          v7 = v29;
        }
        while ( v20 < v29[7] - 1 );
      }
      v22 = v7[6] & 0xFFFEEFFF | 0x1000;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < v29[7]; v7 = v29 )
      {
        *(_BYTE *)(*((_QWORD *)v7 + 14) + 4 * i + 3) = 0;
        i = (unsigned int)(i + 1);
      }
      v22 = v7[6] & 0xFFFEEFFF | 0x10000;
    }
    v7[6] = v22;
    goto LABEL_31;
  }
LABEL_36:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v28);
  if ( v25 )
    GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v25);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v26);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v27);
  return v4;
}
