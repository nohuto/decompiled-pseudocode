/*
 * XREFs of MiGetPhysicalAddress @ 0x14024D084
 * Callers:
 *     MiDbgCopyPrivilegedData @ 0x1406FDCAC (MiDbgCopyPrivilegedData.c)
 * Callees:
 *     MiGetVirtualAddressState @ 0x14024D274 (MiGetVirtualAddressState.c)
 */

__int64 __fastcall MiGetPhysicalAddress(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  bool v5; // zf
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  *a2 = 0LL;
  *a3 = 0;
  v8 = 0LL;
  v7 = 0LL;
  if ( (int)MiGetVirtualAddressState(&v7, a1, 0LL) < 0 )
    return 0LL;
  v5 = (v7 & 0x800) == 0;
  *a2 = v8;
  result = 1LL;
  if ( !v5 )
    *a3 = 1;
  return result;
}
