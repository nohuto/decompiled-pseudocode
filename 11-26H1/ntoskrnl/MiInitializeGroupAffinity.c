/*
 * XREFs of MiInitializeGroupAffinity @ 0x1404E83C0
 * Callers:
 *     MiUpdateEngineAffinities @ 0x1404F725C (MiUpdateEngineAffinities.c)
 *     MiInitializeAffinityWalker @ 0x1407163EC (MiInitializeAffinityWalker.c)
 * Callees:
 *     <none>
 */

void __fastcall MiInitializeGroupAffinity(_OWORD *a1, __int64 a2, unsigned int a3, int a4)
{
  _OWORD *v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r11
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // r9
  unsigned int i; // r9d
  __int128 v14; // [rsp+10h] [rbp-18h]

  v5 = a1;
  if ( a4 )
  {
    if ( a3 )
    {
      v6 = a2 - (_QWORD)a1;
      v7 = a3;
      do
      {
        v8 = 0LL;
        v9 = *(_QWORD *)((char *)v5 + v6);
        *(_QWORD *)&v14 = 0LL;
        if ( v9 )
        {
          do
          {
            _BitScanForward64(&v10, v9);
            v11 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)*(_QWORD *)((char *)v5 + v6 + 8)].Flink
                                   + (int)v10)];
            v12 = (_QWORD *)(v11 + 200);
            if ( (*(_BYTE *)(v11 + 35352) != 1) + 1 == a4 )
              v8 |= *v12;
            v9 &= ~*v12;
          }
          while ( v9 );
          *(_QWORD *)&v14 = v8;
        }
        *((_QWORD *)&v14 + 1) = *(_QWORD *)((char *)v5 + v6 + 8);
        *v5++ = v14;
        --v7;
      }
      while ( v7 );
    }
  }
  else
  {
    for ( i = 0; i < a3; ++i )
    {
      if ( (unsigned int)a2 < 0x40 )
      {
        if ( (_DWORD)a2 )
        {
          *(_QWORD *)&a1[i] = (1LL << a2) - 1;
          return;
        }
      }
      else
      {
        LODWORD(a2) = a2 - 64;
        *(_QWORD *)&a1[i] = -1LL;
      }
    }
  }
}
