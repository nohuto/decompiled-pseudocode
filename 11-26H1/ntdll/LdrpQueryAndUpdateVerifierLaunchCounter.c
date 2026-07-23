/*
 * XREFs of LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800CF8A4
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x180118308 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1800D1480 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D18C8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwSetValueKey @ 0x18015FA30 (ZwSetValueKey.c)
 */

__int64 __fastcall LdrpQueryAndUpdateVerifierLaunchCounter(unsigned __int16 *a1, _DWORD *a2)
{
  int v3; // edx
  int v4; // r14d
  __int64 v5; // r8
  wchar_t *v6; // r8
  int v7; // eax
  size_t v8; // rax
  int ImageFileKeyOption; // ebx
  _WORD v11[2]; // [rsp+30h] [rbp-20h] BYREF
  int v12; // [rsp+34h] [rbp-1Ch]
  const wchar_t *v13; // [rsp+38h] [rbp-18h]
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  int Data; // [rsp+70h] [rbp+20h] BYREF
  __int64 v16; // [rsp+80h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  v3 = *a1;
  v4 = 0;
  v5 = *a1;
  LODWORD(v16) = 0;
  v6 = (wchar_t *)(*((_QWORD *)a1 + 1) + v5);
  v7 = v3;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  for ( Data = 0; v7; v7 -= 2 )
  {
    if ( *(v6 - 1) == 92 )
      break;
    --v6;
  }
  ValueName.Buffer = v6;
  ValueName.Length = v3 - v7;
  v12 = 0;
  ValueName.MaximumLength = v3 - v7 + 2;
  v13 = L"\\VerifierCounter";
  v8 = 2 * wcslen(L"\\VerifierCounter");
  if ( v8 >= 0xFFFE )
    LOWORD(v8) = -4;
  v11[0] = v8;
  v11[1] = v8 + 2;
  if ( (int)RtlpOpenImageFileOptionsKeyEx(v11, 11LL, 0LL, &KeyHandle) < 0 )
  {
    if ( (int)RtlpOpenImageFileOptionsKeyEx(v11, 9LL, 0LL, &KeyHandle) < 0 )
    {
      *a2 = 1;
      return 0LL;
    }
    v4 = 1;
  }
  ImageFileKeyOption = RtlQueryImageFileKeyOption(KeyHandle, ValueName.Buffer, 4, (__int64)&v16);
  if ( ImageFileKeyOption >= 0 )
  {
    if ( v4 || !*a2 )
      goto LABEL_16;
    Data = *a2 - 1;
    ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
  }
  else
  {
    *a2 = 1;
  }
  ImageFileKeyOption = 0;
LABEL_16:
  NtClose(KeyHandle);
  return (unsigned int)ImageFileKeyOption;
}
