/*
 * XREFs of PpmHeteroHgsClearContainmentGlobalState @ 0x14060ABA8
 * Callers:
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14025D3AC (PpmHeteroHgsUpdateContainmentConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 PpmHeteroHgsClearContainmentGlobalState()
{
  unsigned int SystemCallNumber; // r9d
  unsigned __int16 i; // r8
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax

  SystemCallNumber = PopModernStandbyStateNotify.SystemCallNumber;
  for ( i = 0; i < SystemCallNumber; result = i )
  {
    v2 = *(__int64 *)((char *)&PopModernStandbyStateNotify.116 + 4);
    v3 = i++;
    *(_BYTE *)(*(_QWORD *)(1264 * v3 + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1240) + 808LL) = 0;
    *(_DWORD *)(*(_QWORD *)(1264 * v3 + v2 + 1240) + 812LL) = 2;
    *(_BYTE *)(*(_QWORD *)(1264 * v3 + v2 + 1240) + 827LL) = 0;
  }
  return result;
}
