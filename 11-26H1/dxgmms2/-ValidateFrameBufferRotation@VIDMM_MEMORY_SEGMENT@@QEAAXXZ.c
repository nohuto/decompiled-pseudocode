/*
 * XREFs of ?ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x1400FF47C
 * Callers:
 *     PurgeSegments @ 0x1400FEE38 (PurgeSegments.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_MEMORY_SEGMENT::ValidateFrameBufferRotation(unsigned int **this)
{
  __int64 v1; // rdx
  unsigned int *v2; // r9
  __int64 v3; // rcx
  __int64 v4; // rdx

  v1 = *((unsigned int *)this + 130);
  if ( (_DWORD)v1 )
  {
LABEL_6:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 59LL, this, v1, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x1400FF529LL);
  }
  v2 = this[64];
  if ( v2 )
  {
    v3 = v2[18];
    v4 = v2[17];
    if ( (_DWORD)v4 != (_DWORD)v3 + v2[20] + v2[21] )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 60LL, v2, v4, v3);
      WdLogGlobalForLineNumber = 213;
      goto LABEL_6;
    }
  }
}
