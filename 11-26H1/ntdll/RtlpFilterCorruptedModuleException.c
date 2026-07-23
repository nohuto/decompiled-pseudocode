/*
 * XREFs of RtlpFilterCorruptedModuleException @ 0x18013AE8C
 * Callers:
 *     RtlGetImageFileMachines @ 0x18002F2C0 (RtlGetImageFileMachines.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFilterCorruptedModuleException(int **a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  int *v4; // rax
  int v6; // ecx
  unsigned __int64 v7; // rdx

  v4 = *a1;
  v6 = **a1;
  if ( v6 != -1073741818 && v6 != -1073741819 )
    return 0LL;
  if ( (unsigned int)v4[6] < 2 )
    return 0LL;
  if ( *((_QWORD *)v4 + 4) )
    return 0LL;
  v7 = *((_QWORD *)v4 + 5);
  if ( v7 < a2 || v7 >= a2 + a3 )
    return 0LL;
  *a4 = v6;
  return 1LL;
}
