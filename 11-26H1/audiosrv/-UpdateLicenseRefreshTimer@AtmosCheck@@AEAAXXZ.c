/*
 * XREFs of ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1800815F4
 * Callers:
 *     _lambda_0b797c3ec2b40741812a9b93d57ea05e_::operator() @ 0x180037B94 (_lambda_0b797c3ec2b40741812a9b93d57ea05e_--operator().c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x180156DC8 (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x180157E44 (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180068A54 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?GetNearestLicenseExpiryDate@AtmosCheck@@AEAA_KXZ @ 0x180155DBC (-GetNearestLicenseExpiryDate@AtmosCheck@@AEAA_KXZ.c)
 */

void __fastcall AtmosCheck::UpdateLicenseRefreshTimer(AtmosCheck *pv)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int LastError; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 NearestLicenseExpiryDate; // rax
  unsigned __int64 v8; // rcx
  struct _TP_TIMER *v9; // rcx
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  ThreadpoolTimer = (struct _TP_TIMER *)*((_QWORD *)pv + 25);
  if ( ThreadpoolTimer
    || (ThreadpoolTimer = CreateThreadpoolTimer(
                            (PTP_TIMER_CALLBACK)AtmosCheck::StaticAtmosRefreshTimerCallback,
                            pv,
                            0LL),
        (*((_QWORD *)pv + 25) = ThreadpoolTimer) != 0LL) )
  {
    if ( *((_BYTE *)pv + 217) )
    {
      if ( *((_BYTE *)pv + 216) )
      {
        NearestLicenseExpiryDate = AtmosCheck::GetNearestLicenseExpiryDate(pv);
        if ( NearestLicenseExpiryDate )
        {
          v8 = *((_QWORD *)pv + 29);
          if ( !v8 || NearestLicenseExpiryDate < v8 )
            AtmosCheck::SetExpiryTimer(pv, NearestLicenseExpiryDate);
        }
      }
    }
    else if ( !IsThreadpoolTimerSet(ThreadpoolTimer) )
    {
      v9 = (struct _TP_TIMER *)*((_QWORD *)pv + 25);
      pftDueTime.dwHighDateTime = -1;
      pftDueTime.dwLowDateTime = 1294967296;
      SetThreadpoolTimer(v9, &pftDueTime, 0x5265C00u, 0x7530u);
    }
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( (unsigned int)CallbackContext > 5 )
    {
      pftDueTime.dwLowDateTime = LastError;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v4,
        byte_1801AF156,
        v5,
        v6,
        (__int64)&pftDueTime);
    }
  }
}
