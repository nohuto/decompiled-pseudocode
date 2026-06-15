/*
 * XREFs of sub_140078898 @ 0x140078898
 * Callers:
 *     sub_1400791E0 @ 0x1400791E0 (sub_1400791E0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001CDE4 @ 0x14001CDE4 (sub_14001CDE4.c)
 *     sub_14001D640 @ 0x14001D640 (sub_14001D640.c)
 *     sub_14001D6A8 @ 0x14001D6A8 (sub_14001D6A8.c)
 *     sub_14001EB30 @ 0x14001EB30 (sub_14001EB30.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14004CEC8 @ 0x14004CEC8 (sub_14004CEC8.c)
 *     sub_14004F568 @ 0x14004F568 (sub_14004F568.c)
 *     sub_14004F82C @ 0x14004F82C (sub_14004F82C.c)
 *     sub_14007B9C8 @ 0x14007B9C8 (sub_14007B9C8.c)
 */

__int64 __fastcall sub_140078898(__int64 a1, _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  HANDLE v10; // rbx
  int v12; // eax
  unsigned int v13; // edi
  _DWORD *v14; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  HANDLE v17; // [rsp+30h] [rbp-D0h] BYREF
  void *v18; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v19; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  _UNKNOWN *retaddr; // [rsp+288h] [rbp+188h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  sub_14001EB30(Name, 260LL, (__int64)L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId, 304, a1);
  v17 = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  sub_14001D640((__int64 *)&v17, (__int64)Mutex);
  v10 = v17;
  if ( !v17 )
    return sub_14001CDE4(v7, v6, v8, v9);
  sub_14004F82C(&v17, &v18);
  v19 = 0LL;
  v12 = sub_14004F568((__int64)Name, &v19);
  v13 = v12;
  if ( v12 < 0 )
  {
    sub_14000C2A8((int)retaddr, 299, (int)&unk_1400C71E8, v12);
    sub_14004CEC8(&v18);
    sub_14001D6A8(v10);
    return v13;
  }
  v14 = v19;
  if ( v19 )
  {
    *a2 = v19;
    ++*v14;
LABEL_12:
    sub_14004CEC8(&v18);
    if ( v10 )
      sub_14001D6A8(v10);
    return 0LL;
  }
  v15 = sub_14007B9C8(Name, &v17, a2);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v10 = v17;
    goto LABEL_12;
  }
  sub_14000C2A8((int)retaddr, 308, (int)&unk_1400C71E8, v15);
  sub_14004CEC8(&v18);
  if ( v17 )
    sub_14001D6A8(v17);
  return v16;
}
