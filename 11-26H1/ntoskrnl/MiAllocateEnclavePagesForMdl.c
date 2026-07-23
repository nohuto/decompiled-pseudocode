/*
 * XREFs of MiAllocateEnclavePagesForMdl @ 0x14033A2B4
 * Callers:
 *     MiFindPagesForMdl @ 0x140339E68 (MiFindPagesForMdl.c)
 * Callees:
 *     MiAllocateEnclavePages @ 0x14033995C (MiAllocateEnclavePages.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 */

__int64 __fastcall MiAllocateEnclavePagesForMdl(__int64 a1, __int64 a2, char a3, __int64 a4, int a5)
{
  int v6; // eax
  int v8; // r8d
  __int64 result; // rax
  __int64 v10; // rax
  int v11; // r8d
  __int64 *v12; // r9
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v6 = a3 & 2;
  v8 = v6 | 1;
  v14 = 0LL;
  if ( (a3 & 4) == 0 )
    v8 = v6;
  v13 = 0LL;
  MiAllocateEnclavePages(a1, a5, v8, a4, &v13);
  if ( !v14 )
    return 0LL;
  while ( 1 )
  {
    v10 = MiUnlinkPageChainHead(&v13);
    if ( !v10 )
      break;
    *v12 = (v10 + 0x220000000000LL) / 48;
  }
  result = 1LL;
  *(_DWORD *)(a2 + 40) += v11 << 12;
  return result;
}
