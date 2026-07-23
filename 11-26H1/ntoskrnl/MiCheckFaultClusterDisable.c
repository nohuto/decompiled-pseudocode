/*
 * XREFs of MiCheckFaultClusterDisable @ 0x140464780
 * Callers:
 *     MiDetermineThreadFaultCluster @ 0x1402B7E68 (MiDetermineThreadFaultCluster.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCheckFaultClusterDisable(__int64 *a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  _BOOL8 result; // rax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rax
  __int64 *i; // r11
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8

  v1 = a1[5];
  if ( ((v1 >> 43) & 0x1FFFF) != 0 )
  {
    v3 = (v1 >> 43 << 43) - 0x80000000000LL;
    v4 = (v1 ^ v3) & 0xF00007FFFFFFFFFFuLL;
    result = 1LL;
    a1[5] = v3 ^ v4;
  }
  else
  {
    v6 = 16LL * (unsigned __int16)(v1 >> 7);
    if ( v6 >= 0x1000 )
    {
      v7 = (v1 >> 23) & 0xFFFFF;
      v8 = v1 & 0xFFFFF8000000007FuLL;
      for ( i = a1; i < a1 + 4; v8 = v11 ^ (v11 ^ v8) & 0xFFFFFFFFFF80007FuLL )
      {
        v10 = *i++;
        v11 = (v8 & 0xFFFFFFFFFFFFFF80uLL) + 2 * ((v10 & 0xFC0) - ((unsigned __int64)(v10 & 0x3F) << 6));
      }
      v12 = v6 >> 2;
      if ( v7 >= v12 )
        v8 = v8 & 0xF00007FFFFFFFFFFuLL | 0x200000000000000LL;
      a1[5] = v8;
      return v7 >= v12;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
