/*
 * XREFs of RawInputManagerObjectOkToClose @ 0x1401E71C8
 * Callers:
 *     RIMObjectManagerCallout @ 0x140118F14 (RIMObjectManagerCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawInputManagerObjectOkToClose(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 40) && (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)(a1 + 16)) == -1 )
    return (unsigned int)-1073741790;
  return v1;
}
