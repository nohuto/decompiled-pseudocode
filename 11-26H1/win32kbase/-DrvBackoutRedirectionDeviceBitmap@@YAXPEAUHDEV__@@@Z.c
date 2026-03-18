/*
 * XREFs of ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x1401994C4
 * Callers:
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019F8AC (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001AFC0 (--$GreReleaseSemaphoreExclusive@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B36C (--$GreAcquireSemaphore@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     HmgSafeNextObjt @ 0x140032210 (HmgSafeNextObjt.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1401F12B0 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 */

void __fastcall DrvBackoutRedirectionDeviceBitmap(_QWORD *a1)
{
  __int64 i; // rcx
  __int64 *v3; // rdi
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // edx
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int Objt; // ebx
  int v11; // r8d
  struct SURFACE *v12; // [rsp+30h] [rbp+8h] BYREF
  HSEMAPHORE v13; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0LL;
  SEMOBJ<20>::SEMOBJ<20>(&v13);
  for ( i = 0LL; ; i = Objt )
  {
    Objt = HmgSafeNextObjt(i, 5, (__int64 **)&v12);
    if ( !Objt )
      break;
    v3 = *(__int64 **)(W32GetSessionState(v9) + 88);
    GreReleaseSemaphoreExclusive<20,>(v3, v4, v5);
    if ( *((_QWORD *)v12 + 5) == a1[223] && (*((_DWORD *)v12 + 29) & 1) != 0 )
      vCleanupRedirectionSurface(v12, 1);
    GreAcquireSemaphore<20,>(v3, v6, v7);
  }
  SEMOBJ<20>::vUnlock(&v13, v8, v11);
}
