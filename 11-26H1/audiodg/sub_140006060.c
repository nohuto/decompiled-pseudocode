/*
 * XREFs of sub_140006060 @ 0x140006060
 * Callers:
 *     sub_140008C34 @ 0x140008C34 (sub_140008C34.c)
 *     sub_14000E144 @ 0x14000E144 (sub_14000E144.c)
 * Callees:
 *     sub_140006260 @ 0x140006260 (sub_140006260.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_14000655C @ 0x14000655C (sub_14000655C.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_1400338C0 @ 0x1400338C0 (sub_1400338C0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14006A86C @ 0x14006A86C (sub_14006A86C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
_UNKNOWN **__fastcall sub_140006060(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int128 v8; // xmm6
  __int64 v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int128 v15; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v16[240]; // [rsp+40h] [rbp-118h] BYREF

  result = &off_1400E73D8;
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    result = (_UNKNOWN **)sub_14006A86C(*((_QWORD *)off_1400E73D8 + 2), 38LL, &unk_1400C9A58, a1);
  }
  if ( *(_DWORD *)(a1 + 116) )
  {
    v3 = *(_QWORD *)(a1 + 152);
    if ( v3 )
    {
      result = (_UNKNOWN **)sub_1400B6010(v3);
      if ( (int)result >= 0 )
      {
        v4 = *(_QWORD *)(a1 + 24);
        while ( v4 )
        {
          v5 = *(_QWORD *)(v4 + 16);
          v4 = *(_QWORD *)(v4 + 8);
          if ( *(_DWORD *)(v5 + 40) == 2 )
          {
            v6 = *(_QWORD *)(v5 + 32);
            v7 = *(_QWORD *)(v6 + 40);
            if ( v7 )
              sub_1400B6010(v7);
            v8 = *(_OWORD *)(v6 + 8);
            v9 = sub_140006470();
            v15 = v8;
            sub_14000655C(v16, v9, "DeactivateApo", &v15);
            sub_1400B6010(*(_QWORD *)(a1 + 152));
            sub_1400066EC(v16);
            if ( v7 )
              sub_1400B6010(v7);
          }
        }
        v10 = *(_QWORD **)(a1 + 64);
        while ( v10 )
        {
          v11 = (_QWORD *)v10[2];
          v10 = (_QWORD *)*v10;
          v12 = (_QWORD *)*v11;
          while ( v12 )
          {
            v13 = v12[2];
            v12 = (_QWORD *)*v12;
            v14 = *(_QWORD *)(a1 + 152);
            if ( *(_DWORD *)(v13 + 4) )
            {
              *(_DWORD *)(v13 + 4) = 0;
              if ( *(_DWORD *)(v13 + 16) )
              {
                if ( *(_DWORD *)(v13 + 16) == 1 )
                  sub_1400338C0(v13, v14, 0LL);
              }
              else
              {
                sub_140006260(v13, v14, 0LL);
              }
            }
          }
        }
        result = (_UNKNOWN **)sub_1400B6010(*(_QWORD *)(a1 + 152));
        if ( (int)result >= 0 )
          *(_DWORD *)(a1 + 116) = 0;
      }
    }
  }
  return result;
}
