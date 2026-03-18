/*
 * XREFs of sub_140006B50 @ 0x140006B50
 * Callers:
 *     sub_1400073E0 @ 0x1400073E0 (sub_1400073E0.c)
 * Callees:
 *     sub_1400069C0 @ 0x1400069C0 (sub_1400069C0.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140006B50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  char v5; // bp
  unsigned int **v6; // rsi
  __int64 v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // r8
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // r12d
  unsigned int v14; // ebx
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ecx
  __int64 result; // rax
  _DWORD v19[2]; // [rsp+68h] [rbp-140h]
  _QWORD v20[16]; // [rsp+70h] [rbp-138h] BYREF
  _QWORD v21[16]; // [rsp+F0h] [rbp-B8h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = (unsigned int **)(a1 + 3720);
  if ( *(_QWORD *)(a1 + 3720) )
  {
    v5 = 1;
    goto LABEL_16;
  }
  v8 = *(_QWORD *)(a1 + 1560);
  v9 = 0;
  v10 = (unsigned int)(*(_DWORD *)(v8 + 276) << 12);
  v11 = *(_DWORD *)(v8 + 272) << 12;
  if ( v11 )
  {
    v12 = *(_DWORD *)(a1 + 116);
    if ( v12 )
    {
      if ( v12 != -1 )
      {
        v11 = *(_DWORD *)(a1 + 116);
        if ( (v12 & 0xFFF) != 0 )
          v11 = (v12 + 4095) & 0xFFFFF000;
        if ( v11 < (unsigned int)v10 )
          v11 = v10;
      }
      v13 = 1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) >> 7) & 0xF) + 12);
      v14 = StorPortExtendedFunction(69LL, a1, v10, v11);
      if ( v14 )
        goto LABEL_19;
      v4 = 8;
      sub_140032C80(v20, 0LL, 128LL);
      v15 = 0LL;
      v16 = 8LL;
      do
      {
        v17 = v21[v15 / 2 + 1];
        v9 += v17;
        v20[v15 / 2] = v21[v15 / 2];
        v15 += 4LL;
        v19[v15] = v17 / v13;
        --v16;
      }
      while ( v16 );
      v14 = StorPortExtendedFunction(0LL, a1, 136LL, 1701672526LL);
      if ( v14 )
        goto LABEL_17;
      **v6 = v9;
      sub_140032980(*v6 + 2, v20, 128LL);
      (*v6)[1] = 128;
LABEL_16:
      result = sub_1400069C0(a1, 1u, v5, **v6, (__int64)(*v6 + 2), (*v6)[1]);
      v14 = result;
      if ( !(_DWORD)result )
        return result;
LABEL_17:
      if ( v4 )
        StorPortExtendedFunction(70LL, a1, v21, v4);
      goto LABEL_19;
    }
  }
  v14 = -1056964606;
LABEL_19:
  if ( *v6 )
  {
    StorPortExtendedFunction(1LL, a1, *v6, a4);
    *v6 = 0LL;
  }
  return v14;
}
