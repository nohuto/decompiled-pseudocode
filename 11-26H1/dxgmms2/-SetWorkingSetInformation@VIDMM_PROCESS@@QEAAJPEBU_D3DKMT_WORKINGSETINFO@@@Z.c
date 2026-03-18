/*
 * XREFs of ?SetWorkingSetInformation@VIDMM_PROCESS@@QEAAJPEBU_D3DKMT_WORKINGSETINFO@@@Z @ 0x1400A9414
 * Callers:
 *     VidMmSetWorkingSetInformation @ 0x14004D890 (VidMmSetWorkingSetInformation.c)
 * Callees:
 *     McTemplateK0tqq_EtwWriteTransfer @ 0x14004F180 (McTemplateK0tqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VIDMM_PROCESS::SetWorkingSetInformation(
        VIDMM_PROCESS *this,
        const struct _D3DKMT_WORKINGSETINFO *a2,
        __int64 a3)
{
  unsigned int v3; // edi

  v3 = 0;
  if ( (*(_DWORD *)&a2->Flags & 1) != 0 )
  {
    *((_DWORD *)this + 34) |= 1u;
  }
  else if ( SeSinglePrivilegeCheck((LUID)33LL, 1) )
  {
    *((_DWORD *)this + 34) &= ~1u;
    *((_DWORD *)this + 35) = a2->MaximumWorkingSetPercentile;
    *((_DWORD *)this + 36) = a2->MinimumWorkingSetPercentile;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1920;
    v3 = -1073741790;
  }
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0tqq_EtwWriteTransfer(
      *((unsigned int *)this + 36),
      (__int64)a2,
      a3,
      *((_DWORD *)this + 34) & 1,
      *((_DWORD *)this + 36),
      *((_DWORD *)this + 35));
  return v3;
}
