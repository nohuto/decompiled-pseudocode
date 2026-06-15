/*
 * XREFs of sub_140041F80 @ 0x140041F80
 * Callers:
 *     sub_140065D10 @ 0x140065D10 (sub_140065D10.c)
 *     sub_140065D20 @ 0x140065D20 (sub_140065D20.c)
 *     sub_140065D30 @ 0x140065D30 (sub_140065D30.c)
 *     sub_140065D40 @ 0x140065D40 (sub_140065D40.c)
 *     sub_140065D50 @ 0x140065D50 (sub_140065D50.c)
 *     sub_140065D60 @ 0x140065D60 (sub_140065D60.c)
 *     sub_140065D70 @ 0x140065D70 (sub_140065D70.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140041F80(__int64 a1, _QWORD *a2, __int64 *a3)
{
  int v3; // edx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 80) )
  {
    if ( *a2 == 0x4E95DDBC9E1D6A6DLL && a2[1] == 0x6C8437BA64ADC7A4LL )
    {
      v3 = 173;
      goto LABEL_3;
    }
    if ( *a2 == 0x49C3ABA60E5ED805LL && a2[1] == 0xA84F9C888C2B9A8FuLL )
    {
      v3 = 174;
      goto LABEL_3;
    }
    if ( *a2 == 56LL && a2[1] == 0x46000000000000C0LL )
    {
      v5 = a1 + 8;
    }
    else
    {
      if ( *a2 == unk_1400C6698 && a2[1] == 0x901E1065AAD75A9CuLL )
      {
        *a3 = a1;
        goto LABEL_14;
      }
      if ( *a2 == 0x4B5C24D0FD7F2B29LL && a2[1] == 0x10CAF9392C5977B1LL && *(_QWORD *)(a1 + 96) )
      {
        v5 = a1 + 16;
      }
      else if ( *a2 == 0x41BCBD639C6A5834LL && a2[1] == 0xB11783E3CC08C08EuLL && *(_QWORD *)(a1 + 96) )
      {
        v5 = a1 + 56;
      }
      else if ( *a2 == 0x481A7B7ACD3B17F7LL
             && a2[1] == 0xE27B27EDBC6C7998uLL
             && *(_QWORD *)(a1 + 96)
             && *(_BYTE *)(a1 + 81) )
      {
        v5 = a1 + 32;
      }
      else
      {
        if ( *a2 != 0x49DDE341F59DB348LL
          || a2[1] != 0x8F20AE7EC103949FuLL
          || !*(_QWORD *)(a1 + 96)
          || !*(_BYTE *)(a1 + 82) )
        {
          v4 = -2147467262;
          if ( (int)sub_1400B6010(*(_QWORD *)(a1 + 88)) >= 0 )
            return 0;
          return v4;
        }
        v5 = a1 + 40;
      }
    }
    *a3 = v5 & -(__int64)(a1 != 0);
LABEL_14:
    sub_1400B6010(a1);
    return 0LL;
  }
  v3 = 170;
LABEL_3:
  v4 = -2147467262;
  sub_14000C2A8((int)retaddr, v3, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp", -2147467262);
  return v4;
}
