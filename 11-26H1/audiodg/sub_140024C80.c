/*
 * XREFs of sub_140024C80 @ 0x140024C80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140024E0C @ 0x140024E0C (sub_140024E0C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140024C80(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  _DWORD v8[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v9; // [rsp+40h] [rbp-38h]
  unsigned __int16 *v10; // [rsp+48h] [rbp-30h] BYREF
  int v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+54h] [rbp-24h]
  void *v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+60h] [rbp-18h]
  int v15; // [rsp+64h] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 264));
  v3 = sub_1400B6010(*(_QWORD *)(a1 + 152));
  v4 = v3;
  if ( v3 < 0 )
  {
    sub_14000C2A8((int)retaddr, 822, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v3);
    if ( v1 )
      LeaveCriticalSection(v1);
    return v4;
  }
  else
  {
    sub_140024E0C(a1 + 80);
    v6 = sub_140006470(v5);
    if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
    {
      v8[1] = 4;
      v10 = *(unsigned __int16 **)(v6 + 8);
      v9 = 1LL;
      v8[0] = 184549376;
      v11 = *v10;
      v13 = &unk_1400D1BEE;
      v12 = 2;
      v15 = 1;
      v14 = 21;
      ((void (__fastcall *)(_QWORD, _DWORD *, __int64, _QWORD, int, unsigned __int16 **, unsigned int))EtwEventWriteTransfer)(
        *(_QWORD *)(v6 + 32),
        v8,
        a1 + 344,
        0LL,
        2,
        &v10,
        (unsigned int)&unk_1400D4619 - (unsigned int)&unk_1400D1550);
    }
    if ( v1 )
      LeaveCriticalSection(v1);
    return 0LL;
  }
}
