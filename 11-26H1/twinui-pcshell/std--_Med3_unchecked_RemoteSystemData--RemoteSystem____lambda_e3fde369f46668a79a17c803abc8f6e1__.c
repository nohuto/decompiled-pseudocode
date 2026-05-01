/*
 * XREFs of std::_Med3_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x1806452C8
 * Callers:
 *     std::_Guess_median_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180644F40 (std--_Guess_median_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803ab.c)
 * Callees:
 *     ??$swap@URemoteSystem@RemoteSystemData@@$0A@@std@@YAXAEAURemoteSystem@RemoteSystemData@@0@Z @ 0x180648144 (--$swap@URemoteSystem@RemoteSystemData@@$0A@@std@@YAXAEAURemoteSystem@RemoteSystemData@@0@Z.c)
 */

unsigned __int64 __fastcall std::_Med3_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 result; // rax

  if ( *(_QWORD *)(a2 + 16) < *(_QWORD *)(a1 + 16) )
    std::swap<RemoteSystemData::RemoteSystem,0>(a2, a1);
  result = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a3 + 16) < result )
  {
    std::swap<RemoteSystemData::RemoteSystem,0>(a3, a2);
    result = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(a2 + 16) < result )
      return std::swap<RemoteSystemData::RemoteSystem,0>(a2, a1);
  }
  return result;
}
