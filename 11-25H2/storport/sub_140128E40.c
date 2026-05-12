/*
 * XREFs of sub_140128E40 @ 0x140128E40
 * Callers:
 *     <none>
 * Callees:
 *     sub_14006B3A4 @ 0x14006B3A4 (sub_14006B3A4.c)
 *     sub_1400771C8 @ 0x1400771C8 (sub_1400771C8.c)
 *     sub_1400F045C @ 0x1400F045C (sub_1400F045C.c)
 *     sub_140128F6C @ 0x140128F6C (sub_140128F6C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140128E40(__int64 a1, void *a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rdx
  _DWORD *v5; // rbx
  int v6; // esi
  __int64 v7; // rdx
  GUID v9; // [rsp+40h] [rbp-28h] BYREF

  v3 = sub_14006B3A4(a1);
  v5 = v3;
  if ( *(_BYTE *)(v4 + 65) )
    *(_BYTE *)(*(_QWORD *)(v4 + 184) + 3LL) |= 1u;
  v6 = *(_DWORD *)(v4 + 48);
  if ( v6 >= 0 && (*(_DWORD *)(*((_QWORD *)v3 + 50) + 184LL) & 0x40000000) != 0 )
    LOBYTE(v6) = sub_1400F045C(*((_QWORD **)v3 + 142));
  if ( (v5[104] & 0x40) != 0 )
  {
    IoQueueWorkItem(*((PIO_WORKITEM *)v5 + 164), sub_140129500, NormalWorkQueue, a2);
    if ( byte_140168DAA )
    {
      v9 = 0LL;
      IoGetActivityIdIrp(a2, &v9);
      if ( (byte_1401694F6 & 0x40) != 0 )
        sub_1400771C8(
          (__int64)L"PowerUp",
          v7,
          &v9,
          *((const wchar_t **)v5 + 127),
          v5[14],
          (__int64)(v5 + 258),
          v6,
          L"PowerUp");
    }
  }
  else
  {
    sub_140128F6C(v5, a2);
  }
  return 3221225494LL;
}
