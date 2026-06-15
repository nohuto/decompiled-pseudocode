/*
 * XREFs of sub_14001E8BC @ 0x14001E8BC
 * Callers:
 *     sub_14008041C @ 0x14008041C (sub_14008041C.c)
 * Callees:
 *     sub_14001EB30 @ 0x14001EB30 (sub_14001EB30.c)
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 */

__int64 __fastcall sub_14001E8BC(__int64 a1, __int64 a2, PSECURITY_DESCRIPTOR *a3)
{
  __int64 v3; // rax
  __int64 v6; // rsi
  WCHAR *v7; // rax
  WCHAR *v8; // rdi
  signed int v9; // ebx
  signed int LastError; // eax

  v3 = -1LL;
  do
    ++v3;
  while ( *(_WORD *)(a1 + 2 * v3) );
  v6 = v3 + 35;
  v7 = (WCHAR *)CoTaskMemAlloc(2 * (v3 + 35));
  v8 = v7;
  if ( !v7 )
  {
    v9 = -2147024882;
LABEL_10:
    sub_140048108("CreateSecurityDescriptor", 103LL, (unsigned int)v9);
    return (unsigned int)v9;
  }
  v9 = sub_14001EB30(v7, v6, L"D:(A;OICI;0x%08I32X;;;%ws)", 983071LL, a1);
  if ( v9 >= 0 )
  {
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(v8, 1u, a3, 0LL) )
    {
      v9 = 0;
    }
    else
    {
      LastError = GetLastError();
      v9 = LastError;
      if ( LastError > 0 )
        v9 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  CoTaskMemFree(v8);
  if ( v9 < 0 )
    goto LABEL_10;
  return (unsigned int)v9;
}
