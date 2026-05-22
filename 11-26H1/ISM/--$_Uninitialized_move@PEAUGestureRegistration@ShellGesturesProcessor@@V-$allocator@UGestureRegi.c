/*
 * XREFs of ??$_Uninitialized_move@PEAUGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAPEAUGestureRegistration@ShellGesturesProcessor@@QEAU12@0PEAU12@AEAV?$allocator@UGestureRegistration@ShellGesturesProcessor@@@0@@Z @ 0x18002FF90
 * Callers:
 *     ??$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAPEAUGestureRegistration@ShellGesturesProcessor@@QEAU23@AEBU23@@Z @ 0x18002F918 (--$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@-$vector@UGestureRegistr.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUGestureRegistration@ShellGesturesProcessor@@QEAU12@AEAV?$allocator@UGestureRegistration@ShellGesturesProcessor@@@0@@Z @ 0x18002F8C4 (--$_Destroy_range@V-$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUG.c)
 */

__int64 *__fastcall std::_Uninitialized_move<ShellGesturesProcessor::GestureRegistration *>(
        char *a1,
        char *a2,
        __int64 *a3)
{
  char *v5; // r8
  signed __int64 v6; // r9
  char *v7; // rdx
  char v8; // cl

  if ( a1 != a2 )
  {
    v5 = a1 + 16;
    v6 = (char *)a3 - a1;
    do
    {
      v7 = &v5[v6];
      *a3 = *((_QWORD *)v5 - 2);
      *((_DWORD *)v7 - 2) = *((_DWORD *)v5 - 2);
      *(_QWORD *)v7 = 0LL;
      if ( &v5[v6] != v5 )
      {
        *(_QWORD *)v7 = *(_QWORD *)v5;
        *(_QWORD *)v5 = 0LL;
      }
      v8 = v5[8];
      a3 += 4;
      v5 += 32;
      v7[8] = v8;
    }
    while ( v5 - 16 != a2 );
  }
  std::_Destroy_range<std::allocator<ShellGesturesProcessor::GestureRegistration>>(a3, a3);
  return a3;
}
