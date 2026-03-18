/*
 * XREFs of RIMUpdatePrimaryDevice @ 0x14013B858
 * Callers:
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140073F9C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140075964 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMRemoveFromActiveDevices @ 0x140131468 (RIMRemoveFromActiveDevices.c)
 * Callees:
 *     RIMGetPointerInputType @ 0x140074390 (RIMGetPointerInputType.c)
 *     RIMApiSetIsPointerInputTypeRedirected @ 0x14013B8B4 (RIMApiSetIsPointerInputTypeRedirected.c)
 */

__int64 __fastcall RIMUpdatePrimaryDevice(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned int v6; // eax

  result = 0LL;
  v5 = *(_QWORD *)(a1 + 480);
  if ( v5 )
    *(_DWORD *)(v5 + 368) &= ~1u;
  if ( a2 )
  {
    *(_DWORD *)(a2 + 368) |= 1u;
    *(_QWORD *)(a1 + 480) = a2;
    v6 = RIMGetPointerInputType(a2, a2, a3);
    result = RIMApiSetIsPointerInputTypeRedirected(v6);
  }
  else
  {
    *(_QWORD *)(a1 + 480) = 0LL;
  }
  *(_DWORD *)(a1 + 488) = result;
  return result;
}
