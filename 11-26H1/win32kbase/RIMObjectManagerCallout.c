/*
 * XREFs of RIMObjectManagerCallout @ 0x140130A5C
 * Callers:
 *     W32CalloutDispatchWorker @ 0x140120DDC (W32CalloutDispatchWorker.c)
 * Callees:
 *     RawInputManagerObjectOpen @ 0x140130ACC (RawInputManagerObjectOpen.c)
 *     RawInputManagerObjectClose @ 0x140130BA8 (RawInputManagerObjectClose.c)
 *     RawInputManagerObjectDelete @ 0x140130BFC (RawInputManagerObjectDelete.c)
 */

__int64 __fastcall RIMObjectManagerCallout(int a1, __int64 a2)
{
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  unsigned int v6; // ebx

  v2 = a1 - 27;
  if ( !v2 )
    return RawInputManagerObjectOpen(a2);
  v4 = v2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        return RawInputManagerObjectDelete(a2);
      else
        return 3221225485LL;
    }
    else
    {
      return RawInputManagerObjectClose(a2);
    }
  }
  else
  {
    v6 = 0;
    if ( *(_BYTE *)(a2 + 40) && (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)(a2 + 16)) == -1 )
      return (unsigned int)-1073741790;
    return v6;
  }
}
