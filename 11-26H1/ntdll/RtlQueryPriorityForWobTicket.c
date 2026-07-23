/*
 * XREFs of RtlQueryPriorityForWobTicket @ 0x180143E10
 * Callers:
 *     <none>
 * Callees:
 *     ZwManageWobTicket @ 0x1801611B0 (ZwManageWobTicket.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlQueryPriorityForWobTicket(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]

  v2 = *a1;
  v6 = 0LL;
  v5 = v2;
  result = ZwManageWobTicket(1LL, &v5, 16LL);
  if ( (int)result >= 0 )
    *a2 = v6;
  return result;
}
