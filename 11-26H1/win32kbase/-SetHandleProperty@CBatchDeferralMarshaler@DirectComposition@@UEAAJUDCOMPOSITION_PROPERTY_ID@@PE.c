/*
 * XREFs of ?SetHandleProperty@CBatchDeferralMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAXPEA_N@Z @ 0x140247A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1400B17A4 (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 */

__int64 __fastcall DirectComposition::CBatchDeferralMarshaler::SetHandleProperty(
        __int64 a1,
        __int64 a2,
        void *a3,
        _BYTE *a4)
{
  __int64 result; // rax

  result = 3221225485LL;
  *a4 = 0;
  if ( a3 && !(_DWORD)a2 && !*(_QWORD *)(a1 + 56) )
  {
    result = DirectComposition::CEvent::Create(a3, a2, (struct DirectComposition::CEvent **)(a1 + 56));
    if ( (int)result >= 0 )
      *a4 = 1;
  }
  return result;
}
