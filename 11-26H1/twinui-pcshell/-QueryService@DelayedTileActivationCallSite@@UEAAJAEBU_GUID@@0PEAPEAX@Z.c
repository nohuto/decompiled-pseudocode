/*
 * XREFs of ?QueryService@DelayedTileActivationCallSite@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800D08F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DelayedTileActivationCallSite::QueryService(
        DelayedTileActivationCallSite *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v5; // rax
  char *v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  *a4 = 0LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data4;
  v6 = (char *)this - 8;
  if ( !v5 && v6[125] )
    return Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>>(
             v6,
             a3,
             a4);
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IAppActivationUIInfo.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IAppActivationUIInfo.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IAppActivationUIInfo.Data4;
  if ( !v8 && v6[132] )
    return Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>>(
             v6,
             a3,
             a4);
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_ExecuteLogUsage.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ExecuteLogUsage.Revision )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_ExecuteLogUsage.SubAuthority;
  if ( !v9 && v6[136] )
    return Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>>(
             v6,
             a3,
             a4);
  else
    return CopyToViewValueSetBase::QueryService(this, a2, a3, a4);
}
