/*
 * XREFs of LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D2134
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x180118558 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1800D3070 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D34B8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwSetValueKey @ 0x18015FB30 (ZwSetValueKey.c)
 */

__int64 __fastcall LdrpQueryAndUpdateVerifierLaunchCounter(unsigned __int16 *a1, _DWORD *a2)
{
  int v3; // edx
  int v4; // r14d
  __int64 v5; // r8
  __int64 v6; // r8
  int v7; // eax
  size_t v8; // rax
  int v10; // ebx
  _QWORD v11[2]; // [rsp+30h] [rbp-20h] BYREF
  _WORD v12[2]; // [rsp+40h] [rbp-10h] BYREF
  int v13; // [rsp+44h] [rbp-Ch]
  __int64 v14; // [rsp+48h] [rbp-8h]
  int i; // [rsp+70h] [rbp+20h] BYREF
  int v16; // [rsp+80h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  Handle = 0LL;
  v3 = *a1;
  v4 = 0;
  v5 = *a1;
  v16 = 0;
  v6 = *((_QWORD *)a1 + 1) + v5;
  v7 = v3;
  v13 = 0;
  for ( i = 0; v7; v7 -= 2 )
  {
    if ( *(_WORD *)(v6 - 2) == 92 )
      break;
    v6 -= 2LL;
  }
  v14 = v6;
  v12[0] = v3 - v7;
  HIDWORD(v11[0]) = 0;
  v12[1] = v3 - v7 + 2;
  v11[1] = L"\\VerifierCounter";
  v8 = 2 * wcslen(L"\\VerifierCounter");
  if ( v8 >= 0xFFFE )
    LOWORD(v8) = -4;
  LOWORD(v11[0]) = v8;
  WORD1(v11[0]) = v8 + 2;
  if ( (int)RtlpOpenImageFileOptionsKeyEx(v11, 11LL, 0LL, &Handle) < 0 )
  {
    if ( (int)RtlpOpenImageFileOptionsKeyEx(v11, 9LL, 0LL, &Handle) < 0 )
    {
      *a2 = 1;
      return 0LL;
    }
    v4 = 1;
  }
  v10 = RtlQueryImageFileKeyOption(Handle, v14, 4LL, a2, 4, &v16, v11[0]);
  if ( v10 >= 0 )
  {
    if ( v4 || !*a2 )
      goto LABEL_16;
    i = *a2 - 1;
    ZwSetValueKey(Handle, v12, 0LL, 4LL, &i, 4);
  }
  else
  {
    *a2 = 1;
  }
  v10 = 0;
LABEL_16:
  NtClose(Handle);
  return (unsigned int)v10;
}
