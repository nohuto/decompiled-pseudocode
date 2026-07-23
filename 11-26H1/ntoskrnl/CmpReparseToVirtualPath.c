/*
 * XREFs of CmpReparseToVirtualPath @ 0x140B07FA4
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140A9F978 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B33A1C (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140B4DB2C (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmpVirtualPathPresent @ 0x1407764E0 (CmpVirtualPathPresent.c)
 *     CmRealKCBToVirtualPath @ 0x1408B7A24 (CmRealKCBToVirtualPath.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

bool __fastcall CmpReparseToVirtualPath(__int64 a1, __int64 a2, int *a3, _OWORD *a4)
{
  bool v7; // bl
  UNICODE_STRING P; // [rsp+20h] [rbp-18h] BYREF

  P = 0LL;
  RtlInitUnicodeString(&P, 0LL);
  if ( (*(_DWORD *)(a1 + 184) & 0x800000) != 0 && (int)CmRealKCBToVirtualPath(a1, 0LL, a3, &P) >= 0 )
  {
    v7 = CmpVirtualPathPresent((__int64)&P);
    if ( v7 )
    {
      *a4 = P;
      RtlInitUnicodeString(&P, 0LL);
      v7 = 1;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( P.Buffer )
    ExFreePool(P.Buffer);
  return v7;
}
