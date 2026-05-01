/*
 * XREFs of ??$UndockedSearchAppExperienceManager_OnPriorityBoostProcessed@AEBJAEB_NAEA_N@SearchAppExperienceManagerTelemetry@@SAXAEBJAEB_NAEA_N@Z @ 0x18018D2BC
 * Callers:
 *     ?BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18018D1A0 (-BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BCA70 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018D478 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

const struct _tlgProvider_t *__fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnPriorityBoostProcessed<long const &,bool const &,bool &>(
        int *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3)
{
  const struct _tlgProvider_t *result; // rax
  int v7; // r9d
  int v8; // edx
  int v9; // r8d
  int v10; // [rsp+40h] [rbp-18h] BYREF
  int v11; // [rsp+44h] [rbp-14h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  result = SearchAppLauncherLogging::Provider((__int64)a1);
  if ( *(_DWORD *)result > 4u )
  {
    v8 = *a2;
    v9 = *a3;
    v11 = *a1;
    v10 = v8;
    v12 = 0x1000000LL;
    v13 = v9;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_1807FA684,
                                            v9,
                                            v7,
                                            (__int64)&v11,
                                            (__int64)&v10,
                                            (__int64)&v13,
                                            (__int64)&v12);
  }
  return result;
}
