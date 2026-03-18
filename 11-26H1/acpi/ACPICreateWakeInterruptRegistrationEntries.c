/*
 * XREFs of ACPICreateWakeInterruptRegistrationEntries @ 0x1400C5F14
 * Callers:
 *     ACPIWakeEmulationPrepare @ 0x1400C5DE4 (ACPIWakeEmulationPrepare.c)
 * Callees:
 *     Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline @ 0x140063B14 (Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ACPICreateWakeInterruptRegistrationEntries(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // r15d
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned int *v7; // r12
  __int64 v11; // rsi
  __int64 v12; // rax

  v4 = *a4;
  v5 = 0LL;
  v6 = 0LL;
  v7 = a4;
  if ( *(_DWORD *)(a1 + 4) )
  {
    do
    {
      if ( *(_BYTE *)(a1 + 20 * v6 + 8) == 2 && (*(_BYTE *)(a1 + 20 * v6 + 10) & 0x20) != 0 )
      {
        if ( (unsigned int)v5 < v4 )
        {
          v11 = a3 + 40 * v5;
          if ( (unsigned int)Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline() )
          {
            v12 = 0LL;
          }
          else
          {
            *(_QWORD *)(v11 + 8) = v11;
            v12 = a3 + 40 * v5;
          }
          *(_QWORD *)v11 = v12;
          *(_QWORD *)(v11 + 32) = *(_QWORD *)(a1 + 20 * v6 + 20);
          *(_DWORD *)(v11 + 24) = *(_DWORD *)(a1 + 20 * v6 + 16);
          *(_QWORD *)(v11 + 16) = a2;
          *(_DWORD *)(v11 + 28) = *(_BYTE *)(a1 + 20 * v6 + 10) & 1;
        }
        v5 = (unsigned int)(v5 + 1);
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *(_DWORD *)(a1 + 4) );
    v7 = a4;
  }
  *v7 = v5;
  return v4 < (unsigned int)v5 ? 0xC0000023 : 0;
}
