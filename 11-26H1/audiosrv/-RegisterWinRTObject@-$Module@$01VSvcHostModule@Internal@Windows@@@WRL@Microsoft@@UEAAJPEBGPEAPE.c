/*
 * XREFs of ?RegisterWinRTObject@?$Module@$01VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAAJPEBGPEAPEBGPEAPEAU_RO_REGISTRATION_COOKIE@@I@Z @ 0x1800DA120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Module<2,Windows::Internal::SvcHostModule>::RegisterWinRTObject(
        __int64 a1,
        __int64 a2,
        const WCHAR **a3,
        __int64 a4,
        unsigned int a5)
{
  return Microsoft::WRL::Details::RegisterWinRTObject<2>(a1, a3, a4, a5);
}
