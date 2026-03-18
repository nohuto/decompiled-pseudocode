/*
 * XREFs of ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019CA20
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004E29C (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004E2F4 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x14006E3A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x140070C10 (-DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140071E64 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x14007230C (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 */

void __fastcall DrvBackoutMDEV(struct _MDEV *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebp
  struct _ERESOURCE **v4; // rbx
  unsigned int v5; // eax
  HDEV v6; // rdi
  struct _ERESOURCE *v7; // rdx
  unsigned int v8; // edi
  HDEV v9; // rbp
  struct _ERESOURCE *v10; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+50h] [rbp+18h] BYREF

  WdLogSingleEntry1(4LL, a1);
  WdLogGlobalForLineNumber = 20360;
  v3 = 0;
  v4 = *(struct _ERESOURCE ***)(W32GetSessionState(v2) + 88);
  v5 = *((_DWORD *)a1 + 5);
  if ( v5 )
  {
    do
    {
      v11 = (_QWORD *)*((_QWORD *)a1 + 7 * v3 + 5);
      v6 = (HDEV)v11;
      DrvBackoutRedirectionDeviceBitmap(v11);
      GreAcquireSemaphore<19,>(v4);
      if ( *((_DWORD *)v6 + 3) == 1 )
      {
        GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          (__int64)*v4);
        DrvDisableDisplay(v6, 0);
        GreAcquireSemaphore<19,>(v4);
      }
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        (__int64)*v4);
      SEMOBJ<19>::SEMOBJ<19>(&v10, v4);
      v7 = v10;
      --*((_DWORD *)v6 + 3);
      if ( v7 )
      {
        GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          (__int64)v7);
        v10 = 0LL;
      }
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v11);
      v5 = *((_DWORD *)a1 + 5);
      ++v3;
    }
    while ( v3 < v5 );
  }
  v8 = 0;
  if ( v5 )
  {
    do
    {
      v9 = (HDEV)*((_QWORD *)a1 + 7 * v8 + 6);
      if ( v9 )
      {
        GreAcquireSemaphore<19,>(v4);
        if ( *((_DWORD *)v9 + 3) == 1 )
        {
          GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
            (__int64)*v4);
          DrvEnableDisplay(v9);
          GreAcquireSemaphore<19,>(v4);
        }
        GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          (__int64)*v4);
      }
      ++v8;
    }
    while ( v8 < *((_DWORD *)a1 + 5) );
  }
}
