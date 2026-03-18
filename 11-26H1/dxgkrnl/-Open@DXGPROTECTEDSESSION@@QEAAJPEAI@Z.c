/*
 * XREFs of ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1401F9BAC
 * Callers:
 *     DxgkCreateProtectedSession @ 0x1401FA080 (DxgkCreateProtectedSession.c)
 *     DxgkOpenProtectedSessionFromNtHandle @ 0x1401FB230 (DxgkOpenProtectedSessionFromNtHandle.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z @ 0x14007F750 (-AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402AF684 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::Open(DXGPROTECTEDSESSION *this, unsigned int *a2)
{
  struct DXGPROCESS *Current; // rbx
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // eax
  __int64 v8; // r9
  int v9; // ecx
  _BYTE v11[32]; // [rsp+50h] [rbp-28h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1123;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"phHandle", 1123LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v11, Current);
  v5 = HMGRTABLE::AllocHandle((char *)Current + 280, this, 14LL);
  *a2 = v5;
  v6 = v5;
  v7 = (v5 >> 6) & 0xFFFFFF;
  if ( v7 < *((_DWORD *)Current + 74) )
  {
    v8 = *((_QWORD *)Current + 35);
    v9 = *(_DWORD *)(v8 + 16LL * v7 + 8);
    if ( ((v6 >> 25) & 0x60) == (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0x60) && (v9 & 0x2000) == 0 && (v9 & 0x1F) != 0 )
      *(_DWORD *)(v8 + 16LL * v7 + 8) = v9 | 0x2000;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
  DXGPROTECTEDSESSION::AddReference(this, 0);
  return 0LL;
}
