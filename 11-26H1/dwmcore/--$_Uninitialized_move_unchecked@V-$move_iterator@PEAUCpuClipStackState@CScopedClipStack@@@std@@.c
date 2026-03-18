/*
 * XREFs of ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@PEAUCpuClipStackState@CScopedClipStack@@@std@@YAPEAUCpuClipStackState@CScopedClipStack@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@V30@PEAU12@@Z @ 0x18024F0D0
 * Callers:
 *     ??$uninitialized_move@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x1801787D8 (--$uninitialized_move@V-$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V-$checked_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move_unchecked<std::move_iterator<CScopedClipStack::CpuClipStackState *>,CScopedClipStack::CpuClipStackState *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rcx
  _QWORD *v4; // r9

  for ( i = a1 + 8; ; i += 40LL )
  {
    v4 = (_QWORD *)(i - 8);
    if ( i - 8 == a2 )
      break;
    *(_QWORD *)a3 = *v4;
    *(_BYTE *)(a3 + 8) = *(_BYTE *)i;
    *(_BYTE *)i = 0;
    *v4 = 0LL;
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(i + 8);
    *(_QWORD *)(a3 + 24) = *(_QWORD *)(i + 16);
    *(_DWORD *)(a3 + 32) = *(_DWORD *)(i + 24);
    *(_BYTE *)(a3 + 36) = *(_BYTE *)(i + 28);
    a3 += 40LL;
  }
  return a3;
}
