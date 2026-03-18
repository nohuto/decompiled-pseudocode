/*
 * XREFs of NtUserfnPOINTERINPUT @ 0x140137340
 * Callers:
 *     NtUserfnPARENTNOTIFY @ 0x140136FC0 (NtUserfnPARENTNOTIFY.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsPointerInputMessage @ 0x140067230 (IsPointerInputMessage.c)
 *     IsPointerParentNotify @ 0x140137050 (IsPointerParentNotify.c)
 *     xxxSendPointerMessage @ 0x14013745C (xxxSendPointerMessage.c)
 */

__int64 __fastcall NtUserfnPOINTERINPUT(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v8; // esi
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // r10
  int v12; // r9d

  v8 = a2;
  v10 = 0LL;
  v11 = PtiCurrent(a1, a2);
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    UserSetLastError(1400);
    return v10;
  }
  v12 = a6;
  if ( a6 == 689 || a6 == 691 || (unsigned int)(a6 - 695) <= 1 )
  {
    if ( v8 == 528 )
    {
      if ( !IsPointerParentNotify(528, a3) )
        return v10;
      a3 >>= 16;
      return xxxSendPointerMessage((_DWORD)v11, (unsigned __int16)a3, a1, v8, v10, a5, v12);
    }
    if ( v8 == 587 )
    {
      v10 = a4;
      return xxxSendPointerMessage((_DWORD)v11, (unsigned __int16)a3, a1, v8, v10, a5, v12);
    }
    if ( (v8 != 592 || (*((_DWORD *)v11 + 340) & 0x2000LL) != 0)
      && (unsigned int)IsPointerInputMessage(v8)
      && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) == *((_QWORD *)v11 + 58) )
    {
      return xxxSendPointerMessage((_DWORD)v11, (unsigned __int16)a3, a1, v8, v10, a5, v12);
    }
  }
  return v10;
}
