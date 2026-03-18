/*
 * XREFs of EditionxxxComputeInputSinkInfo @ 0x1401CA050
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x14001E1E0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

int __fastcall EditionxxxComputeInputSinkInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 UserSessionState; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int128 v20; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v21; // [rsp+40h] [rbp-C0h]
  __int128 v22; // [rsp+50h] [rbp-B0h]
  __int128 v23; // [rsp+60h] [rbp-A0h]
  __int128 v24; // [rsp+70h] [rbp-90h]
  __int128 v25; // [rsp+80h] [rbp-80h]
  __int128 v26; // [rsp+90h] [rbp-70h]
  _BYTE v27[112]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v28[112]; // [rsp+110h] [rbp+10h] BYREF

  v2 = W32GetUserSessionState(a1, a2) + 18960;
  if ( (unsigned __int8)IsInputThread(v4, v3, v5) )
  {
    memset_0(&v20, 0, 0x58uLL);
    memset_0(v28, 0, sizeof(v28));
    v8 = *(_DWORD *)(v2 + 12);
    *(_QWORD *)&v23 = 0LL;
    DWORD2(v23) = 0;
    *(_QWORD *)&v24 = 0LL;
    LODWORD(v25) = 0;
    LODWORD(v20) = v8;
    *(_QWORD *)((char *)&v21 + 4) = *(_QWORD *)(v2 + 4);
    *((_QWORD *)&v24 + 1) = 0xFFFFFFFE00000000uLL;
    DCompHitTest(v27, &v20, v28);
  }
  if ( !*(_DWORD *)(v2 + 16) )
  {
    memset_0(&v20, 0, 0x70uLL);
    v9 = v21;
    *(_OWORD *)v2 = v20;
    v10 = v22;
    *(_OWORD *)(v2 + 16) = v9;
    v11 = v23;
    *(_OWORD *)(v2 + 32) = v10;
    v12 = v24;
    *(_OWORD *)(v2 + 48) = v11;
    v13 = v25;
    *(_OWORD *)(v2 + 64) = v12;
    v14 = v26;
    *(_OWORD *)(v2 + 80) = v13;
    *(_OWORD *)(v2 + 96) = v14;
  }
  UserSessionState = W32GetUserSessionState(v7, v6);
  if ( *(_BYTE *)(UserSessionState + 18788) )
  {
    v18 = W32GetUserSessionState(v17, v16);
    LODWORD(UserSessionState) = KeSetEvent(*(PRKEVENT *)(v18 + 18800), 1, 0);
  }
  return UserSessionState;
}
