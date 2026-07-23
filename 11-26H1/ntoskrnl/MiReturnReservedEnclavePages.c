/*
 * XREFs of MiReturnReservedEnclavePages @ 0x140C07FA8
 * Callers:
 *     MiAddPagesToEnclave @ 0x14034355C (MiAddPagesToEnclave.c)
 *     MiInitializeEnclave @ 0x140AB8BBC (MiInitializeEnclave.c)
 *     MiDeleteEnclavePages @ 0x140C07CE8 (MiDeleteEnclavePages.c)
 * Callees:
 *     MiReturnEnclavePage @ 0x140343FC4 (MiReturnEnclavePage.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 */

void __fastcall MiReturnReservedEnclavePages(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 *v4; // rax

  if ( a2 )
  {
    v2 = a2;
    v3 = a1 + 104;
    do
    {
      v4 = MiUnlinkPageChainHead(v3);
      if ( !v4 )
        break;
      MiReturnEnclavePage(
        (__int64)(v4 + 0x44000000000LL) / 48,
        (__int64)((unsigned __int128)((__int64)(v4 + 0x44000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3);
      --v2;
    }
    while ( v2 );
  }
}
