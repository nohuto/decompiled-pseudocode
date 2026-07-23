/*
 * XREFs of MiUnlockDataCopyPages @ 0x1402B45FC
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14036E218 (MiCopyDataPageToImagePage.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 */

__int64 __fastcall MiUnlockDataCopyPages(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx

  v2 = a1[3];
  if ( v2 )
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v4 = a1[4];
  if ( v4 )
  {
    LOBYTE(a2) = 18;
    MiUnlockProtoPoolPage(v4, a2);
  }
  result = *a1;
  if ( *a1 )
    _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v6 = a1[1];
  if ( v6 )
  {
    LOBYTE(a2) = 17;
    return MiUnlockProtoPoolPage(v6, a2);
  }
  return result;
}
