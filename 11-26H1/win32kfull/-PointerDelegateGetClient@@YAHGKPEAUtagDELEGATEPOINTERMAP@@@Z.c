/*
 * XREFs of ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x140136B14
 * Callers:
 *     ValidateDelegatePointerList @ 0x140136924 (ValidateDelegatePointerList.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall PointerDelegateGetClient(__int64 a1, __int64 a2, struct tagDELEGATEPOINTERMAP *a3)
{
  unsigned int v4; // r14d
  unsigned __int16 v5; // si
  __int64 UserSessionState; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int128 v9; // xmm1
  __int64 result; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  _OWORD v16[5]; // [rsp+30h] [rbp-49h] BYREF
  __int128 v17; // [rsp+80h] [rbp+7h]
  __int128 v18; // [rsp+90h] [rbp+17h]

  v4 = a2;
  v5 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  CTouchProcessor::DelegateCapture(*(_QWORD *)(UserSessionState + 3256), v16, v5, v4, 0);
  if ( HIDWORD(v17) != 2 )
    return 0LL;
  v8 = v17;
  if ( !(_QWORD)v17 || *(struct tagTHREADINFO **)(v8 + 16) == PtiCurrent(v7) )
    return 0LL;
  *(_WORD *)a3 = v5;
  *((_DWORD *)a3 + 1) = v4;
  memset_0(v16, 0, 0x70uLL);
  v9 = v16[1];
  LODWORD(v16[0]) = 4;
  result = 1LL;
  *(_QWORD *)&v17 = v8;
  HIDWORD(v17) = 2;
  *(_OWORD *)((char *)a3 + 8) = v16[0];
  *((_DWORD *)a3 + 30) = 1;
  v11 = v16[2];
  *(_OWORD *)((char *)a3 + 24) = v9;
  v12 = v16[3];
  *(_OWORD *)((char *)a3 + 40) = v11;
  v13 = v16[4];
  *(_OWORD *)((char *)a3 + 56) = v12;
  v14 = v17;
  *(_OWORD *)((char *)a3 + 72) = v13;
  v15 = v18;
  *(_OWORD *)((char *)a3 + 88) = v14;
  *(_OWORD *)((char *)a3 + 104) = v15;
  return result;
}
