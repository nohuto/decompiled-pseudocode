/*
 * XREFs of sub_14005A4E4 @ 0x14005A4E4
 * Callers:
 *     sub_14005B080 @ 0x14005B080 (sub_14005B080.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140073954 @ 0x140073954 (sub_140073954.c)
 */

__int64 __fastcall sub_14005A4E4(__int64 a1, __int64 a2, const IID *a3, LPVOID *ppv)
{
  HRESULT Instance; // eax
  unsigned int v5; // ebx
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  Instance = CoCreateInstance(a3, 0LL, 1u, &stru_1400C65A8, ppv);
  v5 = Instance;
  if ( Instance >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 157, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp", Instance);
  return v5;
}
