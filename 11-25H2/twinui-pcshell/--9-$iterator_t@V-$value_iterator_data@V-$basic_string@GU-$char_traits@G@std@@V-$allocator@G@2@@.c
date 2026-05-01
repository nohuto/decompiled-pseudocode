/*
 * XREFs of ??9?$iterator_t@V?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@QEBA_NAEBV012@@Z @ 0x1803A56F8
 * Callers:
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1803A6C80 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::reg::iterator_t<wil::reg::value_iterator_data<std::wstring>>::operator!=(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v4; // ecx

  v2 = *(_DWORD *)(a1 + 48);
  if ( v2 == -1 )
    return v2 != *(_DWORD *)(a2 + 48);
  v4 = *(_DWORD *)(a2 + 48);
  if ( v4 == -1 )
    return v2 != *(_DWORD *)(a2 + 48);
  return *(_QWORD *)(a1 + 40) != *(_QWORD *)(a2 + 40) || v2 != v4;
}
