/*
 * XREFs of ?SuspendMemorySegmentAccess@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAJXZ @ 0x1400B2840
 * Callers:
 *     <none>
 * Callees:
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1400B76D8 (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::SuspendMemorySegmentAccess(VIDMM_PHYSICAL_ADAPTER_LEGACY *this)
{
  unsigned __int16 i; // bx
  VIDMM_SEGMENT *v3; // rcx
  __int64 result; // rax

  for ( i = 0; (unsigned int)i < *((_DWORD *)this + 34); ++i )
  {
    v3 = *(VIDMM_SEGMENT **)(*((_QWORD *)this + 219) + 8LL * i);
    if ( *((_DWORD *)v3 + 27) == 1 && (*((_DWORD *)v3 + 16) & 4) != 0 )
    {
      result = VIDMM_SEGMENT::SuspendCpuAccess(v3);
      if ( (int)result < 0 )
        return result;
    }
  }
  return 0LL;
}
