/*
 * XREFs of RtlQueryQosForWobTicket @ 0x180143E80
 * Callers:
 *     <none>
 * Callees:
 *     ZwManageWobTicket @ 0x1801611B0 (ZwManageWobTicket.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlQueryQosForWobTicket(__int64 *a1, int a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+24h] [rbp-24h]
  __int64 v8; // [rsp+28h] [rbp-20h]

  v3 = *a1;
  v6 = a2;
  v7 = 0;
  v8 = v3;
  result = ZwManageWobTicket(0LL, &v6, 16LL);
  if ( (int)result >= 0 )
    *a3 = v7;
  return result;
}
