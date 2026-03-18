/*
 * XREFs of HUBHSM_QueueingPortStatusChangeEvents @ 0x140009AE0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBHSM_QueueingPortStatusChangeEvents(__int64 a1)
{
  __int64 v1; // rbx
  signed int v2; // edi
  __int64 v3; // rax
  signed int v4; // ebp
  __int64 v5; // rsi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = RtlNumberOfSetBits((PRTL_BITMAP)(v1 + 1152));
  if ( !v2 )
  {
    *(_BYTE *)(v1 + 1128) = 1;
LABEL_10:
    HUBSM_AddEvent(v1 + 1280, 2046LL);
    return 2053LL;
  }
  *(_DWORD *)(v1 + 2344) = v2;
  v3 = *(_QWORD *)(v1 + 2376);
  v4 = 0;
  while ( 1 )
  {
    v5 = v3 - 248;
    if ( v1 + 2376 == v3 )
      break;
    if ( _bittest64(*(const signed __int64 **)(v1 + 1160), *(unsigned __int16 *)(v5 + 200)) )
    {
      _InterlockedOr((volatile signed __int32 *)(v5 + 264), 1u);
      ++v4;
      (*(void (__fastcall **)(__int64, __int64))(v5 + 1240))(v5, 3030LL);
    }
    v3 = *(_QWORD *)(v5 + 248);
  }
  if ( v2 > v4 && _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 2344), v4 - v2) == v2 - v4 )
    goto LABEL_10;
  return 2053LL;
}
