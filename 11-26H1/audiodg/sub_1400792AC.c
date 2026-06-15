/*
 * XREFs of sub_1400792AC @ 0x1400792AC
 * Callers:
 *     sub_14007A8A0 @ 0x14007A8A0 (sub_14007A8A0.c)
 *     sub_14007F550 @ 0x14007F550 (sub_14007F550.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400792AC(__int64 a1, volatile signed __int32 *a2)
{
  signed __int32 v2; // r8d
  __int64 result; // rax
  __int64 v4; // rcx
  signed __int32 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 56);
  v5 = -2;
  result = (unsigned int)_InterlockedCompareExchange(&v5, v2, -2);
  if ( v5 == 3 )
  {
    result = (unsigned int)_InterlockedCompareExchange(a2, *(_DWORD *)(a1 + 60), *a2);
    v4 = *(_QWORD *)(a1 + 48);
    if ( v4 )
      return SetRestrictedErrorInfo(v4);
  }
  else
  {
    *a2 = 0;
  }
  return result;
}
