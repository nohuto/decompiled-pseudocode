/*
 * XREFs of ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x140070C10
 * Callers:
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019CA20 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     GreAcquireHmgrSemaphore @ 0x14001A530 (GreAcquireHmgrSemaphore.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x140045580 (GreReleaseHmgrSemaphore.c)
 *     HmgSafeNextObjt @ 0x1400726E0 (HmgSafeNextObjt.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1401C66EC (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 */

void __fastcall DrvBackoutRedirectionDeviceBitmap(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 i; // rcx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  struct SURFACE *v6; // rcx
  struct SURFACE *v7; // [rsp+30h] [rbp+8h] BYREF
  HSEMAPHORE v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  SEMOBJ<20>::SEMOBJ<20>(&v8);
  for ( i = 0LL; ; i = v5 )
  {
    LOBYTE(v2) = 5;
    v5 = HmgSafeNextObjt(i, v2, &v7);
    if ( !v5 )
      break;
    GreReleaseHmgrSemaphore(v4);
    v6 = v7;
    if ( *((_QWORD *)v7 + 5) == a1[223] && (*((_DWORD *)v7 + 29) & 1) != 0 )
      vCleanupRedirectionSurface(v7, 1);
    GreAcquireHmgrSemaphore((__int64)v6);
  }
  SEMOBJ<20>::vUnlock(&v8);
}
