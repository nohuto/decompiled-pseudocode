/*
 * XREFs of sub_1400567A0 @ 0x1400567A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001D564 @ 0x14001D564 (sub_14001D564.c)
 */

__int64 __fastcall sub_1400567A0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  int v5; // eax
  unsigned int v6; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)a2 == 1 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    v5 = sub_14001D564(a3, &v8);
    v6 = v5;
    if ( v5 >= 0 )
    {
      *(_DWORD *)a2 = 0;
      result = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
    }
    else
    {
      sub_14000C2A8(
        (int)retaddr,
        73,
        (int)"avcore\\audiocore\\Engine\\Core\\CrossProcessEngineObjects\\CPStandardEvent.h",
        v5);
      return v6;
    }
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      71,
      (int)"avcore\\audiocore\\Engine\\Core\\CrossProcessEngineObjects\\CPStandardEvent.h",
      -2147024809);
    return 2147942487LL;
  }
  return result;
}
