/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceFilters @ 0x14099B840
 * Callers:
 *     PiUEventApplyAdditionalFilters @ 0x14099A920 (PiUEventApplyAdditionalFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x14099AF14 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14099B1B0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback @ 0x140AFC360 (PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback.c)
 * Callees:
 *     PsGetSessionById @ 0x140215D80 (PsGetSessionById.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     PsGetServerSiloServiceSessionId @ 0x140487140 (PsGetServerSiloServiceSessionId.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x14099BC60 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     _PnpGetGenericStoreProperty @ 0x14099DD20 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenObjectRegKey @ 0x14099E110 (_PnpOpenObjectRegKey.c)
 *     _PnpValidatePropertyData @ 0x1409DC3B4 (_PnpValidatePropertyData.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceFilters(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _BYTE *a5)
{
  _BYTE *v5; // rdi
  int v6; // esi
  __int64 v7; // r12
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // r8
  const wchar_t *v14; // rcx
  _QWORD *SessionById; // rax
  __int64 v16; // rbx
  __int64 v17; // r15
  int *v18; // r12
  int v19; // eax
  int GenericStoreProperty; // ebx
  __int64 result; // rax
  int v22; // r10d
  ULONG *v23; // r8
  const DEVPROPKEY *v24; // r11
  __int64 v25; // rdx
  int v26; // r9d
  int v27; // eax
  int v28; // edx
  int v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+54h] [rbp-ACh] BYREF
  STRSAFE_PCUNZWCH psz; // [rsp+58h] [rbp-A8h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h]
  ULONG *v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  const DEVPROPKEY *v39; // [rsp+A0h] [rbp-60h]
  int *v40; // [rsp+A8h] [rbp-58h]
  const wchar_t *v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  ULONG *v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  __int64 v45; // [rsp+D0h] [rbp-30h]
  const DEVPROPKEY *v46; // [rsp+D8h] [rbp-28h]
  __int64 v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  const DEVPROPKEY *v49; // [rsp+F0h] [rbp-10h]
  int *v50; // [rsp+F8h] [rbp-8h]
  const wchar_t *v51; // [rsp+100h] [rbp+0h]
  int v52; // [rsp+108h] [rbp+8h]
  int v53; // [rsp+10Ch] [rbp+Ch]
  ULONG *v54; // [rsp+110h] [rbp+10h]
  int v55; // [rsp+118h] [rbp+18h]
  int v56; // [rsp+11Ch] [rbp+1Ch]
  int v58; // [rsp+170h] [rbp+70h]
  int v59; // [rsp+178h] [rbp+78h] BYREF

  v58 = a3;
  v5 = a5;
  v6 = (int)a4;
  v29 = 0;
  v7 = a3;
  v30 = 0;
  v59 = 0;
  *a5 = 0;
  v9 = *a4;
  if ( !*a4 )
    v9 = a4[2];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v9 + 48), 1u);
  v11 = *(_DWORD *)(v9 + 120);
  ExReleaseResourceLite(*(PERESOURCE *)(v9 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13);
  if ( !v11 )
    goto LABEL_15;
  SessionById = (_QWORD *)PsGetSessionById(v11);
  if ( SessionById )
  {
    v16 = *(_QWORD *)(SessionById[93] + 160LL);
    ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
    if ( v11 == (unsigned int)PsGetServerSiloServiceSessionId(v16) )
      goto LABEL_15;
  }
  v39 = &DEVPKEY_Device_SessionId;
  v35 = 0LL;
  v36 = 0LL;
  v44 = 0LL;
  v17 = *(_QWORD *)(a1 + 488);
  v41 = (const wchar_t *)&v29;
  v37 = v7;
  v18 = &v59;
  v43 = (ULONG *)&v30;
  v42 = 4LL;
  v38 = 0LL;
  v40 = &v59;
  if ( !v17 )
  {
LABEL_22:
    v22 = v44;
    v23 = v43;
    v14 = v41;
    v24 = v39;
    v25 = v37;
    v26 = v42;
    v34 = v43;
    psz = v41;
    v46 = v39;
    v33 = v38;
    v45 = v37;
    LODWORD(a5) = v42;
    Handle = 0LL;
    if ( (_WORD)v44 )
    {
      GenericStoreProperty = -1073741811;
    }
    else
    {
      if ( v41 )
      {
        if ( !(_DWORD)v42 )
          v14 = 0LL;
        psz = v14;
      }
      else
      {
        v26 = 0;
        LODWORD(a5) = 0;
      }
      *v18 = 0;
      *v23 = 0;
      v53 = 0;
      v56 = 0;
      if ( *(_QWORD *)(a1 + 304) )
      {
        v47 = v25;
        v51 = v14;
        v48 = v33;
        v52 = v26;
        v54 = v23;
        v49 = v24;
        v50 = v18;
        v55 = v22;
        GenericStoreProperty = guard_dispatch_icall_no_overrides(a1, a2);
        if ( GenericStoreProperty != -1073741802 )
          goto LABEL_29;
        v28 = v45;
        if ( !v45 )
        {
          GenericStoreProperty = PnpOpenObjectRegKey(a1, a2, 1, 33554433, 0, (__int64)&Handle);
          if ( GenericStoreProperty < 0 )
          {
LABEL_29:
            LODWORD(v14) = (_DWORD)Handle;
            if ( Handle )
              ZwClose(Handle);
            goto LABEL_31;
          }
          v28 = (int)Handle;
        }
        GenericStoreProperty = PnpGetGenericStoreProperty(
                                 a1,
                                 v28,
                                 v33,
                                 (_DWORD)v46,
                                 (__int64)v18,
                                 (__int64)psz,
                                 (_DWORD)a5,
                                 (__int64)v34);
        if ( GenericStoreProperty >= 0 )
          GenericStoreProperty = PnpValidatePropertyData(psz, *v34);
        goto LABEL_29;
      }
      GenericStoreProperty = -1073741822;
    }
LABEL_31:
    if ( !v17 )
      goto LABEL_10;
    LODWORD(v35) = GenericStoreProperty;
    v27 = guard_dispatch_icall_no_overrides(a1, a2);
    switch ( v27 )
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
  v19 = guard_dispatch_icall_no_overrides(a1, a2);
  switch ( v19 )
  {
    case -1073741822:
      v17 = 0LL;
LABEL_21:
      v18 = v40;
      goto LABEL_22;
    case -1073741536:
LABEL_9:
      GenericStoreProperty = v35;
LABEL_10:
      if ( GenericStoreProperty != -1073741275 )
      {
        if ( GenericStoreProperty < 0 )
          goto LABEL_12;
        if ( v59 == 7 )
        {
          if ( v29 != v11 )
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
        LODWORD(v7) = v58;
        goto LABEL_16;
      }
      LODWORD(v7) = v58;
LABEL_15:
      *v5 = 1;
LABEL_16:
      result = PiPnpRtlIsDeviceEnumerableForUser((_DWORD)v14, a2, v7, v6, (__int64)v5);
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
