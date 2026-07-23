/*
 * XREFs of SepTokenDeleteMethod @ 0x140B85580
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402FBB30 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExDeleteResourceLite @ 0x14046E1A0 (ExDeleteResourceLite.c)
 *     SepFreeTokenCapabilities @ 0x1404A0930 (SepFreeTokenCapabilities.c)
 *     SepDereferenceLuidToIndexEntry @ 0x1404F2320 (SepDereferenceLuidToIndexEntry.c)
 *     Feature_295645497__private_IsEnabledDeviceUsageNoInline @ 0x14063DEF8 (Feature_295645497__private_IsEnabledDeviceUsageNoInline.c)
 *     SepModifyTokenPolicyCounter @ 0x140777FAC (SepModifyTokenPolicyCounter.c)
 *     SepRemoveTokenLogonSession @ 0x14081BA88 (SepRemoveTokenLogonSession.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A90EB0 (SepDereferenceCachedHandlesEntryInternal.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A9F480 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDeleteClaimAttributes @ 0x140B239F0 (SepDeleteClaimAttributes.c)
 *     SepLogTokenSidManagement @ 0x140B2D560 (SepLogTokenSidManagement.c)
 *     SepDeReferenceLogonSession @ 0x140B8585C (SepDeReferenceLogonSession.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepTokenDeleteMethod(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  unsigned int v4; // eax
  volatile signed __int64 *v5; // rdi
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  _QWORD *v14; // rdx
  signed __int64 v15; // rax
  signed __int64 v16; // r8
  bool v17; // zf
  signed __int64 v18; // rtt
  __int64 v19; // rax
  __int64 v20; // rdx
  void *v21; // rcx
  void *v22; // rcx
  __int64 v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  struct _ERESOURCE *v26; // rcx
  void *v27; // rcx
  __int64 v28; // [rsp+40h] [rbp+8h] BYREF

  if ( SeTokenLeakTracking )
  {
    SepRemoveTokenLogonSession(a1);
    v2 = *(void **)(a1 + 1144);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  v3 = *(void **)(a1 + 1096);
  if ( v3 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x8000) != 0 )
      SepDeleteClaimAttributes(v3);
    *(_QWORD *)(a1 + 1096) = 0LL;
  }
  if ( LOBYTE(RtlpBootStatHandleLock.Queue) )
  {
    if ( *(_QWORD *)(a1 + 1120) )
    {
      v4 = *(_DWORD *)(a1 + 208);
      if ( v4 != -1 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 152) + 16LL * v4) = 0LL;
        *(_DWORD *)(a1 + 208) = -1;
      }
      ExFreePoolWithTag(*(PVOID *)(a1 + 1120), 0);
      *(_QWORD *)(a1 + 1120) = 0LL;
    }
    v5 = *(volatile signed __int64 **)(a1 + 1128);
    if ( v5 )
    {
      v6 = _InterlockedExchangeAdd64(v5 + 1, 0xFFFFFFFFFFFFFFFFuLL);
      v7 = v6 <= 1;
      v8 = v6 - 1;
      if ( v7 )
      {
        if ( v8 )
          __fastfail(0xEu);
        SepLogTokenSidManagement(5, (__int64)v5, 0LL, a1);
        ExFreePoolWithTag((PVOID)v5, 0);
      }
      *(_QWORD *)(a1 + 1128) = 0LL;
    }
    *(_QWORD *)(a1 + 152) = 0LL;
    *(_DWORD *)(a1 + 124) = 0;
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x1000000) != 0 )
    _InterlockedDecrement(&SepLearningModeTokenCount);
  if ( (unsigned int)Feature_295645497__private_IsEnabledDeviceUsageNoInline()
    && (*(_DWORD *)(a1 + 200) & 0x10000000) != 0 )
  {
    SepDeReferenceLogonSession(*(_QWORD *)(a1 + 216) + 16LL, *(_QWORD *)(*(_QWORD *)(a1 + 216) + 168LL));
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 1080);
    if ( v11 )
      SepDereferenceLowBoxNumberEntry(*(_DWORD *)(a1 + 120), v11, v9, v10);
    v12 = *(_QWORD *)(a1 + 1088);
    if ( v12 )
      SepDereferenceCachedHandlesEntryInternal((struct _KTHREAD *)(*(_QWORD *)(a1 + 216) + 96LL), 0, v12, 0LL);
    v13 = *(_QWORD *)(a1 + 1152);
    if ( v13 )
      SepDereferenceCachedHandlesEntryInternal((struct _KTHREAD *)(*(_QWORD *)(a1 + 216) + 96LL), 0, v13, 0LL);
    v14 = *(_QWORD **)(a1 + 216);
    _m_prefetchw(v14 + 4);
    v15 = v14[4];
    v16 = v15 - 1;
    v17 = v15 == 1;
    if ( v15 - 1 <= 0 )
    {
LABEL_35:
      if ( !v17 )
        __fastfail(0xEu);
      v19 = v14[1];
      v20 = v14[21];
      v28 = v19;
      SepDeReferenceLogonSession(&v28, v20);
    }
    else
    {
      while ( 1 )
      {
        v18 = v15;
        v15 = _InterlockedCompareExchange64(v14 + 4, v16, v15);
        if ( v18 == v15 )
          break;
        v16 = v15 - 1;
        v17 = v15 == 1;
        if ( v15 - 1 <= 0 )
          goto LABEL_35;
      }
    }
  }
  v21 = *(void **)(a1 + 1160);
  if ( v21 )
    ObfDereferenceObject(v21);
  v22 = *(void **)(a1 + 1112);
  if ( v22 )
    ObfDereferenceObject(v22);
  if ( *(_BYTE *)(a1 + 119) == 2 )
    SepModifyTokenPolicyCounter(a1 + 88, 0);
  v23 = *(_QWORD *)(a1 + 1136);
  if ( v23 )
    SepDereferenceLuidToIndexEntry(v23);
  AuthzBasepFreeSecurityAttributesList(*(_DWORD **)(a1 + 776));
  ExFreePoolWithTag(*(PVOID *)(a1 + 776), 0);
  v24 = *(void **)(a1 + 176);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  if ( *(_QWORD *)(a1 + 792) )
    SepFreeTokenCapabilities(a1);
  v25 = *(void **)(a1 + 784);
  if ( v25 )
    ExFreePoolWithTag(v25, 0);
  v26 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v26 )
  {
    ExDeleteResourceLite(v26);
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  }
  v27 = *(void **)(a1 + 1104);
  if ( v27 )
    ExFreePoolWithTag(v27, 0);
}
