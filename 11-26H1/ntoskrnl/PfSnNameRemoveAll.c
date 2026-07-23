/*
 * XREFs of PfSnNameRemoveAll @ 0x1409D2C20
 * Callers:
 *     PfFileInfoNotify @ 0x140303740 (PfFileInfoNotify.c)
 * Callees:
 *     PfSnNameRemove @ 0x14024C780 (PfSnNameRemove.c)
 *     PfSnTraceGetLogEntry @ 0x140265840 (PfSnTraceGetLogEntry.c)
 *     PfSnActiveTraceGetNext @ 0x1402D3E00 (PfSnActiveTraceGetNext.c)
 *     PfSnGetNLLogEntry @ 0x1409D2CCC (PfSnGetNLLogEntry.c)
 *     PfSnFailProcessTrace @ 0x1409D3078 (PfSnFailProcessTrace.c)
 */

unsigned __int64 *__fastcall PfSnNameRemoveAll(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 NLLogEntry; // rax
  unsigned __int64 *result; // rax
  __int64 v8; // rbx
  _OWORD *v9; // [rsp+48h] [rbp+10h] BYREF

  for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v8 )
  {
    result = PfSnActiveTraceGetNext(i, a2);
    v8 = (__int64)result;
    if ( !result )
      break;
    if ( (unsigned int)PfSnNameRemove((__int64)result, *(_RTL_BALANCED_NODE **)(a1 + 16)) )
    {
      v9 = 0LL;
      if ( (int)PfSnTraceGetLogEntry(v8, 4u, &v9) < 0 )
      {
        PfSnFailProcessTrace(v8);
      }
      else
      {
        v4 = *(_QWORD *)(a1 + 16);
        v5 = v9;
        *v9 = 0LL;
        *v5 = 53LL;
        v5[1] = v4;
        NLLogEntry = PfSnGetNLLogEntry(v5, 3LL, 40LL, *(unsigned int *)(a1 + 40), *(_DWORD *)(a1 + 44));
        *(_DWORD *)(NLLogEntry + 16) &= 0xFFFFFFFC;
        *(_QWORD *)(NLLogEntry + 24) = *(_QWORD *)(a1 + 16);
      }
    }
  }
  return result;
}
