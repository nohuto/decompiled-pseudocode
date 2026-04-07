/*
 * XREFs of ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x180055790
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18005721C (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180038D84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x180055C1C (-IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?StringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x180055FE8 (-StringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CDWMDisplay *__fastcall CDWMDisplay::CDWMDisplay(
        CDWMDisplay *this,
        char a2,
        struct CDWMDXGIAdapter *a3,
        const struct DXGIOutputInfo *a4)
{
  __int64 v7; // rsi
  unsigned __int64 v9; // r9
  char *v10; // rdx
  int v11; // ecx
  int v12; // eax
  char v13; // al
  char *v14; // rax
  char v15; // al
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  HMONITOR v23; // rcx
  int v24; // eax
  CDWMDisplay *result; // rax
  __int64 v26; // rcx
  int v27; // [rsp+20h] [rbp-A9h] BYREF
  int v28; // [rsp+24h] [rbp-A5h] BYREF
  __int64 v29; // [rsp+28h] [rbp-A1h] BYREF
  int v30[4]; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v31[96]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-29h]

  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v7 = 152LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v29 = 0LL;
  memset_0(v31, 0, 0x98uLL);
  *(_DWORD *)this = 1;
  v10 = (char *)this + 168;
  *((_BYTE *)this + 164) = (*((_DWORD *)a4 + 55) & 2) != 0;
  *((_QWORD *)this + 21) = *((_QWORD *)a3 + 42);
  v11 = *((_DWORD *)a4 + 55) & 0x100;
  *((_BYTE *)this + 184) = v11 != 0;
  v12 = *((_DWORD *)a3 + 74);
  *((_DWORD *)this + 54) = v12;
  if ( v12 != 5140 || (v13 = 1, *((_DWORD *)a3 + 75) != 140) )
    v13 = 0;
  *((_BYTE *)this + 185) = v13;
  v14 = (char *)a4 + 112;
  v27 = 0;
  if ( !v11 )
    v14 = (char *)this + 168;
  *((_QWORD *)this + 22) = *(_QWORD *)v14;
  *((_DWORD *)this + 47) = *((_DWORD *)a4 + 32);
  *((_DWORD *)this + 50) = *((_DWORD *)a3 + 86);
  *((_QWORD *)this + 26) = *((_QWORD *)a4 + 38);
  *((_QWORD *)this + 2) = *((_QWORD *)a4 + 13);
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 48) = *((_DWORD *)a4 + 31);
  *((_DWORD *)this + 49) = *((_DWORD *)a4 + 30);
  *((_BYTE *)this + 288) = (*((_DWORD *)a4 + 55) & 4) != 0;
  *((_BYTE *)this + 289) = (*((_DWORD *)a4 + 55) & 8) != 0;
  if ( !a2
    || (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)a4 + 1) + 96LL))(*((_QWORD *)a4 + 1), &v27) < 0
    || (v15 = 1, (v27 & 0x10) == 0) )
  {
    v15 = 0;
  }
  *((_BYTE *)this + 291) = v15;
  v16 = *((_DWORD *)a4 + 55);
  *((_BYTE *)this + 293) = (v16 & 0x400) != 0;
  *((_BYTE *)this + 294) = (*((_DWORD *)a4 + 55) & 0x800) != 0;
  if ( (v16 & 0x400) != 0 )
  {
    v17 = *((_DWORD *)a4 + 44);
    v7 = 168LL;
    v18 = 160LL;
  }
  else
  {
    v17 = 1;
    v18 = 152LL;
  }
  *((_DWORD *)this + 66) = v17;
  *(_QWORD *)((char *)this + 268) = *(_QWORD *)((char *)a4 + v18);
  *(_QWORD *)((char *)this + 276) = *(_QWORD *)((char *)a4 + v7);
  *((_DWORD *)this + 71) = *((_DWORD *)a4 + 73);
  StringCbCopyNW((unsigned __int16 *)this + 48, (unsigned __int64)v10, (const unsigned __int16 *)a4 + 112, v9);
  v19 = *((_DWORD *)a4 + 45);
  if ( v19 == 2 || v19 == 4 )
  {
    *((_DWORD *)this + 55) = *((_DWORD *)a4 + 36);
    v20 = *((_DWORD *)a4 + 35);
  }
  else
  {
    *((_DWORD *)this + 55) = *((_DWORD *)a4 + 35);
    v20 = *((_DWORD *)a4 + 36);
  }
  *((_DWORD *)this + 56) = v20;
  if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))a4)(
         *(_QWORD *)a4,
         &GUID_068346e8_aaec_4b84_add7_137f513f77a1,
         &v29) < 0
    || (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v29 + 216LL))(v29, v31) < 0 )
  {
    v32 = 8LL;
  }
  if ( v29 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    v29 = 0LL;
  }
  v21 = *((_DWORD *)a4 + 75);
  if ( !v21 )
    goto LABEL_31;
  v22 = v21 - 1;
  if ( !v22 )
  {
    *((_DWORD *)this + 59) = 24;
    *((_DWORD *)this + 63) = 12;
    goto LABEL_19;
  }
  if ( (unsigned int)(v22 - 1) > 1 )
  {
LABEL_31:
    *((_DWORD *)this + 59) = 87;
    *((_DWORD *)this + 63) = 0;
    goto LABEL_19;
  }
  *((_DWORD *)this + 59) = 10;
  *((_DWORD *)this + 63) = 1;
LABEL_19:
  v23 = (HMONITOR)*((_QWORD *)this + 2);
  *((_DWORD *)this + 57) = *((_DWORD *)a4 + 38);
  *((_DWORD *)this + 58) = *((_DWORD *)a4 + 39);
  *((_DWORD *)this + 62) = *((_DWORD *)a4 + 45);
  *((_DWORD *)this + 64) = *((_DWORD *)a4 + 72);
  *((_DWORD *)this + 60) = *((_DWORD *)a4 + 46);
  v24 = IsHDRDisplay(v23);
  *((_DWORD *)this + 61) = 0;
  *((_DWORD *)this + 65) = 1065353216;
  *((_BYTE *)this + 292) = v24 != 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
  {
    v26 = *((_QWORD *)this + 2);
    v28 = 0;
    v30[0] = 96;
    if ( (unsigned int)GetDpiForMonitorInternal(v26, 0LL, &v28, v30) )
      *((float *)this + 65) = (float)v28 / 96.0;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = *((_DWORD *)a4 + 35);
  result = this;
  *((_DWORD *)this + 9) = *((_DWORD *)a4 + 36);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)((char *)a4 + 204);
  *((_DWORD *)this + 10) = *((_DWORD *)a4 + 47);
  *((_DWORD *)this + 11) = *((_DWORD *)a4 + 48);
  *((_DWORD *)this + 12) = *((_DWORD *)a4 + 49);
  *((_DWORD *)this + 13) = *((_DWORD *)a4 + 50);
  return result;
}
