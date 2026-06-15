/*
 * XREFs of ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18007C7DC
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18002C660 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall IsOffloadDisabled(struct IMMDevice *a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  int v3; // edi
  __int64 v4; // rcx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0;
  *(_OWORD *)pvar = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v2 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v8);
  v3 = v2;
  if ( v2 < 0 )
  {
    AudSrvTraceLoggingErrorHelper("TryGetDevicePropertyStore", 1332, v2);
LABEL_5:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyStoreProperty", 2059, v3);
    goto LABEL_6;
  }
  v4 = v8;
  if ( !v8 )
    goto LABEL_7;
  v3 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v8 + 40LL))(
         v8,
         &PKEY_Endpoint_AllowOffloading,
         pvar);
  if ( v3 < 0 )
    goto LABEL_5;
LABEL_6:
  v4 = v8;
LABEL_7:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v3 >= 0 )
  {
    if ( LOWORD(pvar[0]) )
      LOBYTE(v1) = LOWORD(pvar[1]) == 0;
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      27LL,
      &WPP_55a927f0784e38de47faa537a644ca17_Traceguids,
      (unsigned int)v3);
  }
  PropVariantClear(pvar);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_55a927f0784e38de47faa537a644ca17_Traceguids, v1);
  }
  return v1;
}
