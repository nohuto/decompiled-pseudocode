/*
 * XREFs of ??$?9GU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x18021CB48
 * Callers:
 *     ?SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z @ 0x18060F41C (-SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1806106A8 (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 * Callees:
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x1800456B0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

char __fastcall std::operator!=<unsigned short>(_QWORD *a1, unsigned __int16 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  int v4; // eax
  char v5; // cl

  v2 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    a2 = *(unsigned __int16 **)a2;
  v3 = a1[2];
  if ( a1[3] > 7uLL )
    a1 = (_QWORD *)*a1;
  if ( v3 != v2 )
    return 1;
  v4 = std::_WChar_traits<unsigned short>::compare((__int64)a1, a2, v3);
  v5 = 0;
  if ( v4 )
    return 1;
  return v5;
}
