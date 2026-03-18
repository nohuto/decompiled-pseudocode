/*
 * XREFs of NtUserfnPARENTNOTIFY @ 0x140136FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsPointerParentNotify @ 0x140137050 (IsPointerParentNotify.c)
 *     NtUserfnEMPTY @ 0x140137080 (NtUserfnEMPTY.c)
 *     NtUserfnPOINTERINPUT @ 0x140137340 (NtUserfnPOINTERINPUT.c)
 */

__int64 __fastcall NtUserfnPARENTNOTIFY(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  unsigned int v8; // edi
  int v9; // ebp

  v8 = a2;
  v9 = a1;
  PtiCurrent(a1, a2);
  if ( (unsigned int)IsPointerParentNotify(v8, a3) )
    return NtUserfnPOINTERINPUT(v9, v8, a3, a4, a5, a6);
  else
    return NtUserfnEMPTY(v9, v8, a3, a4, a5, a6);
}
