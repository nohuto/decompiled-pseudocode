/*
 * XREFs of ?QueryInterface@DWMCursor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CD380
 * Callers:
 *     ?QueryInterface@DWMCursor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CD470 (-QueryInterface@DWMCursor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMCursor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CD480 (-QueryInterface@DWMCursor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMCursor::QueryInterface(DWMCursor *this, const struct _GUID *a2, DWMCursor **a3)
{
  DWMCursor *v4; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v6 )
  {
    (*(void (__fastcall **)(DWMCursor *))(*(_QWORD *)this + 8LL))(this);
    v7 = (unsigned __int64)v4 + 16;
LABEL_11:
    v4 = (DWMCursor *)(v7 & -(__int64)(v4 != 0LL));
LABEL_16:
    *a3 = v4;
    return 0LL;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_925481d1_82a9_4761_95ea_d779b9de7e6b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_925481d1_82a9_4761_95ea_d779b9de7e6b.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_925481d1_82a9_4761_95ea_d779b9de7e6b.Data4;
  if ( !v8 )
  {
    (*(void (__fastcall **)(DWMCursor *))(*(_QWORD *)this + 8LL))(this);
    v7 = (unsigned __int64)v4 + 8;
    goto LABEL_11;
  }
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a906d320_9167_4955_a961_8a982929b899.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a906d320_9167_4955_a961_8a982929b899.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a906d320_9167_4955_a961_8a982929b899.Data4;
  if ( !v9 )
  {
    (*(void (__fastcall **)(DWMCursor *))(*(_QWORD *)this + 8LL))(this);
    goto LABEL_16;
  }
  return 2147500034LL;
}
