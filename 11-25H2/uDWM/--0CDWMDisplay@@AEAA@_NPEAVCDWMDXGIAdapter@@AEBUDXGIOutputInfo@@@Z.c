/*
 * XREFs of ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x180067B60
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180066B0C (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x1800758DC (-IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x1800ADC34 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CDWMDisplay *__fastcall CDWMDisplay::CDWMDisplay(
        CDWMDisplay *this,
        char a2,
        struct CDWMDXGIAdapter *a3,
        const struct DXGIOutputInfo *a4)
{
  char *v8; // rcx
  int v9; // edx
  int v10; // eax
  char v11; // al
  bool v12; // al
  char v13; // al
  int v14; // ecx
  __int64 v15; // rax
  _WORD *v16; // rcx
  __int64 v17; // rdx
  __int16 v18; // r8
  _WORD *v19; // rax
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  HMONITOR v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  CDWMDisplay *result; // rax
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  int v30; // [rsp+20h] [rbp-99h] BYREF
  int v31; // [rsp+24h] [rbp-95h] BYREF
  __int64 v32; // [rsp+28h] [rbp-91h] BYREF
  int v33[4]; // [rsp+30h] [rbp-89h] BYREF
  _BYTE v34[96]; // [rsp+40h] [rbp-79h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-19h]

  v32 = 0LL;
  memset_0(v34, 0, 0x98uLL);
  *(_DWORD *)this = 1;
  v8 = (char *)this + 168;
  *((_BYTE *)this + 164) = (*((_DWORD *)a4 + 55) & 2) != 0;
  *((_QWORD *)this + 21) = *((_QWORD *)a3 + 42);
  v9 = *((_DWORD *)a4 + 55) & 0x100;
  *((_BYTE *)this + 184) = v9 != 0;
  v10 = *((_DWORD *)a3 + 74);
  *((_DWORD *)this + 54) = v10;
  if ( v10 != 5140 || (v11 = 1, *((_DWORD *)a3 + 75) != 140) )
    v11 = 0;
  *((_BYTE *)this + 185) = v11;
  if ( v9 )
    v8 = (char *)a4 + 112;
  *((_QWORD *)this + 22) = *(_QWORD *)v8;
  *((_DWORD *)this + 47) = *((_DWORD *)a4 + 32);
  *((_DWORD *)this + 50) = *((_DWORD *)a3 + 86);
  *((_QWORD *)this + 26) = *((_QWORD *)a4 + 38);
  *((_QWORD *)this + 2) = *((_QWORD *)a4 + 13);
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 48) = *((_DWORD *)a4 + 31);
  *((_DWORD *)this + 49) = *((_DWORD *)a4 + 30);
  v12 = (*((_DWORD *)a4 + 55) & 4) != 0;
  v30 = 0;
  *((_BYTE *)this + 288) = v12;
  *((_BYTE *)this + 289) = (*((_DWORD *)a4 + 55) & 8) != 0;
  if ( !a2
    || (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)a4 + 1) + 96LL))(*((_QWORD *)a4 + 1), &v30) < 0
    || (v13 = 1, (v30 & 0x10) == 0) )
  {
    v13 = 0;
  }
  *((_BYTE *)this + 291) = v13;
  v14 = *((_DWORD *)a4 + 55);
  *((_BYTE *)this + 293) = (v14 & 0x400) != 0;
  if ( (v14 & 0x400) != 0 )
  {
    *((_DWORD *)this + 66) = *((_DWORD *)a4 + 44);
    *(_QWORD *)((char *)this + 268) = *((_QWORD *)a4 + 20);
    v15 = *((_QWORD *)a4 + 21);
  }
  else
  {
    *((_DWORD *)this + 66) = 1;
    *(_QWORD *)((char *)this + 268) = *((_QWORD *)a4 + 19);
    v15 = *((_QWORD *)a4 + 19);
  }
  *(_QWORD *)((char *)this + 276) = v15;
  v16 = (_WORD *)((char *)this + 96);
  v17 = 32LL;
  *((_DWORD *)this + 71) = *((_DWORD *)a4 + 73);
  do
  {
    v18 = *(_WORD *)((char *)v16 + a4 - (CDWMDisplay *)((char *)this + 96) + 224);
    if ( !v18 )
      break;
    *v16++ = v18;
    --v17;
  }
  while ( v17 );
  v19 = v16 - 1;
  if ( v17 )
    v19 = v16;
  *v19 = 0;
  if ( ((*((_DWORD *)a4 + 45) - 2) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)this + 55) = *((_DWORD *)a4 + 35);
    v20 = *((_DWORD *)a4 + 36);
  }
  else
  {
    *((_DWORD *)this + 55) = *((_DWORD *)a4 + 36);
    v20 = *((_DWORD *)a4 + 35);
  }
  *((_DWORD *)this + 56) = v20;
  if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))a4)(
         *(_QWORD *)a4,
         &GUID_068346e8_aaec_4b84_add7_137f513f77a1,
         &v32) < 0
    || (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v32 + 216LL))(v32, v34) < 0 )
  {
    v35 = 8LL;
  }
  if ( v32 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    v32 = 0LL;
  }
  v21 = *((_DWORD *)a4 + 75);
  if ( !v21 )
    goto LABEL_31;
  v22 = v21 - 1;
  if ( !v22 )
  {
    *((_DWORD *)this + 59) = 24;
    *((_DWORD *)this + 63) = 12;
    goto LABEL_32;
  }
  if ( (unsigned int)(v22 - 1) > 1 )
  {
LABEL_31:
    *((_DWORD *)this + 59) = 87;
    *((_DWORD *)this + 63) = 0;
    goto LABEL_32;
  }
  *((_DWORD *)this + 59) = 10;
  *((_DWORD *)this + 63) = 1;
LABEL_32:
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
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
  {
    v25 = *((_QWORD *)this + 2);
    v31 = 0;
    v33[0] = 96;
    if ( (unsigned int)GetDpiForMonitorInternal(v25, 0LL, &v31, v33) )
      *((float *)this + 65) = (float)v31 / 96.0;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = *((_DWORD *)a4 + 35);
  *((_DWORD *)this + 9) = *((_DWORD *)a4 + 36);
  result = this;
  v27 = *((_DWORD *)a4 + 52);
  v28 = *((_DWORD *)a4 + 53);
  v29 = *((_DWORD *)a4 + 54);
  *((_DWORD *)this + 14) = *((_DWORD *)a4 + 51);
  *((_DWORD *)this + 15) = v27;
  *((_DWORD *)this + 16) = v28;
  *((_DWORD *)this + 17) = v29;
  *((_DWORD *)this + 10) = *((_DWORD *)a4 + 47);
  *((_DWORD *)this + 11) = *((_DWORD *)a4 + 48);
  *((_DWORD *)this + 12) = *((_DWORD *)a4 + 49);
  *((_DWORD *)this + 13) = *((_DWORD *)a4 + 50);
  return result;
}
