/*
 * XREFs of EtwpValidateFlagExtension @ 0x14077F1A0
 * Callers:
 *     EtwpUpdateTrace @ 0x140AB081C (EtwpUpdateTrace.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidateFlagExtension(unsigned int *a1)
{
  int v1; // r8d
  unsigned __int64 v3; // r10
  unsigned __int16 *v4; // r9
  unsigned __int16 *v5; // rcx
  unsigned __int16 v6; // dx
  unsigned __int16 i; // r8
  __int64 v8; // rax

  v1 = a1[18];
  if ( v1 >= 0 )
    return 0LL;
  if ( BYTE2(v1) != 0xFF )
    return 3221225485LL;
  if ( (unsigned __int16)v1 < 0xB0u )
    return 3221225485LL;
  v3 = *a1;
  if ( v3 < (unsigned __int64)(unsigned __int16)v1 + 4 )
    return 3221225485LL;
  v4 = (unsigned __int16 *)((char *)a1 + (unsigned __int16)v1);
  if ( (((_BYTE)v1 + (_BYTE)a1) & 1) == 0 )
  {
    if ( *v4 && 4 * (unsigned __int64)*v4 <= (unsigned int)v3 - (unsigned __int16)v1 )
    {
      v5 = v4 + 2;
      v6 = *v4 - 1;
      for ( i = 0; i < v4[1]; ++i )
      {
        if ( ((unsigned __int8)v5 & 1) != 0 )
          return 3221226181LL;
        if ( !v6 )
          return 3221225485LL;
        v8 = *v5;
        if ( v6 < (unsigned __int16)v8 )
          return 3221225485LL;
        v6 -= v8;
        v5 += 2 * v8;
      }
      if ( !v6 )
        return 0LL;
    }
    return 3221225485LL;
  }
  return 3221226181LL;
}
