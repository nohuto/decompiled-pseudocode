/*
 * XREFs of ViIrpLogDatabaseFindPointer @ 0x140C41CD8
 * Callers:
 *     VfIrpLogDeleteDeviceLogs @ 0x140C41630 (VfIrpLogDeleteDeviceLogs.c)
 *     VfIrpLogRecordEvent @ 0x140C41720 (VfIrpLogRecordEvent.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ViIrpLogDatabaseFindPointer(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  _QWORD *result; // rax

  v2 = ViIrpLogDatabase;
  *a2 = ViIrpLogDatabase;
  v3 = v2 + 8;
  v4 = (_QWORD *)(v2 + 8);
  while ( 1 )
  {
    v5 = (_QWORD *)*v4;
    v4 = v5;
    if ( v5 == (_QWORD *)v3 )
      break;
    result = v5 - 1;
    if ( *result == a1 )
      return result;
  }
  return 0LL;
}
