/*
 * XREFs of sub_1400AC220 @ 0x1400AC220
 * Callers:
 *     <none>
 * Callees:
 *     sub_140001B9C @ 0x140001B9C (sub_140001B9C.c)
 *     sub_14002813C @ 0x14002813C (sub_14002813C.c)
 */

void __fastcall sub_1400AC220(__int64 a1)
{
  ULONGLONG TickCount64; // rbx
  __int64 *v3; // rax
  __int64 v4; // rdx
  _DWORD **v5; // rax
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+60h] [rbp-20h] BYREF
  struct _FILETIME v14; // [rsp+68h] [rbp-18h] BYREF
  __int64 v15; // [rsp+70h] [rbp-10h] BYREF
  __int64 v16; // [rsp+78h] [rbp-8h] BYREF
  struct _FILETIME v17; // [rsp+A0h] [rbp+20h] BYREF
  struct _FILETIME v18; // [rsp+A8h] [rbp+28h] BYREF
  int v19; // [rsp+B0h] [rbp+30h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+B8h] [rbp+38h] BYREF

  if ( *(_QWORD *)(a1 + 8) && *(_QWORD *)(a1 + 16) && *(_QWORD *)(a1 + 24) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount64 = GetTickCount64();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v3 = *(__int64 **)(a1 + 24);
    v18 = SystemTimeAsFileTime;
    v17 = SystemTimeAsFileTime;
    v4 = *v3;
    v17 = (struct _FILETIME)(10000 * (**(_QWORD **)(a1 + 16) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v18 = (struct _FILETIME)(10000 * (v4 - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v5 = *(_DWORD ***)(a1 + 32);
    v13 = (__int64)v18;
    v14 = v17;
    v6 = *v5;
    if ( **(_BYTE **)(a1 + 8) )
    {
      if ( *v6 > 3u )
      {
        if ( sub_14002813C((__int64)v6, 0x200000000001LL) )
        {
          v15 = *(_QWORD *)(a1 + 64);
          v17.dwLowDateTime = *(_DWORD *)(a1 + 56);
          v18.dwLowDateTime = *(_DWORD *)(a1 + 52);
          v19 = *(_DWORD *)(a1 + 48);
          v16 = *(_QWORD *)(a1 + 40);
          sub_140001B9C(
            v7,
            (__int64)&unk_1400D433A,
            v8,
            v9,
            &v16,
            (__int64)&v14,
            (__int64)&v13,
            (__int64)&v19,
            (__int64)&v18,
            (__int64)&v17,
            (__int64)&v15);
        }
      }
    }
    else
    {
      if ( *v6 > 3u && sub_14002813C((__int64)v6, 0x400000000001LL) )
      {
        v16 = *(_QWORD *)(a1 + 64);
        v17.dwLowDateTime = *(_DWORD *)(a1 + 56);
        v18.dwLowDateTime = *(_DWORD *)(a1 + 52);
        v19 = *(_DWORD *)(a1 + 48);
        v15 = v13;
        v13 = *(_QWORD *)(a1 + 40);
        sub_140001B9C(
          v10,
          (__int64)&unk_1400D4293,
          v11,
          v12,
          &v13,
          (__int64)&v14,
          (__int64)&v15,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16);
      }
      *(_QWORD *)(a1 + 64) = 0LL;
    }
  }
}
