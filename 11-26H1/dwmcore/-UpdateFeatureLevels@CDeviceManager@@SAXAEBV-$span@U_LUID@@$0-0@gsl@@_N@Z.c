/*
 * XREFs of ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@_N@Z @ 0x180131D44
 * Callers:
 *     ?UpdateCapabilities@CRenderTargetManager@@AEAAXXZ @ 0x180175074 (-UpdateCapabilities@CRenderTargetManager@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800F2550 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetCompositionCapabilities@CComposition@@QEAAXAEBUCOMPOSITION_CAPABILITY_INFO@@@Z @ 0x180131EB0 (-SetCompositionCapabilities@CComposition@@QEAAXAEBUCOMPOSITION_CAPABILITY_INFO@@@Z.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180132790 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CDeviceManager::UpdateFeatureLevels(_QWORD *a1, unsigned __int8 a2)
{
  struct _LUID *v2; // rbx
  int v3; // esi
  int v4; // edi
  int v5; // r13d
  unsigned __int8 v6; // r12
  unsigned __int8 v7; // r15
  struct _LUID *v8; // r14
  int v9; // ecx
  int v10; // eax
  CDeviceManager *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  CD3DDevice *v14; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v15[2]; // [rsp+28h] [rbp-28h] BYREF
  int v16; // [rsp+30h] [rbp-20h]
  int v17; // [rsp+34h] [rbp-1Ch]
  int v18; // [rsp+38h] [rbp-18h]

  v2 = (struct _LUID *)a1[1];
  v3 = 0;
  v4 = 0;
  v5 = a2;
  v6 = 0;
  v7 = 1;
  v8 = &v2[*a1];
  while ( v2 != v8 )
  {
    v14 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v14);
    if ( (int)CDeviceManager::GetExistingDevice(v11, *v2, &v14) < 0 )
      goto LABEL_20;
    v12 = *((_DWORD *)v14 + 156);
    v13 = *((_QWORD *)v14 + 70);
    if ( !v3 || v12 < v3 )
      v3 = *((_DWORD *)v14 + 156);
    if ( v12 <= v4 )
    {
      if ( v13 )
LABEL_26:
        v6 = 1;
    }
    else
    {
      if ( v13 )
        goto LABEL_26;
      v4 = *((_DWORD *)v14 + 156);
    }
    if ( v12 < 37632 || *((_BYTE *)v14 + 1489) )
      v7 = 0;
LABEL_20:
    if ( v14 )
      CD3DDevice::Release(v14);
    ++v2;
  }
  v16 = v6;
  v9 = 37120;
  v17 = v7;
  v10 = 37120;
  if ( v3 )
    v10 = v3;
  v18 = v5;
  v15[0] = v10;
  if ( v4 )
    v9 = v4;
  v15[1] = v9;
  if ( CCommonRegistryData::m_forceEffectMode == 1 )
  {
    v17 = 0;
  }
  else if ( CCommonRegistryData::m_forceEffectMode == 2 )
  {
    v16 = 0;
    v17 = 1;
  }
  CComposition::SetCompositionCapabilities(g_pComposition, (const struct COMPOSITION_CAPABILITY_INFO *)v15);
}
