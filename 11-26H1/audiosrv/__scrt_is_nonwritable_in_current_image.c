/*
 * XREFs of __scrt_is_nonwritable_in_current_image @ 0x1800B2358
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800B1CC8 (dllmain_crt_process_attach.c)
 * Callees:
 *     <none>
 */

bool __fastcall _scrt_is_nonwritable_in_current_image(__int64 a1)
{
  _DWORD *v2; // rcx
  unsigned __int64 v3; // r8
  _DWORD *v4; // rdx
  _DWORD *v5; // r9
  unsigned __int64 v6; // rcx

  if ( LOWORD(_ImageBase.unused) != 23117 )
    return 0;
  v2 = (int *)((char *)&_ImageBase.unused + (int)off_18000003C);
  if ( *v2 != 17744 || *(__int16 *)((char *)&word_180000018 + (int)off_18000003C) != 523 )
    return 0;
  v3 = a1 - (_QWORD)&_ImageBase;
  v4 = (_DWORD *)((char *)v2 + *(unsigned __int16 *)((char *)&word_180000014 + (int)off_18000003C) + 24);
  v5 = &v4[10 * *(unsigned __int16 *)((char *)&word_180000006 + (int)off_18000003C)];
  while ( v4 != v5 )
  {
    v6 = (unsigned int)v4[3];
    if ( v3 >= v6 && v3 < (unsigned int)(v6 + v4[2]) )
      return v4 && v4[9] >= 0;
    v4 += 10;
  }
  v4 = 0LL;
  return v4 && v4[9] >= 0;
}
