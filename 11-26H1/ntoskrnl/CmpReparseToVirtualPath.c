/*
 * XREFs of CmpReparseToVirtualPath @ 0x1408AF5E0
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140A9F648 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B3181C (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140B4BD9C (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     CmpVirtualPathPresent @ 0x1407734E0 (CmpVirtualPathPresent.c)
 *     CmRealKCBToVirtualPath @ 0x1408B1418 (CmRealKCBToVirtualPath.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 */

bool __fastcall CmpReparseToVirtualPath(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
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
