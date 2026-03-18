/*
 * XREFs of ?vReverseConcatenate@WIDEPATHOBJ@pathwide@@QEAAXAEAV12@@Z @ 0x1401083C4
 * Callers:
 *     ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x140108D94 (-bWiden@WIDENER@pathwide@@IEAAHXZ.c)
 * Callees:
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140107558 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall pathwide::WIDEPATHOBJ::vReverseConcatenate(
        pathwide::WIDEPATHOBJ *this,
        struct pathwide::WIDEPATHOBJ *a2)
{
  __int64 v4; // r8
  unsigned __int64 v5; // rbp
  __int64 v6; // r14
  const struct _POINTFIX *v7; // rdi
  __int64 v8; // rdx
  struct PATHALLOC *v9; // rcx
  struct _POINTFIX *v10; // rcx

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 40LL);
  if ( v4 )
  {
    do
    {
      v5 = v4 + 24;
      v6 = *(_QWORD *)(v4 + 8);
      v7 = (const struct _POINTFIX *)(v4 + 8 * (*(unsigned int *)(v4 + 20) + 3LL));
      while ( (unsigned __int64)v7 > v5 )
      {
        v10 = (struct _POINTFIX *)*((_QWORD *)this + 16);
        --v7;
        if ( (unsigned __int64)v10 >= *((_QWORD *)this + 17) )
        {
          pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(this, v7, 0LL, 0);
        }
        else
        {
          *v10 = *v7;
          *((_QWORD *)this + 16) += 8LL;
        }
      }
      v8 = *((_QWORD *)a2 + 1);
      v9 = *(struct PATHALLOC **)(v8 + 24);
      *(_QWORD *)(v8 + 24) = *(_QWORD *)v9;
      freepathalloc(v9);
      v4 = v6;
    }
    while ( v6 );
  }
  *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)a2 + 1) + 40LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL) = 0LL;
}
