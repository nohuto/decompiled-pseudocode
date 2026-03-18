/*
 * XREFs of HmgLockAndModifyHandleType @ 0x14006F600
 * Callers:
 *     GreMakeBitmapNonStock @ 0x14006F4E0 (GreMakeBitmapNonStock.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140018A90 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     HmgModifyHandleType @ 0x14006F6A0 (HmgModifyHandleType.c)
 */

__int64 __fastcall HmgLockAndModifyHandleType(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v5; // r8
  int v6; // edx
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]
  __int16 v11; // [rsp+2Ch] [rbp-1Ch]
  __int64 v12; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  v5 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v6 = (*a1 >> 8) & 0xFF0000;
  v7 = (unsigned __int16)*a1;
  v12 = v5;
  HANDLELOCK::vLockHandle(&v9, v7 | v6, 0);
  if ( v10 )
  {
    HmgModifyHandleType(a2);
    HANDLELOCK::vUnlock((HANDLELOCK *)&v9);
    v2 = 1;
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v9);
  return v2;
}
