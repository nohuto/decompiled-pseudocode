/*
 * XREFs of IopFastQueryNetworkAttributes @ 0x140B4DF10
 * Callers:
 *     IoFastQueryNetworkAttributes @ 0x140B4DED0 (IoFastQueryNetworkAttributes.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     FsRtlpCleanupEcps @ 0x140986DF0 (FsRtlpCleanupEcps.c)
 */

char __fastcall IopFastQueryNetworkAttributes(__int64 a1, int a2, char a3, int a4, __int64 a5, __int64 a6)
{
  int v10; // ebx
  HANDLE Handle[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v13[6]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h]
  int v15; // [rsp+70h] [rbp-90h]
  __int64 v16; // [rsp+80h] [rbp-80h]
  int v17; // [rsp+90h] [rbp-70h]
  __int16 v18; // [rsp+96h] [rbp-6Ah]
  int v19; // [rsp+A4h] [rbp-5Ch]
  int v20; // [rsp+A8h] [rbp-58h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  char v22; // [rsp+D9h] [rbp-27h]
  char v23; // [rsp+DBh] [rbp-25h]
  _BYTE *v24; // [rsp+E0h] [rbp-20h]
  PVOID P[2]; // [rsp+F0h] [rbp-10h]
  __int128 v26; // [rsp+100h] [rbp+0h]
  __int64 CurrentSilo; // [rsp+110h] [rbp+10h]
  _BYTE v28[272]; // [rsp+130h] [rbp+30h] BYREF

  Handle[0] = 0LL;
  memset_0(v28, 0, sizeof(v28));
  memset_0(v13, 0, 0xE0uLL);
  v13[0] = 14680072;
  v18 = 7;
  v17 = a4 | 0x200000;
  v21 = a6;
  v16 = a1;
  v20 = 1;
  v24 = v28;
  v19 = 1;
  v22 = 1;
  v23 = 1;
  CurrentSilo = 1LL;
  *(_OWORD *)P = 0LL;
  LOWORD(P[0]) = 40;
  v26 = 0LL;
  if ( !a3 )
    *(_DWORD *)(a1 + 24) |= 0x200u;
  CurrentSilo = (__int64)PsGetCurrentSilo();
  v10 = ObOpenObjectByNameEx(a1, (__int64)IoFileObjectType, a3, 0LL, a2, (__int64)v13, CurrentSilo, Handle);
  if ( P[1] )
    FsRtlpCleanupEcps((_DWORD *)P[1]);
  if ( v15 == -1096154543 )
  {
    *(_DWORD *)a5 = v13[4];
    *(_QWORD *)(a5 + 8) = v14;
  }
  else
  {
    if ( v10 >= 0 )
    {
      ObCloseHandle(Handle[0], a3);
      v10 = -1073741788;
    }
    *(_DWORD *)a5 = v10;
  }
  return 1;
}
