/*
 * XREFs of AudioServerReleaseStreamConnection @ 0x180116560
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     ?ReleaseStreamConnection@@YAJPEAX@Z @ 0x1801131E0 (-ReleaseStreamConnection@@YAJPEAX@Z.c)
 */

__int64 __fastcall AudioServerReleaseStreamConnection(_QWORD **a1)
{
  __int64 result; // rax

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_55a927f0784e38de47faa537a644ca17_Traceguids, a1);
  }
  result = 2147942487LL;
  if ( a1 )
  {
    result = ReleaseStreamConnection(*a1);
    *a1 = 0LL;
  }
  return result;
}
