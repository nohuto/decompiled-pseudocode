/*
 * XREFs of sub_140088288 @ 0x140088288
 * Callers:
 *     sub_140087960 @ 0x140087960 (sub_140087960.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_1400499B8 @ 0x1400499B8 (sub_1400499B8.c)
 *     sub_14004EF04 @ 0x14004EF04 (sub_14004EF04.c)
 *     sub_140058C44 @ 0x140058C44 (sub_140058C44.c)
 */

__int64 __fastcall sub_140088288(void *a1, const void **a2, const void *a3, __int64 a4, void **a5)
{
  size_t v8; // rsi
  char *v9; // rax
  char *v10; // r14
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // r9
  size_t v14; // r9
  bool v15; // cc
  const void *v16; // r8
  NTSTATUS v17; // eax
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  unsigned int v20; // esi
  unsigned __int64 v21; // rdx
  _QWORD v22[2]; // [rsp+60h] [rbp-41h] BYREF
  PHANDLE FileHandle; // [rsp+70h] [rbp-31h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-29h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+57h]

  FileHandle = a5;
  v8 = 2 * (unsigned int)*((unsigned __int16 *)a2 + 8) + 8;
  v9 = (char *)sub_1400499B8((unsigned int)v8, (__int64)&unk_1400C75FC);
  v10 = v9;
  if ( v9 )
  {
    v13 = *((unsigned __int16 *)a2 + 8);
    v22[0] = 0LL;
    v14 = 2 * v13;
    v22[1] = v9;
    v15 = (unsigned __int64)a2[3] <= 7;
    v16 = a2;
    LOWORD(v22[0]) = v8;
    WORD1(v22[0]) = v8;
    if ( !v15 )
      v16 = *a2;
    sub_140058C44(v9, v8, v16, v14);
    sub_140058C44(
      &v10[2 * *((unsigned __int16 *)a2 + 8)],
      (unsigned int)v8 - 2 * *((unsigned __int16 *)a2 + 8),
      a3,
      8uLL);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v22;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    IoStatusBlock = 0LL;
    v17 = NtCreateFile(FileHandle, 3u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 0, 1u, 0, 0LL, 0);
    if ( v17 >= 0 )
    {
      v21 = (unsigned __int64)a2[3];
      if ( v21 > 7 )
        sub_1400453E4((__int64)*a2, 2 * v21 + 2);
      result = 0LL;
    }
    else
    {
      v18 = sub_14004EF04(
              (int)retaddr,
              442,
              (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
              (unsigned int)v17);
      v19 = (unsigned __int64)a2[3];
      v20 = v18;
      if ( v19 > 7 )
        sub_1400453E4((__int64)*a2, 2 * v19 + 2);
      result = v20;
    }
    *(_WORD *)a2 = 0;
    a2[2] = 0LL;
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      410,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
      -2147024882);
    v11 = (unsigned __int64)a2[3];
    if ( v11 > 7 )
      sub_1400453E4((__int64)*a2, 2 * v11 + 2);
    result = 2147942414LL;
    a2[2] = 0LL;
    *(_WORD *)a2 = 0;
  }
  a2[3] = (const void *)7;
  return result;
}
