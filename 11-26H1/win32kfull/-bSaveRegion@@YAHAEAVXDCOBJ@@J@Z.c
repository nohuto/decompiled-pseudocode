/*
 * XREFs of ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x1400771BC
 * Callers:
 *     ?GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z @ 0x140076DCC (-GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14006AB10 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14007E3C0 (-vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bSaveRegion(struct XDCOBJ *a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  HDC v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // [rsp+28h] [rbp-19h] BYREF
  __int64 v13; // [rsp+30h] [rbp-11h] BYREF
  __int64 v14; // [rsp+38h] [rbp-9h] BYREF
  int v15; // [rsp+40h] [rbp-1h]
  __int64 v16; // [rsp+48h] [rbp+7h]
  __int64 v17; // [rsp+50h] [rbp+Fh]
  __int128 v18; // [rsp+58h] [rbp+17h] BYREF
  struct _RECTL v19; // [rsp+78h] [rbp+37h] BYREF

  v2 = *(_QWORD *)a1;
  v3 = 0;
  if ( a2 == 1 )
  {
    v10 = *(_QWORD *)(v2 + 512);
    v19.top = HIDWORD(v10);
    v19.right = v10;
    v19.left = 0;
    v19.bottom = 0;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12);
    if ( v12 )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) )
      {
        SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v13, *((_QWORD *)a1 + 2));
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v13);
      }
      RGNOBJ::vSet((RGNOBJ *)&v12, &v19);
      v11 = *(_QWORD *)a1;
      GreInnermostPushLock::AcquireLockExclusive((GreInnermostPushLock *)(*(_QWORD *)a1 + 1112LL));
      *(_QWORD *)(*(_QWORD *)a1 + 1136LL) = v12;
      GreInnermostPushLock::ReleaseLock((GreInnermostPushLock *)(v11 + 1112));
      return 1LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v5 = *(HDC *)(v2 + 112);
    v16 = *((_QWORD *)a1 + 2);
    v17 = 0LL;
    v14 = 0LL;
    v15 = 0;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(&v18);
    DCOBJ::vLock((DCOBJ *)&v14, v5);
    v6 = v14;
    if ( v14 )
    {
      v7 = *(_QWORD *)(v14 + 168);
      if ( v7 )
      {
        ++*(_DWORD *)(v7 + 76);
        v6 = v14;
      }
      v8 = *(_QWORD *)(v6 + 160);
      if ( v8 )
        ++*(_DWORD *)(v8 + 76);
      v3 = 1;
    }
    DCOBJ::~DCOBJ((DCOBJ *)&v14);
    return v3;
  }
}
