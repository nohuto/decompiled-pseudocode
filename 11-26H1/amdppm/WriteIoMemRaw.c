/*
 * XREFs of WriteIoMemRaw @ 0x140002360
 * Callers:
 *     WriteGenAddr @ 0x140003B54 (WriteGenAddr.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall WriteIoMemRaw(unsigned __int8 *a1, unsigned __int64 a2)
{
  __int64 v2; // r11
  unsigned __int8 v3; // r9
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 4);
  v3 = a1[3];
  result = (unsigned int)*a1 - 1;
  if ( *a1 == 1 )
  {
    switch ( v3 )
    {
      case 8u:
        result = (unsigned __int8)a2;
        __outbyte(v2, a2);
        break;
      case 0x10u:
        result = (unsigned __int16)a2;
        __outword(v2, a2);
        break;
      case 0x20u:
        result = (unsigned int)a2;
        __outdword(v2, a2);
        break;
    }
  }
  else if ( *a1 == 127 && v3 == 64 )
  {
    result = a2;
    __writemsr(v2, a2);
  }
  return result;
}
