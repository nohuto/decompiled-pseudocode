/*
 * XREFs of KiIntSteerCallbackRecordTriageCallbackInterruptObject @ 0x1405FA1F4
 * Callers:
 *     KiIntSteerCallbackRecordTriageCallback @ 0x1405FA0F0 (KiIntSteerCallbackRecordTriageCallback.c)
 * Callees:
 *     KiIntSteerComputeRelevanceForTriageDumps @ 0x1405FA2B8 (KiIntSteerComputeRelevanceForTriageDumps.c)
 */

__int64 __fastcall KiIntSteerCallbackRecordTriageCallbackInterruptObject(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r11
  unsigned int *v8; // rsi
  unsigned int i; // r10d
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r9

  result = KiIntSteerComputeRelevanceForTriageDumps(a2);
  LODWORD(v5) = 0;
  v6 = (unsigned int)result;
  if ( (_DWORD)result )
  {
    result = *(unsigned int *)(a1 + 8);
    if ( (unsigned int)result >= 8 )
    {
      v7 = *(unsigned int *)(a1 + 44);
      v8 = (unsigned int *)(a1 + 48);
      for ( i = 1; i < 8; ++i )
      {
        v10 = *v8;
        result = i;
        ++v8;
        v11 = (unsigned int)v10;
        if ( v10 >= v7 )
        {
          v11 = v7;
          result = (unsigned int)v5;
        }
        v5 = (unsigned int)result;
        v7 = v11;
      }
      if ( v6 > v11 )
      {
        result = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 4 * v5 + 44) = v6;
        *(_QWORD *)(result + 8 * v5) = a2;
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8 * result) = a2;
      *(_DWORD *)(a1 + 4 * result + 44) = v6;
      ++*(_DWORD *)(a1 + 8);
    }
  }
  return result;
}
