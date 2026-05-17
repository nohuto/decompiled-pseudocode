/*
 * XREFs of LdrpLocateMrdata @ 0x180081AC0
 * Callers:
 *     LdrpChangeMrdataProtection @ 0x180081A50 (LdrpChangeMrdataProtection.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1800CA040 (RtlSectionTableFromVirtualAddress.c)
 *     LdrpMakePermanentImageCommit @ 0x1800E0460 (LdrpMakePermanentImageCommit.c)
 */

__int64 LdrpLocateMrdata()
{
  __int64 v0; // rdx
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  RtlImageNtHeaderEx(3, 0x180000000uLL, 0LL, &v5);
  v1 = RtlSectionTableFromVirtualAddress(v5, v0, (unsigned int)&LdrSystemDllInitBlock - 0x80000000);
  if ( !v1 )
    __fastfail(5u);
  result = LdrpMakePermanentImageCommit(0x180000000LL + *(unsigned int *)(v1 + 12), *(unsigned int *)(v1 + 8));
  LdrpMrdataSize = v3;
  LdrpMrdataBase = v4;
  return result;
}
