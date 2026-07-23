/*
 * XREFs of RtlInitializeKscpCfgFunctions @ 0x140CE052C
 * Callers:
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140D008A8 (MiApplyDynamicFixupsToKernelAndHal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeKscpCfgFunctions(_DWORD *a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( a2 < 0x98 )
    return 3221225485LL;
  v3 = (unsigned int)a1[21];
  if ( (unsigned int)v3 > a2 )
    return 3221225485LL;
  v4 = (unsigned int)v3;
  if ( v3 + 10 > (unsigned __int64)a2 )
    return 3221225485LL;
  v5 = (unsigned int)a1[22];
  if ( (unsigned int)v5 > a2 || v5 + 10 > (unsigned __int64)a2 )
    return 3221225485LL;
  v6 = 0xCCCCCCCCCCE0FF48uLL - *(_QWORD *)((char *)a1 + v4);
  if ( *(_QWORD *)((char *)a1 + v4) == 0xCCCCCCCCCCE0FF48uLL )
    v6 = 52428LL - *(unsigned __int16 *)((char *)a1 + v4 + 8);
  if ( v6 )
    return 3221225595LL;
  v7 = 0xCCCCCCCCCCE0FF48uLL - *(_QWORD *)((char *)a1 + (unsigned int)v5);
  if ( !v7 )
    v7 = 52428LL - *(unsigned __int16 *)((char *)a1 + (unsigned int)v5 + 8);
  if ( v7 )
    return 3221225595LL;
  *((_BYTE *)a1 + v4) = -23;
  *(_DWORD *)((char *)a1 + v4 + 1) = a1[17] - a1[21] - 5;
  *((_BYTE *)a1 + (unsigned int)v5) = -23;
  *(_DWORD *)((char *)a1 + (unsigned int)v5 + 1) = a1[17] - a1[22] - 5;
  return 0LL;
}
