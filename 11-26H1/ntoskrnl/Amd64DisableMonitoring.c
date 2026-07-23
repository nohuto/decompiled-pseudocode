/*
 * XREFs of Amd64DisableMonitoring @ 0x1405A6200
 * Callers:
 *     <none>
 * Callees:
 *     Amd64ConfigureCounter @ 0x1405A5E50 (Amd64ConfigureCounter.c)
 *     Amd64FreeCounter @ 0x1405A6504 (Amd64FreeCounter.c)
 */

struct _KPRCB *__fastcall Amd64DisableMonitoring(int a1, unsigned int *a2)
{
  __int64 v2; // rax
  unsigned int v4; // ebx
  unsigned int v5; // edi
  struct _KPRCB *result; // rax
  unsigned __int64 v7; // rcx
  signed __int64 v8; // rcx
  bool v9; // cc
  signed __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx

  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  if ( a2 )
  {
    v4 = *a2;
    if ( *a2 < 0xA )
    {
      if ( v4 < 6 )
      {
        v5 = 0;
      }
      else
      {
        v4 -= 6;
        v5 = 100;
      }
    }
    else
    {
      v4 -= 10;
      v5 = 101;
    }
    result = (struct _KPRCB *)KiProcessorBlock[v2];
    v7 = result->HalReserved[2];
    if ( v5 )
    {
      if ( v5 == 100 )
        v7 += 48LL;
      else
        v7 += 72LL;
    }
    if ( a1 != 50 )
    {
      if ( *(_DWORD *)v7 == 100 || *(_DWORD *)v7 == 101 )
      {
        v8 = _InterlockedExchangeAdd64(
               (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 48LL * v4 + 16) + 8LL),
               0xFFFFFFFFFFFFFFFFuLL);
        v9 = v8 <= 1;
        v10 = v8 - 1;
        if ( !v9 )
        {
LABEL_23:
          result = KeGetCurrentPrcb();
          _InterlockedAdd((volatile signed __int32 *)&result->HalReserved[3], 0xFFFFFFFE);
          return result;
        }
        if ( v10 )
          __fastfail(0xEu);
      }
LABEL_22:
      Amd64ConfigureCounter(v4, v5, 0, 0LL, 0LL, 0);
      Amd64FreeCounter(v4, v5);
      goto LABEL_23;
    }
  }
  else
  {
    v5 = 0;
    result = (struct _KPRCB *)KiProcessorBlock[v2];
    v4 = 0;
    v11 = result->HalReserved[2];
    v12 = *(_QWORD *)(v11 + 16);
    while ( v4 < *(_DWORD *)(v11 + 4) )
    {
      result = (struct _KPRCB *)v4;
      if ( !*(_DWORD *)(v12 + 48LL * v4 + 24) && *(_DWORD *)(v12 + 48LL * v4 + 36) == a1 )
        goto LABEL_22;
      ++v4;
    }
  }
  return result;
}
