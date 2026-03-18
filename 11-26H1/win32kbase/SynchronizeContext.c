/*
 * XREFs of SynchronizeContext @ 0x14008CFE0
 * Callers:
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 *     _lambda_7336048acd17859272a6f98208d72592_::_lambda_invoker_cdecl_ @ 0x14021AF10 (_lambda_7336048acd17859272a6f98208d72592_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 */

__int64 __fastcall SynchronizeContext(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  _QWORD *v7; // rcx
  int v8; // edx
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rcx
  int v12; // r8d
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF

  v13 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19176) )
  {
    v7 = **(_QWORD ***)(*(_QWORD *)(W32GetUserSessionState(v4, v3, v5) + 19176) + 8LL);
    *(_QWORD *)&v13 = *v7;
    v11 = *(_QWORD *)(W32GetUserSessionState((_DWORD)v7, v8, v9) + 19176);
    if ( *(_QWORD *)(*(_QWORD *)(v11 + 8) + 176LL) )
      DWORD2(v13) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v10, v12) + 19176) + 8LL)
                                          + 176LL)
                              + 56LL);
    else
      DWORD2(v13) = 0;
  }
  return SendMessageTo(20, (int)&v13, 16);
}
