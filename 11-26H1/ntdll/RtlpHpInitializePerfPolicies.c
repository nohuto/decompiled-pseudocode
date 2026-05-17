/*
 * XREFs of RtlpHpInitializePerfPolicies @ 0x1800D5198
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800D3DD4 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlGetNtProductType @ 0x180063CA0 (RtlGetNtProductType.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x1800D5C0C (RtlpQueryPhysicalMemoryPolicy.c)
 */

__int64 __fastcall RtlpHpInitializePerfPolicies(int a1)
{
  int WowTebOffset; // edi
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  v4 = 0;
  WowTebOffset = NtCurrentTeb()->WowTebOffset;
  result = (unsigned int)RtlpHpLfhPerfFlags;
  if ( RtlpHpLfhPerfFlags )
    goto LABEL_2;
  if ( RtlGetNtProductType(&v4) && v4 != 1 )
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
