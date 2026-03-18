/*
 * XREFs of ?SetHandleProperty@CRemoteTextureMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAXPEA_N@Z @ 0x140236890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRemoteTextureMarshaler::SetHandleProperty(
        __int64 a1,
        int a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
    return 3221225485LL;
  if ( a3 )
    return 3221225477LL;
  if ( *(_QWORD *)(a1 + 56) )
  {
    *(_DWORD *)(a1 + 16) |= 0x40u;
    *(_QWORD *)(a1 + 56) = 0LL;
    *a4 = 1;
  }
  return result;
}
