/*
 * XREFs of sub_1400566C0 @ 0x1400566C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_14001D1F4 @ 0x14001D1F4 (sub_14001D1F4.c)
 *     sub_14001D564 @ 0x14001D564 (sub_14001D564.c)
 *     sub_14001D6A8 @ 0x14001D6A8 (sub_14001D6A8.c)
 *     sub_14003826C @ 0x14003826C (sub_14003826C.c)
 */

__int64 __fastcall sub_1400566C0(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  void *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF
  void *v11; // [rsp+68h] [rbp+38h] BYREF

  v11 = 0LL;
  v3 = sub_14001D1F4((__int64)&v11, 0);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = v11;
    v10 = 0LL;
    sub_140019444(&v10);
    v7 = sub_14001D564(&v10, &v11);
    v8 = v7;
    if ( v7 >= 0 )
    {
      sub_14003826C(&v10, a2);
      sub_140003238(&v10);
      return 0LL;
    }
    else
    {
      sub_14000C2A8(
        (int)retaddr,
        60,
        (int)"avcore\\audiocore\\Engine\\Core\\CrossProcessEngineObjects\\CPStandardEvent.h",
        v7);
      sub_140003238(&v10);
      if ( v6 )
        sub_14001D6A8(v6);
      return v8;
    }
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      57,
      (int)"avcore\\audiocore\\Engine\\Core\\CrossProcessEngineObjects\\CPStandardEvent.h",
      v3);
    if ( v11 )
      sub_14001D6A8(v11);
    return v4;
  }
}
