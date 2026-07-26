/*
 * XREFs of ndisIfUpdateIfBlockFromPersistedState @ 0x140146BD8
 * Callers:
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x140074670 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140015D10 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019D10 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     WPP_RECORDER_SF__guid_ @ 0x14006A860 (WPP_RECORDER_SF__guid_.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x140089BB0 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ndisIfUpdateInterfaceFromPersistentStore @ 0x14008C830 (ndisIfUpdateInterfaceFromPersistentStore.c)
 *     ??1NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x14008F360 (--1NdisNetworkInterfacePersistedState@@QEAA@XZ.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1400CECE0 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1400CED8C (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 *     WPP_RECORDER_SF__guid_L @ 0x1400CF29C (WPP_RECORDER_SF__guid_L.c)
 *     WPP_RECORDER_SF__guid__guid__guid_ @ 0x1400CF37C (WPP_RECORDER_SF__guid__guid__guid_.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ndisIfUpdateStringIfNeeded @ 0x140146E94 (ndisIfUpdateStringIfNeeded.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x14015F2A0 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14015F700 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ndisIfReadHiddenFlag @ 0x140160000 (ndisIfReadHiddenFlag.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1401693D0 (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 */

void __fastcall ndisIfUpdateIfBlockFromPersistedState(
        struct _NDIS_IF_BLOCK *a1,
        struct KRegKey *this,
        __int64 a3,
        struct NdisNetworkInterfacePersistedState *a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  struct _NDIS_MINIPORT_BLOCK *v8; // rax
  struct _NDIS_MINIPORT_BLOCK *v9; // rdi
  _DEVICE_OBJECT *PhysicalDeviceObject; // rdx
  struct _NDIS_MINIPORT_BLOCK *v11; // rdx
  int v12; // esi
  __int64 v13; // rdx
  int v14; // r8d
  int updated; // eax
  int v16; // r8d
  int v17; // r9d
  int v18; // [rsp+20h] [rbp-E0h]
  char v19[8]; // [rsp+30h] [rbp-D0h]
  bool v20; // [rsp+40h] [rbp-C0h] BYREF
  struct KRegKey *v21; // [rsp+48h] [rbp-B8h] BYREF
  void *v22; // [rsp+50h] [rbp-B0h] BYREF
  void *v23; // [rsp+58h] [rbp-A8h] BYREF
  struct KRegKey v24; // [rsp+60h] [rbp-A0h] BYREF
  struct KRegKey v25[2]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+90h] [rbp-70h]
  struct _GUID v29; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v30; // [rsp+A4h] [rbp-5Ch]
  int v31; // [rsp+ACh] [rbp-54h]
  __int128 v32; // [rsp+B0h] [rbp-50h]
  __int128 v33; // [rsp+C0h] [rbp-40h]
  __int16 v34; // [rsp+D0h] [rbp-30h]
  __int128 v35; // [rsp+D2h] [rbp-2Eh]
  __int128 v36; // [rsp+E2h] [rbp-1Eh]
  int v37; // [rsp+F2h] [rbp-Eh]
  __int16 v38; // [rsp+F6h] [rbp-Ah]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  int v40; // [rsp+100h] [rbp+0h]

  v26 = 0;
  *(_OWORD *)&v25[0].m_ptr = 0LL;
  v27 = 0LL;
  v28 = 0;
  v30 = 0LL;
  v31 = 0;
  v34 = 0;
  v29 = 0LL;
  v37 = 0;
  v32 = 0LL;
  v38 = 0;
  v33 = 0LL;
  v39 = 0LL;
  v35 = 0LL;
  v40 = 0;
  v36 = 0LL;
  v24.m_ptr = 0LL;
  Ndis::BindRegistry::ReadNetworkInterfaceV2(this, &v24, v25, a4);
  v21 = this;
  v23 = 0LL;
  if ( (int)NetSetupPropertyBag::ReadString(&v21, &NETSETUPPKEY_Interface_IfAlias, &v23) >= 0 )
  {
    v18 = 20;
    ndisIfUpdateStringIfNeeded(a1, v25[0].m_ptr, &a1->ifAlias, 0LL);
  }
  v22 = 0LL;
  if ( (int)NetSetupPropertyBag::ReadString(&v21, &NETSETUPPKEY_Interface_IfDescr, &v22) >= 0 )
  {
    v18 = 4;
    ndisIfUpdateStringIfNeeded(a1, v25[1].m_ptr, &a1->ifDescr, 2LL);
  }
  if ( (int)ndisIfReadNetworkGuidFromKey(this, &v29) >= 0
    && (int)ndisIfUpdateInterfaceIsolationNetworkId(a1, &v29, 0) < 0
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF__guid__guid__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)&v29,
      v6,
      v7,
      v18,
      (__int64)&a1->InterfaceGuid,
      (__int64)a1->Network + 32,
      (__int64)&v29);
  }
  v20 = 0;
  v8 = ndisIfReferenceMiniport(a1, 0x15u);
  v9 = v8;
  if ( v8 )
    PhysicalDeviceObject = v8->PhysicalDeviceObject;
  else
    PhysicalDeviceObject = 0LL;
  v12 = ndisIfReadHiddenFlag((NetSetupPropertyBag *)&v21, PhysicalDeviceObject, &v20);
  if ( v12 < 0 )
  {
    if ( !v9 )
      goto LABEL_22;
    goto LABEL_16;
  }
  ndisIfUpdateInterfaceHiddenFlag(a1, v20);
  if ( v9 )
  {
    ndisMUpdateHiddenFlag(v9, v20);
LABEL_16:
    ndisIfDereferenceMiniport(a1, v11, 0x15u);
    if ( v12 < 0 )
      goto LABEL_22;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x19u,
      (struct _GUID *)&WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids,
      (__int64)&a1->InterfaceGuid);
  updated = ndisIfUpdateInterfaceFromPersistentStore((__int64)v25, v13, v14);
  if ( updated < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v19 = updated;
    WPP_RECORDER_SF__guid_L(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      v16,
      v17,
      (struct _GUID *)&WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids,
      (__int64)&a1->InterfaceGuid,
      *(_QWORD *)v19);
  }
LABEL_22:
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v22, 0LL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v23, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v24.m_ptr);
  NdisNetworkInterfacePersistedState::~NdisNetworkInterfacePersistedState(&v25[0].m_ptr);
}
