/*
 * XREFs of sub_140021ACC @ 0x140021ACC
 * Callers:
 *     sub_140021650 @ 0x140021650 (sub_140021650.c)
 * Callees:
 *     sub_140007394 @ 0x140007394 (sub_140007394.c)
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_140007B68 @ 0x140007B68 (sub_140007B68.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140025F00 @ 0x140025F00 (sub_140025F00.c)
 *     sub_14003A2F0 @ 0x14003A2F0 (sub_14003A2F0.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140021ACC(__int64 a1, __int128 *a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // r15
  unsigned int v6; // ebx
  int v7; // r9d
  int v8; // edx
  int v9; // eax
  __int64 **i; // rbx
  __int64 v12[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF
  int v14; // [rsp+40h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+28h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+90h] [rbp+40h] BYREF
  __int64 v17; // [rsp+98h] [rbp+48h]

  v4 = (_DWORD *)sub_140049338(72LL, &unk_1400C75FC);
  LOBYTE(v16) = 0;
  *(_QWORD *)&v13 = v4;
  *((_QWORD *)&v13 + 1) = &v16;
  v5 = sub_1400492F4(24LL);
  v17 = v5;
  *(_OWORD *)v5 = 0LL;
  *(_DWORD *)(v5 + 8) = 1;
  *(_DWORD *)(v5 + 12) = 1;
  *(_QWORD *)v5 = off_1400BA9F8;
  *(_QWORD *)(v5 + 16) = v4;
  v12[0] = (__int64)v4;
  v12[1] = v5;
  LOBYTE(v14) = 0;
  sub_140025F00(&v13);
  if ( !v4 )
  {
    v6 = -2147024882;
    v7 = -2147024882;
    v8 = 102;
LABEL_6:
    sub_14000C2A8(
      (int)retaddr,
      v8,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      v7);
    goto LABEL_13;
  }
  memset(v4, 0, 0x48uLL);
  *v4 = 2;
  v9 = sub_140007B68((__int64 *)(a1 + 40), (_QWORD *)v4 + 1);
  v6 = v9;
  if ( v9 < 0 )
  {
    v8 = 107;
LABEL_5:
    v7 = v9;
    goto LABEL_6;
  }
  v13 = *a2;
  v14 = *((_DWORD *)a2 + 4);
  v9 = sub_14003A2F0(a1, &v13, v4 + 4);
  v6 = v9;
  if ( v9 < 0 )
  {
    v8 = 108;
    goto LABEL_5;
  }
  *(_OWORD *)(v4 + 6) = *a2;
  v4[10] = *((_DWORD *)a2 + 4);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v16 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  for ( i = *(__int64 ***)(a1 + 88); i; i = (__int64 **)*i )
    sub_140007394((struct _RTL_CRITICAL_SECTION *)i[1], v12);
  sub_140018FF0(&v16);
  v6 = 0;
LABEL_13:
  sub_140007588(v5);
  return v6;
}
