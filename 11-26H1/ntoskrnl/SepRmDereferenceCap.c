/*
 * XREFs of SepRmDereferenceCap @ 0x1402ACB20
 * Callers:
 *     SeAccessCheckByType @ 0x1402AAD98 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1402AD130 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x1402B63B0 (SeAccessCheckWithHint.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepRmDereferenceCapTable @ 0x1402ACB40 (SepRmDereferenceCapTable.c)
 */

__int64 __fastcall SepRmDereferenceCap(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 32) )
    return SepRmDereferenceCapTable();
  return result;
}
