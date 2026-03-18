/*
 * XREFs of ?TrimResidentBytes@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1400B28D0
 * Callers:
 *     <none>
 * Callees:
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1400D351C (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEBUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::TrimResidentBytes(
        VIDMM_PHYSICAL_ADAPTER_LEGACY *this,
        const struct VIDMM_PARTITION_ADAPTER_INFO *a2)
{
  unsigned __int16 i; // bx

  for ( i = 0; (unsigned int)i < *((_DWORD *)this + 34); ++i )
    VIDMM_SEGMENT::TrimResidentBytes(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 219) + 8LL * i), a2);
}
