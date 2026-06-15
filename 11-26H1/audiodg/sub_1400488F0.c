/*
 * XREFs of sub_1400488F0 @ 0x1400488F0
 * Callers:
 *     sub_140048FA0 @ 0x140048FA0 (sub_140048FA0.c)
 * Callees:
 *     sub_140048890 @ 0x140048890 (sub_140048890.c)
 *     sub_140048AD0 @ 0x140048AD0 (sub_140048AD0.c)
 *     sub_140048CF0 @ 0x140048CF0 (sub_140048CF0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_1400488F0(unsigned __int16 *Src, unsigned __int64 a2, const __m128i *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbp
  const __m128i *v6; // rdi
  unsigned __int64 v7; // rbx
  int v9; // ecx
  bool v10; // cf
  bool v11; // zf
  unsigned __int16 *i; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int16 *v16; // rdx
  unsigned __int16 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  const __m128i *v21; // rax
  _BYTE v22[256]; // [rsp+40h] [rbp+0h] BYREF

  v4 = (unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0uLL;
  v6 = a3;
  v7 = a2;
  if ( (dword_1400E7AC8 & 4) != 0 )
  {
    if ( (dword_1400E7AC8 & 0x20) != 0 && a2 > 0x30 )
    {
      if ( a4 > 8 )
        v9 = 2;
      else
        v9 = 2 * (a2 > 0x80);
    }
    else
    {
      v9 = 0;
      if ( a4 > 8 )
      {
        if ( a4 > 0x50 )
        {
          v10 = a2 < 8;
          v11 = a2 == 8;
        }
        else
        {
          v10 = a2 < 0x10;
          v11 = a2 == 16;
        }
        LOBYTE(v9) = !v10 && !v11;
      }
    }
    if ( v9 == 2 )
    {
      if ( sub_140048890(a3, a4) )
        return sub_140048CF0(Src);
      return sub_140048AD0(Src);
    }
    if ( v9 != 1 || !sub_140048890(a3, a4) )
      return sub_140048AD0(Src);
    memset((void *)((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0uLL), 0, 0x100uLL);
    for ( i = (unsigned __int16 *)v6 + a4; v6 != (const __m128i *)i; *(_BYTE *)(v4 + v14) = 1 )
    {
      v14 = v6->m128i_u16[0];
      v6 = (const __m128i *)((char *)v6 + 2);
    }
    if ( v7 )
    {
      while ( 1 )
      {
        v15 = Src[--v7];
        if ( (unsigned __int16)v15 < 0x100u )
        {
          if ( *(_BYTE *)(v4 + v15) )
            break;
        }
        if ( !v7 )
          return -1LL;
      }
      return v7;
    }
  }
  else
  {
    memset((void *)((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0uLL), 0, 0x100uLL);
    v16 = (unsigned __int16 *)v6 + a4;
    v17 = (unsigned __int16 *)v6;
    if ( v6 == (const __m128i *)v16 )
    {
LABEL_28:
      if ( v7 )
      {
        while ( 1 )
        {
          v19 = Src[--v7];
          if ( (unsigned __int16)v19 < 0x100u )
          {
            if ( *(_BYTE *)(v4 + v19) )
              break;
          }
          if ( !v7 )
            return -1LL;
        }
        return v7;
      }
    }
    else
    {
      while ( 1 )
      {
        v18 = *v17;
        if ( (unsigned __int16)v18 >= 0x100u )
          break;
        ++v17;
        *(_BYTE *)(v4 + v18) = 1;
        if ( v17 == v16 )
          goto LABEL_28;
      }
LABEL_34:
      if ( v7 )
      {
        v20 = Src[--v7];
        v21 = v6;
        while ( v20 != v21->m128i_i16[0] )
        {
          v21 = (const __m128i *)((char *)v21 + 2);
          if ( v21 == (const __m128i *)v16 )
            goto LABEL_34;
        }
        return v7;
      }
    }
  }
  return -1LL;
}
