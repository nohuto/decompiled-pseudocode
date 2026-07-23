/*
 * XREFs of DbgLoadImageSymbols @ 0x1404D8DB0
 * Callers:
 *     DbgLoadImageSymbolsUnicode @ 0x1404D8C44 (DbgLoadImageSymbolsUnicode.c)
 *     KdInitSystem @ 0x140C18B60 (KdInitSystem.c)
 *     InitLoadDebuggerSymbols @ 0x140CB1450 (InitLoadDebuggerSymbols.c)
 * Callees:
 *     DebugService2 @ 0x140536E00 (DebugService2.c)
 */

__int64 __fastcall DbgLoadImageSymbols(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _DWORD *v4; // rcx
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v6[0] = a2;
  v6[1] = a3;
  if ( a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL
    && *(_WORD *)a2 == 23117
    && (v4 = (_DWORD *)(a2 + *(unsigned int *)(a2 + 60)), (unsigned __int64)v4 >= a2)
    && (a2 >= 0x7FFFFFFF0000LL || (unsigned __int64)(v4 + 66) <= 0x7FFFFFFF0000LL && v4 + 66 > v4)
    && *v4 == 17744
    && v4 )
  {
    LODWORD(v7) = v4[22];
    HIDWORD(v7) = v4[20];
  }
  else
  {
    v7 = 0LL;
  }
  return DebugService2(a1, v6, 3LL);
}
