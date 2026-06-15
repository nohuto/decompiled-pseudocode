/*
 * XREFs of sub_14000D020 @ 0x14000D020
 * Callers:
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000D630 @ 0x14000D630 (sub_14000D630.c)
 *     sub_14000D7A4 @ 0x14000D7A4 (sub_14000D7A4.c)
 *     sub_14000DB20 @ 0x14000DB20 (sub_14000DB20.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_14000D020(__int64 a1)
{
  _QWORD *v2; // rsi
  unsigned __int64 v3; // r14
  unsigned __int64 *v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rcx
  _QWORD *v8; // rsi
  unsigned __int64 v9; // r14
  unsigned __int64 *v10; // r15
  __int64 v11; // r8
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r15
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r8
  _QWORD *v34; // rcx
  __int64 v35; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned int v43; // ebx
  int v44; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v2 = (_QWORD *)(a1 + 56);
    v3 = *(_QWORD *)(a1 + 128);
    if ( v3 )
    {
      if ( v3 > *(_QWORD *)(a1 + 72) )
      {
        if ( !(unsigned __int8)sub_14000DB20(a1 + 56, *(_QWORD *)(a1 + 128)) )
          sub_14004639C(2147942414LL, v37);
        ((void (*)(void))sub_14000D630)();
        v4 = (unsigned __int64 *)(a1 + 64);
      }
      else
      {
        v4 = (unsigned __int64 *)(a1 + 64);
        if ( v3 > *(_QWORD *)(a1 + 64) )
          ((void (*)(void))sub_14000D630)();
      }
    }
    else
    {
      if ( *v2 )
      {
        _o_free(*v2);
        *v2 = 0LL;
      }
      v2[2] = 0LL;
      v3 = 0LL;
      v4 = v2 + 1;
    }
    *v4 = v3;
    v5 = *(_QWORD *)(a1 + 128);
    v6 = *(_QWORD *)(a1 + 120);
    v7 = (_QWORD *)*v2;
    if ( v5 )
    {
      v6 -= (__int64)v7;
      do
      {
        *v7 = *(_QWORD *)((char *)v7 + v6);
        ++v7;
        --v5;
      }
      while ( v5 );
    }
    v8 = (_QWORD *)(a1 + 88);
    v9 = *(_QWORD *)(a1 + 160);
    if ( v9 )
    {
      if ( v9 > *(_QWORD *)(a1 + 104) )
      {
        if ( !(unsigned __int8)sub_14000DB20(a1 + 88, *(_QWORD *)(a1 + 160)) )
          sub_14004639C(2147942414LL, v38);
        ((void (*)(void))sub_14000D630)();
        v10 = (unsigned __int64 *)(a1 + 96);
      }
      else
      {
        v10 = (unsigned __int64 *)(a1 + 96);
        if ( v9 > *(_QWORD *)(a1 + 96) )
          sub_14000D630(v7, v5, v6);
      }
    }
    else
    {
      if ( *v8 )
      {
        _o_free(*v8);
        *v8 = 0LL;
      }
      *(_QWORD *)(a1 + 104) = 0LL;
      v9 = 0LL;
      v10 = (unsigned __int64 *)(a1 + 96);
    }
    *v10 = v9;
    v11 = *(_QWORD *)(a1 + 160);
    v12 = *(_QWORD *)(a1 + 152);
    v13 = (_QWORD *)*v8;
    if ( v11 )
    {
      v12 -= (__int64)v13;
      do
      {
        *v13 = *(_QWORD *)((char *)v13 + v12);
        ++v13;
        --v11;
      }
      while ( v11 );
    }
    v14 = *(_QWORD *)(a1 + 256);
    if ( v14 )
    {
      v15 = *(_QWORD *)(a1 + 200);
      if ( v14 > v15 )
      {
        v16 = *(int *)(a1 + 208);
        if ( *(_QWORD *)(a1 + 184) )
        {
          if ( !*(_DWORD *)(a1 + 208) )
          {
            v16 = v15 >> 1;
            if ( v14 - v15 > v15 >> 1 )
              v16 = v14 - v15;
          }
          v16 += v15;
          if ( v14 >= v16 )
            v16 = *(_QWORD *)(a1 + 256);
          v17 = o_calloc(v16, 8LL);
          v19 = v17;
          if ( v17 )
          {
            sub_14000D7A4(v17, 8LL * *(_QWORD *)(a1 + 192), *(_QWORD *)(a1 + 184), 8LL * *(_QWORD *)(a1 + 192));
            _o_free(*(_QWORD *)(a1 + 184));
            *(_QWORD *)(a1 + 184) = v19;
LABEL_26:
            *(_QWORD *)(a1 + 200) = v16;
            sub_14000D630(v20, v18, v21);
            goto LABEL_27;
          }
        }
        else
        {
          if ( v16 <= v14 )
            v16 = *(_QWORD *)(a1 + 256);
          v39 = o_calloc(v16, 8LL);
          *(_QWORD *)(a1 + 184) = v39;
          if ( v39 )
            goto LABEL_26;
        }
        sub_14004639C(2147942414LL, v18);
      }
      if ( v14 > *(_QWORD *)(a1 + 192) )
        sub_14000D630(v15, v12, v11);
    }
    else
    {
      v41 = *(_QWORD *)(a1 + 184);
      if ( v41 )
      {
        _o_free(v41);
        *(_QWORD *)(a1 + 184) = 0LL;
      }
      *(_QWORD *)(a1 + 200) = 0LL;
      v14 = 0LL;
    }
LABEL_27:
    *(_QWORD *)(a1 + 192) = v14;
    v22 = *(_QWORD *)(a1 + 256);
    v23 = *(_QWORD *)(a1 + 248);
    v24 = *(_QWORD **)(a1 + 184);
    if ( v22 )
    {
      v23 -= (__int64)v24;
      do
      {
        *v24 = *(_QWORD *)((char *)v24 + v23);
        ++v24;
        --v22;
      }
      while ( v22 );
    }
    v25 = *(_QWORD *)(a1 + 288);
    if ( !v25 )
    {
      v42 = *(_QWORD *)(a1 + 216);
      if ( v42 )
      {
        _o_free(v42);
        *(_QWORD *)(a1 + 216) = 0LL;
      }
      *(_QWORD *)(a1 + 232) = 0LL;
      v25 = 0LL;
      goto LABEL_41;
    }
    v26 = *(_QWORD *)(a1 + 232);
    if ( v25 <= v26 )
    {
      if ( v25 > *(_QWORD *)(a1 + 224) )
        sub_14000D630(v26, v23, v22);
      goto LABEL_41;
    }
    v27 = *(int *)(a1 + 240);
    if ( *(_QWORD *)(a1 + 216) )
    {
      if ( !*(_DWORD *)(a1 + 240) )
      {
        v27 = v26 >> 1;
        if ( v25 - v26 > v26 >> 1 )
          v27 = v25 - v26;
      }
      v27 += v26;
      if ( v25 >= v27 )
        v27 = *(_QWORD *)(a1 + 288);
      v28 = o_calloc(v27, 8LL);
      v30 = v28;
      if ( v28 )
      {
        sub_14000D7A4(v28, 8LL * *(_QWORD *)(a1 + 224), *(_QWORD *)(a1 + 216), 8LL * *(_QWORD *)(a1 + 224));
        _o_free(*(_QWORD *)(a1 + 216));
        *(_QWORD *)(a1 + 216) = v30;
LABEL_40:
        *(_QWORD *)(a1 + 232) = v27;
        sub_14000D630(v31, v29, v32);
LABEL_41:
        *(_QWORD *)(a1 + 224) = v25;
        v33 = *(_QWORD *)(a1 + 288);
        v34 = *(_QWORD **)(a1 + 216);
        if ( v33 )
        {
          v35 = *(_QWORD *)(a1 + 280) - (_QWORD)v34;
          do
          {
            *v34 = *(_QWORD *)((char *)v34 + v35);
            ++v34;
            --v33;
          }
          while ( v33 );
        }
        return 0LL;
      }
    }
    else
    {
      if ( v27 <= v25 )
        v27 = *(_QWORD *)(a1 + 288);
      v40 = o_calloc(v27, 8LL);
      *(_QWORD *)(a1 + 216) = v40;
      if ( v40 )
        goto LABEL_40;
    }
    sub_14004639C(2147942414LL, v29);
  }
  catch ( ATL::CAtlException v44 )
  {
    v43 = v44;
    if ( v44 >= 0 )
      return 0LL;
    sub_14000C2A8((int)retaddr, 763, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp", v44);
    return v43;
  }
  return 0LL;
}
