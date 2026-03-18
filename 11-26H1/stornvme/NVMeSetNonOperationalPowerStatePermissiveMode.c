/*
 * XREFs of NVMeSetNonOperationalPowerStatePermissiveMode @ 0x14002ABD0
 * Callers:
 *     NVMeControllerPowerUp @ 0x1400075D0 (NVMeControllerPowerUp.c)
 *     NVMePowerSettingChangeNotification @ 0x14000FC80 (NVMePowerSettingChangeNotification.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     NVMeControllerGetLocalCommand @ 0x14001D328 (NVMeControllerGetLocalCommand.c)
 */

__int64 __fastcall NVMeSetNonOperationalPowerStatePermissiveMode(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // eax

  result = *(_QWORD *)(a1 + 1560);
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 7u);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    v5 = *(_DWORD *)(a1 + 24);
    if ( (v5 & 8) == 0 )
    {
      if ( result )
      {
        result = *(unsigned int *)(result + 96);
        if ( (result & 2) != 0 )
        {
          if ( (v5 & 4) != 0
            || (*(_DWORD *)(a1 + 3748) & 0x40) != 0
            || (*(_DWORD *)(a1 + 3748) & 0x20) != 0
            || (*(_DWORD *)(a1 + 3748) & 0x100) != 0 )
          {
            result = (*(_DWORD *)(a1 + 4064) | 2) ^ ((*(_BYTE *)(a1 + 4064) | 2) ^ (unsigned __int8)(4 * a2)) & 4u;
            *(_DWORD *)(a1 + 4064) = result;
          }
          else
          {
            result = *(unsigned int *)(a1 + 24);
            if ( (result & 1) != 0 )
            {
              result = (__int64)NVMeControllerGetLocalCommand(a1);
              v6 = result;
              if ( result )
              {
                *(_BYTE *)(*(_QWORD *)(result + 96) + 4225LL) |= 1u;
                *(_BYTE *)(*(_QWORD *)(result + 96) + 4225LL) &= ~2u;
                *(_WORD *)(*(_QWORD *)(result + 96) + 4212LL) = 0;
                v7 = *(_QWORD *)(result + 96);
                v8 = *(_DWORD *)(v7 + 4140);
                *(_BYTE *)(v7 + 4096) = 9;
                *(_BYTE *)(v7 + 4136) = 17;
                *(_DWORD *)(v7 + 4140) = v8 ^ ((unsigned __int8)v8 ^ a2) & 1;
                *(_QWORD *)(*(_QWORD *)(v6 + 96) + 4192LL) = NVMeSetNonOperationalPowerStatePermissiveModeCompletion;
                result = ProcessCommand(a1, v6 + 8);
              }
            }
          }
        }
      }
    }
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 7u);
  return result;
}
