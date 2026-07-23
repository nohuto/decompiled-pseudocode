/*
 * XREFs of PspUpdateJobEffectivePriorityLimits @ 0x1407FFAAC
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1407FDE6C (PspEstablishJobHierarchy.c)
 *     PspSetJobIoPriorityLimitPreCallback @ 0x1407FEF60 (PspSetJobIoPriorityLimitPreCallback.c)
 *     PspSetJobPagePriorityLimitPreCallback @ 0x1407FF360 (PspSetJobPagePriorityLimitPreCallback.c)
 *     PspSetJobBackgroundCountCallback @ 0x140AF43A0 (PspSetJobBackgroundCountCallback.c)
 * Callees:
 *     MmGetMinWsPagePriority @ 0x1404AACF0 (MmGetMinWsPagePriority.c)
 */

void __fastcall PspUpdateJobEffectivePriorityLimits(__int64 a1, char a2)
{
  __int64 v2; // r9
  _DWORD *v3; // r8
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax

  v2 = *(_QWORD *)(a1 + 1304);
  v3 = (_DWORD *)a1;
  if ( (a2 & 1) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 1088);
    if ( v2 && v4 >= *(_DWORD *)(v2 + 1084) )
      v4 = *(_DWORD *)(v2 + 1084);
    v5 = 0;
    if ( !v3[268] )
      v5 = v4;
    v3[271] = v5;
  }
  if ( (a2 & 2) != 0 )
  {
    v6 = v3[274];
    if ( v2 && v6 >= *(_DWORD *)(v2 + 1092) )
      v6 = *(_DWORD *)(v2 + 1092);
    if ( v3[268] )
    {
      v7 = MmGetMinWsPagePriority() + 1;
      if ( v6 >= v7 )
        v6 = v7;
    }
    v3[273] = v6;
  }
}
