/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x14019E28C
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x14017A4B0 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     GreCreateSemaphoreInternal @ 0x140027848 (GreCreateSemaphoreInternal.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004E2F4 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreDeleteSemaphore @ 0x14006D810 (GreDeleteSemaphore.c)
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x140074530 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1400749F8 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008E1A8 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x140092D10 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14014ED30 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

PDEVOBJ *__fastcall PDEVOBJ::PDEVOBJ(PDEVOBJ *this, char *a2)
{
  __int64 SessionState; // rax
  __int64 v5; // rbp
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
  unsigned int v17; // esi
  void *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  HDEV v21; // rcx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int64 SemaphoreInternal; // rax
  __int64 v25; // rdx
  signed __int32 v26; // ett
  __int64 v27; // rdx
  signed __int32 v28; // ett
  _QWORD *v29; // rax
  struct _ERESOURCE *v30; // rdx
  _QWORD *v31; // rax
  struct _ERESOURCE *v32; // rcx
  char *v33; // rcx
  _BYTE v35[144]; // [rsp+20h] [rbp-A8h] BYREF
  struct _ERESOURCE *v36; // [rsp+D0h] [rbp+8h] BYREF

  SessionState = W32GetSessionState(this);
  v36 = (struct _ERESOURCE *)a2;
  v5 = *(_QWORD *)(SessionState + 88);
  *(_QWORD *)this = 0LL;
  if ( a2 && (*((_DWORD *)a2 + 10) & 1) != 0 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v35, (struct PDEVOBJ *)&v36);
    v6 = PDEV::Allocate(0LL);
    *(_QWORD *)this = v6;
    if ( !v6 )
    {
LABEL_31:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v35);
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
      *(_QWORD *)(*(_QWORD *)this + 2584LL) = PALLOCNOZ(v17, 1986356295LL);
      v18 = *(void **)(*(_QWORD *)this + 2584LL);
      if ( !v18 )
        goto LABEL_26;
      memmove(v18, *((const void **)a2 + 323), v17);
    }
    v19 = 1456LL;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = *((_DWORD *)a2 + 11);
    *(_QWORD *)(*(_QWORD *)this + 64LL) = *((_QWORD *)a2 + 8);
    *(_QWORD *)(*(_QWORD *)this + 1432LL) = *((_QWORD *)a2 + 179);
    *(_QWORD *)(*(_QWORD *)this + 1440LL) = *((_QWORD *)a2 + 180);
    *(_QWORD *)(*(_QWORD *)this + 1448LL) = *((_QWORD *)a2 + 181);
    *(_QWORD *)(*(_QWORD *)this + 2544LL) = *((_QWORD *)a2 + 318);
    do
    {
      *(_QWORD *)(v19 + *(_QWORD *)this) = *(_QWORD *)&a2[v19];
      v19 += 8LL;
    }
    while ( v19 < 1504 );
    v20 = 6LL;
    *(_QWORD *)(*(_QWORD *)this + 1504LL) = *((_QWORD *)a2 + 188);
    *(_QWORD *)(*(_QWORD *)this + 1700LL) = *(_QWORD *)(a2 + 1700);
    *(_QWORD *)(*(_QWORD *)this + 2592LL) = *((_QWORD *)a2 + 324);
    *(_DWORD *)(*(_QWORD *)this + 2600LL) = *((_DWORD *)a2 + 650);
    *(_DWORD *)(*(_QWORD *)this + 2604LL) = *((_DWORD *)a2 + 651);
    v21 = (HDEV)(a2 + 2680);
    v22 = (_OWORD *)(*(_QWORD *)this + 2680LL);
    do
    {
      *v22 = *(_OWORD *)v21;
      v22[1] = *((_OWORD *)v21 + 1);
      v22[2] = *((_OWORD *)v21 + 2);
      v22[3] = *((_OWORD *)v21 + 3);
      v22[4] = *((_OWORD *)v21 + 4);
      v22[5] = *((_OWORD *)v21 + 5);
      v22[6] = *((_OWORD *)v21 + 6);
      v22 += 8;
      v23 = *((_OWORD *)v21 + 7);
      v21 += 32;
      *(v22 - 1) = v23;
      --v20;
    }
    while ( v20 );
    *v22 = *(_OWORD *)v21;
    v22[1] = *((_OWORD *)v21 + 1);
    v22[2] = *((_OWORD *)v21 + 2);
    v22[3] = *((_OWORD *)v21 + 3);
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
    if ( SemaphoreInternal )
    {
      v25 = *(_QWORD *)this;
      _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
      do
        v26 = *(_DWORD *)(v25 + 40);
      while ( v26 != _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 40), v26 & 0xFFFFFFBF, v26) );
      *(_DWORD *)(*(_QWORD *)this + 3548LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 56LL) = GreCreateSemaphoreInternal(0);
      v27 = *(_QWORD *)this;
      if ( *(_QWORD *)(*(_QWORD *)this + 56LL) )
      {
        _m_prefetchw((const void *)(v27 + 40));
        do
          v28 = *(_DWORD *)(v27 + 40);
        while ( v28 != _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 40), v28 | 0x80000, v28) );
        v29 = (_QWORD *)(*(_QWORD *)this + 2616LL);
        v29[1] = v29;
        *v29 = v29;
        SEMOBJ<19>::SEMOBJ<19>(&v36, (struct _ERESOURCE **)v5);
        v30 = v36;
        **(_QWORD **)this = *(_QWORD *)(v5 + 3848);
        *(_QWORD *)(v5 + 3848) = *(_QWORD *)this;
        if ( v30 )
          GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
            (__int64)v30);
        v31 = (_QWORD *)(*(_QWORD *)this + 3520LL);
        v31[1] = v31;
        *v31 = v31;
        goto LABEL_31;
      }
    }
LABEL_26:
    v32 = *(struct _ERESOURCE **)(*(_QWORD *)this + 48LL);
    if ( v32 )
      GreDeleteSemaphore(v32);
    v33 = *(char **)(*(_QWORD *)this + 2584LL);
    if ( v33 )
      GreDeleteFastMutex(v33);
    PDEV::Free(*(struct PDEV **)this);
    *(_QWORD *)this = 0LL;
    goto LABEL_31;
  }
  return this;
}
