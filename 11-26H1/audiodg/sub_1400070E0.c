/*
 * XREFs of sub_1400070E0 @ 0x1400070E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140007394 @ 0x140007394 (sub_140007394.c)
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_140007968 @ 0x140007968 (sub_140007968.c)
 *     sub_1400079EC @ 0x1400079EC (sub_1400079EC.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400070E0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  _QWORD *i; // rbx
  void *v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = sub_140049338(72LL, &unk_1400C75FC);
  sub_140007968(&v14, v6, 0LL);
  v7 = v14;
  if ( v14 )
  {
    memset(v14, 0, 0x48uLL);
    *v7 = 3;
    v7[8] = a2;
    v8 = *(_QWORD *)(a1 + 80);
    *((_QWORD *)v7 + 1) = v8;
    sub_1400B6010(v8);
    v9 = sub_1400079EC(a1 - 8, a2, v7 + 10);
    v10 = v9;
    if ( v9 < 0 )
    {
      sub_14000C2A8(
        retaddr,
        125LL,
        "avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
        (unsigned int)v9);
      if ( v15 )
        sub_140007588();
      return v10;
    }
    else
    {
      v11 = *(_DWORD *)(a3 + 16);
      *((_OWORD *)v7 + 1) = *(_OWORD *)(a1 + 32);
      *((_OWORD *)v7 + 3) = *(_OWORD *)a3;
      v7[16] = v11;
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 88));
      for ( i = *(_QWORD **)(a1 + 168); i; i = (_QWORD *)*i )
        sub_140007394(i[1], &v14);
      if ( a1 != -88 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 88));
      if ( v15 )
        sub_140007588();
      return 0LL;
    }
  }
  else
  {
    sub_14000C2A8(
      retaddr,
      118LL,
      "avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
      2147942414LL);
    if ( v15 )
      sub_140007588();
    return 2147942414LL;
  }
}
