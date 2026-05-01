/*
 * XREFs of ??$GetPtrAs@PEAG@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEBAPEAPEAGXZ @ 0x1800986E8
 * Callers:
 *     ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x18004A918 (-CdplIsSupportedInl@@YAJPEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( !*a1 )
    return 0LL;
  return result;
}
