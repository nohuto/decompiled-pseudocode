/*
 * XREFs of TppWorkWait @ 0x1800166F0
 * Callers:
 *     TpWaitForWait @ 0x1800153F0 (TpWaitForWait.c)
 *     TpWaitForWork @ 0x1800851A0 (TpWaitForWork.c)
 * Callees:
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x18010D8B0 (TppETWCallbackCancel.c)
 */

struct _PEB *__fastcall TppWorkWait(_QWORD *a1, int a2)
{
  unsigned __int32 v3; // eax
  unsigned __int32 v4; // edi
  struct _PEB *result; // rax
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  unsigned __int32 v8; // ett

  _m_prefetchw(a1 + 29);
  v3 = *((_DWORD *)a1 + 58);
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = v3 >> 1;
      if ( !(v3 >> 1) )
        break;
      v8 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 58, v3 & 1, v3);
      if ( v8 == v3 )
        goto LABEL_4;
    }
  }
  v4 = 0;
LABEL_4:
  TppBarrierAdjust(a1 + 7, -v4, 1LL);
  result = NtCurrentPeb();
  SharedData = result->SharedData;
  if ( SharedData && *SharedData )
  {
    result = NtCurrentPeb();
    v7 = (__int64)result->SharedData + 556;
  }
  else
  {
    v7 = 2147353478LL;
  }
  if ( *(_BYTE *)v7 )
  {
    if ( v4 )
      return (struct _PEB *)TppETWCallbackCancel(a1[18], (int)a1 + 200, a1[10], a1[11], a1[13], v4);
  }
  return result;
}
