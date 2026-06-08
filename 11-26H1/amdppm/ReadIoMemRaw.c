/*
 * XREFs of ReadIoMemRaw @ 0x140002200
 * Callers:
 *     WriteGenAddrEx @ 0x140001830 (WriteGenAddrEx.c)
 *     ReadGenAddr @ 0x1400021A0 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x140003B54 (WriteGenAddr.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadIoMemRaw(__int64 a1)
{
  __int64 v1; // r8
  char v2; // dl
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 4);
  v2 = *(_BYTE *)(a1 + 3);
  if ( *(_BYTE *)a1 != 1 )
  {
    if ( *(_BYTE *)a1 == 127 && v2 == 64 )
      return __readmsr(v1);
    return 0LL;
  }
  if ( v2 == 8 )
  {
    LOBYTE(result) = __inbyte(v1);
    return (unsigned __int8)result;
  }
  if ( v2 != 16 )
  {
    if ( v2 == 32 )
    {
      LODWORD(result) = __indword(v1);
      return (unsigned int)result;
    }
    return 0LL;
  }
  LOWORD(result) = __inword(v1);
  return (unsigned __int16)result;
}
