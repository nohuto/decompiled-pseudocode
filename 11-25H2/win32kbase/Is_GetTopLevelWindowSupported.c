/*
 * XREFs of Is_GetTopLevelWindowSupported @ 0x140062EB8
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x140063190 (TransformRectBetweenCoordinateSpaces.c)
 *     EtwTraceInputProcessDelay @ 0x14016D040 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x14016D900 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 Is_GetTopLevelWindowSupported()
{
  __int64 (*v0)(void); // rax

  v0 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3552LL);
  if ( v0 )
    return v0();
  else
    return 3221225659LL;
}
