/*
 * XREFs of ClearLogicalCursorPos @ 0x140215FA0
 * Callers:
 *     InitLoadResources @ 0x14011FE88 (InitLoadResources.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     _anonymous_namespace_::PhysicalCursorPointAsLogicalPoint @ 0x1400BA520 (_anonymous_namespace_--PhysicalCursorPointAsLogicalPoint.c)
 */

__int64 __fastcall ClearLogicalCursorPos(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  int v5; // ecx
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  result = anonymous_namespace_::GetMouseProcessor(a1, a2);
  v4 = result;
  if ( result )
  {
    result = (__int64)anonymous_namespace_::PhysicalCursorPointAsLogicalPoint(v6, v3);
    v5 = *(_DWORD *)(result + 8);
    *(_QWORD *)(v4 + 44) = *(_QWORD *)result;
    *(_DWORD *)(v4 + 52) = v5;
  }
  return result;
}
