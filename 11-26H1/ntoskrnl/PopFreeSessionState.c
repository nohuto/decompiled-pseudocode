/*
 * XREFs of PopFreeSessionState @ 0x1409F74CC
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     PopFreeRegistration @ 0x1407D2738 (PopFreeRegistration.c)
 */

void __fastcall PopFreeSessionState(int a1)
{
  unsigned int i; // edi
  WNF_STATE_NAME **v3; // rsi
  WNF_STATE_NAME *v4; // rbx
  WNF_STATE_NAME *v5; // rcx
  WNF_STATE_NAME v6; // rdx
  _DWORD *v7; // r8
  WNF_STATE_NAME **v8; // rax

  ExAcquireFastMutex(&PopSettingLock);
  for ( i = 0; i < 2; ++i )
  {
    v3 = (WNF_STATE_NAME **)((char *)&PopSessionSpecificLists + 16 * i);
    v4 = *v3;
    while ( v4 != (WNF_STATE_NAME *)v3 )
    {
      v5 = v4;
      v6 = *v4;
      if ( v4[6].Data[0] == a1 )
      {
        v7 = (_DWORD *)&v4[6] + 1;
        v4 = (WNF_STATE_NAME *)*v4;
        if ( (*v7 & 2) != 0 )
        {
          *v7 |= 4u;
        }
        else
        {
          if ( *(WNF_STATE_NAME **)(*(_QWORD *)&v6 + 8LL) != v5 || (v8 = (WNF_STATE_NAME **)v5[1], *v8 != v5) )
            __fastfail(3u);
          *v8 = (WNF_STATE_NAME *)v6;
          *(_QWORD *)(*(_QWORD *)&v6 + 8LL) = v8;
          PopFreeRegistration(v5);
        }
      }
      else
      {
        v4 = (WNF_STATE_NAME *)*v4;
      }
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
}
