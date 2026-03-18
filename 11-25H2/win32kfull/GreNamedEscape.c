/*
 * XREFs of GreNamedEscape @ 0x140263B94
 * Callers:
 *     NtGdiExtEscape @ 0x140167C30 (NtGdiExtEscape.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14001922C (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     UmfdFontManagement @ 0x14010AF00 (UmfdFontManagement.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1401D06F4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledDeviceUsageNoInline @ 0x140338E9C (Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall GreNamedEscape(wchar_t *Str1, unsigned int a2, unsigned int a3, void *a4, unsigned int a5, void *a6)
{
  unsigned int v10; // ebx
  __int64 v12; // rcx
  volatile signed __int32 *CurrentProcessWin32Process; // rax
  volatile signed __int32 *v14; // rdx
  int v15; // r8d
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  __int64 v18; // r8
  __int64 v19; // r9
  BOOL v20; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v21[5]; // [rsp+44h] [rbp-14h] BYREF

  v10 = 0;
  if ( (unsigned int)Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !_wcsicmp(Str1, L"atmlib.dll") )
      goto LABEL_3;
    if ( !_wcsicmp(Str1, L"atmfd.dll") )
    {
      CurrentProcessWin32Process = (volatile signed __int32 *)PsGetCurrentProcessWin32Process(v12);
      v14 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process )
        {
          if ( a2 - 9473 <= 0x13 )
          {
            v15 = 1 << (a2 - 1);
            _m_prefetchw((const void *)(CurrentProcessWin32Process + 73));
            v16 = *((_DWORD *)CurrentProcessWin32Process + 73);
            do
            {
              v17 = v16;
              v16 = _InterlockedCompareExchange(v14 + 73, v15 | v16, v16);
            }
            while ( v17 != v16 );
            if ( (v16 & v15) == 0 )
            {
              RtlGetCurrentServiceSessionId();
              if ( (unsigned int)dword_14039BBC0 > 5 )
              {
                if ( tlgKeywordOn((__int64)&dword_14039BBC0, 0x400000000000LL) )
                {
                  v21[0] = a2;
                  v20 = v19 != 0;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)&dword_14039BBC0,
                    byte_14036C40D,
                    v18,
                    v19,
                    (__int64)v21,
                    (__int64)&v20);
                }
              }
            }
          }
        }
      }
      goto LABEL_3;
    }
    return 3221225474LL;
  }
  if ( _wcsicmp(Str1, L"atmfd.dll") )
    return 3221225474LL;
LABEL_3:
  if ( a2 == 256 || a2 - 9473 <= 0x13 )
  {
    UmfdHostLifeTimeManager::EnsureUmfdHost();
    return (unsigned int)UmfdFontManagement(0LL, 0LL, a2, a3, a4, a5, a6);
  }
  return v10;
}
