/*
 * XREFs of sub_14003E2C8 @ 0x14003E2C8
 * Callers:
 *     sub_140041440 @ 0x140041440 (sub_140041440.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003E2C8(__int64 a1)
{
  __int64 result; // rax
  int v3; // eax
  unsigned int v4; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  result = sub_1400B6010(*(_QWORD *)(a1 + 96));
  if ( (int)result >= 0 )
  {
    v3 = sub_1400B6010(*(_QWORD *)(a1 + 88));
    v4 = v3;
    if ( v3 >= 0 )
    {
      *(_DWORD *)(a1 + 136) = 1;
      return 0LL;
    }
    else
    {
      sub_14000C2A8((int)retaddr, 131, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v3);
      return v4;
    }
  }
  return result;
}
