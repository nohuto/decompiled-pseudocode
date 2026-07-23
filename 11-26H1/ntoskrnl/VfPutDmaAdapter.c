/*
 * XREFs of VfPutDmaAdapter @ 0x140C2B6A0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x140644D1C (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140C28F2C (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140C2CF90 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140C2D1F4 (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140C2D32C (ViHalPreprocessOptions.c)
 *     ViReleaseDmaAdapter @ 0x140C2DB4C (ViReleaseDmaAdapter.c)
 */

__int64 __fastcall VfPutDmaAdapter(ULONG_PTR a1)
{
  char v2; // bp
  int v3; // edi
  __int64 AdapterInformationInternal; // rax
  ULONG_PTR v5; // rbx
  KIRQL v6; // r8
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 RealDmaAdapter; // rax
  __int64 result; // rax

  VF_ASSERT_MAX_IRQL();
  v2 = 0;
  v3 = 0;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v5 = AdapterInformationInternal;
  if ( AdapterInformationInternal )
  {
    v3 = _InterlockedDecrement((volatile signed __int32 *)(AdapterInformationInternal + 76));
    if ( v3 < 0 )
    {
      ViHalPreprocessOptions(
        byte_140E0EADC,
        "Driver has attempted to access an adapter (%p) that has already been released.",
        (const void *)0x18);
      VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, v5, 0LL, byte_140E0EADC);
    }
    ViFlushZeroMapRegisterBaseWcbs(v5);
    if ( *(_DWORD *)(v5 + 212) != *(_DWORD *)(v5 + 216) )
    {
      ViHalPreprocessOptions(
        byte_140E0EAE0,
        "Cannot put adapter %p until all adapter channels are freed (%x left).",
        (const void *)8,
        a1);
      VfReportIssueWithOptions(
        0xE6u,
        8uLL,
        a1,
        (unsigned int)(*(_DWORD *)(v5 + 212) - *(_DWORD *)(v5 + 216)),
        v5,
        byte_140E0EAE0);
    }
    if ( *(_DWORD *)(v5 + 204) != *(_DWORD *)(v5 + 208) )
    {
      ViHalPreprocessOptions(
        byte_140E0EAE4,
        "Cannot put adapter %p until all common buffers are freed (%x left).",
        (const void *)7,
        a1);
      VfReportIssueWithOptions(
        0xE6u,
        7uLL,
        a1,
        (unsigned int)(*(_DWORD *)(v5 + 204) - *(_DWORD *)(v5 + 208)),
        v5,
        byte_140E0EAE4);
    }
    if ( *(_DWORD *)(v5 + 192) )
    {
      ViHalPreprocessOptions(
        byte_140E0EAE8,
        "Cannot put adapter %p until all map registers are freed (%x left).",
        (const void *)9,
        a1);
      VfReportIssueWithOptions(0xE6u, 9uLL, a1, *(int *)(v5 + 192), v5, byte_140E0EAE8);
    }
    if ( *(_DWORD *)(v5 + 200) )
    {
      ViHalPreprocessOptions(
        byte_140E0EAEC,
        "Cannot put adapter %p until all scatter gather lists are freed (%x left).",
        (const void *)0xA,
        a1);
      VfReportIssueWithOptions(0xE6u, 0xAuLL, a1, *(int *)(v5 + 200), v5, byte_140E0EAEC);
    }
    v6 = KeAcquireSpinLockRaiseToDpc(&qword_140F085F0);
    if ( *(_QWORD *)(v5 + 64) )
    {
      if ( !*(_BYTE *)(v5 + 74) )
      {
        if ( !*(_BYTE *)(v5 + 75) )
        {
          v5 = 0LL;
          goto LABEL_25;
        }
        v2 = 1;
        if ( v3 > 0 )
        {
LABEL_25:
          KeReleaseSpinLock(&qword_140F085F0, v6);
          goto LABEL_26;
        }
      }
      v9 = *(_QWORD *)v5;
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) == v5 )
      {
        v10 = *(_QWORD **)(v5 + 8);
        if ( *v10 == v5 )
        {
          *v10 = v9;
          *(_QWORD *)(v9 + 8) = v10;
          goto LABEL_25;
        }
      }
    }
    else
    {
      v7 = *(_QWORD *)v5;
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) == v5 )
      {
        v8 = *(_QWORD **)(v5 + 8);
        if ( *v8 == v5 )
        {
          *v8 = v7;
          *(_QWORD *)(v7 + 8) = v8;
          goto LABEL_25;
        }
      }
    }
    __fastfail(3u);
  }
LABEL_26:
  if ( v5 && !v2 )
    ViReleaseDmaAdapter(v5);
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  result = guard_dispatch_icall_no_overrides(RealDmaAdapter, *(_QWORD *)(RealDmaAdapter + 8));
  if ( v5 && v2 && v3 <= 0 )
    return ViReleaseDmaAdapter(v5);
  return result;
}
