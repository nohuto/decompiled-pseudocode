/*
 * XREFs of ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick @ 0x140195138
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick(__int64 a1, __int64 a2))(void)
{
  unsigned int v2; // ebx
  __int64 (*result)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = a2;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6760LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48) + 6768LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(__int64, _QWORD))result)(a1, v2);
    }
  }
  return result;
}
