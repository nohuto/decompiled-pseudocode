/*
 * XREFs of ?OnInput@CursorProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014B1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z @ 0x18014A98C (-CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z.c)
 *     ?CursorProcessorUpdateMouseCursorPosition@Cursor@InputTraceLogging@@SAXAEBUtagPOINT@@@Z @ 0x18014ACF8 (-CursorProcessorUpdateMouseCursorPosition@Cursor@InputTraceLogging@@SAXAEBUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CursorProcessor::OnInput(
        CursorProcessor *this,
        const struct tagPOINT *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  int v6; // esi
  char v7; // al
  __int64 v8; // r9
  int v9; // eax
  int x; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_DWORD *)a4 + 2) = 0;
  v6 = a2->x & 0x10;
  if ( v6 || (a2->x & 2) != 0 )
  {
    *((_DWORD *)a4 + 2) = 4;
    v7 = CursorProcessor::CheckAndUpdateCursorOwnerForContext((CursorProcessor *)((char *)this - 8), a3, a2->y);
    if ( v6 )
    {
      InputTraceLogging::Cursor::CursorProcessorUpdateMouseCursorPosition(a2 + 46);
      LOBYTE(v8) = 1;
      x = a2[46].x;
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 12) + 80LL))(
             *((_QWORD *)this + 12),
             0LL,
             1LL,
             v8);
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xF9,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\cursor\\system\\lib\\cursorprocessor.cpp",
          (const char *)(unsigned int)v9,
          x);
    }
    else if ( v7 )
    {
      *((_BYTE *)this + 112) = a2[39].x;
    }
  }
  return 0LL;
}
