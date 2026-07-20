/*
 * XREFs of CreateKeyRecursively @ 0x140009978
 * Callers:
 *     CreateMergeLink @ 0x140009760 (CreateMergeLink.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateKeyRecursively(void **a1, void *a2, __int128 *a3, char a4)
{
  __int128 v4; // xmm0
  ULONG CreateOptions; // r12d
  int v7; // r14d
  ULONG v8; // r15d
  NTSTATUS v9; // edi
  __int64 result; // rax
  unsigned __int16 v11; // bx
  _WORD *v12; // rsi
  __int16 v13; // di
  _WORD *v14; // rsi
  __int16 v15; // ax
  NTSTATUS v16; // ebx
  __int128 v17; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+C8h] [rbp+48h] BYREF
  ULONG Disposition; // [rsp+D8h] [rbp+58h] BYREF

  KeyHandle = a2;
  v4 = *a3;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  Disposition = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  CreateOptions = a4 != 0 ? 3 : 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
  v7 = a4 != 0 ? 0x20 : 0;
  v17 = v4;
  v8 = a4 != 0 ? 320 : 64;
  ObjectAttributes.Attributes = v8;
  v9 = NtCreateKey(&KeyHandle, v7 + 131078, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
  result = 3221225524LL;
  if ( v9 != -1073741772 )
  {
LABEL_24:
    if ( v9 >= 0 )
      *a1 = KeyHandle;
    return (unsigned int)v9;
  }
  WORD1(v17) = v17;
  v11 = (unsigned __int16)v17 >> 1;
  ObjectAttributes.Attributes = 64;
  v12 = (_WORD *)(*((_QWORD *)&v17 + 1) - 2LL + 2LL * ((unsigned __int16)v17 >> 1));
  while ( v9 == -1073741772 )
  {
    if ( !v11 )
      return result;
    while ( *v12 != 92 )
    {
      --v12;
      if ( !--v11 )
        goto LABEL_10;
    }
    do
    {
      --v12;
      --v11;
    }
    while ( v11 && *v12 == 92 );
LABEL_10:
    LOWORD(v17) = 2 * v11;
    v9 = NtCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    result = 3221225524LL;
  }
  if ( v9 >= 0 )
  {
    ObjectAttributes.RootDirectory = KeyHandle;
    v13 = (WORD1(v17) >> 1) - v11;
    v14 = (_WORD *)(*((_QWORD *)&v17 + 1) + 2LL * v11);
    while ( 1 )
    {
      KeyHandle = 0LL;
      if ( !v13 )
        break;
      do
      {
        if ( *v14 != 92 )
          break;
        ++v14;
        --v13;
      }
      while ( v13 );
      *((_QWORD *)&v17 + 1) = v14;
      v15 = 0;
      for ( LOWORD(v17) = 0; v13; --v13 )
      {
        if ( *v14 == 92 )
          break;
        v15 += 2;
        ++v14;
        LOWORD(v17) = v15;
      }
      WORD1(v17) = v15;
      if ( !v13 )
        break;
      v16 = NtCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      NtClose(ObjectAttributes.RootDirectory);
      if ( v16 < 0 )
        return (unsigned int)v16;
      ObjectAttributes.RootDirectory = KeyHandle;
    }
    ObjectAttributes.Attributes = v8;
    v9 = NtCreateKey(&KeyHandle, v7 + 131078, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
    NtClose(ObjectAttributes.RootDirectory);
    goto LABEL_24;
  }
  return (unsigned int)v9;
}
