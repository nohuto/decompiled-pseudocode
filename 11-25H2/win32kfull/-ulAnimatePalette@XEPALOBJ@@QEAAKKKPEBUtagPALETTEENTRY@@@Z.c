/*
 * XREFs of ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x140312354
 * Callers:
 *     GreAnimatePalette @ 0x140310750 (GreAnimatePalette.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140077E90 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14008D870 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x14009344C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140093A10 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140095C98 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D7D10 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall XEPALOBJ::ulAnimatePalette(
        XEPALOBJ *this,
        unsigned int a2,
        int a3,
        const struct tagPALETTEENTRY *a4)
{
  __int64 v5; // rsi
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // r8
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // r12
  unsigned int v13; // edi
  __int64 v14; // r14
  unsigned __int8 *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  char *v19; // r15
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rdx
  void (__fastcall *v24)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  HSEMAPHORE v25; // rbx
  struct _GRETHREAD *v26; // rax
  __int64 v28; // [rsp+30h] [rbp-30h] BYREF
  __int64 v29; // [rsp+38h] [rbp-28h] BYREF
  HSEMAPHORE v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+48h] [rbp-18h] BYREF
  _BYTE v32[16]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v33; // [rsp+90h] [rbp+30h] BYREF

  v5 = a2;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v29);
  v9 = Gre::Base::Globals(v8);
  v10 = *(_QWORD *)this;
  if ( *(_QWORD *)this == *((_QWORD *)v9 + 471) )
    goto LABEL_36;
  if ( !a4 )
    goto LABEL_36;
  v11 = *(_DWORD *)(v10 + 28);
  if ( (unsigned int)v5 >= v11 )
    goto LABEL_36;
  if ( (int)v5 + a3 > v11 )
    a3 = v11 - v5;
  if ( !a3 )
  {
LABEL_36:
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v29);
    return 0LL;
  }
  v12 = v5;
  v13 = 0;
  v14 = *(_QWORD *)(v10 + 112) + 4 * v5;
  v15 = 0LL;
  v28 = 0LL;
  SEMOBJ<13>::SEMOBJ<13>(&v30, v9);
  v16 = *(_QWORD *)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 56LL) )
  {
    v17 = *(_QWORD *)(v16 + 48);
    if ( (*(_DWORD *)(v17 + 2156) & 0x100) != 0 )
    {
      v28 = *(_QWORD *)(v17 + 1792);
      v18 = *(_QWORD *)(v16 + 80);
      if ( v18 )
        v15 = (unsigned __int8 *)(v18 + v12 + 4);
    }
  }
  v19 = (char *)a4 - v14;
  do
  {
    v20 = *(_DWORD *)&v19[v14];
    --a3;
    v21 = (*(_BYTE *)(v14 + 3) & 1) == 0;
    LODWORD(v33) = v20;
    if ( v21 )
    {
      if ( !v15 )
        goto LABEL_18;
    }
    else
    {
      ++v13;
      *(_DWORD *)v14 = v20;
      if ( !v15 )
        goto LABEL_18;
      v22 = *v15;
      v23 = *(_QWORD *)(v28 + 112);
      if ( (*(_BYTE *)(v23 + 4 * v22 + 3) & 1) != 0 )
      {
        BYTE3(v33) = *(_BYTE *)(v23 + 4 * v22 + 3);
        *(_DWORD *)(v23 + 4 * v22) = v33;
      }
    }
    ++v15;
LABEL_18:
    v14 += 4LL;
  }
  while ( a3 );
  SEMOBJ<13>::vUnlock(&v30);
  if ( v15 )
  {
    v33 = *(_QWORD *)(*(_QWORD *)this + 48LL);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v32, (struct PDEVOBJ *)&v33);
    SEMOBJ<4>::SEMOBJ<4>((HSEMAPHORE *)&v31, (__int64)&v33);
    SEMOBJ<8>::SEMOBJ<8>(&v30, (__int64)&v33);
    if ( (*(_DWORD *)(v33 + 2156) & 0x100) != 0 && (*(_DWORD *)(v33 + 40) & 0x400) == 0 )
    {
      v24 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v33 + 1752);
      if ( v24 )
        v24(*(_QWORD *)(*(_QWORD *)(v33 + 24) + 1784LL), &v28, 0LL, 0LL, *(_DWORD *)(v28 + 28));
      else
        v13 = 0;
    }
    v25 = v30;
    if ( v30 )
    {
      EtwTraceGreLockReleaseSemaphore(L"DevLock", v30);
      v26 = GreGetCurrentThreadCrossSessionCheck();
      if ( v26 )
      {
        v21 = (*((_BYTE *)v26 + 16))-- == 1;
        if ( v21 )
          *(_QWORD *)v26 &= ~0x100uLL;
        if ( !*(_QWORD *)v26 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v25);
    }
    if ( v31 )
      GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v31);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v32);
  }
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v29);
  return v13;
}
