/*
 * XREFs of ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1400F55A4
 * Callers:
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1400F5394 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400C3B0C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ?bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1400C55A0 (-bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F651C (--$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall RFONTOBJ::bFindRFONT(
        RFONTOBJ *this,
        struct _FD_XFORM *a2,
        __int64 a3,
        int a4,
        HDEV a5,
        struct EXFORMOBJ *a6,
        struct PFE *a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11)
{
  HDEV v11; // rbx
  int v12; // edi
  HDEV v14; // rax
  HDEV *v15; // r14
  _QWORD *v16; // r15
  unsigned int v17; // ebp
  int v18; // r12d
  int v19; // r13d
  HDEV v20; // rax
  HDEV v21; // r15
  _QWORD *i; // r15
  HDEV v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  HDEV v28; // rbx
  __int64 v29; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  HDEV v34; // rcx
  int v35; // ecx
  _QWORD *v36; // rcx
  HDEV v37; // rbx
  __int64 v38; // rax
  _QWORD v39[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v41; // [rsp+B0h] [rbp+18h]

  v41 = a3;
  v11 = a5;
  v12 = 0;
  LODWORD(a5) = 0;
  a5 = *(HDEV *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 20328LL);
  GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
  if ( ((_DWORD)v11[10] & 0x800000) != 0 )
  {
    v14 = (HDEV)*((_QWORD *)v11 + 439);
    v12 = 1;
  }
  else
  {
    v14 = v11;
  }
  v15 = (HDEV *)(v11 + 878);
  if ( (v12 & 1) != 0 )
    v12 &= ~1u;
  v16 = (_QWORD *)*((_QWORD *)v14 + 190);
  v17 = a11;
  v18 = a10;
  v19 = a9;
  while ( 1 )
  {
    if ( ((_DWORD)v11[10] & 0x800000) != 0 )
    {
      v20 = *v15;
      v12 |= 2u;
    }
    else
    {
      v20 = v11;
    }
    if ( (v12 & 2) != 0 )
      v12 &= ~2u;
    if ( v16 == (_QWORD *)(v20 + 380) )
      break;
    v39[0] = 0LL;
    *(_QWORD *)this = v16 - 84;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v39);
    if ( RFONTOBJ::bMatchRealization(this, a2, v41, a4, a6, a7, a8, v19, v18, v17) )
    {
      ++*(_DWORD *)(*(_QWORD *)this + 668LL);
      v24 = *(_QWORD *)this + 672LL;
      v25 = *(_QWORD *)v24;
      if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 )
        goto LABEL_30;
      v26 = *(_QWORD **)(*(_QWORD *)this + 680LL);
      if ( *v26 != v24 )
        goto LABEL_30;
      *v26 = v25;
      *(_QWORD *)(v25 + 8) = v26;
      v27 = (_QWORD *)(*(_QWORD *)this + 672LL);
      if ( _bittest((const signed __int32 *)v11 + 10, 0x17u) )
        v11 = *v15;
      v28 = v11 + 380;
      v29 = *(_QWORD *)v28;
      if ( *(HDEV *)(*(_QWORD *)v28 + 8LL) != v28 )
        goto LABEL_30;
      *v27 = v29;
      v27[1] = v28;
      *(_QWORD *)(v29 + 8) = v27;
      *(_QWORD *)v28 = v27;
LABEL_43:
      SEMOBJ<18>::vUnlock((HSEMAPHORE *)&a5);
      return 1LL;
    }
    v16 = (_QWORD *)*v16;
  }
  if ( ((_DWORD)v11[10] & 0x800000) != 0 )
  {
    v21 = *v15;
    v12 |= 8u;
  }
  else
  {
    v21 = v11;
  }
  if ( (v12 & 8) != 0 )
    v12 &= ~8u;
  for ( i = (_QWORD *)*((_QWORD *)v21 + 192); ; i = (_QWORD *)*i )
  {
    if ( ((_DWORD)v11[10] & 0x800000) != 0 )
    {
      v23 = *v15;
      v12 |= 0x10u;
    }
    else
    {
      v23 = v11;
    }
    if ( (v12 & 0x10) != 0 )
      v12 &= ~0x10u;
    if ( i == (_QWORD *)(v23 + 384) )
      break;
    v39[0] = 0LL;
    *(_QWORD *)this = i - 84;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v39);
    if ( RFONTOBJ::bMatchRealization(this, a2, v41, a4, a6, a7, a8, v19, v18, v17) )
    {
      v31 = *(_QWORD *)this + 672LL;
      v32 = *(_QWORD *)v31;
      if ( *(_QWORD *)(*(_QWORD *)v31 + 8LL) == v31 )
      {
        v33 = *(_QWORD **)(*(_QWORD *)this + 680LL);
        if ( *v33 == v31 )
        {
          *v33 = v32;
          *(_QWORD *)(v32 + 8) = v33;
          if ( ((_DWORD)v11[10] & 0x800000) != 0 )
            v34 = *v15;
          else
            v34 = v11;
          v35 = *((_DWORD *)v34 + 388) - 1;
          if ( ((_DWORD)v11[10] & 0x800000) != 0 )
            *((_DWORD *)*v15 + 388) = v35;
          else
            *((_DWORD *)v11 + 388) = v35;
          v36 = (_QWORD *)(*(_QWORD *)this + 672LL);
          if ( ((_DWORD)v11[10] & 0x800000) != 0 )
            v11 = *v15;
          v37 = v11 + 380;
          v38 = *(_QWORD *)v37;
          if ( *(HDEV *)(*(_QWORD *)v37 + 8LL) == v37 )
          {
            *v36 = v38;
            v36[1] = v37;
            *(_QWORD *)(v38 + 8) = v36;
            *(_QWORD *)v37 = v36;
            *(_DWORD *)(*(_QWORD *)this + 668LL) = 1;
            goto LABEL_43;
          }
        }
      }
LABEL_30:
      __fastfail(3u);
    }
  }
  *(_QWORD *)this = 0LL;
  SEMOBJ<18>::vUnlock((HSEMAPHORE *)&a5);
  return 0LL;
}
