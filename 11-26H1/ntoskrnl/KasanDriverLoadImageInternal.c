/*
 * XREFs of KasanDriverLoadImageInternal @ 0x140525CA0
 * Callers:
 *     KasanDriverLoadImage @ 0x1404F5570 (KasanDriverLoadImage.c)
 *     KasanInitSystem @ 0x140CCDE10 (KasanInitSystem.c)
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlLookupImageSectionByName @ 0x1404DE250 (RtlLookupImageSectionByName.c)
 *     KasanMarkAddressValidNoInline @ 0x1405257D0 (KasanMarkAddressValidNoInline.c)
 *     KasanTrackAddressNoInline @ 0x140534710 (KasanTrackAddressNoInline.c)
 *     KasanMarkAddressRedZoneNoInline @ 0x1405E0190 (KasanMarkAddressRedZoneNoInline.c)
 *     KasanUnloadInfoCompare @ 0x1405E0390 (KasanUnloadInfoCompare.c)
 *     KasaniSendTelemetryDriver @ 0x1405E0400 (KasaniSendTelemetryDriver.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KasanDriverLoadImageInternal(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v5; // rdi
  _DWORD *v6; // rcx
  const char *v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  ULONG_PTR *v10; // rbp
  unsigned __int64 v11; // r12
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 i; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 Pool2; // rax
  unsigned __int64 v19; // rdi
  ULONG_PTR *v20; // r13
  ULONG_PTR *v21; // r15
  KIRQL v22; // al
  __int64 v23; // r8
  unsigned __int64 Root; // rcx
  KIRQL v25; // bp
  int v26; // edi
  unsigned __int64 v27; // rax
  int v28; // [rsp+60h] [rbp+8h]
  _RTL_BALANCED_NODE *P; // [rsp+70h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 48);
  v5 = v2 + *(unsigned int *)(a1 + 152);
  if ( v2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return 0LL;
  if ( *(_WORD *)v2 != 23117 )
    return 0LL;
  v6 = (_DWORD *)(v2 + *(unsigned int *)(v2 + 60));
  if ( (unsigned __int64)v6 < v2
    || v2 < 0x7FFFFFFF0000LL && (v6 + 66 < v6 || (unsigned __int64)(v6 + 66) > 0x7FFFFFFF0000LL) )
  {
    return 0LL;
  }
  if ( *v6 != 17744 )
    return 0LL;
  if ( !v6 )
    return 0LL;
  v7 = RtlLookupImageSectionByName((__int64)v6, "KASAN");
  if ( !v7 )
    return 0LL;
  v8 = *((unsigned int *)v7 + 2);
  v9 = v2 + *((unsigned int *)v7 + 3);
  if ( !v9 )
    return 0LL;
  if ( !byte_140FC8BD8 || v8 < 0x40 || (v8 & 0x3F) != 0 || *(_DWORD *)v9 != 2 )
    return 3221225473LL;
  **(_QWORD **)(v9 + 8) = qword_140FBF2F8;
  if ( a2 )
    return 0LL;
  v10 = (ULONG_PTR *)(v9 + 64);
  v11 = (v8 - 64) >> 6;
  v12 = (unsigned __int64 *)(v9 + 72);
  v13 = 0LL;
  for ( i = 0LL; i < v11; ++i )
  {
    v15 = v12[1];
    if ( !v15 )
      return 3221225473LL;
    if ( *v12 > v15 )
      return 3221225473LL;
    v16 = *(v12 - 1);
    if ( v16 < v2 || v16 >= v5 || (v16 & 7) != 0 )
      return 3221225473LL;
    if ( v16 + v15 < v16 )
      return 3221225621LL;
    if ( v16 + v15 > v5 )
      return 3221225473LL;
    v12 += 8;
  }
  if ( !is_mul_ok(v11, 0x10uLL) || 16 * v11 + 40 < 16 * v11 )
    return 3221225621LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  P = (_RTL_BALANCED_NODE *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v19 = 0LL;
  v20 = (ULONG_PTR *)(Pool2 + 48);
  v21 = v10 + 2;
  *(_QWORD *)(Pool2 + 24) = a1;
  *(_QWORD *)(Pool2 + 32) = v11;
  while ( v19 < v11 )
  {
    if ( byte_140FC8BD8 )
    {
      v28 = KasanTrackAddressNoInline(*(v21 - 2), *v21, 0LL);
      if ( v28 < 0 )
      {
        for ( ; v19; --v19 )
        {
          if ( byte_140FC8BD8 )
            KasanMarkAddressValidNoInline(*v10, v10[2]);
          v10 += 8;
        }
        ExFreePoolWithTag(P, 0);
        return (unsigned int)v28;
      }
      if ( byte_140FC8BD8 )
        KasanMarkAddressRedZoneNoInline(*(v21 - 2), *(v21 - 1), *v21);
    }
    ++v19;
    *(v20 - 1) = *(v21 - 2);
    *v20 = *v21;
    v20 += 2;
    v21 += 8;
  }
  v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)((char *)&KdDebuggerEnabled + 7));
  Root = (unsigned __int64)KasanDriverUnloadInfos.Root;
  v25 = v22;
  if ( (*(_BYTE *)&KasanDriverUnloadInfos.0 & 1) == 0 )
  {
LABEL_46:
    LOBYTE(v23) = 0;
    v26 = *(_BYTE *)&KasanDriverUnloadInfos.0 & 1;
    v13 = Root;
    if ( !Root )
      goto LABEL_59;
    while ( 1 )
    {
      if ( (int)KasanUnloadInfoCompare(v2, v13, v23) < 0 )
      {
        v27 = *(_QWORD *)v13;
        if ( v26 )
        {
          if ( !v27 )
            goto LABEL_58;
          v27 ^= v13;
        }
        if ( !v27 )
          goto LABEL_58;
      }
      else
      {
        v27 = *(_QWORD *)(v13 + 8);
        if ( v26 )
        {
          if ( !v27 )
            goto LABEL_52;
          v27 ^= v13;
        }
        if ( !v27 )
        {
LABEL_52:
          LOBYTE(v23) = 1;
          goto LABEL_59;
        }
      }
      v13 = v27;
    }
  }
  if ( KasanDriverUnloadInfos.Root )
  {
    Root = (unsigned __int64)&KasanDriverUnloadInfos ^ (unsigned __int64)KasanDriverUnloadInfos.Root;
    goto LABEL_46;
  }
LABEL_58:
  LOBYTE(v23) = 0;
LABEL_59:
  RtlRbInsertNodeEx(&KasanDriverUnloadInfos, (PRTL_BALANCED_NODE)v13, v23, P);
  if ( byte_140FC8BD9 )
    KasaniSendTelemetryDriver(a1);
  KeReleaseSpinLock((PKSPIN_LOCK)((char *)&KdDebuggerEnabled + 7), v25);
  return 0LL;
}
