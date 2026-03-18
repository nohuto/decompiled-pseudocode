/*
 * XREFs of ShouldVirtualizeWindowRect @ 0x1400D8290
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

char __fastcall ShouldVirtualizeWindowRect(__int64 a1, unsigned int a2)
{
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v5; // rcx
  char v6; // bl
  _QWORD *v7; // rax

  if ( !a1 )
    return 0;
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(a1);
  if ( CurrentThreadNonPaged )
    CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
  v6 = 1;
  if ( (*(_BYTE *)(CurrentThreadNonPaged[65] + 224LL) & 1) != 0 )
    return 0;
  v7 = (_QWORD *)W32GetCurrentThreadNonPaged(v5);
  if ( v7 )
    v7 = (_QWORD *)*v7;
  if ( (*(_BYTE *)(v7[65] + 224LL) & 0x20) != 0
    || (((unsigned __int16)(a2 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) >> 8)) & 0x1FF) == 0 )
  {
    return 0;
  }
  return v6;
}
