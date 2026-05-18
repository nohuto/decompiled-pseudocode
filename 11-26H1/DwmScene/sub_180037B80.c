/*
 * XREFs of sub_180037B80 @ 0x180037B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_180037B80(_QWORD *a1, char a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = a1[2];
  if ( v4 )
    result = sub_180010EC8(v4);
  if ( a2 )
    return sub_18000E26C(a1, 0x18uLL);
  return result;
}
