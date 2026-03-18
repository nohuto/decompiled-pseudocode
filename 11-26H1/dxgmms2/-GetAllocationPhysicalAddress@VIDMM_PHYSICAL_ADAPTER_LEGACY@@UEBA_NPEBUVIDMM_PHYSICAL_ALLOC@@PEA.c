/*
 * XREFs of ?GetAllocationPhysicalAddress@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBA_NPEBUVIDMM_PHYSICAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x140116240
 * Callers:
 *     <none>
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 */

char __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::GetAllocationPhysicalAddress(
        VIDMM_PHYSICAL_ADAPTER_LEGACY *this,
        const struct VIDMM_PHYSICAL_ALLOC *a2,
        unsigned int *a3,
        union _LARGE_INTEGER *a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rcx
  char v6; // r10
  unsigned __int64 v8; // r11
  unsigned __int16 v9; // ax
  _DWORD *v10; // r8

  v5 = *((_QWORD *)a2 + 8);
  v6 = 0;
  if ( v5 && (*(_DWORD *)(v5 + 64) & 0x1000) == 0 )
  {
    v8 = *((_QWORD *)a2 + 9);
    a4->QuadPart = v8 + *(_QWORD *)(v5 + 24);
    if ( a5 )
      *a5 = v8;
    v9 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)v5);
    v6 = 1;
    *v10 = v9;
  }
  else
  {
    *a3 = 0;
    a4->QuadPart = 0LL;
    if ( a5 )
      *a5 = 0LL;
  }
  return v6;
}
