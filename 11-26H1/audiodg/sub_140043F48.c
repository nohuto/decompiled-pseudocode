/*
 * XREFs of sub_140043F48 @ 0x140043F48
 * Callers:
 *     sub_14006FEC0 @ 0x14006FEC0 (sub_14006FEC0.c)
 *     sub_140072820 @ 0x140072820 (sub_140072820.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400115FC @ 0x1400115FC (sub_1400115FC.c)
 *     sub_14002736C @ 0x14002736C (sub_14002736C.c)
 *     sub_14006EBB4 @ 0x14006EBB4 (sub_14006EBB4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140043F48(__int64 a1, __int64 a2, int a3)
{
  HRESULT v6; // edi
  _QWORD *v7; // r15
  _QWORD *v8; // rsi
  LPVOID v10; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0;
  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 96) )
  {
    *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 140);
    v6 = CoCreateInstance(&rclsid, 0LL, 0x17u, &riid, &v10);
    if ( v6 >= 0 )
    {
      v6 = sub_1400B6010(v10);
      if ( v6 >= 0 )
      {
        v7 = (_QWORD *)(a1 + 120);
        v6 = sub_1400B6010(*(_QWORD *)(a1 + 144));
        if ( v6 >= 0 )
        {
          if ( a3 || *(_DWORD *)(a2 + 100) != 1 )
          {
            v8 = (_QWORD *)(a1 + 128);
            if ( *(_QWORD *)(a1 + 128) )
              sub_1400115FC((_QWORD *)(a1 + 128), 0LL);
          }
          else
          {
            v8 = (_QWORD *)(a1 + 128);
            v6 = sub_14006EBB4(a1 + 88, a1 + 128);
            if ( v6 < 0 )
              goto LABEL_16;
          }
          if ( !*v7 || (sub_14002736C(a1), v6 = sub_1400B6010(*v7), v6 >= 0) )
          {
            if ( !a3 && *v8 )
              v6 = sub_1400B6010(*v8);
          }
        }
      }
    }
  }
LABEL_16:
  sub_140003238((__int64 *)&v10);
  return (unsigned int)v6;
}
