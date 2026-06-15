/*
 * XREFs of sub_140075EEC @ 0x140075EEC
 * Callers:
 *     sub_14003EDD0 @ 0x14003EDD0 (sub_14003EDD0.c)
 *     sub_140045B10 @ 0x140045B10 (sub_140045B10.c)
 *     sub_14007DE90 @ 0x14007DE90 (sub_14007DE90.c)
 * Callees:
 *     memcmp @ 0x14004A694 (memcmp.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140075EEC(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v5 = 0LL;
  v3 = RoActivateInstance(a1, &v5);
  if ( v3 >= 0 )
  {
    if ( !memcmp(&unk_1400C7D28, &dword_1400C6698, 0x10uLL) )
    {
      *a2 = v5;
    }
    else
    {
      v3 = sub_1400B6010(v5);
      sub_1400B6010(v5);
    }
  }
  return (unsigned int)v3;
}
