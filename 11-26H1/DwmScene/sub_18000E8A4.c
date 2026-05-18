/*
 * XREFs of sub_18000E8A4 @ 0x18000E8A4
 * Callers:
 *     sub_18000F524 @ 0x18000F524 (sub_18000F524.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000E6C8 @ 0x18000E6C8 (sub_18000E6C8.c)
 *     sub_18000E6E8 @ 0x18000E6E8 (sub_18000E6E8.c)
 *     sub_18000F2CC @ 0x18000F2CC (sub_18000F2CC.c)
 *     sub_18000FD08 @ 0x18000FD08 (sub_18000FD08.c)
 *     sub_1800102C4 @ 0x1800102C4 (sub_1800102C4.c)
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 *     sub_180010B1C @ 0x180010B1C (sub_180010B1C.c)
 *     sub_180010F68 @ 0x180010F68 (sub_180010F68.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 */

__int64 __fastcall sub_18000E8A4(__int64 a1, _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  int v13; // eax
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  void *retaddr; // [rsp+278h] [rbp+178h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  sub_1800108F8(Name, 260LL, L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId, 120, a1);
  v14 = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  sub_180011088(&v14, Mutex);
  if ( v14 )
  {
    sub_180010F68(&v14, &v15);
    v16 = 0LL;
    v8 = sub_180010B1C(Name, v7, &v16);
    v6 = v8;
    if ( v8 < 0 )
    {
      sub_1800102C4(retaddr, 100LL, "wil", (unsigned int)v8);
      sub_1800102C4(retaddr, 109LL, "wil", v6);
      v9 = v6;
      v10 = 299LL;
LABEL_5:
      sub_1800102C4(retaddr, v10, "wil", v9);
      sub_18000E6E8(&v15);
      goto LABEL_9;
    }
    v11 = (_DWORD *)(4 * v16);
    if ( 4 * v16 )
    {
      *a2 = v11;
      ++*v11;
    }
    else
    {
      v13 = sub_18000FD08(Name, &v14, a2);
      v6 = v13;
      if ( v13 < 0 )
      {
        v9 = (unsigned int)v13;
        v10 = 308LL;
        goto LABEL_5;
      }
    }
    sub_18000E6E8(&v15);
    v6 = 0;
    goto LABEL_9;
  }
  v6 = sub_18000F2CC();
LABEL_9:
  sub_18000E6C8(&v14);
  return v6;
}
