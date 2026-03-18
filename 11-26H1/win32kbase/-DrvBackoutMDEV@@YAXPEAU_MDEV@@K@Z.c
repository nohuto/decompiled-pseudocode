/*
 * XREFs of ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019F8AC
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028120 (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028174 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z @ 0x140030770 (-DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z @ 0x14013B3D4 (-DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x1401994C4 (-DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z.c)
 */

void __fastcall DrvBackoutMDEV(struct _MDEV *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  int v4; // edx
  struct _ERESOURCE **v5; // rdi
  int v6; // r8d
  unsigned int v7; // eax
  HDEV v8; // rbx
  int v9; // edx
  int v10; // r8d
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  int v14; // r8d
  struct _ERESOURCE *v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rsi
  int v18; // r8d
  int v19; // edx
  int v20; // r8d
  _QWORD *v21; // [rsp+40h] [rbp+8h] BYREF
  struct _ERESOURCE *v22; // [rsp+50h] [rbp+18h] BYREF

  WdLogSingleEntry1(4LL, a1);
  WdLogGlobalForLineNumber = 19909;
  v3 = 0;
  v5 = *(struct _ERESOURCE ***)(W32GetSessionState(v2) + 88);
  v7 = *((_DWORD *)a1 + 5);
  if ( v7 )
  {
    do
    {
      v21 = (_QWORD *)*((_QWORD *)a1 + 7 * v3 + 5);
      v8 = (HDEV)v21;
      DrvBackoutRedirectionDeviceBitmap(v21);
      GreAcquireSemaphore<19,>(v5, v9, v10);
      if ( *((_DWORD *)v8 + 3) == 1 )
      {
        GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          (__int64)*v5,
          v11);
        DrvDisableDisplay((struct PDEVOBJ *)&v21, 0);
        GreAcquireSemaphore<19,>(v5, v12, v13);
        v8 = (HDEV)v21;
      }
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        (__int64)*v5,
        v11);
      SEMOBJ<19>::SEMOBJ<19>(&v22, v5);
      v15 = v22;
      --*((_DWORD *)v8 + 3);
      if ( v15 )
      {
        GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          (__int64)v15,
          v14);
        v22 = 0LL;
      }
      PDEVOBJ::vUnreferencePdev((HDEV *)&v21, (struct Gre::Base::SESSION_GLOBALS *)v5);
      v7 = *((_DWORD *)a1 + 5);
      ++v3;
    }
    while ( v3 < v7 );
  }
  v16 = 0;
  if ( v7 )
  {
    do
    {
      v17 = *((_QWORD *)a1 + 7 * v16 + 6);
      if ( v17 )
      {
        v21 = (_QWORD *)*((_QWORD *)a1 + 7 * v16 + 6);
        GreAcquireSemaphore<19,>(v5, v4, v6);
        if ( *(_DWORD *)(v17 + 12) == 1 )
        {
          GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
            (__int64)*v5,
            v18);
          DrvEnableDisplay((struct PDEVOBJ *)&v21);
          GreAcquireSemaphore<19,>(v5, v19, v20);
        }
        GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          (__int64)*v5,
          v18);
      }
      ++v16;
    }
    while ( v16 < *((_DWORD *)a1 + 5) );
  }
}
