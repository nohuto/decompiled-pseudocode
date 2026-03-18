/*
 * XREFs of AssignQueueId @ 0x14000F070
 * Callers:
 *     ProcessIrpCommand @ 0x14002B710 (ProcessIrpCommand.c)
 * Callees:
 *     ProcessorToDedicatedIoSqMapping @ 0x140019430 (ProcessorToDedicatedIoSqMapping.c)
 */

__int64 __fastcall AssignQueueId(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, char a5, char a6, char a7)
{
  unsigned int v8; // edi
  unsigned int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ecx

  v8 = a2;
  if ( a5 == 1 )
    return *(unsigned __int16 *)(a1 + 384);
  if ( *(_BYTE *)(a1 + 20) )
  {
    v13 = *(_QWORD *)(a1 + 936);
    return *(unsigned __int16 *)(v13 + 48);
  }
  v10 = *(unsigned __int16 *)(a1 + 234);
  if ( a2 >= v10 )
    v8 = a2 % v10;
  v11 = 72LL * v8;
  v12 = *(_QWORD *)(a1 + 264);
  if ( a6 )
  {
    if ( !*(_QWORD *)(v12 + v11 + 64) )
      ProcessorToDedicatedIoSqMapping(a1, v8, a3);
    v13 = *(_QWORD *)(v11 + *(_QWORD *)(a1 + 264) + 64);
  }
  else
  {
    if ( !*(_QWORD *)(v12 + v11 + 56) )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 280) + 24LL * (unsigned __int16)a3 + 16);
      if ( v15
        || (*(_DWORD *)(a1 + 24) & 0x800000) != 0
        && (v17 = *(unsigned __int16 *)(a1 + 1000),
            v15 = *(_QWORD *)(a1 + 944) + 392 * v17,
            *(_WORD *)(a1 + 1000) = ((int)v17 + 1) % (unsigned int)*(unsigned __int16 *)(a1 + 332),
            v15) )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192)
                        + 8LL
                        * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 184), 1u)
                         % *(_DWORD *)(v15 + 180)));
        *(_QWORD *)(v11 + *(_QWORD *)(a1 + 264) + 56) = v16;
        ++*(_WORD *)(v16 + 60);
      }
    }
    v13 = *(_QWORD *)(v11 + *(_QWORD *)(a1 + 264) + 56);
  }
  if ( !*(_BYTE *)(a1 + 3752) || !a4 )
    return *(unsigned __int16 *)(v13 + 48);
  v18 = *(_DWORD *)(a1 + 3764);
  if ( (v18 & 0x80u) == 0 && (a4 > *(_DWORD *)(a1 + 3760) || a7) )
    return *(unsigned __int16 *)(208LL
                               * (unsigned __int16)(*(_WORD *)(a1 + 334)
                                                  + v8 % (unsigned __int16)(*(_WORD *)(a1 + 332) - *(_WORD *)(a1 + 334)))
                               + *(_QWORD *)(a1 + 936)
                               + 48);
  if ( (v18 & 0x40) != 0 )
    v19 = *(unsigned __int16 *)(a1 + 332);
  else
    v19 = *(unsigned __int16 *)(a1 + 334);
  return *(unsigned __int16 *)(208LL * (unsigned __int16)(v8 % v19) + *(_QWORD *)(a1 + 936) + 48);
}
