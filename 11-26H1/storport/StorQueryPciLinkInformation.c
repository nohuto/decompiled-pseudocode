/*
 * XREFs of StorQueryPciLinkInformation @ 0x1401B0DC8
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x14006A3F0 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidGetLinkConfigInterface @ 0x140094504 (RaidGetLinkConfigInterface.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorQueryPciLinkInformation(__int64 a1, __int64 a2, _QWORD *a3)
{
  bool v3; // zf
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 4340) == 17;
  v8 = 0LL;
  *a3 = 0LL;
  if ( !v3 || (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
    return 3221225659LL;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) < 0xCu )
    return 3221225507LL;
  v7 = *(_QWORD *)(a2 + 24);
  if ( !v7 )
    return 3221225485LL;
  if ( !*(_QWORD *)(a1 + 6280) )
  {
    result = RaidGetLinkConfigInterface(*(_QWORD *)(a1 + 8), &v8);
    if ( (int)result < 0 )
      return result;
    if ( !v8 )
      return 3221225858LL;
    *(_QWORD *)(a1 + 6280) = v8;
  }
  *(_QWORD *)v7 = 0LL;
  *(_DWORD *)(v7 + 8) = 0;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 6280) + 40LL))(
             *(_QWORD *)(*(_QWORD *)(a1 + 6280) + 8LL),
             v7);
  if ( (int)result >= 0 )
    *a3 = 12LL;
  return result;
}
