/*
 * XREFs of ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x14026ABBC
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??0?$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140013DE8 (--0-$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A9834 (--$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1400BB96C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x140159580 (--0XDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401F2424 (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1401FF70C (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$0L@@@YAXXZ @ 0x14030F040 (--$GrepAcquireLockValidate@$0L@@@YAXXZ.c)
 */

__int64 __fastcall bSpUpdateDeviceSurface(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ **a2,
        struct RGNOBJ *a3,
        struct ECLIPOBJ *a4)
{
  unsigned int v5; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  Gre::Base *v10; // rcx
  struct _GRETHREAD *v11; // r14
  struct Gre::Base::SESSION_GLOBALS *v12; // r12
  Gre::Base *v13; // rcx
  struct Gre::Base::SESSION_GLOBALS *v14; // rdi
  Gre::Base *v15; // rcx
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  HSEMAPHORE v19; // rdi
  DC *v20; // r14
  const wchar_t *v21; // rax
  struct _GRETHREAD *v22; // rax
  bool v23; // zf
  struct RGNOBJ *v25; // r12
  struct REGION *v26; // rax
  __int64 v27; // r10
  HDEV hdev; // rcx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v30; // rax
  __int64 v31; // [rsp+28h] [rbp-48h] BYREF
  __int64 v32; // [rsp+30h] [rbp-40h] BYREF
  struct _POINTL v33; // [rsp+38h] [rbp-38h] BYREF
  struct REGION *v34; // [rsp+40h] [rbp-30h] BYREF
  __int64 v35; // [rsp+48h] [rbp-28h]
  __int64 v36; // [rsp+50h] [rbp-20h] BYREF
  char v37; // [rsp+58h] [rbp-18h]

  v5 = 1;
  CurrentThread = GreGetCurrentThread((__int64)a1);
  v11 = CurrentThread;
  if ( !CurrentThread || (*((_DWORD *)CurrentThread + 84) & 1) == 0 || a1->iType != 1 )
    return 1LL;
  v12 = Gre::Base::Globals(v10);
  SEMOBJSHARED<14>::SEMOBJSHARED<14>((HSEMAPHORE *)&v33, v12);
  v14 = Gre::Base::Globals(v13);
  v16 = *((_DWORD *)Gre::Base::Globals(v15) + 1098);
  v17 = *((_DWORD *)v11 + 87);
  if ( v17 != v16 )
  {
    v18 = *((_DWORD *)v14 + 1098);
    if ( v16 <= v18 )
    {
      if ( v17 < v16 || v17 > v18 )
        goto LABEL_11;
    }
    else if ( v17 > v18 && v17 < v16 )
    {
LABEL_11:
      v5 = 0;
    }
  }
  GreReleaseSemaphoreCommon<14,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    *(_QWORD *)&v33);
  if ( v5 || !a2 || !*a2 )
    return v5;
  v19 = (HSEMAPHORE)(*(_QWORD *)v12 + 1248LL);
  GreAcquireSemaphoreSharedInternal(v19);
  GrepAcquireLockValidate<11>();
  XDCOBJ::XDCOBJ((XDCOBJ *)&v36);
  v20 = (DC *)*((_QWORD *)v11 + 37);
  if ( v20 )
  {
    v35 = (__int64)*a2;
    v25 = (struct RGNOBJ *)((v35 + 56) & -(__int64)(v35 != 0));
    DC::AcquireDcVisRgnShared(v20, (__int64)&v36);
    v32 = *((_QWORD *)v20 + 142);
    v26 = DC::prgnVisSnap(v20);
    v34 = v26;
    if ( !v27 || !v26 )
      goto LABEL_37;
    if ( !RGNOBJ::bEqual((RGNOBJ *)&v34, (struct RGNOBJ *)&v32) )
    {
      if ( !*(_QWORD *)a3 )
      {
LABEL_37:
        if ( v37 )
          GreInnermostPushLock::ReleaseLock((GreInnermostPushLock *)(v36 + 1112));
        GlobalLockName = GrepGetGlobalLockName(11);
        EtwTraceGreLockReleaseSemaphore(GlobalLockName, v19);
        v30 = GreGetCurrentThreadCrossSessionCheck();
        if ( v30 )
        {
          v23 = (*((_BYTE *)v30 + 19))-- == 1;
          if ( v23 )
            *(_QWORD *)v30 &= ~0x800uLL;
          if ( !*(_QWORD *)v30 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreSharedInternal(v19);
        return v5;
      }
      if ( *(_QWORD *)a3 != *(_QWORD *)v25 )
      {
        if ( RGNOBJ::bCopy(a3, (struct RGNOBJ *)&v32) )
        {
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v31);
          if ( v31 )
          {
            if ( (*(_DWORD *)(*((_QWORD *)v20 + 6) + 40LL) & 0x20000) != 0 )
            {
              hdev = a1->hdev;
              v33.x = -*((_DWORD *)hdev + 644);
              v33.y = -*((_DWORD *)hdev + 645);
              RGNOBJ::bOffset(a3, &v33);
            }
            if ( RGNOBJ::bMerge((RGNOBJ *)&v31, v25, a3, 8u) )
            {
              if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v31) != 1 )
              {
                RGNOBJ::vSwap((RGNOBJ *)&v31, a3);
                XCLIPOBJ::vSetup(a4, *(struct REGION **)a3, (const struct ERECTL *)(v35 + 4), 1);
                if ( !ERECTL::bEmpty((struct ECLIPOBJ *)((char *)a4 + 4)) )
                {
                  *a2 = (struct _CLIPOBJ *)a4;
                  v5 = 1;
                }
              }
            }
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v31);
        }
        goto LABEL_37;
      }
    }
    v5 = 1;
    goto LABEL_37;
  }
  v21 = GrepGetGlobalLockName(11);
  EtwTraceGreLockReleaseSemaphore(v21, v19);
  v22 = GreGetCurrentThreadCrossSessionCheck();
  if ( v22 )
  {
    v23 = (*((_BYTE *)v22 + 19))-- == 1;
    if ( v23 )
      *(_QWORD *)v22 &= ~0x800uLL;
    if ( !*(_QWORD *)v22 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreSharedInternal(v19);
  return 1LL;
}
