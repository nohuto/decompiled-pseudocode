/*
 * XREFs of sub_140079170 @ 0x140079170
 * Callers:
 *     <none>
 * Callees:
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_140021324 @ 0x140021324 (sub_140021324.c)
 *     sub_140078FA4 @ 0x140078FA4 (sub_140078FA4.c)
 */

__int64 __fastcall sub_140079170(LPCGUID SettingGuid, unsigned __int8 *Value, ULONG ValueLength, __int64 Context)
{
  __int64 v5; // rax
  int v6; // edi
  __int64 v7; // r8

  v5 = *(_QWORD *)&SettingGuid->Data1 - 0x4B00E9D55D3E9A59LL;
  if ( *(_QWORD *)&SettingGuid->Data1 == 0x4B00E9D55D3E9A59LL )
    v5 = *(_QWORD *)SettingGuid->Data4 - 0x486551FF34FFBDA6LL;
  if ( v5 )
    return 0LL;
  if ( ValueLength == 4 && Value )
  {
    v6 = *Value;
    if ( sub_140021280(Context) )
    {
      v7 = *(_QWORD *)(Context + 1872);
      if ( ((*(_DWORD *)(v7 + 32) >> 11) & 1) != v6 )
      {
        *(_DWORD *)(v7 + 32) ^= ((unsigned __int16)*(_DWORD *)(v7 + 32) ^ (unsigned __int16)((_WORD)v6 << 11)) & 0x800;
        if ( (*(_DWORD *)(*(_QWORD *)(Context + 1872) + 32LL) & 0x100) != 0 )
        {
          sub_140078FA4(Context);
          sub_140021324(Context);
        }
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1864));
    }
    return 0LL;
  }
  return 3221225485LL;
}
