/*
 * XREFs of VfMapTransfer @ 0x140C2B300
 * Callers:
 *     <none>
 * Callees:
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140C28C44 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140C28E20 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140C28F2C (VF_ASSERT_MAX_IRQL.c)
 *     ViCheckAdapterBuffers @ 0x140C2C464 (ViCheckAdapterBuffers.c)
 *     ViCheckMdlLength @ 0x140C2C528 (ViCheckMdlLength.c)
 *     ViGetAdapterInformationInternal @ 0x140C2CF90 (ViGetAdapterInformationInternal.c)
 *     ViGetMapRegisterFile @ 0x140C2D0AC (ViGetMapRegisterFile.c)
 *     ViGetRealDmaAdapter @ 0x140C2D1F4 (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140C2D32C (ViHalPreprocessOptions.c)
 *     ViMapDoubleBuffer @ 0x140C2D778 (ViMapDoubleBuffer.c)
 *     ViSwap @ 0x140C2DF9C (ViSwap.c)
 */

__int64 VfMapTransfer(int a1, ...)
{
  __int64 v2; // rdi
  struct _MDL *v3; // rsi
  __int64 RealDmaAdapter; // r13
  __int64 AdapterInformationInternal; // rax
  char v7; // r12
  __int64 v8; // rbp
  unsigned int *v9; // r14
  unsigned int v10; // eax
  unsigned int v11; // ebx
  __int64 MapRegisterFile; // rax
  unsigned int v13; // eax
  __int64 v14; // rbx
  struct _MDL *v16; // [rsp+88h] [rbp+10h] BYREF
  va_list va; // [rsp+88h] [rbp+10h]
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF
  va_list va1; // [rsp+90h] [rbp+18h]
  __int64 v20; // [rsp+98h] [rbp+20h] BYREF
  va_list va2; // [rsp+98h] [rbp+20h]
  unsigned int *v22; // [rsp+A0h] [rbp+28h]
  __int64 v23; // [rsp+A8h] [rbp+30h]
  va_list va3; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v16 = va_arg(va1, struct _MDL *);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v20 = va_arg(va3, _QWORD);
  v22 = va_arg(va3, unsigned int *);
  v23 = va_arg(va3, _QWORD);
  v2 = v18;
  v3 = v16;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v7 = v23;
  v8 = AdapterInformationInternal;
  v9 = v22;
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_MAX_IRQL();
    VERIFY_BUFFER_LOCKED((ULONG_PTR)v3);
    ViCheckAdapterBuffers(v8);
    if ( *(_DWORD *)(v8 + 224) == 3 )
    {
      v10 = ViCheckMdlLength(v3, 0LL, *v9);
      if ( v10 )
      {
        v11 = v10;
        ViHalPreprocessOptions(
          byte_140E0EAF4,
          "The provided MDL is not sufficient to satisfy the requested length",
          36LL,
          v10,
          0LL,
          0LL);
        VfReportIssueWithOptions(0xE6u, 0x24uLL, v11, 0LL, 0LL, byte_140E0EAF4);
      }
    }
    if ( v2 != -559026163 )
    {
      MapRegisterFile = ViGetMapRegisterFile(v2);
      if ( MapRegisterFile )
      {
        v13 = ViMapDoubleBuffer(MapRegisterFile, v3, v7);
        if ( v13 )
        {
          *v9 = v13;
          ViSwap((__int64 *)va1, (struct _MDL **)va, (__int64 *)va2);
          v3 = v16;
        }
      }
    }
  }
  v14 = guard_dispatch_icall_no_overrides(RealDmaAdapter, (__int64)v3);
  if ( v8 )
    INCREASE_MAPPED_TRANSFER_BYTE_COUNT(v8, *v9, 0);
  return v14;
}
