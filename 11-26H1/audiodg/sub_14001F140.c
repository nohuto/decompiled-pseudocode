/*
 * XREFs of sub_14001F140 @ 0x14001F140
 * Callers:
 *     sub_14001E554 @ 0x14001E554 (sub_14001E554.c)
 * Callees:
 *     <none>
 */

signed int __fastcall sub_14001F140(__int64 a1, _QWORD *a2)
{
  signed int result; // eax
  ULONG v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+34h] [rbp+Ch]
  PSECURITY_DESCRIPTOR v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = HIDWORD(a1);
  *a2 = 0LL;
  v6 = 0LL;
  v4 = 0;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;0x1;;;WD)(A;;0x1;;;S-1-15-2-1)(A;;0x1;;;S-1-15-3-1024-1692970155-4054893335-185714091-3362601943-35265931"
          "81-1159816984-2199008581-497492991)",
         1u,
         &v6,
         &v4) )
  {
    *a2 = v6;
    return 0;
  }
  else
  {
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
