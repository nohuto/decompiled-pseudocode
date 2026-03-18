/*
 * XREFs of KiTraceSetTimer2 @ 0x1403A9A14
 * Callers:
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     KiTraceCancelTimer2 @ 0x1403A9BE0 (KiTraceCancelTimer2.c)
 *     KiUpdateTimer2Flags @ 0x1403AA610 (KiUpdateTimer2Flags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall KiTraceSetTimer2(__int64 a1, char a2, unsigned int a3)
{
  __int64 v4; // rsi
  __int64 v6; // r14
  char v7; // r12
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  char v11; // cl
  char v12; // r8
  char v13; // cl
  char v14; // dl
  char v15; // cl
  _QWORD v17[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h]
  __int64 v20; // [rsp+58h] [rbp-28h]
  unsigned __int64 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 96);
  v6 = *(_QWORD *)(a1 + 104);
  v7 = *(_BYTE *)(a1 + 129);
  v18[0] = *(_QWORD *)(a1 + 72);
  v18[1] = *(_QWORD *)(a1 + 80);
  v19 = *(_QWORD *)(a1 + 88);
  v23 = 0LL;
  KiUpdateTimer2Flags(a1, a3, 0LL);
  if ( a3 == 1 )
    KxReleaseSpinLock(&KiTimer2CollectionLock);
  v9 = (unsigned __int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ _byteswap_uint64(a1 ^ __ROL8__(
                                                                                                   KiWaitNever ^ v4,
                                                                                                   KiWaitNever));
  v10 = (unsigned __int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ _byteswap_uint64(a1 ^ __ROL8__(
                                                                                                    KiWaitNever ^ v6,
                                                                                                    KiWaitNever));
  if ( a2 )
    KiTraceCancelTimer2(a1, v9);
  v21 = v9;
  v20 = 0x7E35C6C7F3DD7277LL
      * (KiWaitNever ^ __ROR8__(
                         v9 ^ _byteswap_uint64((__int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ a1),
                         KiWaitNever));
  v22 = 0x7E35C6C7F3DD7277LL
      * (KiWaitNever ^ __ROR8__(
                         a1 ^ _byteswap_uint64((unsigned __int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ v10),
                         KiWaitNever));
  v11 = (2 * (v7 & 0x20)) | 4;
  if ( (v7 & 2) == 0 )
    v11 = 2 * (v7 & 0x20);
  v12 = v11;
  v13 = v11 | 8;
  if ( (v7 & 4) == 0 )
    v13 = v12;
  v14 = v13;
  v15 = v13 | 0x10;
  if ( (v7 & 8) == 0 )
    v15 = v14;
  LOBYTE(v23) = v15;
  if ( v9 )
  {
    v15 |= 1u;
    LOBYTE(v23) = v15;
  }
  if ( v19 )
    LOBYTE(v23) = v15 | 2;
  v17[1] = 56LL;
  v17[0] = v18;
  return EtwTraceKernelEvent((int)v17, 1, 0x40020000u, 3944, 6298370);
}
