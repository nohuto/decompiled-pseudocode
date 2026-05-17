/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x180034130
 * Callers:
 *     toupper @ 0x18012D870 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1801406A0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x180034960 (RtlUnicodeToUTF8N.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlUpcaseUnicodeToMultiByteN(
        _BYTE *a1,
        unsigned int a2,
        unsigned int *a3,
        char *a4,
        unsigned int a5)
{
  unsigned int v6; // esi
  unsigned int v8; // ebp
  _BYTE *v9; // rdi
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // r15
  unsigned int v13; // eax
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  unsigned int v17; // r15d
  unsigned int v18; // r12d
  unsigned int v19; // r13d
  __int64 v20; // r10
  __int64 v21; // r13
  _WORD *v22; // r9
  unsigned __int64 v23; // r8
  __int64 v24; // r13
  __int64 v25; // r15
  _BYTE *v26; // r8
  __int64 i; // r12
  __int64 v28; // rax
  unsigned __int16 v29; // cx
  __int64 v30; // rdx
  unsigned __int16 v31; // r9
  __int16 v32; // dx
  unsigned int v33; // eax
  signed __int32 v34[8]; // [rsp+0h] [rbp-108h] BYREF
  unsigned int v35; // [rsp+30h] [rbp-D8h]
  int v36; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v37; // [rsp+38h] [rbp-D0h]
  _BYTE v38[128]; // [rsp+40h] [rbp-C8h] BYREF

  v6 = a5 >> 1;
  v8 = a2;
  v9 = a1;
  _InterlockedOr(v34, 0);
  if ( word_1801C5FD0 == -535 || GlobalRtlNlsState == -535 )
  {
    v17 = 0;
    v18 = 0;
    v37 = qword_1801C6038;
    while ( v6 && v8 )
    {
      v36 = 0;
      if ( v6 >= 0x40 )
      {
        v19 = 64;
        v35 = 64;
        if ( v6 != 64 )
        {
          if ( (unsigned int)*((unsigned __int16 *)a4 + 63) - 55296 <= 0x3FF )
            v19 = 63;
          v35 = v19;
        }
      }
      else
      {
        v19 = v6;
        v35 = v6;
      }
      v20 = v19;
      v21 = v37;
      v22 = v38;
      do
      {
        v23 = *(unsigned __int16 *)((char *)v22 + a4 - v38);
        if ( (unsigned int)v23 >= 0x61 )
        {
          if ( (unsigned int)v23 > 0x7A )
          {
            if ( v21 && (unsigned __int16)v23 >= 0xC0u )
              LOWORD(v23) = *(_WORD *)(v21
                                     + 2
                                     * ((v23 & 0xF)
                                      + *(unsigned __int16 *)(v21
                                                            + 2LL
                                                            * (((unsigned __int8)v23 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(v21 + 2 * (v23 >> 8))))))
                          + v23;
          }
          else
          {
            LOWORD(v23) = v23 - 32;
          }
        }
        *v22++ = v23;
        --v20;
      }
      while ( v20 );
      v24 = v35;
      v17 = 0;
      if ( (int)RtlUnicodeToUTF8N((_DWORD)v9, v8, (unsigned int)&v36, (unsigned int)v38, 2 * v35) < 0 )
      {
        v18 += v36;
        v17 = -2147483643;
        break;
      }
      a4 += 2 * v24;
      LODWORD(v9) = v36 + (_DWORD)v9;
      v8 -= v36;
      v18 += v36;
      v6 -= v24;
    }
    if ( a3 )
      *a3 = v18;
    return v17;
  }
  else
  {
    _InterlockedOr(v34, 0);
    v10 = qword_1801C5FB0;
    v11 = qword_1801C5FB8;
    if ( word_1801C5F9C )
    {
      v25 = qword_1801C6020;
      v26 = a1;
      for ( i = qword_1801C6038; v6; --v6 )
      {
        if ( !v8 )
          break;
        v28 = *(unsigned __int16 *)a4;
        a4 += 2;
        v29 = *(_WORD *)(v11 + 2 * v28);
        v30 = *(unsigned __int16 *)(v25 + 2 * ((unsigned __int64)v29 >> 8));
        if ( (_WORD)v30 )
          v31 = *(_WORD *)(qword_1801C5FC8 + 2 * (v30 + (unsigned __int8)v29));
        else
          v31 = *(_WORD *)(v10 + 2LL * (unsigned __int8)v29);
        if ( v31 >= 0x61u )
        {
          if ( v31 > 0x7Au )
          {
            if ( i && v31 >= 0xC0u )
              v31 += *(_WORD *)(i
                              + 2LL
                              * ((v31 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(i
                                                                   + 2LL
                                                                   * (((v31 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(i + 2 * ((unsigned __int64)v31 >> 8))))));
          }
          else
          {
            v31 -= 32;
          }
        }
        v32 = *(_WORD *)(v11 + 2LL * v31);
        if ( HIBYTE(v32) )
        {
          v33 = v8--;
          if ( v33 < 2 )
            break;
          *v26++ = HIBYTE(v32);
        }
        *v26 = v32;
        --v8;
        ++v26;
      }
      if ( a3 )
        *a3 = (_DWORD)v26 - (_DWORD)v9;
      return v8 < v6 ? 0x80000005 : 0;
    }
    else
    {
      v12 = qword_1801C6038;
      v13 = a2;
      if ( v6 < a2 )
        v13 = a5 >> 1;
      if ( a3 )
        *a3 = v13;
      if ( v13 )
      {
        v14 = v13;
        do
        {
          v15 = *(unsigned __int16 *)(v10 + 2LL * *(unsigned __int8 *)(*(unsigned __int16 *)a4 + v11));
          if ( (unsigned int)v15 >= 0x61 )
          {
            if ( (unsigned int)v15 > 0x7A )
            {
              if ( v12 )
              {
                if ( (unsigned __int16)v15 >= 0xC0u )
                  LOWORD(v15) = *(_WORD *)(v12
                                         + 2
                                         * ((v15 & 0xF)
                                          + *(unsigned __int16 *)(v12
                                                                + 2LL
                                                                * (((unsigned __int8)v15 >> 4)
                                                                 + (unsigned int)*(unsigned __int16 *)(v12 + 2 * (v15 >> 8))))))
                              + v15;
              }
            }
            else
            {
              LOWORD(v15) = v15 - 32;
            }
          }
          a4 += 2;
          *v9++ = *(_BYTE *)((unsigned __int16)v15 + v11);
          --v14;
        }
        while ( v14 );
      }
      return a2 < v6 ? 0x80000005 : 0;
    }
  }
}
