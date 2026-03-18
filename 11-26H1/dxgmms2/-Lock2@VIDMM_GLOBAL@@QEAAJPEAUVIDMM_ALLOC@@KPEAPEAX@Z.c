/*
 * XREFs of ?Lock2@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z @ 0x1400E8148
 * Callers:
 *     VidMmLock @ 0x140039670 (VidMmLock.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqqtp_EtwWriteTransfer @ 0x14003FA00 (McTemplateK0pqqtp_EtwWriteTransfer.c)
 *     ?LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAXPEA_N@Z @ 0x1400E7D78 (-LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAXPEA_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Lock2(VIDMM_GLOBAL *this, __int64 **a2, unsigned int a3, void **a4)
{
  int v7; // edi
  __int64 v8; // r8
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-38h]
  bool v12; // [rsp+70h] [rbp+18h] BYREF

  if ( (a3 & 0xFFFFFBFF) != 0 )
  {
    WdLogSingleEntry2(1LL, a3, 1024LL);
    WdLogGlobalForLineNumber = 23058;
    DxgkLogInternalTriageEvent(v10, 0x40000LL);
    return 3221225485LL;
  }
  else
  {
    v12 = 0;
    v7 = VIDMM_GLOBAL::LockCommon(this, a2, 1, a3, a4, &v12);
    if ( v7 >= 0 && (byte_14008A201 & 1) != 0 )
    {
      LODWORD(v11) = a3;
      McTemplateK0pqqtp_EtwWriteTransfer((__int64)*a4, v12, v8, a2, v11);
    }
    return (unsigned int)v7;
  }
}
