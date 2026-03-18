/*
 * XREFs of ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x14018301C
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1400C0C28 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400C14FC (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall ESTROBJ::bPartitionInit(ESTROBJ *this, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // rbx
  __int64 v5; // r14
  _QWORD *v6; // rsi
  size_t v9; // r8
  char *v10; // rcx
  _DWORD *v11; // rbp
  __int64 result; // rax

  *((_DWORD *)this + 1) &= 0xFFFFFFCF;
  v4 = (_DWORD *)((char *)this + 232);
  v5 = a3;
  v6 = (_QWORD *)((char *)this + 264);
  if ( (*((_DWORD *)this + 58) & 0x1000) != 0 )
  {
    v11 = (_DWORD *)((char *)this + 232);
  }
  else
  {
    v9 = 4LL * a2;
    v10 = (char *)(*((_QWORD *)this + 8) + 24LL * a2);
    *((_QWORD *)this + 26) = v10;
    *((_QWORD *)this + 25) = &v10[v9];
    memset_0(v10, 0, v9);
    *v4 |= 0x1000u;
    v11 = (_DWORD *)((char *)this + 232);
    *v6 = 0LL;
    *(_QWORD *)((char *)this + 252) = 0LL;
    *((_DWORD *)this + 62) = 0;
  }
  if ( !a4 )
    return 1LL;
  if ( (unsigned int)v5 < 0xA )
  {
    *v6 = (char *)this + 272;
    memset_0((char *)this + 272, 0, 4 * v5);
LABEL_6:
    *v11 |= 0x400u;
    return 1LL;
  }
  result = PALLOCMEM((unsigned int)(4 * v5), 1718382187LL);
  *v6 = result;
  if ( result )
  {
    *v4 |= 0x800u;
    goto LABEL_6;
  }
  return result;
}
