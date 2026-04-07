/*
 * XREFs of ?HasTaggedWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x18006D2DC
 * Callers:
 *     ?GetMaximizeSnapStartRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x18006D244 (-GetMaximizeSnapStartRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AU.c)
 *     ?get_HasTaggedWindowRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800D8700 (-get_HasTaggedWindowRect@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winr.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::HasTaggedWindowRect(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*((_QWORD *)this + 4) + 232LL);
  if ( v1 )
    LOBYTE(v1) = (*(_BYTE *)(v1 + 742) & 0x10) != 0;
  return v1;
}
