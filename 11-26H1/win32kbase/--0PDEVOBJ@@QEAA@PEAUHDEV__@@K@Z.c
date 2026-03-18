/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1401ED038
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1401F4F1C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028174 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14003BBF4 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     GreCreateSemaphoreInternal @ 0x1400A69FC (GreCreateSemaphoreInternal.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1400C61E0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     GreDeleteSemaphore @ 0x1400C6C70 (GreDeleteSemaphore.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400C6CF8 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1400C9450 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1400C985C (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

PDEVOBJ *__fastcall PDEVOBJ::PDEVOBJ(PDEVOBJ *this, char *a2)
{
  __int64 SessionState; // rax
  __int64 v5; // rsi
  struct PDEV *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  HDEV v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  HDEV v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdx
  HDEV v23; // rcx
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  char *SemaphoreInternal; // rax
  struct _ERESOURCE *v27; // rcx
  char *v28; // rcx
  signed __int32 v29; // ett
  signed __int32 v30; // ett
  _QWORD *v31; // rax
  int v32; // r8d
  struct _ERESOURCE *v33; // rdx
  _QWORD *v34; // rax
  _BYTE v36[160]; // [rsp+20h] [rbp-B8h] BYREF
  struct _ERESOURCE *v37; // [rsp+E0h] [rbp+8h] BYREF

  SessionState = W32GetSessionState(this);
  v37 = (struct _ERESOURCE *)a2;
  v5 = *(_QWORD *)(SessionState + 88);
  *(_QWORD *)this = 0LL;
  if ( a2 && (*((_DWORD *)a2 + 10) & 1) != 0 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v36, (struct PDEVOBJ *)&v37);
    v6 = PDEV::Allocate(0LL);
    *(_QWORD *)this = v6;
    if ( !v6 )
    {
LABEL_33:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v36);
      return this;
    }
    v7 = 2LL;
    *((_QWORD *)v6 + 222) = *((_QWORD *)a2 + 222);
    v8 = 2LL;
    *(_DWORD *)(*(_QWORD *)this + 1768LL) = 1348756854;
    *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)this;
    *(_QWORD *)(*(_QWORD *)this + 1712LL) = *((_QWORD *)a2 + 214);
    *(_QWORD *)(*(_QWORD *)this + 1720LL) = *((_QWORD *)a2 + 215);
    *(_QWORD *)(*(_QWORD *)this + 1728LL) = *((_QWORD *)a2 + 216);
    *(_QWORD *)(*(_QWORD *)this + 1736LL) = *((_QWORD *)a2 + 217);
    *(_QWORD *)(*(_QWORD *)this + 1744LL) = *((_QWORD *)a2 + 218);
    *(_QWORD *)(*(_QWORD *)this + 1752LL) = *((_QWORD *)a2 + 219);
    *(_QWORD *)(*(_QWORD *)this + 1760LL) = *((_QWORD *)a2 + 220);
    *(_QWORD *)(*(_QWORD *)this + 1784LL) = *((_QWORD *)a2 + 223);
    *(_QWORD *)(*(_QWORD *)this + 1792LL) = *((_QWORD *)a2 + 224);
    *(_QWORD *)(*(_QWORD *)this + 1800LL) = *((_QWORD *)a2 + 225);
    v9 = (HDEV)(a2 + 1808);
    v10 = (_OWORD *)(*(_QWORD *)this + 1808LL);
    do
    {
      *v10 = *(_OWORD *)v9;
      v10[1] = *((_OWORD *)v9 + 1);
      v10[2] = *((_OWORD *)v9 + 2);
      v10[3] = *((_OWORD *)v9 + 3);
      v10[4] = *((_OWORD *)v9 + 4);
      v10[5] = *((_OWORD *)v9 + 5);
      v10[6] = *((_OWORD *)v9 + 6);
      v10 += 8;
      v11 = *((_OWORD *)v9 + 7);
      v9 += 32;
      *(v10 - 1) = v11;
      --v8;
    }
    while ( v8 );
    *v10 = *(_OWORD *)v9;
    v10[1] = *((_OWORD *)v9 + 1);
    v10[2] = *((_OWORD *)v9 + 2);
    *((_QWORD *)v10 + 6) = *((_QWORD *)v9 + 6);
    v12 = (HDEV)(a2 + 2120);
    v13 = (_OWORD *)(*(_QWORD *)this + 2120LL);
    do
    {
      *v13 = *(_OWORD *)v12;
      v13[1] = *((_OWORD *)v12 + 1);
      v13[2] = *((_OWORD *)v12 + 2);
      v13[3] = *((_OWORD *)v12 + 3);
      v13[4] = *((_OWORD *)v12 + 4);
      v13[5] = *((_OWORD *)v12 + 5);
      v13[6] = *((_OWORD *)v12 + 6);
      v13 += 8;
      v14 = *((_OWORD *)v12 + 7);
      v12 += 32;
      *(v13 - 1) = v14;
      --v7;
    }
    while ( v7 );
    *v13 = *(_OWORD *)v12;
    v13[1] = *((_OWORD *)v12 + 1);
    v13[2] = *((_OWORD *)v12 + 2);
    v13[3] = *((_OWORD *)v12 + 3);
    v15 = *(_QWORD *)this;
    *(_OWORD *)(v15 + 2440) = *(_OWORD *)(a2 + 2440);
    *(_OWORD *)(v15 + 2456) = *(_OWORD *)(a2 + 2456);
    *(_OWORD *)(v15 + 2472) = *(_OWORD *)(a2 + 2472);
    *(_OWORD *)(v15 + 2488) = *(_OWORD *)(a2 + 2488);
    *(_OWORD *)(v15 + 2504) = *(_OWORD *)(a2 + 2504);
    *(_OWORD *)(v15 + 2520) = *(_OWORD *)(a2 + 2520);
    *(_QWORD *)(*(_QWORD *)this + 2552LL) = *((_QWORD *)a2 + 319);
    *(_QWORD *)(*(_QWORD *)this + 2560LL) = *((_QWORD *)a2 + 320);
    *(_QWORD *)(*(_QWORD *)this + 2568LL) = *((_QWORD *)a2 + 321);
    *(_QWORD *)(*(_QWORD *)this + 2576LL) = *((_QWORD *)a2 + 322);
    *(_QWORD *)(*(_QWORD *)this + 2640LL) = *((_QWORD *)a2 + 330);
    *(_QWORD *)(*(_QWORD *)this + 2648LL) = *((_QWORD *)a2 + 331);
    *(_QWORD *)(*(_QWORD *)this + 2664LL) = *((_QWORD *)a2 + 333);
    *(_QWORD *)(*(_QWORD *)this + 2672LL) = *((_QWORD *)a2 + 334);
    *(_QWORD *)(*(_QWORD *)this + 2656LL) = *((_QWORD *)a2 + 332);
    *(_DWORD *)(*(_QWORD *)this + 3544LL) = *((_DWORD *)a2 + 886);
    v16 = *((_QWORD *)a2 + 323);
    if ( v16 )
    {
      v17 = *(unsigned __int16 *)(v16 + 68) + *(unsigned __int16 *)(v16 + 70);
      *(_QWORD *)(*(_QWORD *)this + 2584LL) = PALLOCNOZ(v17, 0x76656447u);
      if ( !*(_QWORD *)(*(_QWORD *)this + 2584LL) )
      {
        v27 = *(struct _ERESOURCE **)(*(_QWORD *)this + 48LL);
        goto LABEL_20;
      }
      memmove(*(void **)(*(_QWORD *)this + 2584LL), *((const void **)a2 + 323), v17);
    }
    v21 = 1456LL;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = *((_DWORD *)a2 + 11);
    *(_QWORD *)(*(_QWORD *)this + 64LL) = *((_QWORD *)a2 + 8);
    *(_QWORD *)(*(_QWORD *)this + 1432LL) = *((_QWORD *)a2 + 179);
    *(_QWORD *)(*(_QWORD *)this + 1440LL) = *((_QWORD *)a2 + 180);
    *(_QWORD *)(*(_QWORD *)this + 1448LL) = *((_QWORD *)a2 + 181);
    *(_QWORD *)(*(_QWORD *)this + 2544LL) = *((_QWORD *)a2 + 318);
    do
    {
      *(_QWORD *)(v21 + *(_QWORD *)this) = *(_QWORD *)&a2[v21];
      v21 += 8LL;
    }
    while ( v21 < 1504 );
    v22 = 6LL;
    *(_QWORD *)(*(_QWORD *)this + 1504LL) = *((_QWORD *)a2 + 188);
    *(_QWORD *)(*(_QWORD *)this + 1700LL) = *(_QWORD *)(a2 + 1700);
    *(_QWORD *)(*(_QWORD *)this + 2592LL) = *((_QWORD *)a2 + 324);
    *(_DWORD *)(*(_QWORD *)this + 2600LL) = *((_DWORD *)a2 + 650);
    *(_DWORD *)(*(_QWORD *)this + 2604LL) = *((_DWORD *)a2 + 651);
    v23 = (HDEV)(a2 + 2680);
    v24 = (_OWORD *)(*(_QWORD *)this + 2680LL);
    do
    {
      *v24 = *(_OWORD *)v23;
      v24[1] = *((_OWORD *)v23 + 1);
      v24[2] = *((_OWORD *)v23 + 2);
      v24[3] = *((_OWORD *)v23 + 3);
      v24[4] = *((_OWORD *)v23 + 4);
      v24[5] = *((_OWORD *)v23 + 5);
      v24[6] = *((_OWORD *)v23 + 6);
      v24 += 8;
      v25 = *((_OWORD *)v23 + 7);
      v23 += 32;
      *(v24 - 1) = v25;
      --v22;
    }
    while ( v22 );
    *v24 = *(_OWORD *)v23;
    v24[1] = *((_OWORD *)v23 + 1);
    v24[2] = *((_OWORD *)v23 + 2);
    v24[3] = *((_OWORD *)v23 + 3);
    if ( *((_DWORD *)a2 + 292) )
    {
      *(_QWORD *)(*(_QWORD *)this + 2792LL) = *((_QWORD *)a2 + 161);
      *(_QWORD *)(*(_QWORD *)this + 2800LL) = *((_QWORD *)a2 + 162);
      *(_QWORD *)(*(_QWORD *)this + 2824LL) = *((_QWORD *)a2 + 164);
      *(_QWORD *)(*(_QWORD *)this + 2832LL) = *((_QWORD *)a2 + 165);
      *(_QWORD *)(*(_QWORD *)this + 2840LL) = *((_QWORD *)a2 + 166);
      *(_QWORD *)(*(_QWORD *)this + 2864LL) = *((_QWORD *)a2 + 167);
      *(_QWORD *)(*(_QWORD *)this + 2928LL) = *((_QWORD *)a2 + 168);
      *(_QWORD *)(*(_QWORD *)this + 3272LL) = *((_QWORD *)a2 + 169);
      *(_QWORD *)(*(_QWORD *)this + 3248LL) = *((_QWORD *)a2 + 170);
      *(_QWORD *)(*(_QWORD *)this + 3240LL) = *((_QWORD *)a2 + 171);
      *(_QWORD *)(*(_QWORD *)this + 3224LL) = *((_QWORD *)a2 + 172);
      *(_QWORD *)(*(_QWORD *)this + 3232LL) = *((_QWORD *)a2 + 174);
      *(_QWORD *)(*(_QWORD *)this + 3000LL) = *((_QWORD *)a2 + 173);
      *(_QWORD *)(*(_QWORD *)this + 3400LL) = *((_QWORD *)a2 + 175);
    }
    PDEV::InitializeClientReferenceCount(*(PDEV **)this);
    *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
    *(_DWORD *)(*(_QWORD *)this + 40LL) = *((_DWORD *)a2 + 10) & 0x20001;
    SemaphoreInternal = GreCreateSemaphoreInternal(0);
    *(_QWORD *)(*(_QWORD *)this + 48LL) = SemaphoreInternal;
    v18 = *(_QWORD *)this;
    if ( SemaphoreInternal )
    {
      _m_prefetchw((const void *)(v18 + 40));
      do
        v29 = *(_DWORD *)(v18 + 40);
      while ( v29 != _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 40), v29 & 0xFFFFFFBF, v29) );
      *(_DWORD *)(*(_QWORD *)this + 3548LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 56LL) = GreCreateSemaphoreInternal(0);
      v18 = *(_QWORD *)this;
      if ( *(_QWORD *)(*(_QWORD *)this + 56LL) )
      {
        _m_prefetchw((const void *)(v18 + 40));
        do
          v30 = *(_DWORD *)(v18 + 40);
        while ( v30 != _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 40), v30 | 0x80000, v30) );
        v31 = (_QWORD *)(*(_QWORD *)this + 2616LL);
        v31[1] = v31;
        *v31 = v31;
        SEMOBJ<19>::SEMOBJ<19>(&v37, (struct _ERESOURCE **)v5);
        v33 = v37;
        **(_QWORD **)this = *(_QWORD *)(v5 + 3952);
        *(_QWORD *)(v5 + 3952) = *(_QWORD *)this;
        if ( v33 )
          GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
            (__int64)v33,
            v32);
        v34 = (_QWORD *)(*(_QWORD *)this + 3520LL);
        v34[1] = v34;
        *v34 = v34;
        goto LABEL_33;
      }
    }
    v27 = *(struct _ERESOURCE **)(v18 + 48);
LABEL_20:
    if ( v27 )
      GreDeleteSemaphore(v27);
    v28 = *(char **)(*(_QWORD *)this + 2584LL);
    if ( v28 )
      GreDeleteFastMutex(v28, v18, v19, v20);
    PDEV::Free(*(struct PDEV **)this);
    *(_QWORD *)this = 0LL;
    goto LABEL_33;
  }
  return this;
}
