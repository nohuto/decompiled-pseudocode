/*
 * XREFs of UpdateSavedPoint @ 0x140217040
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     _anonymous_namespace_::PhysicalCursorPointAsLogicalPoint @ 0x1400BA520 (_anonymous_namespace_--PhysicalCursorPointAsLogicalPoint.c)
 */

__int64 __fastcall UpdateSavedPoint(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  _DWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD v11[6]; // [rsp+20h] [rbp-18h] BYREF

  result = anonymous_namespace_::GetMouseProcessor(a1, a2);
  v5 = result;
  if ( result )
  {
    *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 19872) + 4952LL) = 0LL;
    v7 = anonymous_namespace_::PhysicalCursorPointAsLogicalPoint(v11, v6);
    v8 = (unsigned int)v7[2];
    *(_QWORD *)(v5 + 44) = *(_QWORD *)v7;
    *(_DWORD *)(v5 + 52) = v8;
    result = W32GetUserSessionState(v8, v9);
    v10 = *(_QWORD *)(result + 19184);
    *(_QWORD *)(v5 + 3672) = 0LL;
    *(_QWORD *)(v5 + 3664) = v10;
  }
  return result;
}
