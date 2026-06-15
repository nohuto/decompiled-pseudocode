/*
 * XREFs of ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18003E0AC
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x180003488 (-LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ.c)
 *     _lambda_e1a11bc3ee8655867b11559744636b64_::operator() @ 0x1800042BC (_lambda_e1a11bc3ee8655867b11559744636b64_--operator().c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18002D43C (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18003FC94 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18003FE28 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x18003FF6C (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbCopyW(char *a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v3; // rdx
  signed __int64 v4; // r10
  unsigned __int64 v5; // r9
  unsigned __int16 v6; // ax
  unsigned __int16 *v7; // rax
  __int64 result; // rax

  v3 = a2 >> 1;
  if ( v3 && v3 <= 0x7FFFFFFF )
  {
    v4 = a3 - a1;
    v5 = 2147483646 - v3;
    do
    {
      if ( !(v5 + v3) )
        break;
      v6 = *(_WORD *)&a1[v4];
      if ( !v6 )
        break;
      *(_WORD *)a1 = v6;
      a1 += 2;
      --v3;
    }
    while ( v3 );
    v7 = (unsigned __int16 *)(a1 - 2);
    if ( v3 )
      v7 = (unsigned __int16 *)a1;
    *v7 = 0;
    return v3 == 0 ? 0x8007007A : 0;
  }
  else
  {
    result = 2147942487LL;
    if ( v3 )
      *(_WORD *)a1 = 0;
  }
  return result;
}
