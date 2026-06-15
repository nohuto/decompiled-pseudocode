/*
 * XREFs of sub_140051420 @ 0x140051420
 * Callers:
 *     <none>
 * Callees:
 *     sub_140007394 @ 0x140007394 (sub_140007394.c)
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_140007B68 @ 0x140007B68 (sub_140007B68.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140025F00 @ 0x140025F00 (sub_140025F00.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140051420(__int64 a1, __int64 a2, __int128 *a3)
{
  _DWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r14
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // r9d
  int v11; // eax
  __int64 **i; // rbx
  __int64 v14[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-20h] BYREF
  char v16; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+98h] [rbp+38h] BYREF

  v5 = (_DWORD *)sub_140049338(72LL, (__int64)&unk_1400C75FC);
  v15[0] = v5;
  LOBYTE(v18) = 0;
  v15[1] = &v18;
  v7 = sub_1400492F4(24LL, v6);
  v14[0] = (__int64)v5;
  v14[1] = v7;
  v16 = 0;
  *(_DWORD *)(v7 + 8) = 1;
  *(_DWORD *)(v7 + 12) = 1;
  *(_QWORD *)v7 = off_1400BB850;
  *(_QWORD *)(v7 + 16) = v5;
  sub_140025F00((__int64)v15);
  if ( !v5 )
  {
    v8 = -2147024882;
    v9 = 137;
    v10 = -2147024882;
LABEL_8:
    sub_14000C2A8(
      (int)retaddr,
      v9,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
      v10);
    goto LABEL_20;
  }
  memset(v5, 0, 0x48uLL);
  *v5 = 6;
  if ( !a3 )
    a3 = &xmmword_1400C5548;
  *((_OWORD *)v5 + 1) = *a3;
  v11 = sub_140007B68((__int64 *)(a1 + 32), (_QWORD *)v5 + 1);
  v8 = v11;
  if ( v11 < 0 )
  {
    v9 = 143;
LABEL_7:
    v10 = v11;
    goto LABEL_8;
  }
  v5[8] = 1;
  v11 = sub_1400B6010(*(_QWORD *)(a1 + 56));
  v8 = v11;
  if ( v11 < 0 )
  {
    v9 = 145;
    goto LABEL_7;
  }
  v11 = sub_1400B6010(*(_QWORD *)(a1 + 56));
  v8 = v11;
  if ( v11 < 0 )
  {
    v9 = 146;
    goto LABEL_7;
  }
  if ( *(_QWORD *)(a1 + 48) )
  {
    v5[13] = 1;
    v11 = sub_1400B6010(*(_QWORD *)(a1 + 48));
    v8 = v11;
    if ( v11 < 0 )
    {
      v9 = 150;
      goto LABEL_7;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  v18 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  for ( i = *(__int64 ***)(a1 + 112); i; i = (__int64 **)*i )
    sub_140007394((struct _RTL_CRITICAL_SECTION *)i[1], v14);
  sub_140018FF0(&v18);
  v8 = 0;
LABEL_20:
  sub_140007588(v7);
  return v8;
}
