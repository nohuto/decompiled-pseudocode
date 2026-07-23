/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceFilters @ 0x14095C2A0
 * Callers:
 *     PiUEventApplyAdditionalFilters @ 0x14095B380 (PiUEventApplyAdditionalFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x14095B974 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14095BC10 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback @ 0x140AFDF60 (PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback.c)
 * Callees:
 *     PsGetSessionById @ 0x1402160B0 (PsGetSessionById.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     PsGetServerSiloServiceSessionId @ 0x140480B10 (PsGetServerSiloServiceSessionId.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x14095C6C0 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     _PnpGetGenericStoreProperty @ 0x14095E780 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenObjectRegKey @ 0x14095EB70 (_PnpOpenObjectRegKey.c)
 *     _PnpValidatePropertyData @ 0x140A19604 (_PnpValidatePropertyData.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceFilters(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _BYTE *a5)
{
  _BYTE *v5; // rdi
  int v6; // esi
  __int64 v7; // r12
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // r14d
  const wchar_t *v12; // rcx
  _QWORD *SessionById; // rax
  __int64 v14; // rbx
  __int64 v15; // r15
  int *v16; // r12
  int v17; // eax
  int GenericStoreProperty; // ebx
  __int64 result; // rax
  int v20; // r10d
  ULONG *v21; // r8
  const DEVPROPKEY *v22; // r11
  __int64 v23; // rdx
  int v24; // r9d
  int v25; // eax
  int v26; // edx
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh] BYREF
  STRSAFE_PCUNZWCH psz; // [rsp+58h] [rbp-A8h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h]
  ULONG *v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  const DEVPROPKEY *v37; // [rsp+A0h] [rbp-60h]
  int *v38; // [rsp+A8h] [rbp-58h]
  const wchar_t *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  ULONG *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int64 v43; // [rsp+D0h] [rbp-30h]
  const DEVPROPKEY *v44; // [rsp+D8h] [rbp-28h]
  __int64 v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  const DEVPROPKEY *v47; // [rsp+F0h] [rbp-10h]
  int *v48; // [rsp+F8h] [rbp-8h]
  const wchar_t *v49; // [rsp+100h] [rbp+0h]
  int v50; // [rsp+108h] [rbp+8h]
  int v51; // [rsp+10Ch] [rbp+Ch]
  ULONG *v52; // [rsp+110h] [rbp+10h]
  int v53; // [rsp+118h] [rbp+18h]
  int v54; // [rsp+11Ch] [rbp+1Ch]
  int v56; // [rsp+170h] [rbp+70h]
  int v57; // [rsp+178h] [rbp+78h] BYREF

  v56 = a3;
  v5 = a5;
  v6 = (int)a4;
  v27 = 0;
  v7 = a3;
  v28 = 0;
  v57 = 0;
  *a5 = 0;
  v9 = *a4;
  if ( !*a4 )
    v9 = a4[2];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v9 + 48), 1u);
  v11 = *(_DWORD *)(v9 + 120);
  ExReleaseResourceLite(*(PERESOURCE *)(v9 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !v11 )
    goto LABEL_15;
  SessionById = (_QWORD *)PsGetSessionById(v11);
  if ( SessionById )
  {
    v14 = *(_QWORD *)(SessionById[93] + 160LL);
    ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
    if ( v11 == (unsigned int)PsGetServerSiloServiceSessionId(v14) )
      goto LABEL_15;
  }
  v37 = &DEVPKEY_Device_SessionId;
  v33 = 0LL;
  v34 = 0LL;
  v42 = 0LL;
  v15 = *(_QWORD *)(a1 + 488);
  v39 = (const wchar_t *)&v27;
  v35 = v7;
  v16 = &v57;
  v41 = (ULONG *)&v28;
  v40 = 4LL;
  v36 = 0LL;
  v38 = &v57;
  if ( !v15 )
  {
LABEL_22:
    v20 = v42;
    v21 = v41;
    v12 = v39;
    v22 = v37;
    v23 = v35;
    v24 = v40;
    v32 = v41;
    psz = v39;
    v44 = v37;
    v31 = v36;
    v43 = v35;
    LODWORD(a5) = v40;
    Handle = 0LL;
    if ( (_WORD)v42 )
    {
      GenericStoreProperty = -1073741811;
    }
    else
    {
      if ( v39 )
      {
        if ( !(_DWORD)v40 )
          v12 = 0LL;
        psz = v12;
      }
      else
      {
        v24 = 0;
        LODWORD(a5) = 0;
      }
      *v16 = 0;
      *v21 = 0;
      v51 = 0;
      v54 = 0;
      if ( *(_QWORD *)(a1 + 304) )
      {
        v45 = v23;
        v49 = v12;
        v46 = v31;
        v50 = v24;
        v52 = v21;
        v47 = v22;
        v48 = v16;
        v53 = v20;
        GenericStoreProperty = guard_dispatch_icall_no_overrides(a1, a2);
        if ( GenericStoreProperty != -1073741802 )
          goto LABEL_29;
        v26 = v43;
        if ( !v43 )
        {
          GenericStoreProperty = PnpOpenObjectRegKey(a1, a2, 1, 33554433, 0, (__int64)&Handle);
          if ( GenericStoreProperty < 0 )
          {
LABEL_29:
            LODWORD(v12) = (_DWORD)Handle;
            if ( Handle )
              ZwClose(Handle);
            goto LABEL_31;
          }
          v26 = (int)Handle;
        }
        GenericStoreProperty = PnpGetGenericStoreProperty(
                                 a1,
                                 v26,
                                 v31,
                                 (_DWORD)v44,
                                 (__int64)v16,
                                 (__int64)psz,
                                 (_DWORD)a5,
                                 (__int64)v32);
        if ( GenericStoreProperty >= 0 )
          GenericStoreProperty = PnpValidatePropertyData(psz, *v32);
        goto LABEL_29;
      }
      GenericStoreProperty = -1073741822;
    }
LABEL_31:
    if ( !v15 )
      goto LABEL_10;
    LODWORD(v33) = GenericStoreProperty;
    v25 = guard_dispatch_icall_no_overrides(a1, a2);
    switch ( v25 )
    {
      case -1073741822:
        goto LABEL_10;
      case -1073741536:
        goto LABEL_9;
      case 0:
        goto LABEL_10;
    }
    goto LABEL_35;
  }
  v17 = guard_dispatch_icall_no_overrides(a1, a2);
  switch ( v17 )
  {
    case -1073741822:
      v15 = 0LL;
LABEL_21:
      v16 = v38;
      goto LABEL_22;
    case -1073741536:
LABEL_9:
      GenericStoreProperty = v33;
LABEL_10:
      if ( GenericStoreProperty != -1073741275 )
      {
        if ( GenericStoreProperty < 0 )
          goto LABEL_12;
        if ( v57 == 7 )
        {
          if ( v27 != v11 )
          {
LABEL_12:
            if ( GenericStoreProperty < 0 )
              goto LABEL_17;
            goto LABEL_44;
          }
          *v5 = 1;
        }
        else
        {
          *v5 = 1;
        }
LABEL_44:
        if ( !*v5 )
          return (unsigned int)GenericStoreProperty;
        LODWORD(v7) = v56;
        goto LABEL_16;
      }
      LODWORD(v7) = v56;
LABEL_15:
      *v5 = 1;
LABEL_16:
      result = PiPnpRtlIsDeviceEnumerableForUser((_DWORD)v12, a2, v7, v6, (__int64)v5);
      GenericStoreProperty = result;
      if ( (int)result >= 0 )
        return result;
      goto LABEL_17;
    case 0:
      goto LABEL_21;
  }
LABEL_35:
  GenericStoreProperty = -1073741595;
LABEL_17:
  *v5 = 0;
  return (unsigned int)GenericStoreProperty;
}
