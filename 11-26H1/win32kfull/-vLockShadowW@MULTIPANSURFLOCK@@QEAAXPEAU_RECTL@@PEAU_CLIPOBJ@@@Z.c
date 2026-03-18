/*
 * XREFs of ?vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x140322FF0
 * Callers:
 *     ??0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z @ 0x140320F44 (--0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x140114094 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x140295528 (-ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall MULTIPANSURFLOCK::vLockShadowW(MULTIPANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3)
{
  LONG left; // eax
  LONG v6; // r8d
  LONG top; // ecx
  LONG v8; // eax
  LONG right; // eax
  LONG v10; // ecx
  LONG bottom; // eax
  LONG v12; // ecx
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  signed int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r15
  int v22; // eax
  __int64 v23; // rcx
  int v24; // r14d
  __int64 v25; // rsi
  int v26; // eax
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 i; // rbx
  __int64 v37; // rcx
  __int64 v38; // rsi
  _BYTE *v39; // rbx
  __int64 v40; // r14
  __int64 v41; // rcx
  struct _PANDEV *v42; // rcx
  __int64 v43; // rcx
  __int128 v44; // [rsp+20h] [rbp-20h] BYREF
  __int64 v45; // [rsp+30h] [rbp-10h] BYREF
  int v46; // [rsp+38h] [rbp-8h]
  int v47; // [rsp+3Ch] [rbp-4h]
  __int64 v48; // [rsp+80h] [rbp+40h]
  __int64 v49; // [rsp+90h] [rbp+50h]
  __int64 v50; // [rsp+98h] [rbp+58h]

  v44 = 0LL;
  if ( a3 && a3->iDComplexity )
  {
    left = a3->rclBounds.left;
    v6 = a2->left;
    top = a2->top;
    if ( left > a2->left )
      v6 = left;
    v8 = a3->rclBounds.top;
    LODWORD(v44) = v6;
    if ( v8 > top )
      top = v8;
    right = a3->rclBounds.right;
    DWORD1(v44) = top;
    v10 = a2->right;
    if ( right < v10 )
      v10 = right;
    bottom = a3->rclBounds.bottom;
    DWORD2(v44) = v10;
    v12 = a2->bottom;
    if ( bottom < v12 )
      v12 = bottom;
    HIDWORD(v44) = v12;
  }
  else
  {
    v44 = (__int128)*a2;
  }
  ERECTL::vOrder((ERECTL *)&v44);
  v13 = *((_QWORD *)this + 4);
  v14 = v13;
  if ( !v13 )
    v14 = *((_QWORD *)this + 5);
  v15 = *(_DWORD *)(*(_QWORD *)(v14 + 64) + 36LL);
  v16 = *((_QWORD *)this + 4);
  if ( !v13 )
    v16 = *((_QWORD *)this + 5);
  v17 = *(_QWORD *)(v16 + 64);
  v47 = v15;
  v45 = 0LL;
  v46 = *(_DWORD *)(v17 + 32);
  ERECTL::operator*=((int *)&v44, (int *)&v45);
  if ( !ERECTL::bEmpty((ERECTL *)&v44) )
  {
    v18 = v13;
    if ( !v13 )
      v18 = *((_QWORD *)this + 5);
    v19 = (unsigned int)v44 / *(_DWORD *)(v18 + 768);
    v20 = v13;
    v21 = v19;
    if ( !v13 )
      v20 = *((_QWORD *)this + 5);
    v22 = DWORD2(v44) / *(_DWORD *)(v20 + 768);
    v23 = v13;
    v24 = v22;
    if ( !v13 )
      v23 = *((_QWORD *)this + 5);
    v25 = DWORD1(v44) / *(_DWORD *)(v23 + 772);
    if ( !v13 )
      v13 = *((_QWORD *)this + 5);
    v26 = HIDWORD(v44) / *(_DWORD *)(v13 + 772);
    *((_BYTE *)this + 49) = 1;
    v27 = v26;
    memset_0((char *)this + 131, 0, 0x51uLL);
    v50 = v21;
    v29 = v27 + 1;
    v30 = v25;
    v49 = v29;
    v31 = v24 + 1;
    v32 = 9 * v25;
    v48 = v31;
    while ( 1 )
    {
      v33 = *((_QWORD *)this + 4);
      if ( !v33 )
        v33 = *((_QWORD *)this + 5);
      GreAcquireFastMutex(*(_QWORD *)(*(_QWORD *)(v33 + 784) + 32LL), v28);
      v34 = v48;
      v35 = v30;
LABEL_30:
      if ( v35 >= v29 )
        break;
      for ( i = v21; ; ++i )
      {
        if ( i >= v34 )
        {
          v29 = v49;
          ++v35;
          v21 = v50;
          v32 += 9LL;
          goto LABEL_30;
        }
        v37 = *((_QWORD *)this + 4);
        if ( !v37 )
          v37 = *((_QWORD *)this + 5);
        if ( !EngAcquireSemaphoreNoWait(*(HSEMAPHORE *)(v37 + 8 * (v32 + i) + 120)) )
          break;
        *((_BYTE *)this + v32 + i + 131) = 1;
        v34 = v48;
      }
      v38 = 760LL;
      v39 = (char *)this + 211;
      do
      {
        v40 = 9LL;
        do
        {
          if ( *v39 == 1 )
          {
            v41 = *((_QWORD *)this + 4);
            if ( !v41 )
              v41 = *((_QWORD *)this + 5);
            EngReleaseSemaphore(*(HSEMAPHORE *)(v38 + v41));
            *v39 = 0;
          }
          v38 -= 8LL;
          --v39;
          --v40;
        }
        while ( v40 );
      }
      while ( v38 >= 184 );
      v42 = (struct _PANDEV *)*((_QWORD *)this + 4);
      if ( !v42 )
        v42 = (struct _PANDEV *)*((_QWORD *)this + 5);
      ShadowUnLockWait(v42);
      memset_0((char *)this + 131, 0, 0x51uLL);
      v29 = v49;
      v32 = 9 * v30;
      v21 = v50;
    }
    v43 = *((_QWORD *)this + 4);
    if ( !v43 )
      v43 = *((_QWORD *)this + 5);
    GreReleaseFastMutex(*(_QWORD *)(*(_QWORD *)(v43 + 784) + 32LL));
  }
}
