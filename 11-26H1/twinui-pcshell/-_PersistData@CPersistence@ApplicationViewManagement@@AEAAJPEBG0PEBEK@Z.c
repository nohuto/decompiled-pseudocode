/*
 * XREFs of ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x1801AA70C
 * Callers:
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___ @ 0x18030A428 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_807778e6719fb664354e7.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_712fa0ba2d8bf27a4057fb1c931fbf13___ @ 0x18030C27C (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_712fa0ba2d8bf27a4057f.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802B01C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall ApplicationViewManagement::CPersistence::_PersistData(
        HKEY *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int8 *a4,
        DWORD cbData)
{
  HKEY v5; // rcx
  unsigned int v8; // eax
  HKEY v9; // rcx
  __int64 v11; // rdx
  int v12; // eax
  HKEY v13; // rcx
  unsigned int v14; // ebx
  unsigned int dwOptions; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  v5 = *this;
  if ( !v5 )
  {
    v14 = -2144927145;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
      (const char *)0x80270257LL);
    return v14;
  }
  hKey = 0LL;
  v8 = RegCreateKeyExW(v5, a2, 0, 0LL, 1u, 0x20006u, 0LL, &hKey, 0LL);
  if ( v8 )
  {
    v11 = 96LL;
    goto LABEL_8;
  }
  v8 = RegSetValueExW(hKey, a3, 0, 3u, a4, cbData);
  if ( v8 )
  {
    v11 = 104LL;
LABEL_8:
    v12 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)v11,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
            (const char *)v8,
            dwOptions);
    v13 = hKey;
    v14 = v12;
    hKey = 0LL;
    if ( v13 )
      RegCloseKey(v13);
    return v14;
  }
  v9 = hKey;
  hKey = 0LL;
  if ( v9 )
    RegCloseKey(v9);
  return 0LL;
}
