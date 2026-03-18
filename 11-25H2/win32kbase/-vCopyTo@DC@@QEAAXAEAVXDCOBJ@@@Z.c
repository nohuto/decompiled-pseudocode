/*
 * XREFs of ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400C5FB8
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140178AA0 (--0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x14001C920 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1400C6308 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1400C637C (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

void __fastcall DC::vCopyTo(DC *this, struct XDCOBJ *a2)
{
  char *v4; // rcx
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
  void *v17; // rcx
  _BYTE v18[8]; // [rsp+20h] [rbp-98h] BYREF
  struct _BASEOBJECT *v19; // [rsp+28h] [rbp-90h]

  v4 = *(char **)(*(_QWORD *)a2 + 296LL);
  if ( v4 && v4 != (char *)(*(_QWORD *)a2 + 264LL) )
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
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v18, v12);
      if ( v19 && (*((_DWORD *)v19 + 22) & 1) == 0 )
        HmgDecrementShareReferenceCountEx(v19, 0LL);
      *(_QWORD *)(v10 + 200) = 0LL;
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v18);
    }
    if ( v11 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v18, v11);
      if ( v19 )
      {
        if ( (*((_DWORD *)v19 + 22) & 1) == 0 )
          HmgIncrementShareReferenceCount(v19);
        *(_QWORD *)(v10 + 200) = v11;
      }
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v18);
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
    v17 = *(void **)(*(_QWORD *)a2 + 296LL);
    if ( v17 )
      memmove(v17, *((const void **)this + 37), 8LL * *((unsigned int *)this + 76));
    else
      *(_DWORD *)(*(_QWORD *)a2 + 304LL) = 0;
  }
}
