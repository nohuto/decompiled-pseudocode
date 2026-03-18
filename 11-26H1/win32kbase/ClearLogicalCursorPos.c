/*
 * XREFs of ClearLogicalCursorPos @ 0x1401C4B10
 * Callers:
 *     InitLoadResources @ 0x140080CE4 (InitLoadResources.c)
 * Callees:
 *     _anonymous_namespace_::PhysicalCursorPointAsLogicalPoint @ 0x1400CFE80 (_anonymous_namespace_--PhysicalCursorPointAsLogicalPoint.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 */

__int64 __fastcall ClearLogicalCursorPos(int a1, int a2, int a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // r8d
  __int64 v6; // rbx
  int v7; // ecx
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF

  result = anonymous_namespace_::GetMouseProcessor(a1, a2, a3);
  v6 = result;
  if ( result )
  {
    result = (__int64)anonymous_namespace_::PhysicalCursorPointAsLogicalPoint(v8, v4, v5);
    v7 = *(_DWORD *)(result + 8);
    *(_QWORD *)(v6 + 44) = *(_QWORD *)result;
    *(_DWORD *)(v6 + 52) = v7;
  }
  return result;
}
