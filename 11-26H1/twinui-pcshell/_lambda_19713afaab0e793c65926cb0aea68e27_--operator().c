/*
 * XREFs of _lambda_19713afaab0e793c65926cb0aea68e27_::operator() @ 0x18048BF9C
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_ee2025788965756f05953a4434f1e483___::Invoke @ 0x18048D0B0 (CAsyncCallbackWithLambda__lambda_ee2025788965756f05953a4434f1e483___--Invoke.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18000A59C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x1801085C4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x180252228 (-_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18048D374 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x18048DC98 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_19713afaab0e793c65926cb0aea68e27_::operator()(
        int **a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  int *v4; // rax
  bool v6; // di
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  int *v10; // rcx
  int v11; // edx
  int *v12; // rcx
  __int64 v13; // rcx
  int v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+68h] [rbp+10h]
  const char *v17; // [rsp+70h] [rbp+18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v4 = *a1;
  v15 = 0;
  v6 = 0;
  if ( v4[118] > 0 )
  {
    SHRegGetBOOLWithREGSAM(HKEY_CURRENT_USER, L"Software\\Microsoft\\Input\\EC", L"Enabled", a4, &v15);
    if ( v15 )
      v6 = 1;
  }
  v7 = GazeUITraceLogging::Provider();
  if ( *(_DWORD *)v7 > 5u )
  {
    v10 = *a1;
    LOBYTE(v15) = v6;
    v11 = v10[118];
    v17 = "AccessibilityExperienceManager::OnNotificationEvent";
    v16 = v11;
    v18 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (__int64)v7,
      (__int64)&unk_180810F87,
      v8,
      v9,
      (__int64)&v18,
      &v17);
  }
  v12 = *a1;
  if ( v6 )
  {
    if ( !*((_BYTE *)v12 + 465)
      && (int)AccessibilityExperienceManager::_CreateModalExperienceAsync((AccessibilityExperienceManager *)v12) >= 0 )
    {
      *((_BYTE *)*a1 + 465) = 1;
      v13 = *((_QWORD *)*a1 + 47);
      if ( v13 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 40LL))(v13, 0LL);
    }
  }
  else
  {
    AccessibilityExperienceManager::_DismissView(
      (AccessibilityExperienceManager *)v12,
      (struct AccessibilityViewInfo *)(v12 + 92));
  }
  return 0LL;
}
