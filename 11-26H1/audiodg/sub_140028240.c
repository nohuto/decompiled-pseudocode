/*
 * XREFs of sub_140028240 @ 0x140028240
 * Callers:
 *     <none>
 * Callees:
 *     sub_14002813C @ 0x14002813C (sub_14002813C.c)
 *     sub_1400284D8 @ 0x1400284D8 (sub_1400284D8.c)
 */

void __fastcall sub_140028240(__int64 a1)
{
  ULONGLONG TickCount64; // rbx
  int v3; // r9d
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // [rsp+80h] [rbp+17h] BYREF
  int v13; // [rsp+84h] [rbp+1Bh] BYREF
  int v14; // [rsp+88h] [rbp+1Fh] BYREF
  int v15; // [rsp+8Ch] [rbp+23h] BYREF
  _FILETIME SystemTimeAsFileTime; // [rsp+90h] [rbp+27h] BYREF
  __int64 v17; // [rsp+98h] [rbp+2Fh] BYREF
  _FILETIME v18; // [rsp+A0h] [rbp+37h] BYREF
  _QWORD v19[3]; // [rsp+A8h] [rbp+3Fh] BYREF
  _FILETIME v20; // [rsp+D0h] [rbp+67h] BYREF
  _FILETIME v21; // [rsp+D8h] [rbp+6Fh] BYREF
  int v22; // [rsp+E0h] [rbp+77h] BYREF
  int v23; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( *(_QWORD *)(a1 + 8) && *(_QWORD *)(a1 + 16) && *(_QWORD *)(a1 + 24) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount64 = GetTickCount64();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v4 = *(__int64 **)(a1 + 24);
    v21 = SystemTimeAsFileTime;
    v20 = SystemTimeAsFileTime;
    v5 = *v4;
    v20 = (_FILETIME)(10000 * (**(_QWORD **)(a1 + 16) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v6 = 10000 * (v5 - TickCount64);
    v21 = (_FILETIME)(v6 + *(_QWORD *)&SystemTimeAsFileTime);
    v7 = *(__int64 **)(a1 + 32);
    v17 = v6 + *(_QWORD *)&SystemTimeAsFileTime;
    v18 = v20;
    v8 = *v7;
    if ( **(_BYTE **)(a1 + 8) )
    {
      if ( *(_DWORD *)v8 > 3u )
      {
        if ( sub_14002813C(v8, 2LL) )
        {
          v20.dwLowDateTime = *(_DWORD *)(a1 + 76);
          v21.dwLowDateTime = *(_DWORD *)(a1 + 72);
          v22 = *(_DWORD *)(a1 + 68);
          v23 = *(_DWORD *)(a1 + 64);
          v12 = *(_DWORD *)(a1 + 60);
          v13 = *(_DWORD *)(a1 + 56);
          v14 = *(_DWORD *)(a1 + 52);
          v15 = *(_DWORD *)(a1 + 48);
          v19[0] = *(_QWORD *)(a1 + 40);
          sub_1400284D8(
            v9,
            (unsigned int)&unk_1400D3DFC,
            v10,
            v11,
            (__int64)v19,
            (__int64)&v18,
            (__int64)&v17,
            (__int64)&v15,
            (__int64)&v14,
            (__int64)&v13,
            (__int64)&v12,
            (__int64)&v23,
            (__int64)&v22,
            (__int64)&v21,
            (__int64)&v20);
        }
      }
    }
    else if ( *(_DWORD *)v8 > 3u
           && (*(_QWORD *)(v8 + 16) & 0x400000000002LL) != 0
           && (*(_QWORD *)(v8 + 24) & 0x400000000002LL) == *(_QWORD *)(v8 + 24) )
    {
      v20.dwLowDateTime = *(_DWORD *)(a1 + 76);
      v21.dwLowDateTime = *(_DWORD *)(a1 + 72);
      v22 = *(_DWORD *)(a1 + 68);
      v23 = *(_DWORD *)(a1 + 64);
      v15 = *(_DWORD *)(a1 + 60);
      v14 = *(_DWORD *)(a1 + 56);
      v13 = *(_DWORD *)(a1 + 52);
      v12 = *(_DWORD *)(a1 + 48);
      v19[0] = v17;
      v17 = *(_QWORD *)(a1 + 40);
      sub_1400284D8(
        v8,
        (unsigned int)&unk_1400D3CC8,
        v6,
        v3,
        (__int64)&v17,
        (__int64)&v18,
        (__int64)v19,
        (__int64)&v12,
        (__int64)&v13,
        (__int64)&v14,
        (__int64)&v15,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20);
    }
  }
}
