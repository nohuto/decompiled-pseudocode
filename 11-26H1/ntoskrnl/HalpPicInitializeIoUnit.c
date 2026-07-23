/*
 * XREFs of HalpPicInitializeIoUnit @ 0x1405A4BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPicInitializeIoUnit(_DWORD *a1)
{
  bool v1; // zf
  unsigned __int16 v2; // cx
  unsigned __int8 v3; // r9
  unsigned __int16 v4; // dx

  v1 = *a1 == 45056;
  v2 = 33;
  v3 = 4;
  v4 = 32;
  if ( !v1 )
  {
    v3 = 2;
    v4 = 160;
  }
  __outbyte(v4, 0x11u);
  if ( !v1 )
    v2 = 161;
  __outbyte(v2, 0xD8u);
  __outbyte(v2, v3);
  __outbyte(v2, 1u);
  __outbyte(v2, 0xFFu);
  return 0LL;
}
