/*
 * XREFs of ProcessorpRangeConflictCallback @ 0x1400BD6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcessorpRangeConflictCallback(_DWORD *Context, struct _RTL_RANGE *Range)
{
  _DWORD *UserData; // r8
  unsigned int v3; // r8d
  unsigned int v4; // eax
  UCHAR Attributes; // al

  UserData = Range->UserData;
  if ( UserData )
  {
    if ( (Range->Flags & 1) != 0 )
    {
      if ( *((_BYTE *)Context + 14) )
      {
        if ( *(PVOID *)Context != Range->Owner )
        {
          v3 = UserData[4];
          v4 = Context[2];
          if ( v4 == v3 || v4 >= 0xFFF00000 && v3 >= 0xFFF00000 )
          {
            Attributes = Range->Attributes;
            if ( (Context[3] & 1) == 0 )
              return Attributes & 1;
            if ( (Attributes & 2) != 0 )
              return 1;
          }
        }
      }
    }
  }
  return 0;
}
