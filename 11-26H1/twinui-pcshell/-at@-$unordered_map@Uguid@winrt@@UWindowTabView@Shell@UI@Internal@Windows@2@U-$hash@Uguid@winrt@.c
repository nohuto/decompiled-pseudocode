/*
 * XREFs of ?at@?$unordered_map@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@9@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@@std@@QEAAAEAUWindowTabView@Shell@UI@Internal@Windows@winrt@@AEBUguid@8@@Z @ 0x1800CC3B4
 * Callers:
 *     ?GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUguid@6@XZ @ 0x1800CBF9C (-GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUguid@6@XZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::unordered_map<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView>::at(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // r8
  unsigned __int64 i; // r9
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // r8
  __int64 v9; // rcx

  v3 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 0x10; ++i )
  {
    v5 = *((unsigned __int8 *)a2 + i);
    v3 = 0x100000001B3LL * (v5 ^ v3);
  }
  v6 = a1[3];
  v7 = *(_QWORD **)(v6 + 16 * (v3 & a1[6]) + 8);
  if ( v7 != (_QWORD *)a1[1] )
  {
    v8 = *(_QWORD **)(v6 + 16 * (v3 & a1[6]));
    while ( 1 )
    {
      v9 = *a2 - v7[2];
      if ( *a2 == v7[2] )
        v9 = a2[1] - v7[3];
      if ( !v9 )
        goto LABEL_10;
      if ( v7 == v8 )
        break;
      v7 = (_QWORD *)v7[1];
    }
  }
  do
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
LABEL_10:
    ;
  }
  while ( !v7 );
  return v7 + 4;
}
