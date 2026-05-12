/*
 * XREFs of StorEtwProtocolCommandCompletion @ 0x140052ABC
 * Callers:
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140068000 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1400A94CC (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     McTemplateK0pdtquuuddddt_EtwWriteTransfer @ 0x1400AFCB8 (McTemplateK0pdtquuuddddt_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall StorEtwProtocolCommandCompletion(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v3; // r13
  char v7; // si
  char v8; // bp
  char v9; // r14
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 v13; // [rsp+80h] [rbp-48h] BYREF

  v3 = *(_DWORD **)(a2 + 24);
  v13 = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  IoGetActivityIdIrp(a2, &v13);
  result = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)result == 1431193940 )
  {
    v11 = *(_QWORD *)(result + 24);
    v12 = *(_QWORD *)(a1 + 64);
    v7 = *(_BYTE *)(result + 104);
    v8 = *(_BYTE *)(result + 105);
    v9 = *(_BYTE *)(result + 106);
  }
  else
  {
    v12 = 0LL;
    v11 = *(_QWORD *)(a1 + 64);
  }
  if ( (byte_140173443 & 1) != 0 )
    return McTemplateK0pdtquuuddddt_EtwWriteTransfer(
             v12,
             v11,
             (unsigned int)&v13,
             a2,
             *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL),
             v12 == 0,
             *(_DWORD *)(v11 + 56),
             v7,
             v8,
             v9,
             v3[2],
             v3[20],
             v3[4],
             v3[5],
             a3);
  return result;
}
