/*
 * XREFs of RtlTraceDatabaseDestroy @ 0x180149F70
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlDeleteCriticalSection @ 0x180079550 (RtlDeleteCriticalSection.c)
 *     RtlpTraceDatabaseFree @ 0x18014A238 (RtlpTraceDatabaseFree.c)
 */

bool __fastcall RtlTraceDatabaseDestroy(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  char v4; // si
  _QWORD *v5; // rdi

  RtlDeleteCriticalSection((__int64 *)(a1 + 48), a2);
  v3 = *(_QWORD **)(a1 + 16);
  if ( !v3 )
    return 1;
  v4 = 0;
  do
  {
    v5 = (_QWORD *)v3[2];
    if ( !v5 )
      v3 -= 24;
    if ( !(unsigned __int8)RtlpTraceDatabaseFree(v3) )
    {
      DbgPrint("Trace database: failed to release segment %p \n", v3);
      v4 = 1;
    }
    v3 = v5;
  }
  while ( v5 );
  return v4 == 0;
}
