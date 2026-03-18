/*
 * XREFs of VidSchGetDriverPagingContext @ 0x14010A7F0
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1400E8924 (VidSchiSubmitPagingCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDriverPagingContext(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 336) + 8LL * a2);
  if ( v3 )
    return *(_QWORD *)(v3 + 48);
  v4 = 328LL;
  if ( a3 )
    v4 = 352LL;
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + a1) + 8LL * a2) + 64LL);
}
