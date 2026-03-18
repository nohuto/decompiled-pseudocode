/*
 * XREFs of ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x14003A658
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x140016178 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiCheckTokenIndependentFlipCondition(
        struct _VIDSCH_GLOBAL *a1,
        const struct VIDSCH_SUBMIT_DATA2 *a2)
{
  char v4; // r8
  __int64 v5; // r9
  bool v6; // zf
  int v7; // ecx
  char v8; // dl
  __int64 v9; // rax
  _QWORD *v10; // rdx

  if ( (*(_DWORD *)a2 & 0x1000000) == 0 || (*((_DWORD *)a2 + 1) & 1) != 0 )
  {
    WdLogSingleEntry3(8LL, *((_QWORD *)a2 + 13), *((unsigned int *)a2 + 28), *((_DWORD *)a2 + 1) & 1);
    WdLogGlobalForLineNumber = 2061;
  }
  else
  {
    v4 = 0;
    v5 = *((unsigned int *)a2 + 29);
    v6 = !_BitScanForward((unsigned int *)&v7, *((_DWORD *)a2 + 150) & 0x3FF);
    v8 = -1;
    if ( !v6 )
      v8 = v7;
    if ( v8 != -1 )
      v4 = v8;
    v9 = *(int *)(304LL * (unsigned int)v4 + *((_QWORD *)a1 + v5 + 431) + 188);
    if ( (int)v9 > -1 )
    {
      v10 = (_QWORD *)(*((_QWORD *)a1 + 447) + 160 * v9);
      if ( v10 )
      {
        if ( *v10 == *(_QWORD *)((char *)a2 + 156) && v10[1] == *((_QWORD *)a2 + 21) && v10[11] == *((_QWORD *)a2 + 22) )
          return 1;
        WdLogSingleEntry5(
          8LL,
          *((_QWORD *)a2 + 13),
          *((unsigned int *)a2 + 28),
          *(_QWORD *)((char *)a2 + 156),
          *((_QWORD *)a2 + 21),
          *((_QWORD *)a2 + 22));
        WdLogGlobalForLineNumber = 2090;
      }
    }
  }
  return 0;
}
