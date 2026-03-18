/*
 * XREFs of vCleanupMetaType @ 0x14026FFF0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteServerMetaFile @ 0x1402622C8 (GreDeleteServerMetaFile.c)
 */

__int64 __fastcall vCleanupMetaType(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 i; // rcx
  __int64 v4; // rdx
  __int64 result; // rax
  unsigned int v6; // ebx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v2 = a1;
  for ( i = 0LL; ; i = v6 )
  {
    result = HmgNextOwned(i, v2, &v7);
    v6 = result;
    if ( !(_DWORD)result )
      break;
    v4 = WORD1(v7);
    if ( (BYTE2(v7) & 0x1F) == 0x15 )
    {
      LOBYTE(v4) = BYTE2(v7) & 0x1F;
      GreDeleteServerMetaFile(v7, v4);
    }
    v2 = a1;
  }
  return result;
}
