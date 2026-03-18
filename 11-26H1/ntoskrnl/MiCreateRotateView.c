/*
 * XREFs of MiCreateRotateView @ 0x1409CF99C
 * Callers:
 *     MiReserveUserMemoryPrepare @ 0x14095B7EC (MiReserveUserMemoryPrepare.c)
 *     MiInitializePartialVad @ 0x140AC0654 (MiInitializePartialVad.c)
 * Callees:
 *     MiGetInPageSupportBlock @ 0x140396FF0 (MiGetInPageSupportBlock.c)
 *     MiCreateVadEvent @ 0x1409CE5DC (MiCreateVadEvent.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateRotateView(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  PSLIST_ENTRY v4; // rbx
  int v5; // edi
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = MiGetInPageSupportBlock(0, 0LL);
  if ( !v4 )
    return 3221225626LL;
  v5 = MiCreateVadEvent(BugCheckParameter4, a2, 0LL, 8, (__int64)MiDeleteVadEventRotate, &v7);
  if ( v5 < 0 )
  {
    ExFreePoolWithTag(v4, 0);
    return (unsigned int)v5;
  }
  else
  {
    *(_QWORD *)(v7 + 24) = v4;
    return 0LL;
  }
}
