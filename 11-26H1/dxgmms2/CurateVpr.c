/*
 * XREFs of CurateVpr @ 0x140111418
 * Callers:
 *     ?CurateVpr@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXXZ @ 0x140111400 (-CurateVpr@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXXZ.c)
 * Callees:
 *     ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x14011146C (-CurateVPR@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

__int64 __fastcall CurateVpr(__int64 a1)
{
  unsigned __int16 i; // bx
  VIDMM_SEGMENT *v3; // rcx
  __int64 result; // rax

  for ( i = 0; (unsigned int)i < *(_DWORD *)(a1 + 136); result = i )
  {
    v3 = *(VIDMM_SEGMENT **)(*(_QWORD *)(a1 + 1752) + 8LL * i);
    if ( (*((_BYTE *)v3 + 66) & 1) != 0 )
      VIDMM_SEGMENT::CurateVPR(v3);
    ++i;
  }
  return result;
}
