/*
 * XREFs of ?GetBudgetAndVisibilityState@VIDMM_DEVICE@@QEAAXPEA_NPEAW4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x14010A0F0
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DEVICE::GetBudgetAndVisibilityState(
        VIDMM_DEVICE *this,
        bool *a2,
        enum VIDMM_BUDGET_PRIORITY_BAND *a3)
{
  __int64 v3; // r11
  unsigned int i; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // r9

  v3 = *((_QWORD *)this + 2);
  *a2 = 0;
  if ( !v3 )
    goto LABEL_7;
  for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 6952LL); ++i )
  {
    v7 = (_QWORD *)(*(_QWORD *)(v3 + 8) + 304LL * (unsigned __int16)i);
    if ( v7[26] > v7[4] || v7[27] > v7[5] )
    {
      *a2 = 1;
      break;
    }
  }
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 72LL);
  if ( (*(_DWORD *)(v5 + 408) & 4) != 0 )
  {
    *(_BYTE *)a3 = 0;
    return;
  }
  if ( (*(_DWORD *)(v5 + 416) & 1) == 0 )
  {
    v6 = *(_QWORD *)(v5 + 64);
    if ( !v6 || *(_DWORD *)(v6 + 140) )
    {
LABEL_7:
      *(_BYTE *)a3 = 2;
      return;
    }
  }
  *(_BYTE *)a3 = 1;
}
