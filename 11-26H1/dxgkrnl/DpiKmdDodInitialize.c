/*
 * XREFs of DpiKmdDodInitialize @ 0x140085D10
 * Callers:
 *     <none>
 * Callees:
 *     DpiInitializeEx @ 0x14023E988 (DpiInitializeEx.c)
 */

__int64 __fastcall DpiKmdDodInitialize(void *a1, const UNICODE_STRING *a2, __int64 a3)
{
  if ( *(_DWORD *)a3 >= 0x3001u )
  {
    if ( *(_QWORD *)(a3 + 8)
      && *(_QWORD *)(a3 + 16)
      && *(_QWORD *)(a3 + 24)
      && *(_QWORD *)(a3 + 32)
      && *(_QWORD *)(a3 + 40)
      && *(_QWORD *)(a3 + 64)
      && *(_QWORD *)(a3 + 72)
      && *(_QWORD *)(a3 + 80)
      && *(_QWORD *)(a3 + 88)
      && *(_QWORD *)(a3 + 104)
      && *(_QWORD *)(a3 + 112) )
    {
      return DpiInitializeEx(a1, a2, 0LL, 1);
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3903;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3874;
  }
  return 3221225561LL;
}
