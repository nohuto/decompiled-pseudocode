/*
 * XREFs of ?BeginTemporaryResourceAccess@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAUVIDMM_TEMPORARY_RESOURCE_LEGACY@@@Z @ 0x1400BC6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::BeginTemporaryResourceAccess(
        VIDMM_SYSMEM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        struct VIDMM_TEMPORARY_RESOURCE_LEGACY *a3)
{
  _QWORD *v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned __int64 LogicalAddress; // rax
  int v11; // eax
  char v13; // [rsp+20h] [rbp-38h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v6[3] = a2;
    v6[4] = *((_QWORD *)a3 + 3);
    v6[5] = *((_QWORD *)a3 + 4);
    WdLogGlobalForLineNumber = 1223;
  }
  v7 = 0;
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 40098LL) )
  {
    if ( (*((_DWORD *)a3 + 10) & 1) == 0 )
    {
      v8 = *((_QWORD *)a3 + 2);
      v9 = *((_QWORD *)a3 + 4) >> 12;
      LogicalAddress = VidMmiGetLogicalAddress(*(void **)(*(_QWORD *)a2 + 344LL), *((_QWORD *)a3 + 3));
      v13 = 0;
      v11 = SysMmMapPagesToIommu(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL),
              LogicalAddress,
              v8,
              v9,
              v13,
              3,
              a2);
      v7 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(3LL, v11);
        WdLogGlobalForLineNumber = 1242;
      }
    }
  }
  return v7;
}
