/*
 * XREFs of ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180012930
 * Callers:
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180011710 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014A28 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@_N@Z @ 0x18002BD34 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 *     ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x1800388B0 (-GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplication::Category(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // edi
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v3 = 4;
  if ( *(_DWORD *)(a1 + 612) )
  {
    v3 = *(_DWORD *)(a1 + 616);
  }
  else
  {
    v4 = *(_QWORD **)(a1 + 72);
    while ( v4 )
    {
      v5 = v4[2];
      v4 = (_QWORD *)*v4;
      if ( !*(_DWORD *)(v5 + 416) || *(_QWORD *)(v5 + 360) )
      {
        v6 = 484LL;
        if ( !*(_DWORD *)(v5 + 480) )
          v6 = 312LL;
        if ( *(_DWORD *)(v6 + v5) < v3 )
          v3 = *(_DWORD *)(v6 + v5);
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v3;
}
