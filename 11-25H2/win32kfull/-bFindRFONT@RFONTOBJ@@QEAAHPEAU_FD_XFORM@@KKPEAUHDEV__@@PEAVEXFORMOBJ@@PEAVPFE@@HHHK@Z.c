/*
 * XREFs of ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1400179F0
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400B9908 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1401FCDC8 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400D7660 (--0-$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x14014AD90 (-bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140152154 (--$GreReleaseSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall RFONTOBJ::bFindRFONT(
        RFONTOBJ *this,
        struct _FD_XFORM *a2,
        unsigned int a3,
        unsigned int a4,
        HDEV a5,
        struct EXFORMOBJ *a6,
        struct PFE *a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11)
{
  HDEV v11; // rdi
  int v12; // ebx
  __int64 SessionState; // rax
  HDEV v15; // rsi
  HDEV *v16; // r15
  _QWORD *v17; // rsi
  unsigned int v18; // ebp
  int v19; // r12d
  int v20; // r13d
  HDEV v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx
  HDEV v27; // rdi
  __int64 v28; // rax
  HDEV v29; // rdx
  HDEV v30; // rsi
  _QWORD *i; // rsi
  HDEV v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rcx
  _QWORD *v37; // rcx
  HDEV v38; // rdi
  __int64 v39; // rax
  HDEV v41; // rdx
  _QWORD v42[9]; // [rsp+50h] [rbp-48h] BYREF

  v11 = a5;
  v12 = 0;
  LODWORD(a5) = 0;
  SessionState = W32GetSessionState();
  SEMOBJ<18>::SEMOBJ<18>(&a5, *(_QWORD *)(SessionState + 96) + 4872LL);
  if ( ((_DWORD)v11[10] & 0x800000) != 0 )
  {
    v15 = (HDEV)*((_QWORD *)v11 + 439);
    v12 = 1;
  }
  else
  {
    v15 = v11;
  }
  v16 = (HDEV *)(v11 + 878);
  if ( (v12 & 1) != 0 )
    v12 &= ~1u;
  v17 = (_QWORD *)*((_QWORD *)v15 + 190);
  v18 = a11;
  v19 = a10;
  v20 = a9;
  while ( 1 )
  {
    if ( ((_DWORD)v11[10] & 0x800000) != 0 )
    {
      v21 = *v16;
      v12 |= 2u;
    }
    else
    {
      v21 = v11;
    }
    v22 = v21 + 380;
    if ( (v12 & 2) != 0 )
      v12 &= ~2u;
    if ( v17 == v22 )
      break;
    v42[0] = 0LL;
    *(_QWORD *)this = v17 - 84;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v42);
    if ( (unsigned int)RFONTOBJ::bMatchRealization(this, a2, a3, a4, a6, a7, a8, v20, v19, v18) )
    {
      ++*(_DWORD *)(*(_QWORD *)this + 668LL);
      v23 = *(_QWORD *)this + 672LL;
      v24 = *(_QWORD *)v23;
      if ( *(_QWORD *)(*(_QWORD *)v23 + 8LL) == v23 )
      {
        v25 = *(_QWORD **)(*(_QWORD *)this + 680LL);
        if ( *v25 == v23 )
        {
          *v25 = v24;
          *(_QWORD *)(v24 + 8) = v25;
          v26 = (_QWORD *)(*(_QWORD *)this + 672LL);
          if ( ((_DWORD)v11[10] & 0x800000) != 0 )
            v11 = *v16;
          v27 = v11 + 380;
          v28 = *(_QWORD *)v27;
          if ( *(HDEV *)(*(_QWORD *)v27 + 8LL) == v27 )
          {
            *v26 = v28;
            v26[1] = v27;
            *(_QWORD *)(v28 + 8) = v26;
            *(_QWORD *)v27 = v26;
            goto LABEL_21;
          }
        }
      }
LABEL_49:
      __fastfail(3u);
    }
    v17 = (_QWORD *)*v17;
  }
  if ( ((_DWORD)v11[10] & 0x800000) != 0 )
  {
    v30 = *v16;
    v12 |= 8u;
  }
  else
  {
    v30 = v11;
  }
  if ( (v12 & 8) != 0 )
    v12 &= ~8u;
  for ( i = (_QWORD *)*((_QWORD *)v30 + 192); ; i = (_QWORD *)*i )
  {
    if ( ((_DWORD)v11[10] & 0x800000) != 0 )
    {
      v32 = *v16;
      v12 |= 0x10u;
    }
    else
    {
      v32 = v11;
    }
    v33 = v32 + 384;
    if ( (v12 & 0x10) != 0 )
      v12 &= ~0x10u;
    if ( i == v33 )
    {
      v41 = a5;
      *(_QWORD *)this = 0LL;
      if ( v41 == (HDEV)-1LL )
      {
        v41 = *(HDEV *)(*(_QWORD *)(W32GetSessionState() + 96) + 20352LL);
      }
      else if ( !v41 )
      {
        return 0LL;
      }
      GreReleaseSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v41);
      return 0LL;
    }
    v42[0] = 0LL;
    *(_QWORD *)this = i - 84;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v42);
    if ( (unsigned int)RFONTOBJ::bMatchRealization(this, a2, a3, a4, a6, a7, a8, v20, v19, v18) )
      break;
  }
  v34 = *(_QWORD *)this + 672LL;
  v35 = *(_QWORD *)v34;
  if ( *(_QWORD *)(*(_QWORD *)v34 + 8LL) != v34 )
    goto LABEL_49;
  v36 = *(_QWORD **)(*(_QWORD *)this + 680LL);
  if ( *v36 != v34 )
    goto LABEL_49;
  *v36 = v35;
  *(_QWORD *)(v35 + 8) = v36;
  if ( ((_DWORD)v11[10] & 0x800000) != 0 )
    --*((_DWORD *)*v16 + 388);
  else
    --*((_DWORD *)v11 + 388);
  v37 = (_QWORD *)(*(_QWORD *)this + 672LL);
  if ( ((_DWORD)v11[10] & 0x800000) != 0 )
    v11 = *v16;
  v38 = v11 + 380;
  v39 = *(_QWORD *)v38;
  if ( *(HDEV *)(*(_QWORD *)v38 + 8LL) != v38 )
    goto LABEL_49;
  *v37 = v39;
  v37[1] = v38;
  *(_QWORD *)(v39 + 8) = v37;
  *(_QWORD *)v38 = v37;
  *(_DWORD *)(*(_QWORD *)this + 668LL) = 1;
LABEL_21:
  v29 = a5;
  if ( a5 == (HDEV)-1LL )
  {
    v29 = *(HDEV *)(*(_QWORD *)(W32GetSessionState() + 96) + 20352LL);
    goto LABEL_47;
  }
  if ( a5 )
LABEL_47:
    GreReleaseSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v29);
  return 1LL;
}
