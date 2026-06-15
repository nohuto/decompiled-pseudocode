/*
 * XREFs of ?SendAppClosureNotification@CProcess@@QEAAJXZ @ 0x180039F18
 * Callers:
 *     ?SendAppClosureNotification@CApplication@@QEAAXXZ @ 0x180039E1C (-SendAppClosureNotification@CApplication@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

__int64 __fastcall CProcess::SendAppClosureNotification(CProcess *this)
{
  DWORD CurrentProcessId; // eax
  __int64 v3; // rdx
  int v5; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+24h] [rbp-34h]
  __int64 v7; // [rsp+34h] [rbp-24h]
  int v8; // [rsp+3Ch] [rbp-1Ch]
  char v9; // [rsp+40h] [rbp-18h]

  v5 = 33;
  v7 = 0LL;
  v6 = 0LL;
  LODWORD(v6) = 0x10000;
  v8 = 0;
  v9 = 0;
  CurrentProcessId = GetCurrentProcessId();
  v3 = *((unsigned int *)this + 40);
  *(_QWORD *)((char *)&v6 + 4) = CurrentProcessId;
  HIDWORD(v7) = 1;
  return GenerateMediaEvent(&v5, v3);
}
