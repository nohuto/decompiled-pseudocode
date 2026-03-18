/*
 * XREFs of ?EffectHashesCompiled@CConnection@DirectComposition@@QEBA_NPEB_KI@Z @ 0x140227ED0
 * Callers:
 *     ?WaitingForEffectCompile@CBatch@DirectComposition@@AEAA_NXZ @ 0x1402291DC (-WaitingForEffectCompile@CBatch@DirectComposition@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CConnection::EffectHashesCompiled(
        DirectComposition::CConnection *this,
        const unsigned __int64 *a2,
        unsigned int a3)
{
  __int64 v4; // r9
  __int64 i; // rdx

  v4 = 0LL;
LABEL_2:
  if ( (unsigned int)v4 >= a3 )
    return 1;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 72); i = (unsigned int)(i + 1) )
  {
    if ( a2[v4] == *(_QWORD *)(*((_QWORD *)this + 35) + 8 * i) )
    {
      v4 = (unsigned int)(v4 + 1);
      goto LABEL_2;
    }
  }
  return 0;
}
