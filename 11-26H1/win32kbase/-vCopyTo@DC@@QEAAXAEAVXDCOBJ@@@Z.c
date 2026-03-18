/*
 * XREFs of ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400347AC
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140164BA0 (--0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x140019050 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x140034B64 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x140034C24 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall DC::vCopyTo(DC *this, struct XDCOBJ *a2)
{
  void *v4; // rcx
  __int64 v5; // r14
  _OWORD *v6; // rcx
  _OWORD *v7; // rdx
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // rbp
  struct HPATH__ *v11; // rsi
  struct HPATH__ *v12; // rdx
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  DC *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  void *v19; // rcx
  __int64 SessionState; // rax
  __int64 v21; // rax
  _BYTE v22[8]; // [rsp+20h] [rbp-98h] BYREF
  unsigned int *v23; // [rsp+28h] [rbp-90h]

  v4 = *(void **)(*(_QWORD *)a2 + 296LL);
  if ( v4 && v4 != (void *)(*(_QWORD *)a2 + 264LL) )
    GreDeleteFastMutex(v4);
  v5 = 3LL;
  v6 = (_OWORD *)*((_QWORD *)this + 122);
  v7 = *(_OWORD **)(*(_QWORD *)a2 + 976LL);
  v8 = 3LL;
  do
  {
    *v7 = *v6;
    v7[1] = v6[1];
    v7[2] = v6[2];
    v7[3] = v6[3];
    v7[4] = v6[4];
    v7[5] = v6[5];
    v7[6] = v6[6];
    v7 += 8;
    v9 = v6[7];
    v6 += 8;
    *(v7 - 1) = v9;
    --v8;
  }
  while ( v8 );
  *v7 = *v6;
  v7[1] = v6[1];
  v7[2] = v6[2];
  v10 = *(_QWORD *)a2;
  v11 = (struct HPATH__ *)*((_QWORD *)this + 25);
  v12 = *(struct HPATH__ **)(*(_QWORD *)a2 + 200LL);
  if ( v11 != v12 )
  {
    if ( v12 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v22, v12);
      if ( v23 && (v23[22] & 1) == 0 )
      {
        SessionState = W32GetSessionState(v17);
        HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v23);
      }
      *(_QWORD *)(v10 + 200) = 0LL;
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v22);
    }
    if ( v11 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v22, v11);
      if ( v23 )
      {
        if ( (v23[22] & 1) == 0 )
        {
          v21 = W32GetSessionState(v18);
          HmgIncrementShareReferenceCount(*(_QWORD *)(v21 + 88), v23);
        }
        *(_QWORD *)(v10 + 200) = v11;
      }
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v22);
    }
  }
  v13 = (_OWORD *)((char *)this + 80);
  v14 = (_OWORD *)(*(_QWORD *)a2 + 80LL);
  do
  {
    *v14 = *v13;
    v14[1] = v13[1];
    v14[2] = v13[2];
    v14[3] = v13[3];
    v14[4] = v13[4];
    v14[5] = v13[5];
    v14[6] = v13[6];
    v14 += 8;
    v15 = v13[7];
    v13 += 8;
    *(v14 - 1) = v15;
    --v5;
  }
  while ( v5 );
  *v14 = *v13;
  v14[1] = v13[1];
  v14[2] = v13[2];
  v14[3] = v13[3];
  v14[4] = v13[4];
  v16 = (DC *)*((_QWORD *)this + 37);
  if ( v16 == (DC *)((char *)this + 264) )
  {
    *(_QWORD *)(*(_QWORD *)a2 + 296LL) = *(_QWORD *)a2 + 264LL;
  }
  else if ( v16 )
  {
    *(_QWORD *)(*(_QWORD *)a2 + 296LL) = PALLOCMEM((unsigned int)(8 * *((_DWORD *)this + 76)), 1684300103LL);
    v19 = *(void **)(*(_QWORD *)a2 + 296LL);
    if ( v19 )
      memmove(v19, *((const void **)this + 37), 8LL * *((unsigned int *)this + 76));
    else
      *(_DWORD *)(*(_QWORD *)a2 + 304LL) = 0;
  }
}
