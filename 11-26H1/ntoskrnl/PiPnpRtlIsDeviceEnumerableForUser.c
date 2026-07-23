/*
 * XREFs of PiPnpRtlIsDeviceEnumerableForUser @ 0x14095C6C0
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x14095BC10 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14095C2A0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiAuVerifyAccessToObject @ 0x14090DD40 (PiAuVerifyAccessToObject.c)
 *     _PnpGetGenericStoreProperty @ 0x14095E780 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenObjectRegKey @ 0x14095EB70 (_PnpOpenObjectRegKey.c)
 *     _PnpValidatePropertyData @ 0x140A19604 (_PnpValidatePropertyData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlIsDeviceEnumerableForUser(
        __int64 a1,
        __int64 a2,
        void *a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4,
        _BYTE *a5)
{
  void *v5; // rdi
  unsigned int v6; // esi
  void *Pool2; // rbx
  __int64 v8; // r14
  int *v9; // r12
  __int64 v10; // r15
  int v11; // eax
  int GenericStoreProperty; // edi
  _BYTE *v13; // r14
  unsigned int *v15; // rcx
  unsigned int v16; // edi
  const wchar_t *v17; // r13
  int v18; // eax
  unsigned int v19; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v20; // [rsp+54h] [rbp-ACh]
  int v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h]
  HANDLE v23; // [rsp+68h] [rbp-98h]
  int v24; // [rsp+70h] [rbp-90h]
  ULONG *v25; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h]
  const __int64 *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  __int64 v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  void *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  const __int64 *v34; // [rsp+C0h] [rbp-40h]
  int *v35; // [rsp+C8h] [rbp-38h]
  const wchar_t *v36; // [rsp+D0h] [rbp-30h]
  unsigned int v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+DCh] [rbp-24h]
  unsigned int *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  void *v41; // [rsp+F0h] [rbp-10h]
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+F8h] [rbp-8h]
  _QWORD v43[5]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v44; // [rsp+128h] [rbp+28h]
  ULONG *v45; // [rsp+130h] [rbp+30h]
  int v46; // [rsp+138h] [rbp+38h]
  GENERIC_MAPPING GenericMapping; // [rsp+140h] [rbp+40h] BYREF

  v5 = a3;
  SubjectSecurityContext = a4;
  v6 = 0;
  v41 = a3;
  Pool2 = 0LL;
  *a5 = 0;
  v22 = a2;
  v27 = (__int64)a5;
  v21 = 0;
  GenericMapping.GenericRead = 131073;
  GenericMapping.GenericWrite = 0x20000;
  GenericMapping.GenericExecute = 0x20000;
  GenericMapping.GenericAll = 983041;
  v19 = 512;
  while ( 1 )
  {
    if ( v19 > v6 )
    {
      v6 = v19;
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x47706E50u);
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return 3221225626LL;
      a2 = v22;
    }
    v8 = *(_QWORD *)&PiPnpRtlCtx;
    v19 = 0;
    v34 = &DEVPKEY_Device_EffectiveRestrictedSD;
    v9 = &v21;
    v30 = 0LL;
    v10 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 488LL);
    v31 = 0LL;
    v38 = 0;
    v40 = 0LL;
    v32 = v5;
    v33 = 0LL;
    v35 = &v21;
    v36 = (const wchar_t *)Pool2;
    v37 = v6;
    v39 = &v19;
    if ( v10 )
    {
      v11 = guard_dispatch_icall_no_overrides(*(__int64 *)&PiPnpRtlCtx, a2);
      if ( v11 == -1073741822 )
      {
        v10 = 0LL;
      }
      else
      {
        if ( v11 == -1073741536 )
        {
          GenericStoreProperty = v30;
          goto LABEL_11;
        }
        if ( v11 )
          goto LABEL_40;
      }
      v9 = v35;
    }
    v15 = v39;
    v16 = v37;
    v17 = v36;
    v28 = v34;
    v29 = v33;
    v23 = v32;
    v24 = v40;
    v25 = v39;
    v20 = v37;
    Handle = 0LL;
    if ( (_WORD)v40 )
    {
      GenericStoreProperty = -1073741811;
      goto LABEL_36;
    }
    if ( v36 )
    {
      if ( !v37 )
        v17 = 0LL;
    }
    else
    {
      v16 = 0;
      v20 = 0;
    }
    *v9 = 0;
    *v15 = 0;
    memset_0(v43, 0, 0x40uLL);
    if ( !*(_QWORD *)(v8 + 304) )
    {
      GenericStoreProperty = -1073741822;
      goto LABEL_36;
    }
    v43[0] = v23;
    v43[1] = v29;
    v43[2] = v28;
    v45 = v25;
    v46 = v24;
    v43[3] = v9;
    v43[4] = v17;
    v44 = v16;
    GenericStoreProperty = guard_dispatch_icall_no_overrides(v8, v22);
    if ( GenericStoreProperty == -1073741802 )
    {
      if ( v23 )
        goto LABEL_44;
      GenericStoreProperty = PnpOpenObjectRegKey(v8, v22, 1, 33554433, 0, (__int64)&Handle);
      if ( GenericStoreProperty >= 0 )
      {
        v23 = Handle;
LABEL_44:
        GenericStoreProperty = PnpGetGenericStoreProperty(
                                 v8,
                                 (_DWORD)v23,
                                 v29,
                                 (_DWORD)v28,
                                 (__int64)v9,
                                 (__int64)v17,
                                 v20,
                                 (__int64)v25);
        if ( GenericStoreProperty >= 0 )
          GenericStoreProperty = PnpValidatePropertyData(v17, *v25);
      }
    }
    if ( Handle )
      ZwClose(Handle);
LABEL_36:
    if ( v10 )
    {
      LODWORD(v30) = GenericStoreProperty;
      v18 = guard_dispatch_icall_no_overrides(v8, v22);
      if ( v18 != -1073741822 )
        break;
    }
LABEL_11:
    if ( GenericStoreProperty != -1073741789 )
    {
      if ( GenericStoreProperty < 0 )
        goto LABEL_13;
      if ( !v19 && Pool2 )
      {
        ExFreePoolWithTag(Pool2, 0x47706E50u);
        Pool2 = 0LL;
      }
      v13 = (_BYTE *)v27;
      if ( v21 == 19 )
      {
        GenericStoreProperty = PiAuVerifyAccessToObject(
                                 1u,
                                 Pool2,
                                 &GenericMapping,
                                 SubjectSecurityContext,
                                 (BOOLEAN *)v27);
        if ( GenericStoreProperty >= 0 )
          goto LABEL_19;
LABEL_17:
        GenericStoreProperty = 0;
      }
      *v13 = 1;
      goto LABEL_19;
    }
    a2 = v22;
    v5 = v41;
  }
  if ( v18 == -1073741536 )
  {
    GenericStoreProperty = v30;
    goto LABEL_11;
  }
  if ( !v18 )
    goto LABEL_11;
LABEL_40:
  GenericStoreProperty = -1073741595;
LABEL_13:
  if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0x47706E50u);
    Pool2 = 0LL;
  }
  if ( GenericStoreProperty == -1073741275 )
  {
    v13 = (_BYTE *)v27;
    goto LABEL_17;
  }
LABEL_19:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x47706E50u);
  return (unsigned int)GenericStoreProperty;
}
