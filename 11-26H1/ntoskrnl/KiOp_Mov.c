/*
 * XREFs of KiOp_Mov @ 0x140486490
 * Callers:
 *     <none>
 * Callees:
 *     KiOpPciConfigSpaceAccessCommon @ 0x1405FACC4 (KiOpPciConfigSpaceAccessCommon.c)
 */

__int64 __fastcall KiOp_Mov(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  int v4; // [rsp+30h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 81) || (*(_DWORD *)(a1 + 60) & 0x2000000) == 0 )
    return 3221225659LL;
  if ( *(unsigned __int8 *)(a1 + 56) != 136 )
  {
    if ( *(unsigned __int8 *)(a1 + 56) != 137 )
    {
      if ( *(unsigned __int8 *)(a1 + 56) == 138 )
      {
        LOBYTE(v4) = 0;
        v2 = 1LL;
        goto LABEL_17;
      }
      if ( *(unsigned __int8 *)(a1 + 56) == 139 )
      {
        if ( (*(_DWORD *)(a1 + 48) & 0x40) != 0 )
        {
          LOWORD(v4) = 0;
          v2 = 2LL;
LABEL_17:
          v3 = a1;
          a1 = 0LL;
          return KiOpPciConfigSpaceAccessCommon(a1, v3, v2, &v4);
        }
        if ( (*(_BYTE *)(a1 + 64) & 8) == 0 )
        {
          v4 = 0;
          v2 = 4LL;
          goto LABEL_17;
        }
      }
      return 3221225659LL;
    }
    if ( (*(_DWORD *)(a1 + 48) & 0x40) != 0 )
    {
      LOWORD(v4) = 0;
      v2 = 2LL;
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
        return 3221225659LL;
      v4 = 0;
      v2 = 4LL;
    }
    v3 = a1;
    LOBYTE(a1) = 1;
    return KiOpPciConfigSpaceAccessCommon(a1, v3, v2, &v4);
  }
  LOBYTE(v4) = 0;
  v2 = 1LL;
  v3 = a1;
  LOBYTE(a1) = 1;
  return KiOpPciConfigSpaceAccessCommon(a1, v3, v2, &v4);
}
