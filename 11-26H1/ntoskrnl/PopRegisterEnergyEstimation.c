/*
 * XREFs of PopRegisterEnergyEstimation @ 0x140603C50
 * Callers:
 *     <none>
 * Callees:
 *     PopDetermineBucketFrequencies @ 0x14060389C (PopDetermineBucketFrequencies.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall PopRegisterEnergyEstimation(_KSWAPPABLE_PAGE *a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  unsigned int *Pool2; // rax
  _DWORD *v5; // rax
  __int64 v6; // r8
  int v7; // r9d
  _DWORD *v8; // rdx
  unsigned int i; // ecx

  stru_140F12EA0.SchedulerSharedSwappablePage = a1;
  *(_QWORD *)&stru_140F12EA0.ResourceIndex = a2;
  v3 = 2 - (a3 != 0);
  if ( !stru_140F12EA0.IptSaveArea )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL);
    stru_140F12EA0.IptSaveArea = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v3;
      v5 = Pool2 + 12;
      v6 = v3;
      do
      {
        v7 = 0;
        v8 = v5;
        for ( i = 25; i < 0x7D; i += 25 )
        {
          *(v8 - 4) = i;
          *v8++ = ++v7;
        }
        v5 += 14;
        --v6;
      }
      while ( v6 );
      PopDetermineBucketFrequencies();
    }
  }
}
