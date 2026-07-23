/*
 * XREFs of HalpMcaPopulateErrorDataEx @ 0x14057D618
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14044AB14 (HalpMcaPopulateErrorData.c)
 * Callees:
 *     HalpWheaReadMsrMisc @ 0x14044B1DC (HalpWheaReadMsrMisc.c)
 *     HalpWheaReadMsrAddress @ 0x14044B228 (HalpWheaReadMsrAddress.c)
 */

_UNKNOWN **__fastcall HalpMcaPopulateErrorDataEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  _UNKNOWN **result; // rax
  unsigned int v8; // r14d
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v8 = a2;
  if ( a5 < 0x40 )
  {
    ++*(_DWORD *)(a4 + 292);
    *(_DWORD *)(a4 + 4LL * a5 + 296) = a2;
    *(_QWORD *)(a4 + 8LL * a5 + 552) = a3;
    if ( (a3 & 0x400000000000000LL) != 0 )
    {
      result = (_UNKNOWN **)HalpWheaReadMsrAddress(a1, a2, a3);
      *(_QWORD *)(a4 + 8LL * a5 + 1064) = result;
    }
    if ( (a3 & 0x800000000000000LL) != 0 )
    {
      if ( HalpMcaMiscImplemented )
      {
        result = (_UNKNOWN **)HalpWheaReadMsrMisc(a1, v8, a3);
        *(_QWORD *)(a4 + 8LL * a5 + 1576) = result;
      }
    }
  }
  return result;
}
