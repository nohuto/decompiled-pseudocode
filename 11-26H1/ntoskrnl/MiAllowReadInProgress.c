/*
 * XREFs of MiAllowReadInProgress @ 0x14038D138
 * Callers:
 *     MiHandleCollidedFault @ 0x14038D1C8 (MiHandleCollidedFault.c)
 * Callees:
 *     MiIsVirtualizationFaultPrimaryPage @ 0x1404EFB1C (MiIsVirtualizationFaultPrimaryPage.c)
 *     MiMarkVirtualizationFaultPageInfoFailed @ 0x1404F2794 (MiMarkVirtualizationFaultPageInfoFailed.c)
 */

__int64 __fastcall MiAllowReadInProgress(__int64 *a1)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi

  v2 = a1[2];
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
    return 3221225633LL;
  if ( (v2 & 1) == 0 )
    return (*((_BYTE *)a1 + 69) & 0x10) != 0 ? 0xC0000434 : 0;
  v4 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( *(_BYTE *)v4 != 5 )
    return (*((_BYTE *)a1 + 69) & 0x10) != 0 ? 0xC0000434 : 0;
  if ( (*(_DWORD *)(v4 + 56) & 4) == 0 )
    return (*((_BYTE *)a1 + 69) & 0x10) != 0 ? 0xC0000434 : 0;
  v5 = *a1;
  if ( (unsigned int)MiIsVirtualizationFaultPrimaryPage(v4, *a1) )
    return (*((_BYTE *)a1 + 69) & 0x10) != 0 ? 0xC0000434 : 0;
  MiMarkVirtualizationFaultPageInfoFailed(v4, v5);
  return 3221225495LL;
}
