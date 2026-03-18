/*
 * XREFs of DpiLdaGetInterruptIrqlForChain @ 0x1404266E4
 * Callers:
 *     DpiFdoConnectInterrupt @ 0x1404264AC (DpiFdoConnectInterrupt.c)
 * Callees:
 *     DpiFdoGetInterruptIrql @ 0x140195344 (DpiFdoGetInterruptIrql.c)
 */

__int64 __fastcall DpiLdaGetInterruptIrqlForChain(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rdi
  unsigned __int8 v3; // r14
  int InterruptIrql; // ebx
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // r15d
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int8 v13; // dl
  __int64 result; // rax
  unsigned __int8 v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v15 = 0;
  InterruptIrql = -1073741823;
  if ( *(_BYTE *)(v2 + 508) == 1 )
  {
    v6 = v2;
  }
  else
  {
    v7 = *(_QWORD *)(v2 + 2832);
    if ( !v7 )
    {
      InterruptIrql = -1071774666;
      WdLogSingleEntry3(0LL, 275LL, 21LL, -1071774666LL);
      WdLogGlobalForLineNumber = 111;
      goto LABEL_17;
    }
    v6 = *(_QWORD *)(v7 + 64);
  }
  v8 = *(_DWORD *)(v6 + 2840);
  v9 = 0LL;
  while ( (unsigned int)v9 < v8 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 2832) + 8 * v9) + 64LL);
    v11 = *(_DWORD *)(v10 + 236);
    if ( v11 != 1 && v11 != 2 || (v12 = *(_QWORD *)(v10 + 1312)) == 0 && !*(_BYTE *)(v2 + 2716) )
    {
      InterruptIrql = -1071774666;
      WdLogSingleEntry3(0LL, 275LL, 21LL, -1071774666LL);
      WdLogGlobalForLineNumber = 142;
      break;
    }
    InterruptIrql = DpiFdoGetInterruptIrql(v12, &v15);
    if ( InterruptIrql < 0 )
      break;
    v13 = v3;
    if ( v3 < v15 )
      v13 = v15;
    v9 = (unsigned int)(v9 + 1);
    v3 = v13;
  }
LABEL_17:
  result = (unsigned int)InterruptIrql;
  *a2 = v3;
  return result;
}
