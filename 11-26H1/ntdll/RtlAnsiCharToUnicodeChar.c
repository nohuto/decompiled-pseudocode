/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x1800BA750
 * Callers:
 *     toupper @ 0x18012D870 (toupper.c)
 *     _mbstrlen @ 0x1801317D8 (_mbstrlen.c)
 *     mbtowc @ 0x180132740 (mbtowc.c)
 *     _safecrt_mbtowc @ 0x180134F24 (_safecrt_mbtowc.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18003BC80 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlAnsiCharToUnicodeChar(char **a1)
{
  int v2; // edx
  char *v3; // r9
  char v4; // al
  unsigned int v5; // edi
  __int16 v6; // cx
  __int64 *v7; // rsi
  __int16 v8; // ax
  __int64 v9; // r10
  __int64 v10; // r14
  unsigned __int16 *v11; // r8
  unsigned int v12; // r11d
  __int64 v13; // r8
  unsigned __int16 *v14; // rdx
  __int64 v15; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int8 *v19; // r9
  signed __int32 v20[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int16 v21; // [rsp+50h] [rbp+8h] BYREF
  int v22; // [rsp+58h] [rbp+10h] BYREF

  v21 = 32;
  _InterlockedOr(v20, 0);
  v2 = 1;
  if ( word_1801C5FD0 != -535 && GlobalRtlNlsState != -535 )
  {
    _InterlockedOr(v20, 0);
    v3 = *a1;
    if ( *(_WORD *)(qword_1801C6020 + 2LL * (unsigned __int8)**a1) )
    {
      v5 = 2;
      goto LABEL_6;
    }
    goto LABEL_19;
  }
  v3 = *a1;
  v4 = **a1;
  if ( (unsigned __int8)v4 < 0xC0u )
  {
LABEL_19:
    v5 = 1;
    goto LABEL_6;
  }
  if ( (unsigned __int8)v4 < 0xE0u )
  {
    v5 = 2;
  }
  else if ( (unsigned __int8)v4 >= 0xF0u )
  {
    v5 = 1;
    if ( (unsigned __int8)v4 < 0xF8u )
      v5 = 4;
  }
  else
  {
    v5 = 3;
  }
LABEL_6:
  _InterlockedOr(v20, 0);
  if ( word_1801C5FD0 == -535 || GlobalRtlNlsState == -535 )
  {
    v6 = Utf8TableInfo;
    v7 = (__int64 *)&xmmword_1801C6070;
    v8 = WORD6(Utf8TableInfo);
    v9 = xmmword_1801C6070;
    v10 = qword_1801C6088;
  }
  else
  {
    _InterlockedOr(v20, 0);
    v6 = GlobalRtlNlsState;
    v7 = &qword_1801C5FB0;
    v8 = word_1801C5F9C;
    v9 = qword_1801C5FB0;
    v10 = qword_1801C5FC8;
  }
  v11 = &v21;
  v12 = v5;
  if ( v6 == -535 )
  {
    RtlUTF8ToUnicodeN(&v21, 2u, &v22, v3, v5);
  }
  else if ( v8 )
  {
    while ( v2 && v12 )
    {
      --v2;
      --v12;
      v17 = 2LL * (unsigned __int8)*v3;
      v18 = *(unsigned __int16 *)(v17 + v10);
      if ( (_WORD)v18 )
      {
        if ( !v12 )
        {
          *v11 = 0;
          break;
        }
        v19 = (unsigned __int8 *)(v3 + 1);
        --v12;
        *v11++ = *(_WORD *)(v10 + 2 * (*v19 + v18));
        v3 = (char *)(v19 + 1);
      }
      else
      {
        *v11++ = *(_WORD *)(v17 + *v7);
        ++v3;
      }
    }
  }
  else
  {
    v13 = v5;
    if ( v5 > 1 )
      v13 = 1LL;
    v14 = &v21;
    do
    {
      v15 = (unsigned __int8)*v3;
      ++v14;
      ++v3;
      *(v14 - 1) = *(_WORD *)(v9 + 2 * v15);
      --v13;
    }
    while ( v13 );
  }
  *a1 += v5;
  return v21;
}
