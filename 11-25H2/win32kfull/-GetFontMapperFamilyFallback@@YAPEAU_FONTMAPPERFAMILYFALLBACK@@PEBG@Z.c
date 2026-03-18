/*
 * XREFs of ?GetFontMapperFamilyFallback@@YAPEAU_FONTMAPPERFAMILYFALLBACK@@PEBG@Z @ 0x14010679C
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1401046A0 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 * Callees:
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x1400B7BF0 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

struct _FONTMAPPERFAMILYFALLBACK *__fastcall GetFontMapperFamilyFallback(WCHAR *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int16 *v8; // rax
  int v9; // r8d
  int v10; // ecx
  unsigned __int16 v11[32]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  v5 = *(_QWORD *)(v4 + 19688);
  if ( v5 )
  {
    v7 = v5 + ((unsigned __int64)*(unsigned int *)(v4 + 19700) << 7);
    cCapString(v11, a1, 32);
    while ( v5 < v7 )
    {
      v8 = v11;
      do
      {
        v9 = *(unsigned __int16 *)((char *)v8 + v5 - (_QWORD)v11);
        v10 = *v8 - v9;
        if ( v10 )
          break;
        ++v8;
      }
      while ( v9 );
      if ( !v10 )
        return (struct _FONTMAPPERFAMILYFALLBACK *)v5;
      v5 += 128LL;
    }
  }
  return 0LL;
}
