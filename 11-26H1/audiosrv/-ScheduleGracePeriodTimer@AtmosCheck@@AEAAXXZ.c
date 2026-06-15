/*
 * XREFs of ?ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ @ 0x180157870
 * Callers:
 *     _lambda_845333a8787d1c1be8cc0a92f929247d_::operator() @ 0x180155298 (_lambda_845333a8787d1c1be8cc0a92f929247d_--operator().c)
 *     _lambda_f74592632540feccec9f4b5e07595a4c_::operator() @ 0x1801555FC (_lambda_f74592632540feccec9f4b5e07595a4c_--operator().c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180065358 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EV_ea_180065358.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180068A54 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall AtmosCheck::ScheduleGracePeriodTimer(char *pv)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  PTP_TIMER ThreadpoolTimer; // rax
  signed int LastError; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned int pvData; // [rsp+70h] [rbp+30h] BYREF
  DWORD pcbData; // [rsp+78h] [rbp+38h] BYREF
  struct _FILETIME pftDueTime; // [rsp+80h] [rbp+40h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(pv + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(pv + 56));
  if ( pv[217] )
  {
    if ( !pv[216] && !*((_QWORD *)pv + 26) && pv[265] && pv[264] )
    {
      ThreadpoolTimer = CreateThreadpoolTimer(AtmosCheck::StaticGracePeriodExpiredFired, pv, 0LL);
      *((_QWORD *)pv + 26) = ThreadpoolTimer;
      if ( ThreadpoolTimer )
      {
        v8 = 0;
        pcbData = 4;
        pvData = 0;
        if ( !RegGetValueW(
                HKEY_LOCAL_MACHINE,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Policy\\Spatial",
                L"SpatialAudioLicenseCheckStartDelay",
                0x18u,
                0LL,
                &pvData,
                &pcbData)
          && pvData <= 0xDBBA0 )
        {
          v8 = pvData;
        }
        if ( !v8 )
          v8 = 5;
        if ( (unsigned int)CallbackContext > 5 )
        {
          pvData = v8;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            v9,
            byte_1801AEB9D,
            v10,
            v11,
            (__int64)&pvData);
        }
        pftDueTime = (struct _FILETIME)(-10000LL * v8);
        SetThreadpoolTimer(*((PTP_TIMER *)pv + 26), &pftDueTime, 0, 0);
        if ( (unsigned int)CallbackContext > 5 )
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            v12,
            byte_1801AEFB1);
      }
      else
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( (unsigned int)CallbackContext > 5 )
        {
          pvData = LastError;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            v5,
            byte_1801AF086,
            v6,
            v7,
            (__int64)&pvData);
        }
      }
    }
  }
  else
  {
    pv[216] = 1;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
}
