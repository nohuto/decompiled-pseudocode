/*
 * XREFs of ?VidMmPrepareDmaBuffer@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_DMA_BUFFER@@IPEAIPEAT_LARGE_INTEGER@@@Z @ 0x1400EBC00
 * Callers:
 *     VidSchiSubmitRenderCommand @ 0x1400EAB34 (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VerifyAllocationForSubmissionPhysical @ 0x1400EBD5C (VerifyAllocationForSubmissionPhysical.c)
 *     ReferenceAllocationForSubmission @ 0x1400EBE3C (ReferenceAllocationForSubmission.c)
 */

__int64 __fastcall VidMmPrepareDmaBuffer(
        const struct VIDMM_GLOBAL *a1,
        union _LARGE_INTEGER *a2,
        unsigned int a3,
        unsigned int *a4,
        union _LARGE_INTEGER *a5)
{
  _QWORD ***QuadPart; // rax
  _QWORD **v9; // rax
  __int64 v10; // rcx
  union _LARGE_INTEGER v11; // r14
  __int64 v12; // rdi
  union _LARGE_INTEGER v13; // rsi
  __int64 result; // rax
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // rcx
  union _LARGE_INTEGER *v18; // rax
  int v19; // [rsp+60h] [rbp+18h] BYREF

  QuadPart = (_QWORD ***)a2[7].QuadPart;
  if ( QuadPart )
  {
    v9 = *QuadPart;
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 5040) + 8LL * ((*(_DWORD *)(**v9 + 52LL) >> 2) & 0x3F));
    (*(void (__fastcall **)(__int64, _QWORD, unsigned int *, union _LARGE_INTEGER *, _QWORD))(*(_QWORD *)v10 + 48LL))(
      v10,
      **v9,
      a4,
      a5,
      0LL);
  }
  else
  {
    v18 = a5;
    *a4 = 0;
    *v18 = a2[10];
  }
  v11 = a2[13];
  v12 = 0LL;
  v13 = a2[12];
  while ( (unsigned int)v12 < a3 )
  {
    if ( *(_QWORD *)(v13.QuadPart + 8 * v12) )
    {
      result = VerifyAllocationForSubmissionPhysical();
      if ( (int)result < 0 )
        return result;
      LOBYTE(v15) = (*(_BYTE *)(v11.QuadPart + 24 * v12 + 8) & 1) == 0;
      ReferenceAllocationForSubmission(
        ***(_QWORD ***)(v13.QuadPart + 8 * v12),
        *(_QWORD *)(v13.QuadPart + 8 * v12),
        v15);
      v17 = *(_QWORD *)(*((_QWORD *)a1 + 5040) + 8LL * ((*(_DWORD *)(v16 + 52) >> 2) & 0x3F));
      v19 = 0;
      (*(void (__fastcall **)(__int64, __int64, int *, LONGLONG, _QWORD))(*(_QWORD *)v17 + 48LL))(
        v17,
        v16,
        &v19,
        v11.QuadPart + 16 + 24 * v12,
        0LL);
      *(_DWORD *)(v11.QuadPart + 24 * v12 + 8) = *(_DWORD *)(v11.QuadPart + 24 * v12 + 8) & 0xFFFFFFC1 | (2 * (v19 & 0x1F));
    }
    v12 = (unsigned int)(v12 + 1);
  }
  return 0LL;
}
