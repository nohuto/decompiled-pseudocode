/*
 * XREFs of ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x140138920
 * Callers:
 *     ValidateDelegatePointerList @ 0x140138708 (ValidateDelegatePointerList.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall PointerDelegateGetClient(__int64 a1, __int64 a2, struct tagDELEGATEPOINTERMAP *a3)
{
  unsigned int v4; // r14d
  unsigned __int16 v5; // si
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int128 v10; // xmm1
  __int64 result; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  _OWORD v17[5]; // [rsp+30h] [rbp-49h] BYREF
  __int128 v18; // [rsp+80h] [rbp+7h]
  __int128 v19; // [rsp+90h] [rbp+17h]

  v4 = a2;
  v5 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  CTouchProcessor::DelegateCapture(*(_QWORD *)(UserSessionState + 3256), v17, v5, v4, 0);
  if ( HIDWORD(v18) != 2 )
    return 0LL;
  v9 = v18;
  if ( !(_QWORD)v18 || *(struct tagTHREADINFO **)(v9 + 16) == PtiCurrent(v8, v7) )
    return 0LL;
  *(_WORD *)a3 = v5;
  *((_DWORD *)a3 + 1) = v4;
  memset_0(v17, 0, 0x70uLL);
  v10 = v17[1];
  LODWORD(v17[0]) = 4;
  result = 1LL;
  *(_QWORD *)&v18 = v9;
  HIDWORD(v18) = 2;
  *(_OWORD *)((char *)a3 + 8) = v17[0];
  *((_DWORD *)a3 + 30) = 1;
  v12 = v17[2];
  *(_OWORD *)((char *)a3 + 24) = v10;
  v13 = v17[3];
  *(_OWORD *)((char *)a3 + 40) = v12;
  v14 = v17[4];
  *(_OWORD *)((char *)a3 + 56) = v13;
  v15 = v18;
  *(_OWORD *)((char *)a3 + 72) = v14;
  v16 = v19;
  *(_OWORD *)((char *)a3 + 88) = v15;
  *(_OWORD *)((char *)a3 + 104) = v16;
  return result;
}
