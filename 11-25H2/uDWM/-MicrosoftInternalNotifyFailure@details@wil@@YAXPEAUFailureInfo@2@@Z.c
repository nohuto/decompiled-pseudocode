/*
 * XREFs of ?MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z @ 0x18009E410
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_GetKernelBaseProcAddress@@YAP6A_JXZPEBD@Z @ 0x180098A1C (-wil_details_GetKernelBaseProcAddress@@YAP6A_JXZPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::MicrosoftInternalNotifyFailure(wil::details *this, struct wil::FailureInfo *a2)
{
  FARPROC KernelBaseProcAddress; // rax
  _DWORD v4[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v5; // [rsp+28h] [rbp-28h]
  char v6; // [rsp+30h] [rbp-20h]
  char v7; // [rsp+31h] [rbp-1Fh]
  __int16 v8; // [rsp+32h] [rbp-1Eh]
  int v9; // [rsp+34h] [rbp-1Ch]
  __int16 v10; // [rsp+38h] [rbp-18h]
  __int16 v11; // [rsp+3Ah] [rbp-16h]
  int v12; // [rsp+3Ch] [rbp-14h]
  __int64 v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+48h] [rbp-8h]
  __int64 v15; // [rsp+60h] [rbp+10h] BYREF

  v4[1] = 0;
  v7 = 0;
  v9 = 0;
  v11 = 0;
  v4[0] = *((_DWORD *)this + 2);
  v5 = *((_QWORD *)this + 3);
  v6 = *(_BYTE *)this;
  v8 = wil::g_moduleFailureReportFlags;
  v10 = *((_WORD *)this + 32);
  v12 = 0;
  v13 = *((_QWORD *)this + 7);
  v14 = *((_QWORD *)this + 16);
  v15 = 0LL;
  KernelBaseProcAddress = (FARPROC)`wil::details::WilFailureNotifyWatchers'::`2'::s_pfnFailureNotifyWatchers;
  if ( `wil::details::WilFailureNotifyWatchers'::`2'::s_pfnFailureNotifyWatchers
    || (KernelBaseProcAddress = wil_details_GetKernelBaseProcAddress("WilFailureNotifyWatchers"),
        (`wil::details::WilFailureNotifyWatchers'::`2'::s_pfnFailureNotifyWatchers = (__int64)KernelBaseProcAddress) != 0) )
  {
    ((void (__fastcall *)(_QWORD, _DWORD *, __int64 *))KernelBaseProcAddress)(0LL, v4, &v15);
  }
  *((_DWORD *)this + 4) = v15;
  switch ( BYTE4(v15) )
  {
    case 1u:
      *((_DWORD *)this + 1) |= 1u;
      break;
    case 2u:
      *((_DWORD *)this + 1) |= 2u;
      break;
    case 3u:
      *((_DWORD *)this + 1) |= 4u;
      break;
  }
}
