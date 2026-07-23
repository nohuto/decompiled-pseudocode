/*
 * XREFs of RtlpHpInitializePerfPolicies @ 0x1800D10F0
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800CFAEC (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18006CF94 (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlGetNtProductType @ 0x1800840F0 (RtlGetNtProductType.c)
 */

__int64 __fastcall RtlpHpInitializePerfPolicies(int a1)
{
  int WowTebOffset; // edi
  __int64 result; // rax
  _NT_PRODUCT_TYPE NtProductType; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  NtProductType = 0;
  WowTebOffset = NtCurrentTeb()->WowTebOffset;
  result = (unsigned int)RtlpHpLfhPerfFlags;
  if ( RtlpHpLfhPerfFlags )
    goto LABEL_2;
  if ( RtlGetNtProductType(&NtProductType) && NtProductType != NtProductWinNt )
  {
    result = 10255LL;
LABEL_8:
    RtlpHpLfhPerfFlags = result;
    goto LABEL_2;
  }
  if ( (int)RtlpQueryPhysicalMemoryPolicy(&v5) < 0 || v5 <= 10 )
  {
    result = 8256LL;
    goto LABEL_8;
  }
  result = 9231LL;
  RtlpHpLfhPerfFlags = 9231;
  if ( !a1 )
  {
    result = 9219LL;
    goto LABEL_8;
  }
LABEL_2:
  if ( WowTebOffset > 0 )
  {
    result = (unsigned int)result & 0xFFFFFFFB;
    RtlpHpLfhPerfFlags = result;
  }
  return result;
}
