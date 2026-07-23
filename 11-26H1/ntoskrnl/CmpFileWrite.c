/*
 * XREFs of CmpFileWrite @ 0x140AE4880
 * Callers:
 *     CmpSaveKeyByFileCopy @ 0x140854570 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileWrite @ 0x140AE48C8 (CmpDoFileWrite.c)
 */

__int64 __fastcall CmpFileWrite(__int64 a1, unsigned int a2, int a3, int a4, char a5)
{
  __int64 v5; // rdx

  if ( BYTE1(NlsMbOemCodePageTag) )
    return 3221225473LL;
  v5 = *(_QWORD *)(a1 + 8LL * a2 + 1544);
  if ( v5 )
    return CmpDoFileWrite(a1, v5, a3, a3, a4, a5);
  else
    return 0LL;
}
