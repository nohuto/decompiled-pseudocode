/*
 * XREFs of SdbpCheckForMatch @ 0x140A974B0
 * Callers:
 *     SdbpCheckKObject @ 0x1409D8348 (SdbpCheckKObject.c)
 *     SdbpCheckExe @ 0x140A96DA4 (SdbpCheckExe.c)
 *     SdbpSearchDB @ 0x140A96E98 (SdbpSearchDB.c)
 * Callees:
 *     SdbpGetExeEntryFlags @ 0x14088A6B8 (SdbpGetExeEntryFlags.c)
 *     SdbpMatchList @ 0x14088B4CC (SdbpMatchList.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     SdbReadWORDTag @ 0x1409D53C0 (SdbReadWORDTag.c)
 *     SdbpMatchOsVersion @ 0x140A975D4 (SdbpMatchOsVersion.c)
 */

__int64 __fastcall SdbpCheckForMatch(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5, int *a6)
{
  unsigned int v9; // ebx
  BOOL v11; // edi
  int v12; // r12d
  _DWORD *v13; // r14
  unsigned int FirstTag; // eax
  int v16; // [rsp+40h] [rbp-38h]
  unsigned int v17; // [rsp+98h] [rbp+20h] BYREF

  v9 = 0;
  v17 = 0;
  v11 = 0;
  v12 = 1;
  if ( (unsigned int)SdbFindFirstTag(a2, a3, 4109) )
    v11 = *(_DWORD *)(a4 + 80) == 0;
  if ( (unsigned int)SdbpMatchOsVersion(a2, a3) )
  {
    if ( (unsigned int)SdbpMatchList((int *)&v17, 0LL, a1, a2, a3, a4, 0, 0, v16)
      && (v9 = v17) != 0
      && (unsigned int)SdbpGetExeEntryFlags(a2, a3, a6) )
    {
      v13 = a5;
      if ( a5 )
      {
        FirstTag = SdbFindFirstTag(a2, a3, 12289);
        if ( FirstTag )
          *v13 = (unsigned __int16)SdbReadWORDTag(a2, FirstTag, 2u);
        else
          *v13 = 2;
      }
    }
    else
    {
      v9 = 0;
    }
  }
  if ( !*(_DWORD *)(a4 + 80) || v11 )
    v12 = 0;
  *(_DWORD *)(a4 + 80) = v12;
  return v9;
}
