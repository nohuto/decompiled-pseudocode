/*
 * XREFs of sub_140046EA8 @ 0x140046EA8
 * Callers:
 *     sub_14004F568 @ 0x14004F568 (sub_14004F568.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001D6A8 @ 0x14001D6A8 (sub_14001D6A8.c)
 *     sub_140025BFC @ 0x140025BFC (sub_140025BFC.c)
 *     sub_140038004 @ 0x140038004 (sub_140038004.c)
 *     sub_14003B034 @ 0x14003B034 (sub_14003B034.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140046EA8(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // r9
  WCHAR *v4; // rdx
  __int64 v5; // rcx
  WCHAR v7; // ax
  WCHAR *v8; // rax
  __int64 v9; // r8
  WCHAR *v10; // rax
  __int64 v11; // r9
  HANDLE v12; // rax
  void *v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // edi
  HANDLE v17; // rax
  void *v18; // rdi
  int v19; // eax
  int v20; // esi
  int v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  WCHAR Name[264]; // [rsp+48h] [rbp-C0h] BYREF
  void *retaddr; // [rsp+280h] [rbp+178h]

  *a3 = 0LL;
  v3 = 260LL;
  v4 = Name;
  v5 = a1 - (_QWORD)Name;
  do
  {
    if ( v3 == -2147483386 )
      break;
    v7 = *(WCHAR *)((char *)v4 + v5);
    if ( !v7 )
      break;
    *v4++ = v7;
    --v3;
  }
  while ( v3 );
  v8 = v4 - 1;
  v9 = 260LL;
  if ( v3 )
    v8 = v4;
  *v8 = 0;
  v10 = Name;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v9;
  }
  while ( v9 );
  if ( v9 )
  {
    v11 = (260 - v9) & -(__int64)(v9 != 0);
    sub_140025BFC(&Name[v11], 260 - v11, v9, (__int64)L"_p0");
  }
  v12 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v13 = v12;
  if ( v12 )
  {
    v23[0] = 0;
    v22 = 0;
    v14 = sub_14003B034(v12, v23);
    v16 = v14;
    if ( v14 < 0 )
    {
      sub_14000C2A8((int)retaddr, 211, (int)&unk_1400C71E8, v14);
LABEL_20:
      sub_14001D6A8(v13);
      return v16;
    }
    sub_140038004(Name, v15, (__int64)L"h");
    v17 = OpenSemaphoreW(0x1F0003u, 0, Name);
    v18 = v17;
    if ( !v17 )
    {
      v16 = sub_1400470EC(retaddr, 217LL, &unk_1400C71E8);
      goto LABEL_20;
    }
    v19 = sub_14003B034(v17, &v22);
    v20 = v19;
    if ( v19 < 0 )
    {
      sub_14000C2A8((int)retaddr, 219, (int)&unk_1400C71E8, v19);
      sub_14001D6A8(v18);
      v16 = v20;
      goto LABEL_20;
    }
    sub_14001D6A8(v18);
    *a3 = v23[0] | (unsigned __int64)((__int64)v22 << 31);
    sub_14001D6A8(v13);
    return 0LL;
  }
  if ( GetLastError() == 2 )
    return 0LL;
  return sub_1400470EC(retaddr, 205LL, &unk_1400C71E8);
}
