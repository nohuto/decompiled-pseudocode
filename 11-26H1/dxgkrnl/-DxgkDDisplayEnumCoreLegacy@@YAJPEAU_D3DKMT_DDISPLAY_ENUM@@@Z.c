/*
 * XREFs of ?DxgkDDisplayEnumCoreLegacy@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1403C2610
 * Callers:
 *     DxgkDDisplayEnumInternalLegacy @ 0x1403C1FD0 (DxgkDDisplayEnumInternalLegacy.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14005AA24 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     DXGGLOBAL::IterateAdaptersWithCallback__lambda_9212365dda97cb37a6803fd149b753fd___ @ 0x140076464 (DXGGLOBAL--IterateAdaptersWithCallback__lambda_9212365dda97cb37a6803fd149b753fd___.c)
 *     DXGGLOBAL::IterateAdaptersWithCallback__lambda_ef85c4d3ba2b9aeb28478c22401d75d8___ @ 0x1400764B0 (DXGGLOBAL--IterateAdaptersWithCallback__lambda_ef85c4d3ba2b9aeb28478c22401d75d8___.c)
 *     _lambda_af43cb63713906f6ee9ac5c062dc4f06_::_lambda_af43cb63713906f6ee9ac5c062dc4f06_ @ 0x1401A9EE0 (_lambda_af43cb63713906f6ee9ac5c062dc4f06_--_lambda_af43cb63713906f6ee9ac5c062dc4f06_.c)
 *     _lambda_27000cc3b46378c0660433eb13a9f162_::_lambda_27000cc3b46378c0660433eb13a9f162_ @ 0x1401CC2A4 (_lambda_27000cc3b46378c0660433eb13a9f162_--_lambda_27000cc3b46378c0660433eb13a9f162_.c)
 */

__int64 __fastcall DxgkDDisplayEnumCoreLegacy(struct _D3DKMT_DDISPLAY_ENUM *a1)
{
  _QWORD *v1; // rax
  __int64 v2; // xmm1_8
  __int64 v3; // r10
  struct DXGGLOBAL *Global; // rax
  __int128 v5; // xmm6
  struct DXGGLOBAL *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-50h] BYREF
  __int64 v9; // [rsp+30h] [rbp-40h]
  _QWORD v10[4]; // [rsp+40h] [rbp-30h] BYREF
  struct _D3DKMT_DDISPLAY_ENUM *v11; // [rsp+80h] [rbp+10h] BYREF
  int v12; // [rsp+88h] [rbp+18h] BYREF
  unsigned int v13; // [rsp+90h] [rbp+20h] BYREF

  v11 = a1;
  v12 = 0;
  v13 = 0;
  DXGGLOBAL::GetGlobal();
  v1 = lambda_27000cc3b46378c0660433eb13a9f162_::_lambda_27000cc3b46378c0660433eb13a9f162_(
         v10,
         (__int64)&v12,
         (__int64)&v11,
         (__int64)&v13);
  v2 = v1[2];
  v8 = *(_OWORD *)v1;
  v9 = v2;
  DXGGLOBAL::IterateAdaptersWithCallback__lambda_ef85c4d3ba2b9aeb28478c22401d75d8___(v3, (__int64)&v8);
  if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
  {
    lambda_af43cb63713906f6ee9ac5c062dc4f06_::_lambda_af43cb63713906f6ee9ac5c062dc4f06_(
      &v8,
      (__int64)&v12,
      (__int64)&v11);
    Global = DXGGLOBAL::GetGlobal();
    v5 = v8;
    DXGGLOBAL::IterateAdaptersWithCallback__lambda_9212365dda97cb37a6803fd149b753fd___(
      (__int64)Global,
      (__int64)&v8,
      3u);
    v6 = DXGGLOBAL::GetGlobal();
    v8 = v5;
    DXGGLOBAL::IterateAdaptersWithCallback__lambda_9212365dda97cb37a6803fd149b753fd___((__int64)v6, (__int64)&v8, 5u);
  }
  *(_DWORD *)v11 = v12;
  *((_DWORD *)v11 + 4) = v13;
  if ( *((_DWORD *)v11 + 1) < *(_DWORD *)v11 )
    return 3221225507LL;
  else
    return *((_DWORD *)v11 + 5) < v13 ? 0xC0000023 : 0;
}
