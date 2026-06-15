/*
 * XREFs of sub_14004E530 @ 0x14004E530
 * Callers:
 *     <none>
 * Callees:
 *     sub_140007394 @ 0x140007394 (sub_140007394.c)
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140025F00 @ 0x140025F00 (sub_140025F00.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14004D5B0 @ 0x14004D5B0 (sub_14004D5B0.c)
 */

__int64 __fastcall sub_14004E530(__int64 a1, int *a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned int v7; // ebx
  int v8; // edx
  int v9; // r9d
  int v10; // eax
  __int64 **i; // rbx
  __int64 v13[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  char v15; // [rsp+40h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+70h] [rbp+18h] BYREF

  v4 = (_DWORD *)sub_140049338(72LL, (__int64)&unk_1400C75FC);
  v14[0] = v4;
  LOBYTE(v17) = 0;
  v14[1] = &v17;
  v6 = sub_1400492F4(24LL, v5);
  v13[0] = (__int64)v4;
  v13[1] = v6;
  v15 = 0;
  *(_DWORD *)(v6 + 8) = 1;
  *(_DWORD *)(v6 + 12) = 1;
  *(_QWORD *)v6 = off_1400BB678;
  *(_QWORD *)(v6 + 16) = v4;
  sub_140025F00((__int64)v14);
  if ( !v4 )
  {
    v7 = -2147024882;
    v8 = 82;
    v9 = -2147024882;
LABEL_5:
    sub_14000C2A8(
      (int)retaddr,
      v8,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apodevicenotificationshandler.cpp",
      v9);
    goto LABEL_10;
  }
  memset(v4, 0, 0x48uLL);
  *v4 = 5;
  v10 = sub_14004D5B0(*a2, v4 + 2);
  v7 = v10;
  if ( v10 < 0 )
  {
    v9 = v10;
    v8 = 87;
    goto LABEL_5;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v17 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  for ( i = *(__int64 ***)(a1 + 80); i; i = (__int64 **)*i )
    sub_140007394((struct _RTL_CRITICAL_SECTION *)i[1], v13);
  sub_140018FF0(&v17);
  v7 = 0;
LABEL_10:
  sub_140007588(v6);
  return v7;
}
