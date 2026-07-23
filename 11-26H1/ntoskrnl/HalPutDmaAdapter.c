/*
 * XREFs of HalPutDmaAdapter @ 0x140269180
 * Callers:
 *     PspAssignSiloSystemRootPath @ 0x1407F4490 (PspAssignSiloSystemRootPath.c)
 *     PspSiloInitializeUserSharedData @ 0x1407F539C (PspSiloInitializeUserSharedData.c)
 *     ObCreateSiloRootDirectory @ 0x1408AD404 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269140 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 */

void __stdcall HalPutDmaAdapter(PADAPTER_OBJECT DmaAdapter)
{
  signed __int64 v2; // rbx
  bool v3; // zf
  bool v4; // sf
  bool v5; // of
  signed __int64 BugCheckParameter4; // rbx
  BOOLEAN v7; // al
  PADAPTER_OBJECT v8; // rcx
  __int64 v9; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((__int64)&DmaAdapter[-3], -1, 0x746C6644u);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&DmaAdapter[-3], 0xFFFFFFFFFFFFFFFFuLL);
  v5 = __OFSUB__(v2, 1LL);
  v3 = v2 == 1;
  v4 = v2 - 1 < 0;
  BugCheckParameter4 = v2 - 1;
  if ( v4 ^ v5 | v3 )
  {
    if ( DmaAdapter[-3].DmaOperations )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8)],
        (ULONG_PTR)DmaAdapter,
        1uLL,
        (ULONG_PTR)DmaAdapter[-3].DmaOperations);
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)DmaAdapter, 2uLL, BugCheckParameter4);
    v7 = KeAreAllApcsDisabled();
    v8 = DmaAdapter - 3;
    if ( v7 )
    {
      ObpDeferObjectDeletion(v8);
    }
    else
    {
      v9 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO((__int64)v8);
      if ( v9 )
        ObpHandleRevocationBlockRemoveObject(v9);
      if ( ObpTraceFlags )
        ObpDeregisterObject(&DmaAdapter[-3]);
      ObpRemoveObjectRoutine(&DmaAdapter[-3], 0LL);
    }
  }
}
