/*
 * XREFs of sub_1400F3E44 @ 0x1400F3E44
 * Callers:
 *     sub_1400F4C14 @ 0x1400F4C14 (sub_1400F4C14.c)
 * Callees:
 *     sub_1400863B4 @ 0x1400863B4 (sub_1400863B4.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400DB18C @ 0x1400DB18C (sub_1400DB18C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400F3E44(__int64 a1, unsigned __int16 a2, UCHAR *a3)
{
  ULONG v4; // esi
  __int64 v6; // rdx
  int v7; // ebx
  const WCHAR *v8; // rdi
  unsigned __int16 v9; // ax
  PUCHAR v10; // r8
  UCHAR v12[4]; // [rsp+A0h] [rbp-148h] BYREF
  UCHAR v13[4]; // [rsp+A4h] [rbp-144h] BYREF
  UCHAR Dst[256]; // [rsp+B0h] [rbp-138h] BYREF

  v4 = a2;
  memset_0(Dst, 0, sizeof(Dst));
  *(_DWORD *)v12 = 0;
  *(_DWORD *)v13 = 0;
  v6 = *(_QWORD *)(a1 + 96);
  switch ( *(_BYTE *)(v6 + 3) )
  {
    case 1:
      v8 = L"SHA256";
      break;
    case 2:
      v8 = L"SHA384";
      break;
    case 3:
      v8 = L"SHA512";
      break;
    default:
      v7 = -1073741811;
LABEL_13:
      sub_1400A870C(
        *(_QWORD *)(a1 + 88),
        1,
        2,
        (__int64)L"Computing host augmented challenge failed",
        L"Status",
        v7,
        L"DHgID",
        *(_BYTE *)(*(_QWORD *)(a1 + 96) + 4LL),
        L"HashID",
        *(_BYTE *)(*(_QWORD *)(a1 + 96) + 3LL),
        &dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0);
      return (unsigned int)v7;
  }
  v9 = sub_1400DB18C(*(unsigned __int8 *)(v6 + 4));
  v7 = sub_1400863B4(v8, v9, v10, 0, 0LL, (ULONG *)v12, Dst);
  if ( v7 < 0 )
    goto LABEL_13;
  if ( *(_DWORD *)v12 != v4 )
    goto LABEL_12;
  v7 = sub_1400863B4(v8, v4, (PUCHAR)(*(_QWORD *)(a1 + 96) + 1320LL), *(ULONG *)v12, (__int64)Dst, (ULONG *)v13, a3);
  if ( v7 < 0 )
    goto LABEL_13;
  if ( *(_DWORD *)v13 != v4 )
  {
LABEL_12:
    v7 = -1073741820;
    goto LABEL_13;
  }
  return (unsigned int)v7;
}
