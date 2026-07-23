/*
 * XREFs of PnpGetObjectProperty @ 0x14095E340
 * Callers:
 *     IoGetDeviceDirectory @ 0x1407A30F0 (IoGetDeviceDirectory.c)
 *     PiDmObjectProcessPropertyChange @ 0x140951BA0 (PiDmObjectProcessPropertyChange.c)
 *     PiPnpRtlObjectActionCallback @ 0x140965980 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140966B10 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PnpActivatePdcForDeviceEvent @ 0x140A19D10 (PnpActivatePdcForDeviceEvent.c)
 *     PiUEventCacheObjectProperties @ 0x140AA6D44 (PiUEventCacheObjectProperties.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140AFD84C (PiDmGetReferencedObjectFromProperty.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x140B09F00 (PnpInitializeInheritedRestrictedSd.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140B37308 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140B39A60 (PiDevCfgResolveVariableDeviceProperty.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _PnpGetGenericStoreProperty @ 0x14095E780 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenObjectRegKey @ 0x14095EB70 (_PnpOpenObjectRegKey.c)
 *     _PnpValidatePropertyData @ 0x140A19604 (_PnpValidatePropertyData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetObjectProperty(
        ULONG Tag,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        PVOID *a9,
        unsigned int *a10,
        int a11)
{
  PVOID *v11; // rdi
  __int64 v12; // r11
  unsigned int v14; // esi
  __int64 Pool2; // rax
  __int64 v16; // r14
  _DWORD *v17; // r12
  __int64 v18; // r15
  int v19; // eax
  int v20; // ebx
  PVOID v21; // rcx
  unsigned int *v23; // rdx
  const wchar_t *v24; // rbx
  int v25; // eax
  int GenericStoreProperty; // eax
  __int64 v27; // [rsp+58h] [rbp-B0h]
  int v28; // [rsp+60h] [rbp-A8h]
  ULONG *v29; // [rsp+68h] [rbp-A0h]
  const wchar_t *psz; // [rsp+70h] [rbp-98h]
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  __int64 v32; // [rsp+80h] [rbp-88h]
  __int64 v33; // [rsp+88h] [rbp-80h]
  __int64 v34; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  __int64 v36; // [rsp+A8h] [rbp-60h]
  __int64 v37; // [rsp+B0h] [rbp-58h]
  __int64 v38; // [rsp+B8h] [rbp-50h]
  __int64 v39; // [rsp+C0h] [rbp-48h]
  const wchar_t *v40; // [rsp+C8h] [rbp-40h]
  unsigned int v41; // [rsp+D0h] [rbp-38h]
  int v42; // [rsp+D4h] [rbp-34h]
  unsigned int *v43; // [rsp+D8h] [rbp-30h]
  int v44; // [rsp+E0h] [rbp-28h]
  int v45; // [rsp+E4h] [rbp-24h]
  _QWORD v46[5]; // [rsp+E8h] [rbp-20h] BYREF
  int v47; // [rsp+110h] [rbp+8h]
  ULONG *v48; // [rsp+118h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+18h]
  unsigned int v50; // [rsp+170h] [rbp+68h] BYREF
  __int64 v51; // [rsp+178h] [rbp+70h]
  int v52; // [rsp+180h] [rbp+78h]

  v52 = a4;
  v51 = a3;
  v11 = a9;
  v12 = a3;
  v50 = a2;
  *a9 = 0LL;
  v14 = 0;
  while ( 1 )
  {
    if ( v50 > v14 )
    {
      v14 = v50;
      if ( *v11 )
        ExFreePoolWithTag(*v11, Tag);
      Pool2 = ExAllocatePool2(0x100uLL);
      *v11 = (PVOID)Pool2;
      if ( !Pool2 )
      {
        v20 = -1073741670;
        goto LABEL_13;
      }
      v12 = v51;
    }
    v16 = *(_QWORD *)&PiPnpRtlCtx;
    v17 = a8;
    v36 = a5;
    v37 = a6;
    v38 = a7;
    v40 = (const wchar_t *)*v11;
    v50 = 0;
    v34 = 0LL;
    v35 = 0LL;
    v42 = 0;
    v45 = 0;
    v18 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 488LL);
    v43 = &v50;
    v44 = a11;
    v39 = (__int64)a8;
    v41 = v14;
    if ( v18 )
    {
      v19 = guard_dispatch_icall_no_overrides(*(__int64 *)&PiPnpRtlCtx, v12);
      if ( v19 == -1073741822 )
      {
        v18 = 0LL;
      }
      else
      {
        if ( v19 == -1073741536 )
        {
          v20 = v34;
          goto LABEL_11;
        }
        if ( v19 )
          goto LABEL_32;
      }
      v17 = (_DWORD *)v39;
    }
    v23 = v43;
    v24 = v40;
    v32 = v38;
    v33 = v37;
    v27 = v36;
    v28 = v44;
    v29 = v43;
    LODWORD(a9) = v41;
    psz = v40;
    Handle = 0LL;
    if ( (_WORD)v44 )
    {
      v20 = -1073741811;
      goto LABEL_28;
    }
    if ( v40 )
    {
      if ( !v41 )
        v24 = 0LL;
      psz = v24;
    }
    else
    {
      LODWORD(a9) = 0;
    }
    *v17 = 0;
    *v23 = 0;
    memset_0(v46, 0, 0x40uLL);
    if ( (unsigned int)(v52 - 1) > 0xA )
    {
      v20 = -1073741811;
    }
    else
    {
      if ( !*(_QWORD *)(v16 + 8LL * v52 + 296) )
      {
        v20 = -1073741822;
        goto LABEL_28;
      }
      v46[0] = v27;
      v46[1] = v33;
      v46[2] = v32;
      v47 = (int)a9;
      v48 = v29;
      LODWORD(v49) = v28;
      v46[3] = v17;
      v46[4] = v24;
      v20 = guard_dispatch_icall_no_overrides(v16, v51);
      if ( v20 != -1073741802 )
        goto LABEL_26;
      if ( v27 )
      {
        GenericStoreProperty = PnpGetGenericStoreProperty(
                                 v16,
                                 v27,
                                 v33,
                                 v32,
                                 (__int64)v17,
                                 (__int64)psz,
                                 (_DWORD)a9,
                                 (__int64)v29);
        goto LABEL_40;
      }
      v20 = PnpOpenObjectRegKey(v16, v51, v52, 33554433, 0, (__int64)&Handle);
      if ( v20 >= 0 )
      {
        GenericStoreProperty = PnpGetGenericStoreProperty(
                                 v16,
                                 (_DWORD)Handle,
                                 v33,
                                 v32,
                                 (__int64)v17,
                                 (__int64)psz,
                                 (_DWORD)a9,
                                 (__int64)v29);
LABEL_40:
        v20 = GenericStoreProperty;
        if ( GenericStoreProperty >= 0 )
          v20 = PnpValidatePropertyData(psz, *v29);
      }
    }
LABEL_26:
    if ( Handle )
      ZwClose(Handle);
LABEL_28:
    if ( v18 )
    {
      LODWORD(v34) = v20;
      v25 = guard_dispatch_icall_no_overrides(v16, v51);
      if ( v25 != -1073741822 )
      {
        if ( v25 == -1073741536 )
        {
          v20 = v34;
        }
        else if ( v25 )
        {
LABEL_32:
          v20 = -1073741595;
          goto LABEL_13;
        }
      }
    }
LABEL_11:
    if ( v20 != -1073741789 )
      break;
    v12 = v51;
  }
  if ( v20 < 0 )
  {
LABEL_13:
    v21 = *v11;
    if ( !*v11 )
      return (unsigned int)v20;
    goto LABEL_14;
  }
  if ( a10 )
    *a10 = v50;
  if ( !v50 )
  {
    v21 = *v11;
    if ( *v11 )
    {
LABEL_14:
      ExFreePoolWithTag(v21, Tag);
      *v11 = 0LL;
    }
  }
  return (unsigned int)v20;
}
