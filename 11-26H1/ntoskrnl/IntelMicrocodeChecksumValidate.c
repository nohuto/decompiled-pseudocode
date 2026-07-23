/*
 * XREFs of IntelMicrocodeChecksumValidate @ 0x1406E25FC
 * Callers:
 *     GetMicrocodePatchData @ 0x1406E16D0 (GetMicrocodePatchData.c)
 *     MicrocodeUpdate @ 0x1406E1C10 (MicrocodeUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntelMicrocodeChecksumValidate(_DWORD *a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v3; // edx
  unsigned int v4; // edx
  __int64 v5; // r8

  result = 0LL;
  if ( a2 < 0x31 )
    return 3221225485LL;
  v3 = a1[7];
  if ( v3 )
  {
    v4 = (v3 >> 2) + 12;
    if ( !v4 )
      return result;
  }
  else
  {
    v4 = 512;
  }
  v5 = v4;
  do
  {
    LODWORD(result) = *a1++ + result;
    --v5;
  }
  while ( v5 );
  return (_DWORD)result != 0 ? 0xC0000001 : 0;
}
