/*
 * XREFs of RtlpGetEntireXStateAreaLength2 @ 0x1800B4BA4
 * Callers:
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x18004C680 (RtlDispatchException.c)
 *     RtlGetExtendedContextLength3 @ 0x1800B42A0 (RtlGetExtendedContextLength3.c)
 *     RtlUnwind @ 0x1800B43C0 (RtlUnwind.c)
 *     RtlInitializeExtendedContext2 @ 0x1800B4540 (RtlInitializeExtendedContext2.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1800B4750 (RtlWow64GetCpuAreaInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetEntireXStateAreaLength2(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  __int64 v4; // r9
  __int64 result; // rax
  _DWORD *v6; // rdx

  v3 = 2;
  if ( (*(_BYTE *)(a2 + 20) & 2) == 0 )
    return *(unsigned int *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 544);
  result = 576LL;
  v6 = (_DWORD *)(a2 + 564);
  do
  {
    if ( ((1LL << v3) & a1) != 0 )
    {
      if ( ((1LL << v3) & v4) != 0 )
        LODWORD(result) = (result + 63) & 0xFFFFFFC0;
      result = (unsigned int)(*v6 + result);
    }
    ++v3;
    ++v6;
  }
  while ( v3 < 0x40 );
  return result;
}
