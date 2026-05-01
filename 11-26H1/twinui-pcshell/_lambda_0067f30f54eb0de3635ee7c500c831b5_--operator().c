/*
 * XREFs of _lambda_0067f30f54eb0de3635ee7c500c831b5_::operator() @ 0x18030C414
 * Callers:
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x180089660 (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x1801877A0 (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 */

void __fastcall lambda_0067f30f54eb0de3635ee7c500c831b5_::operator()(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  _DWORD v4[2]; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = 0;
  if ( ApplicationViewManagement::CPersistence::_ReadPersistedData(
         (HKEY *)(a2 + 40),
         **(const unsigned __int16 ***)a1,
         L"ShowInSwitchers",
         v4,
         0xCu) >= 0 )
  {
    if ( v4[0] != 4 )
    {
      v3 = 61LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\Persistence.h",
        (const char *)0x8007000DLL);
      return;
    }
    if ( v4[1] != 1397960752 )
    {
      v3 = 62LL;
      goto LABEL_4;
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 216LL) = v5 != 0;
  }
}
