/*
 * XREFs of ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x140117E10
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEventEx @ 0x140150824 (xxxKeyEventEx.c)
 */

__int64 __fastcall xxxICO_00(struct tagKE *a1)
{
  __int16 v2; // cx
  __int16 v4; // ax

  v2 = *((_WORD *)a1 + 1);
  if ( (_BYTE)v2 == 0xE4 )
  {
    if ( v2 >= 0 )
    {
      xxxKeyEventEx(
        48,
        *(unsigned __int8 *)a1,
        *((_DWORD *)a1 + 1),
        0,
        *((_QWORD *)a1 + 1),
        (__int64)a1 + 16,
        0,
        0,
        0LL,
        0LL);
      xxxKeyEventEx(
        32816,
        *(unsigned __int8 *)a1,
        *((_DWORD *)a1 + 1),
        0,
        *((_QWORD *)a1 + 1),
        (__int64)a1 + 16,
        0,
        0,
        0LL,
        0LL);
      v4 = 304;
    }
    else
    {
      v4 = -32464;
    }
    *((_WORD *)a1 + 1) = v4;
  }
  return 1LL;
}
