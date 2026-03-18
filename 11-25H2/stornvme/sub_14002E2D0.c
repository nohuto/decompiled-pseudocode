/*
 * XREFs of sub_14002E2D0 @ 0x14002E2D0
 * Callers:
 *     sub_140014030 @ 0x140014030 (sub_140014030.c)
 * Callees:
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 */

__int64 __fastcall sub_14002E2D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // edi

  if ( !a2 )
    goto LABEL_9;
  v3 = *(_QWORD *)(a2 + 4080) + 0x40CA5A0F674331E8LL;
  if ( *(_QWORD *)(a2 + 4080) == 0xBF35A5F098BCCE18uLL )
    v3 = *(_QWORD *)(a2 + 4088) + 0x639962DA8026BB5BLL;
  if ( !v3 && (unsigned __int8)(*(_BYTE *)a2 - 1) <= 0xFCu && *(_WORD *)(a2 + 4078) == 1 )
  {
    v4 = StorPortExtendedFunction(0LL, a1, 4112LL, 1701672526LL);
    if ( !v4 )
      return v4;
  }
  else
  {
LABEL_9:
    v4 = -1056964593;
  }
  if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
    StorPortExtendedFunction(86LL, a1, 0LL, 1LL);
  return v4;
}
