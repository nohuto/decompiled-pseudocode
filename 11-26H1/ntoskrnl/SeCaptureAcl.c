/*
 * XREFs of SeCaptureAcl @ 0x1409E0A20
 * Callers:
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     NtCreateTokenEx @ 0x1409E2210 (NtCreateTokenEx.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SepCheckAcl @ 0x1409E0B40 (SepCheckAcl.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureAcl(
        unsigned __int16 *Src,
        char a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        PVOID *a7,
        _DWORD *a8)
{
  unsigned __int16 UShortFromUser; // ax
  SIZE_T v11; // rbx
  PVOID PoolWithTag; // rax

  if ( a2 )
    UShortFromUser = RtlReadUShortFromUser(Src + 1);
  else
    UShortFromUser = Src[1];
  v11 = UShortFromUser;
  if ( a2 )
    ProbeForRead(Src, UShortFromUser, 4u);
  if ( (unsigned int)v11 < 8 )
    return 3221225591LL;
  *a8 = (v11 + 3) & 0xFFFFFFFC;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a5 | 0x400), v11, 0x63416553u);
  *a7 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( a2 )
      RtlCopyFromUser(PoolWithTag, Src, v11);
    else
      RtlCopyVolatileMemory(PoolWithTag, Src, v11);
    if ( (unsigned __int8)SepCheckAcl(*a7, (unsigned int)v11) )
      return 0LL;
    ExFreePoolWithTag(*a7, 0);
    *a7 = 0LL;
    return 3221225591LL;
  }
  return 3221225626LL;
}
