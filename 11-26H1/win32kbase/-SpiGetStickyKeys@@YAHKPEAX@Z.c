/*
 * XREFs of ?SpiGetStickyKeys@@YAHKPEAX@Z @ 0x14017E490
 * Callers:
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpiGetStickyKeys(int a1, _DWORD *a2, int a3)
{
  __int64 UserSessionState; // rdx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, (_DWORD)a2, a3);
  if ( (a1 & 0xFFFFFFF7) != 0 || !a2 || *a2 != 8 )
    return 0LL;
  a2[1] = *(_DWORD *)(UserSessionState + 20604);
  *((_WORD *)a2 + 3) = 0;
  a2[1] |= _byteswap_ulong(*(unsigned __int8 *)(UserSessionState + 21881));
  result = 1LL;
  a2[1] |= *(unsigned __int8 *)(UserSessionState + 21882) << 16;
  return result;
}
