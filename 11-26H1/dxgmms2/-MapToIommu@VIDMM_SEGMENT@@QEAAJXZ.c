/*
 * XREFs of ?MapToIommu@VIDMM_SEGMENT@@QEAAJXZ @ 0x14012A0A4
 * Callers:
 *     EnableIommuIsolation @ 0x1400B1D68 (EnableIommuIsolation.c)
 * Callees:
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 *     ?MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140125340 (-MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::MapToIommu(VIDMM_SEGMENT *this)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int64 LogicalAddress; // rax
  int v5; // eax
  unsigned int v6; // ebx
  char *v8; // rdi
  char *i; // rbx
  int v10; // eax
  unsigned int v11; // ebp
  VIDMM_SEGMENT *j; // rbx
  int v13; // eax
  char v14; // [rsp+20h] [rbp-28h]

  if ( (*((_DWORD *)this + 16) & 0x40) != 0 )
  {
    v2 = *((_QWORD *)this + 20);
    v3 = *((_QWORD *)this + 4);
    LogicalAddress = VidMmiGetLogicalAddress(*((void **)this + 61), 0LL);
    v14 = 0;
    v5 = SysMmMapContiguousRangeToIommu(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL),
           LogicalAddress,
           v3,
           v2,
           v14,
           9,
           this);
    v6 = v5;
    if ( v5 < 0 )
    {
      WdLogSingleEntry1(3LL, v5);
      WdLogGlobalForLineNumber = 6127;
      return v6;
    }
  }
  else if ( *((_DWORD *)this + 27) != 1 )
  {
    v8 = (char *)this + 136;
    for ( i = (char *)*((_QWORD *)this + 17); i != v8; i = *(char **)i )
    {
      v10 = VIDMM_SEGMENT::MapAllocationToIoMmu(this, (struct VIDMM_GLOBAL_ALLOC *)(i - 240));
      v11 = v10;
      if ( v10 < 0 )
      {
        WdLogSingleEntry2(3LL, i - 240, v10);
        WdLogGlobalForLineNumber = 6149;
        return v11;
      }
    }
    for ( j = (VIDMM_SEGMENT *)*((_QWORD *)this + 33); j != (VIDMM_SEGMENT *)((char *)this + 264); j = *(VIDMM_SEGMENT **)j )
    {
      v13 = VIDMM_SEGMENT::MapAllocationToIoMmu(this, (VIDMM_SEGMENT *)((char *)j - 240));
      v11 = v13;
      if ( v13 < 0 )
      {
        WdLogSingleEntry2(3LL, (char *)j - 240, v13);
        WdLogGlobalForLineNumber = 6164;
        return v11;
      }
    }
  }
  return 0LL;
}
