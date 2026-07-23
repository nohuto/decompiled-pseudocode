/*
 * XREFs of MiLinkHotPatchToBase @ 0x140700F38
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 *     MiCreateBootDriverHotPatchLinkage @ 0x140D0196C (MiCreateBootDriverHotPatchLinkage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiUpdatePatchInProgress @ 0x140701B84 (MiUpdatePatchInProgress.c)
 */

_QWORD *__fastcall MiLinkHotPatchToBase(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 CurrentIrql; // bl
  _QWORD *result; // rax
  _QWORD *v8; // r8

  if ( (MiFlags & 0x30) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    MiUpdatePatchInProgress(a1, a2, 3LL);
  }
  else
  {
    CurrentIrql = 17;
  }
  *(_DWORD *)(a2 + 184) |= 0x80u;
  result = (_QWORD *)(a2 + 256);
  *(_QWORD *)(a2 + 248) = a1;
  *(_DWORD *)(a2 + 272) = a3;
  v8 = *(_QWORD **)(a1 + 264);
  if ( *v8 != a1 + 256 )
    __fastfail(3u);
  *result = a1 + 256;
  *(_QWORD *)(a2 + 264) = v8;
  *v8 = result;
  *(_QWORD *)(a1 + 264) = result;
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = (_QWORD *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
