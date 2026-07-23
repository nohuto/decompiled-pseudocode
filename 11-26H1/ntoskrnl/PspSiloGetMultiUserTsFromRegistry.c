/*
 * XREFs of PspSiloGetMultiUserTsFromRegistry @ 0x1407F513C
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x1407F539C (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall PspSiloGetMultiUserTsFromRegistry(_BYTE *a1)
{
  char v1; // bl
  __int64 result; // rax
  ULONG v4; // [rsp+20h] [rbp-88h]
  int v5[4]; // [rsp+30h] [rbp-78h] BYREF
  const wchar_t *v6; // [rsp+40h] [rbp-68h]
  int *v7; // [rsp+48h] [rbp-60h]
  int v8; // [rsp+50h] [rbp-58h]
  int v9; // [rsp+B8h] [rbp+10h] BYREF

  v1 = 0;
  v9 = 0;
  memset_0(v5, 0, 0x70uLL);
  v5[2] = 292;
  v6 = L"TSAppCompat";
  v8 = 0x4000000;
  v7 = &v9;
  result = RtlpQueryRegistryValues(2, (int)L"Terminal Server", (int)v5, 0, v4, 1);
  if ( (_DWORD)result == -1073741772 )
  {
    result = 0LL;
  }
  else
  {
    if ( (int)result < 0 )
      return result;
    v1 = v9;
  }
  *a1 = v1;
  return result;
}
