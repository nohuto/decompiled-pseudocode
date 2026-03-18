/*
 * XREFs of PATHOBJ_bEnum @ 0x14000F000
 * Callers:
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x14000EE98 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall PATHOBJ_bEnum(PATHOBJ *ppo, PATHDATA *ppd)
{
  PATHOBJ v2; // r11
  BOOL v3; // r8d
  __int64 v5; // r9
  FLONG fl; // ecx
  BOOL result; // eax
  __int64 *i; // rax
  _DWORD *j; // rcx
  int v10; // edx

  v2 = ppo[1];
  v3 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)&v2 + 80LL);
  if ( !v5 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)&v2 + 32LL);
    if ( !v5 )
    {
      *(_QWORD *)&ppd->flags = 0LL;
      result = 0;
      ppd->pptfx = 0LL;
      return result;
    }
    *(_QWORD *)(*(_QWORD *)&v2 + 80LL) = v5;
  }
  ppd->count = *(_DWORD *)(v5 + 20);
  ppd->flags = *(_DWORD *)(v5 + 16);
  ppd->pptfx = (POINTFIX *)(v5 + 24);
  *(_QWORD *)(*(_QWORD *)&v2 + 80LL) = *(_QWORD *)v5;
  fl = ppo->fl;
  if ( (fl & 0xC) == 4 )
  {
    ppo->fl = fl & 0xFFFFFFFB;
    for ( i = *(__int64 **)(*(_QWORD *)&v2 + 32LL); i; i = (__int64 *)*i )
    {
      v10 = *((_DWORD *)i + 5);
      for ( j = i + 3; v10; --v10 )
      {
        *j *= 16;
        j[1] *= 16;
        j += 2;
      }
    }
  }
  LOBYTE(v3) = *(_QWORD *)(*(_QWORD *)&v2 + 80LL) != 0LL;
  return v3;
}
