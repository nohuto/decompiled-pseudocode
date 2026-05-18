/*
 * XREFs of sub_1800CA04C @ 0x1800CA04C
 * Callers:
 *     sub_1800CA784 @ 0x1800CA784 (sub_1800CA784.c)
 * Callees:
 *     _o_powf @ 0x18000CE88 (_o_powf.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 */

__int64 __fastcall sub_1800CA04C(float a1, char a2)
{
  if ( !a2 )
    return (unsigned int)(int)a1;
  if ( dword_1801CE718 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000D534(&dword_1801CE718);
    if ( dword_1801CE718 == -1 )
    {
      o_powf();
      dword_1801CE71C = 0x40000000;
      sub_18000D4CC(&dword_1801CE718);
    }
  }
  return (unsigned int)(int)(float)(*(float *)&dword_1801CE71C * a1);
}
