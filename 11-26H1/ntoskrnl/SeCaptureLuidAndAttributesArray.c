/*
 * XREFs of SeCaptureLuidAndAttributesArray @ 0x140A43158
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x140A42610 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x140A42F40 (NtPrivilegeCheck.c)
 *     NtCreateTokenEx @ 0x140A44080 (NtCreateTokenEx.c)
 *     NtFilterToken @ 0x140A45140 (NtFilterToken.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureLuidAndAttributesArray(
        void *Src,
        unsigned int a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        _QWORD *a8,
        _DWORD *a9)
{
  SIZE_T v11; // rdx
  unsigned int v12; // esi
  PVOID PoolWithTag; // rax

  if ( !a2 )
  {
    *a8 = 0LL;
    *a9 = 0;
    return 0LL;
  }
  if ( a2 > 0x42 )
    return 3221225485LL;
  v11 = 12 * a2;
  *a9 = (v11 + 3) & 0xFFFFFFFC;
  v12 = v11;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1025, v11, 0x754C6553u);
  *a8 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( a3 )
      RtlCopyFromUser(PoolWithTag, Src, v12);
    else
      RtlCopyVolatileMemory(PoolWithTag, Src, v12);
    return 0LL;
  }
  return 3221225626LL;
}
