/*
 * XREFs of sub_14000A6C4 @ 0x14000A6C4
 * Callers:
 *     sub_14000A67C @ 0x14000A67C (sub_14000A67C.c)
 *     sub_140032480 @ 0x140032480 (sub_140032480.c)
 * Callees:
 *     sub_14000A5C4 @ 0x14000A5C4 (sub_14000A5C4.c)
 *     sub_14000A628 @ 0x14000A628 (sub_14000A628.c)
 *     sub_14000C428 @ 0x14000C428 (sub_14000C428.c)
 *     sub_14000EAC8 @ 0x14000EAC8 (sub_14000EAC8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_14000A6C4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rsi
  _QWORD *v8; // rax
  int v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+24h] [rbp-24h] BYREF
  _QWORD *v11; // [rsp+50h] [rbp+8h]
  _QWORD *v12; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v13; // [rsp+60h] [rbp+18h]

  while ( *(_QWORD *)(a2 + 16) )
  {
    v5 = sub_14000A5C4(a2);
    if ( v5 )
      sub_1400B6010(v5);
  }
  v6 = *(_QWORD *)(a3 + 8);
  while ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    v6 = *(_QWORD *)(v6 + 8);
    v8 = (_QWORD *)sub_14000C428();
    v13 = v8;
    if ( v8 )
      v8 = sub_14000A628(v8, v7);
    v11 = v8;
    v12 = v8;
    if ( v8 )
    {
      try
      {
        sub_14000EAC8(a2, &v12);
      }
      catch ( ATL::CAtlException v10 )
      {
        sub_1400B6010(v11);
        v9 = v10;
        throw (ATL::CAtlException *)&v9;
      }
    }
  }
}
