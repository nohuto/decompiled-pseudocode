/*
 * XREFs of ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1402925C8
 * Callers:
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z @ 0x140183DD0 (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1402063E4 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1402601C0 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vFlushCache(RFONTOBJ *this)
{
  unsigned __int64 *v2; // rdx
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // r11d
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  unsigned __int64 v9; // r9
  _QWORD *v10; // r8

  v2 = (unsigned __int64 *)(*(_QWORD *)this + 512LL);
  v3 = *(_QWORD *)(*(_QWORD *)this + 568LL);
  if ( v3 && *(_DWORD *)(*(_QWORD *)this + 560LL) == *(_DWORD *)(*(_QWORD *)this + 556LL) )
  {
    v4 = *(unsigned int *)(*(_QWORD *)this + 548LL) - 8LL;
    v2[8] = v3;
    v2[9] = v3 + 8;
    v2[10] = v3 + v4;
  }
  v5 = *(_DWORD *)(*(_QWORD *)this + 648LL);
  v6 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)this + 480LL) + 8LL);
  if ( v6 )
    *v6 = 0LL;
  v7 = (_QWORD *)v2[3];
  if ( v7 )
  {
    v8 = (_QWORD *)v2[3];
    do
    {
      if ( v7 == v8 )
      {
        v9 = *v2;
      }
      else if ( *v7 )
      {
        v9 = (unsigned __int64)(v7 + 228);
      }
      else
      {
        v9 = v2[2];
      }
      v10 = v7 + 2;
      if ( (unsigned __int64)(v7 + 2) < v9 )
      {
        do
        {
          *v10 = 0LL;
          v10 = (_QWORD *)((char *)v10 + (-(__int64)(v5 != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64);
        }
        while ( (unsigned __int64)v10 < v9 );
        v8 = (_QWORD *)v2[3];
      }
      v7 = (_QWORD *)*v7;
    }
    while ( v7 );
  }
}
