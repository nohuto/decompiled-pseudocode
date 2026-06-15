/*
 * XREFs of sub_1400ABF90 @ 0x1400ABF90
 * Callers:
 *     <none>
 * Callees:
 *     sub_140001B9C @ 0x140001B9C (sub_140001B9C.c)
 *     sub_14002813C @ 0x14002813C (sub_14002813C.c)
 *     sub_1400285F0 @ 0x1400285F0 (sub_1400285F0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

void __fastcall sub_1400ABF90(__int64 a1)
{
  ULONGLONG TickCount64; // rbx
  __int64 *v3; // rax
  __int64 v4; // rdx
  _DWORD **v5; // rax
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _FILETIME v11; // [rsp+60h] [rbp-A0h] BYREF
  struct _FILETIME v12; // [rsp+68h] [rbp-98h] BYREF
  int v13; // [rsp+70h] [rbp-90h] BYREF
  struct _FILETIME v14; // [rsp+78h] [rbp-88h] BYREF
  struct _FILETIME v15; // [rsp+80h] [rbp-80h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+88h] [rbp-78h] BYREF
  __int64 v17; // [rsp+90h] [rbp-70h] BYREF
  __int64 v18; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  struct _FILETIME *v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  struct _FILETIME *v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  struct _FILETIME *v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  struct _FILETIME *v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]
  int *v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]

  if ( *(_QWORD *)(a1 + 8) && *(_QWORD *)(a1 + 16) && *(_QWORD *)(a1 + 24) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount64 = GetTickCount64();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v3 = *(__int64 **)(a1 + 24);
    v11 = SystemTimeAsFileTime;
    v12 = SystemTimeAsFileTime;
    v4 = *v3;
    v12 = (struct _FILETIME)(10000 * (**(_QWORD **)(a1 + 16) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v11 = (struct _FILETIME)(10000 * (v4 - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v5 = *(_DWORD ***)(a1 + 32);
    v14 = v11;
    v15 = v12;
    v6 = *v5;
    if ( **(_BYTE **)(a1 + 8) )
    {
      if ( *v6 > 3u )
      {
        if ( sub_14002813C((__int64)v6, 0x200000000000LL) )
        {
          v13 = *(_DWORD *)(a1 + 56);
          v11.dwLowDateTime = *(_DWORD *)(a1 + 52);
          v12.dwLowDateTime = *(_DWORD *)(a1 + 48);
          v30 = &v13;
          v28 = &v11;
          v26 = &v12;
          v24 = &v14;
          v22 = &v15;
          v20 = *(_QWORD *)(a1 + 40);
          v25 = 8LL;
          v23 = 8LL;
          v31 = 4LL;
          v29 = 4LL;
          v27 = 4LL;
          v21 = 16LL;
          sub_1400285F0(v7, byte_1400D41F6, 0LL, 0LL, 8u, &v19);
        }
      }
    }
    else if ( *v6 > 3u && sub_14002813C((__int64)v6, 0x400000000000LL) )
    {
      v12.dwLowDateTime = *(_DWORD *)(a1 + 56);
      v11.dwLowDateTime = *(_DWORD *)(a1 + 52);
      v13 = *(_DWORD *)(a1 + 48);
      v18 = *(_QWORD *)(a1 + 40);
      v17 = 0x1000000LL;
      sub_140001B9C(
        v8,
        (__int64)&unk_1400D4149,
        v9,
        v10,
        &v18,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v11,
        (__int64)&v12,
        (__int64)&v17);
    }
  }
}
