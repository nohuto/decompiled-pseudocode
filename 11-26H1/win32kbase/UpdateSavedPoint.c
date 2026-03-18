/*
 * XREFs of UpdateSavedPoint @ 0x14021C560
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::PhysicalCursorPointAsLogicalPoint @ 0x1400CFE80 (_anonymous_namespace_--PhysicalCursorPointAsLogicalPoint.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 */

__int64 __fastcall UpdateSavedPoint(int a1, int a2, int a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rbx
  int v8; // edx
  int v9; // r8d
  _DWORD *v10; // rax
  int v11; // ecx
  int v12; // edx
  int v13; // r8d
  _DWORD v14[6]; // [rsp+20h] [rbp-18h] BYREF

  result = anonymous_namespace_::GetMouseProcessor(a1, a2, a3);
  v7 = result;
  if ( result )
  {
    *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 19904) + 4952LL) = 0LL;
    v10 = anonymous_namespace_::PhysicalCursorPointAsLogicalPoint(v14, v8, v9);
    v11 = v10[2];
    *(_QWORD *)(v7 + 44) = *(_QWORD *)v10;
    *(_DWORD *)(v7 + 52) = v11;
    result = W32GetUserSessionState(v11, v12, v13);
    *(_QWORD *)(v7 + 3668) = *(_QWORD *)(result + 19216);
    *(_QWORD *)(v7 + 3676) = 0LL;
  }
  return result;
}
