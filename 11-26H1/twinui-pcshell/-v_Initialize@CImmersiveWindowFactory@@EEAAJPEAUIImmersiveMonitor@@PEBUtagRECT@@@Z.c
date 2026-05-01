/*
 * XREFs of ?v_Initialize@CImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z @ 0x1806CA530
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1800A9A10 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveWindowFactory::v_Initialize(
        CImmersiveWindowFactory *this,
        IUnknown *a2,
        enum ORIENTATION_PREFERENCE *a3)
{
  HRESULT v3; // ebx
  void *ppvOut; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    *(_OWORD *)((char *)this + 116) = *(_OWORD *)a3;
LABEL_7:
    *((_BYTE *)this + 144) = (int)CallerIdentity::GetManifestedOrientationPreference(
                                    *((char **)this + 17),
                                    (unsigned __int16 *)this + 74,
                                    a3) >= 0;
    return (unsigned int)v3;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
  v3 = IUnknown_QueryService(a2, &stru_1807D8958, &GUID_53b23e1b_25e2_4886_9fb6_744b8f15571c, &ppvOut);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(void *, IUnknown *, _QWORD, _QWORD, char *))(*(_QWORD *)ppvOut + 40LL))(
           ppvOut,
           a2,
           *((_QWORD *)this + 17),
           0LL,
           (char *)this + 116);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
  if ( v3 >= 0 )
    goto LABEL_7;
  return (unsigned int)v3;
}
