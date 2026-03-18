/*
 * XREFs of LogLockAllocationBackingStoreToEtw @ 0x1400ED0F4
 * Callers:
 *     ?ReportSegmentState@VIDMM_SEGMENT@@QEBAXXZ @ 0x1400ECD00 (-ReportSegmentState@VIDMM_SEGMENT@@QEBAXXZ.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ECEC4 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14003E1A4 (-VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     McTemplateK0xxqXR2_EtwWriteTransfer @ 0x14003F3DC (McTemplateK0xxqXR2_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

void __fastcall LogLockAllocationBackingStoreToEtw(const struct VIDMM_GLOBAL_ALLOC *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v5; // rax
  const unsigned __int64 *FullPfnArray; // rsi
  __int64 v7; // r15
  unsigned __int64 i; // rbx
  __int64 v9; // rdx
  __int64 *v10; // r8
  __int64 v11; // r14
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // [rsp+28h] [rbp-240h]
  _BYTE v16[512]; // [rsp+40h] [rbp-228h] BYREF

  v3 = 0LL;
  if ( (byte_14008A203 & 8) == 0 )
    return;
  v5 = *((_QWORD *)a1 + 6);
  if ( v5 )
    v3 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL);
  if ( *((_QWORD *)a1 + 28) )
  {
    FullPfnArray = VidMmGetFullPfnArray(a1);
  }
  else
  {
    v14 = *((_QWORD *)a1 + 7);
    if ( !v14 )
    {
LABEL_8:
      if ( (byte_14008A203 & 8) != 0 )
        McTemplateK0xxqXR2_EtwWriteTransfer((__int64)a1, a2, a3, v3, a1, 0, 0LL);
      return;
    }
    FullPfnArray = (const unsigned __int64 *)(v14 + 48);
  }
  if ( !FullPfnArray )
    goto LABEL_8;
  v7 = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)a1 + 16LL) >> 12; i; i -= v11 )
  {
    if ( i < 0x40 )
      v9 = (unsigned int)i;
    else
      v9 = 64LL;
    v10 = (__int64 *)v16;
    v11 = (unsigned int)v9;
    v12 = (unsigned int)v9;
    do
    {
      v13 = FullPfnArray[v7];
      v7 = (unsigned int)(v7 + 1);
      *v10++ = v13;
      --v12;
    }
    while ( v12 );
    if ( (byte_14008A203 & 8) != 0 )
    {
      LODWORD(v15) = v9;
      McTemplateK0xxqXR2_EtwWriteTransfer(v13, v9, (__int64)v10, v3, a1, v15, v16);
    }
  }
}
