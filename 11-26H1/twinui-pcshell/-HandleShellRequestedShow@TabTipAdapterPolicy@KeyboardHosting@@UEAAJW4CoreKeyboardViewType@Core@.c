/*
 * XREFs of ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAW4ShellRequestType@5Shell@68@@Z @ 0x180483C60
 * Callers:
 *     <none>
 * Callees:
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180289FE8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??$HandleShellRequestedShow@AEAU?$atomic@_N@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@_N@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18048229C (--$HandleShellRequestedShow@AEAU-$atomic@_N@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windo.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleShellRequestedShow(__int64 a1, int a2, char *a3)
{
  __int64 v3; // r9
  char v4; // r10

  v3 = a1;
  *(_DWORD *)a3 = 0;
  if ( a2 || std::_Atomic_storage<bool,1>::load(a1 + 909) && *(_BYTE *)(v3 + 847) == v4 && *(_BYTE *)(v3 + 882) == v4 )
    *(_DWORD *)a3 = 1;
  TouchKeyboardExperienceTelemetryLogger::HandleShellRequestedShow<std::atomic<bool> &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    v3 + 909,
    a3);
  return 0LL;
}
