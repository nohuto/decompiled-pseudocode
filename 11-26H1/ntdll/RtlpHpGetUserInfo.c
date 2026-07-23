/*
 * XREFs of RtlpHpGetUserInfo @ 0x1800D97B0
 * Callers:
 *     RtlGetUserInfoHeap @ 0x1800D9310 (RtlGetUserInfoHeap.c)
 * Callees:
 *     RtlpHpExtrasGet @ 0x1800043C0 (RtlpHpExtrasGet.c)
 */

__int64 __fastcall RtlpHpGetUserInfo(__int64 a1, unsigned __int64 a2, __int16 a3, _QWORD *a4, _DWORD *a5)
{
  unsigned __int64 v6; // rax

  v6 = RtlpHpExtrasGet((_RTL_SRWLOCK *)a1, a2, *(_WORD *)(a1 + 20) | a3, 0LL);
  if ( v6 == -1LL )
    return 0LL;
  if ( a4 && v6 )
    *a4 = *(_QWORD *)(v6 + 8);
  if ( a5 )
  {
    if ( v6 )
      *a5 = *(unsigned __int8 *)(v6 + 2) >> 4 << 8;
    else
      *a5 = 0;
  }
  return 1LL;
}
