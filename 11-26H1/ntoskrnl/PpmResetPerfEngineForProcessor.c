/*
 * XREFs of PpmResetPerfEngineForProcessor @ 0x140526454
 * Callers:
 *     PopHandleNextState @ 0x140C08EA0 (PopHandleNextState.c)
 * Callees:
 *     PpmResetPerfTimes @ 0x1404CB840 (PpmResetPerfTimes.c)
 *     PpmHeteroHgsProcessorThreadFeedbackInit @ 0x1405265D4 (PpmHeteroHgsProcessorThreadFeedbackInit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmResetPerfEngineForProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bp
  PBOOLEAN i; // rbx
  unsigned int j; // edi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned int k; // esi
  __int64 v13; // rdx
  int v14; // eax

  v4 = a2;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    for ( i = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
          i != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
          i = *(PBOOLEAN *)i )
    {
      if ( *((_DWORD *)i + 76) )
      {
        for ( j = 0; j < *((_DWORD *)i + 74); ++j )
        {
          v8 = *((_QWORD *)i + 39) + 1224LL * j;
          if ( v4 )
          {
            if ( *(_DWORD *)(v8 + 16) == 1 )
              PpmResetPerfTimes(*(_QWORD *)v8);
          }
          else if ( *((_QWORD *)i + 46) )
          {
            guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 8), a2);
          }
        }
      }
    }
  }
  v9 = a1 + 35264;
  v10 = *(_QWORD *)(a1 + 35264);
  v11 = *(_QWORD *)(a1 + 35272);
  if ( v10 && v11 )
  {
    if ( v4 )
    {
      if ( *(_QWORD *)(v10 + 424) )
        guard_dispatch_icall_no_overrides(*(_QWORD *)(v11 + 8), a3);
    }
    else if ( *(_QWORD *)(v10 + 368) )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v11 + 8), a2);
    }
    if ( v9 == *(_QWORD *)(v10 + 16) )
    {
      for ( k = 0; k < *(_DWORD *)(v10 + 296); ++k )
      {
        v13 = *(_QWORD *)(v10 + 312);
        v11 = 1224LL * k;
        v14 = *(_DWORD *)(v11 + v13 + 16);
        if ( v14 )
        {
          if ( v4 )
          {
            if ( v14 == 1 )
              PpmResetPerfTimes(*(_QWORD *)(v11 + v13));
          }
          else if ( *(_QWORD *)(v10 + 368) )
          {
            guard_dispatch_icall_no_overrides(*(_QWORD *)(v11 + v13 + 8), v13);
          }
        }
      }
    }
  }
  if ( v4 )
    return PpmResetPerfTimes(v9);
  else
    return PpmHeteroHgsProcessorThreadFeedbackInit(v11);
}
