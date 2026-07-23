/*
 * XREFs of PspComputeReportWakeFilter @ 0x140B13BAC
 * Callers:
 *     PspFreezeJobTree @ 0x1407FE324 (PspFreezeJobTree.c)
 *     PspCheckEnableNotificationChannel @ 0x140B68198 (PspCheckEnableNotificationChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspComputeReportWakeFilter(_DWORD *a1, _QWORD *a2, _QWORD *a3, char a4)
{
  _DWORD *v5; // r8
  int v6; // ecx
  __int64 result; // rax

  *a2 = *a3;
  v5 = (_DWORD *)a2 + 1;
  if ( a4 )
  {
    *(_DWORD *)a2 &= ~a1[296];
    *v5 &= ~a1[297];
  }
  v6 = a1[298];
  *v5 &= v6;
  result = v6 & (unsigned int)~*v5;
  a1[298] = result;
  return result;
}
