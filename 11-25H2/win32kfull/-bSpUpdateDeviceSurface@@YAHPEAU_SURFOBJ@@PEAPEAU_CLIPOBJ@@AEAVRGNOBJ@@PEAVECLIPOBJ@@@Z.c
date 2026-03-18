/*
 * XREFs of ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x140260B68
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140011E3C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14004C9F8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14009AC08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14009ACF4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x14009B30C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140132150 (--$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x14014AD50 (--0XDCOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14016CB4C (--0-$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401DCFCC (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJSHARED@$0L@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1402FFF80 (--0-$SEMOBJSHARED@$0L@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1403000A8 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
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
  struct _GRETHREAD *v11; // rsi
  struct Gre::Base::SESSION_GLOBALS *v12; // r13
  Gre::Base *v13; // rcx
  struct Gre::Base::SESSION_GLOBALS *v14; // r15
  Gre::Base *v15; // rcx
  struct Gre::Base::SESSION_GLOBALS *v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // eax
  DC *v20; // rsi
  const wchar_t *v21; // rax
  struct _GRETHREAD *v22; // rax
  bool v23; // zf
  __int64 v25; // r13
  struct RGNOBJ *v26; // r15
  struct REGION *v27; // rax
  __int64 v28; // r10
  HDEV hdev; // rax
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v31; // rax
  __int64 v32; // [rsp+20h] [rbp-60h] BYREF
  HSEMAPHORE v33; // [rsp+28h] [rbp-58h] BYREF
  struct _POINTL v34; // [rsp+30h] [rbp-50h] BYREF
  __int64 v35; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v36[2]; // [rsp+40h] [rbp-40h] BYREF
  char v37; // [rsp+50h] [rbp-30h]
  _BYTE v38[40]; // [rsp+58h] [rbp-28h] BYREF

  v5 = 1;
  CurrentThread = GreGetCurrentThread((__int64)a1, (__int64)a2);
  v11 = CurrentThread;
  if ( !CurrentThread || (*((_DWORD *)CurrentThread + 86) & 1) == 0 || a1->iType != 1 )
    return 1LL;
  v12 = Gre::Base::Globals(v10);
  SEMOBJSHARED<14>::SEMOBJSHARED<14>((HSEMAPHORE *)&v34, v12);
  v14 = Gre::Base::Globals(v13);
  v16 = Gre::Base::Globals(v15);
  v17 = *((_DWORD *)v11 + 89);
  v18 = *((_DWORD *)v16 + 1070);
  if ( v17 != v18 )
  {
    v19 = *((_DWORD *)v14 + 1070);
    if ( v18 > v19 )
    {
      if ( v17 <= v19 || v17 >= v18 )
        goto LABEL_12;
LABEL_11:
      v5 = 0;
      goto LABEL_12;
    }
    if ( v17 < v18 || v17 > v19 )
      goto LABEL_11;
  }
LABEL_12:
  GreReleaseSemaphoreCommon<14,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    *(_QWORD *)&v34);
  if ( v5 || !a2 || !*a2 )
    return v5;
  SEMOBJSHARED<11>::SEMOBJSHARED<11>(&v33, v12);
  XDCOBJ::XDCOBJ((XDCOBJ *)v38);
  v20 = (DC *)*((_QWORD *)v11 + 37);
  if ( v20 )
  {
    v25 = (__int64)*a2;
    v26 = (struct RGNOBJ *)((unsigned __int64)&(*a2)[2].rclBounds.top & -(__int64)(*a2 != 0LL));
    DC::AcquireDcVisRgnShared(v20);
    v35 = *((_QWORD *)v20 + 142);
    v27 = DC::prgnVisSnap(v20);
    v36[0] = v27;
    if ( !v28 || !v27 )
      goto LABEL_37;
    if ( !RGNOBJ::bEqual((RGNOBJ *)v36, (struct RGNOBJ *)&v35) )
    {
      if ( !*(_QWORD *)a3 )
      {
LABEL_37:
        if ( v37 )
          CPushLock::ReleaseLock((CPushLock *)(v36[1] + 1112LL));
        GlobalLockName = GrepGetGlobalLockName(11);
        EtwTraceGreLockReleaseSemaphore(GlobalLockName, v33);
        v31 = GreGetCurrentThreadCrossSessionCheck();
        if ( v31 )
        {
          v23 = (*((_BYTE *)v31 + 19))-- == 1;
          if ( v23 )
            *(_QWORD *)v31 &= ~0x800uLL;
          if ( !*(_QWORD *)v31 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreSharedInternal(v33);
        return v5;
      }
      if ( *(_QWORD *)a3 != *(_QWORD *)v26 )
      {
        if ( RGNOBJ::bCopy(a3, (struct RGNOBJ *)&v35) )
        {
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v32);
          if ( v32 )
          {
            if ( (*(_DWORD *)(*((_QWORD *)v20 + 6) + 40LL) & 0x20000) != 0 )
            {
              hdev = a1->hdev;
              v34.x = -*((_DWORD *)hdev + 644);
              v34.y = -*((_DWORD *)hdev + 645);
              RGNOBJ::bOffset(a3, &v34);
            }
            if ( RGNOBJ::bMerge((RGNOBJ *)&v32, v26, a3, 8u) )
            {
              if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v32) != 1 )
              {
                RGNOBJ::vSwap((RGNOBJ *)&v32, a3);
                XCLIPOBJ::vSetup(a4, *(struct REGION **)a3, (const struct ERECTL *)(v25 + 4), 1);
                if ( !ERECTL::bEmpty((struct ECLIPOBJ *)((char *)a4 + 4)) )
                {
                  *a2 = (struct _CLIPOBJ *)a4;
                  v5 = 1;
                }
              }
            }
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v32);
        }
        goto LABEL_37;
      }
    }
    v5 = 1;
    goto LABEL_37;
  }
  v21 = GrepGetGlobalLockName(11);
  EtwTraceGreLockReleaseSemaphore(v21, v33);
  v22 = GreGetCurrentThreadCrossSessionCheck();
  if ( v22 )
  {
    v23 = (*((_BYTE *)v22 + 19))-- == 1;
    if ( v23 )
      *(_QWORD *)v22 &= ~0x800uLL;
    if ( !*(_QWORD *)v22 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreSharedInternal(v33);
  return 1LL;
}
