/*
 * XREFs of ?bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x140322A34
 * Callers:
 *     ??0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z @ 0x140320F44 (--0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x140114094 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x140295528 (-ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z.c)
 *     ?vUnLockShadowR@MULTIPANSURFLOCK@@QEAAXXZ @ 0x14032368C (-vUnLockShadowR@MULTIPANSURFLOCK@@QEAAXXZ.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall MULTIPANSURFLOCK::bTryLockShadowR(MULTIPANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r15
  int v13; // eax
  __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // r14
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // esi
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // r15
  __int64 v25; // rsi
  __int64 v26; // r12
  __int64 i; // rbx
  __int64 v28; // rcx
  __int64 v29; // rsi
  _BYTE *v30; // rbx
  __int64 v31; // r14
  __int64 v32; // rcx
  struct _PANDEV *v33; // rcx
  __int64 result; // rax
  __int64 v35; // rcx
  signed __int32 v36[8]; // [rsp+0h] [rbp-40h] BYREF
  __int128 v37; // [rsp+20h] [rbp-20h] BYREF
  __int64 v38; // [rsp+30h] [rbp-10h] BYREF
  int v39; // [rsp+38h] [rbp-8h]
  int v40; // [rsp+3Ch] [rbp-4h]
  __int64 v41; // [rsp+80h] [rbp+40h]

  v37 = (__int128)*a2;
  ERECTL::vOrder((ERECTL *)&v37);
  v4 = *((_QWORD *)this + 4);
  v5 = v4;
  if ( !v4 )
    v5 = *((_QWORD *)this + 5);
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 64) + 36LL);
  v7 = *((_QWORD *)this + 4);
  if ( !v4 )
    v7 = *((_QWORD *)this + 5);
  v8 = *(_QWORD *)(v7 + 64);
  v40 = v6;
  v38 = 0LL;
  v39 = *(_DWORD *)(v8 + 32);
  ERECTL::operator*=((int *)&v37, (int *)&v38);
  if ( ERECTL::bEmpty((ERECTL *)&v37) )
    return 1LL;
  v9 = v4;
  if ( !v4 )
    v9 = *((_QWORD *)this + 5);
  v10 = (unsigned int)v37 / *(_DWORD *)(v9 + 768);
  v11 = v4;
  v12 = v10;
  if ( !v4 )
    v11 = *((_QWORD *)this + 5);
  v13 = DWORD2(v37) / *(_DWORD *)(v11 + 768);
  v14 = v4;
  v15 = v13;
  if ( !v4 )
    v14 = *((_QWORD *)this + 5);
  v16 = DWORD1(v37) / *(_DWORD *)(v14 + 772);
  if ( !v4 )
    v4 = *((_QWORD *)this + 5);
  v17 = HIDWORD(v37) / *(_DWORD *)(v4 + 772);
  *((_BYTE *)this + 48) = 1;
  v18 = v17 + 1;
  memset_0((char *)this + 50, 0, 0x51uLL);
  v20 = *((_QWORD *)this + 4);
  v21 = v15 + 1;
  if ( !v20 )
    v20 = *((_QWORD *)this + 5);
  GreAcquireFastMutex(*(_QWORD *)(*(_QWORD *)(v20 + 784) + 32LL), v19);
  v22 = v12;
  v23 = v21;
  v41 = v12;
  v24 = 9 * v16;
  v25 = v16;
  v26 = v18;
LABEL_17:
  if ( v25 >= v26 )
  {
    v35 = *((_QWORD *)this + 4);
    if ( !v35 )
      v35 = *((_QWORD *)this + 5);
    GreReleaseFastMutex(*(_QWORD *)(*(_QWORD *)(v35 + 784) + 32LL));
    return 1LL;
  }
  for ( i = v22; ; ++i )
  {
    if ( i >= v23 )
    {
      v22 = v41;
      ++v25;
      v24 += 9LL;
      goto LABEL_17;
    }
    v28 = *((_QWORD *)this + 4);
    if ( !v28 )
      v28 = *((_QWORD *)this + 5);
    if ( (unsigned int)EngAcquireSemaphoreSharedNoWait(*(_QWORD *)(v28 + 8 * (v24 + i) + 120)) != 1 )
      break;
    *((_BYTE *)this + v24 + i + 50) = 1;
  }
  v29 = 760LL;
  v30 = (char *)this + 211;
  do
  {
    v31 = 9LL;
    do
    {
      if ( *v30 == 1 )
      {
        v32 = *((_QWORD *)this + 4);
        if ( !v32 )
          v32 = *((_QWORD *)this + 5);
        EngReleaseSemaphore(*(HSEMAPHORE *)(v29 + v32));
        *v30 = 0;
      }
      v29 -= 8LL;
      --v30;
      --v31;
    }
    while ( v31 );
  }
  while ( v29 >= 184 );
  memset_0((char *)this + 131, 0, 0x51uLL);
  _InterlockedOr(v36, 0);
  MULTIPANSURFLOCK::vUnLockShadowR(this);
  v33 = (struct _PANDEV *)*((_QWORD *)this + 4);
  if ( !v33 )
    v33 = (struct _PANDEV *)*((_QWORD *)this + 5);
  ShadowUnLockWait(v33);
  memset_0((char *)this + 50, 0, 0x51uLL);
  result = 0LL;
  *((_BYTE *)this + 48) = 0;
  return result;
}
