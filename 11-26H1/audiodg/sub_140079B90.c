/*
 * XREFs of sub_140079B90 @ 0x140079B90
 * Callers:
 *     sub_14007BD30 @ 0x14007BD30 (sub_14007BD30.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_140039414 @ 0x140039414 (sub_140039414.c)
 *     sub_140075F84 @ 0x140075F84 (sub_140075F84.c)
 *     sub_140077DC8 @ 0x140077DC8 (sub_140077DC8.c)
 *     sub_14007911C @ 0x14007911C (sub_14007911C.c)
 *     sub_140079D40 @ 0x140079D40 (sub_140079D40.c)
 *     sub_14007A990 @ 0x14007A990 (sub_14007A990.c)
 *     sub_14007ECEC @ 0x14007ECEC (sub_14007ECEC.c)
 *     sub_14007ED20 @ 0x14007ED20 (sub_14007ED20.c)
 *     sub_14007EDC4 @ 0x14007EDC4 (sub_14007EDC4.c)
 *     sub_14007EEE4 @ 0x14007EEE4 (sub_14007EEE4.c)
 *     sub_14007EF4C @ 0x14007EF4C (sub_14007EF4C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_140079B90(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // edx
  __int64 v4; // rdx
  __int64 v5; // rdx
  IUnknown *v6; // rsi
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  LPSTREAM ppstm; // [rsp+38h] [rbp-20h] BYREF
  HRESULT v12; // [rsp+40h] [rbp-18h]
  signed __int32 v13; // [rsp+80h] [rbp+28h] BYREF
  __int64 v14; // [rsp+88h] [rbp+30h] BYREF
  __int64 v15; // [rsp+90h] [rbp+38h] BYREF
  LPUNKNOWN pUnk; // [rsp+98h] [rbp+40h] BYREF

  v2 = 0;
  sub_14007EEE4(a1, 1LL);
  if ( *(int *)(a1 + 136) > 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), v3) + 1 == v3 )
  {
    v10 = a1;
    sub_140039414(&v10);
    pUnk = 0LL;
    sub_14007EDC4(a1);
    if ( (int)sub_140075F84(&v10, (__int64 *)&pUnk) >= 0 )
    {
      v13 = -2;
      _InterlockedCompareExchange(&v13, *(_DWORD *)(a1 + 56), -2);
      v14 = 0LL;
      sub_1400125D4(&v14);
      if ( (int)sub_14007911C((__int64 *)(a1 + 120), v4, &v14) >= 0 )
      {
        sub_14007ED20(a1);
        v15 = 0LL;
        sub_1400125D4(&v15);
        sub_14007A990(v14, v5, &v15);
        v6 = pUnk;
        ppstm = 0LL;
        v12 = 0;
        v7 = v14;
        if ( v15 && v14 )
        {
          sub_1400125D4((__int64 *)&ppstm);
          v12 = CreateStreamOnHGlobal(0LL, 1, &ppstm);
          if ( v12 >= 0 )
            v12 = CoMarshalInterface(ppstm, &stru_1400C6598, v6, 0, 0LL, 1u);
          v7 = v14;
        }
        else
        {
          v12 = -2147467262;
        }
        v8 = sub_1400B6010(v7);
        v2 = sub_140079D40(v8, v14, *(_QWORD *)(a1 + 128));
        sub_14007EF4C(a1);
        sub_14007ECEC();
        sub_140077DC8((int *)&ppstm);
        sub_1400125D4(&v15);
      }
      sub_1400125D4(&v14);
    }
    sub_1400125D4((__int64 *)&pUnk);
    sub_1400B6010(a1);
  }
  return v2;
}
