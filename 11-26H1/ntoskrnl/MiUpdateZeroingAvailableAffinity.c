/*
 * XREFs of MiUpdateZeroingAvailableAffinity @ 0x1402F6500
 * Callers:
 *     MiAssignBackgroundZeroThreadToProcessor @ 0x1402F5E34 (MiAssignBackgroundZeroThreadToProcessor.c)
 *     MiInitializeEngineWorkAffinity @ 0x1402F63C4 (MiInitializeEngineWorkAffinity.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUpdateZeroingAvailableAffinity(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  unsigned int i; // r11d
  __int64 v6; // rax

  v4 = *(_QWORD *)(a1 + 80);
  for ( i = 0; i < *(_DWORD *)(v4 + 16); ++i )
  {
    if ( *(_WORD *)(a3 + 8) == *(_WORD *)(a1 + 104) && (!*(_BYTE *)(v4 + 39) || *(_QWORD *)(*a2 + 16LL * i)) )
    {
      v6 = *(_QWORD *)(a1 + 96);
      if ( a4 )
        *(_QWORD *)a3 &= ~v6;
      else
        *(_QWORD *)a3 |= v6;
      return;
    }
    a3 += 16LL;
  }
}
