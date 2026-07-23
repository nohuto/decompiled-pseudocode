/*
 * XREFs of EtwpProcessPerfCtrsRundown @ 0x1409BDD0C
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1409BC0E0 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ObGetProcessHandleCount @ 0x1409CED00 (ObGetProcessHandleCount.c)
 */

__int64 __fastcall EtwpProcessPerfCtrsRundown(__int64 a1, __int64 a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rdx
  _DWORD v7[4]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v8; // [rsp+40h] [rbp-29h]
  __int64 v9; // [rsp+48h] [rbp-21h]
  __int64 v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h]
  __int64 v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  __int64 v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  __int64 v18; // [rsp+90h] [rbp+27h]
  _QWORD v19[2]; // [rsp+A0h] [rbp+37h] BYREF

  v7[3] = 0;
  v7[0] = *(_DWORD *)(a1 + 464);
  v7[2] = ObGetProcessHandleCount(a1, 0LL);
  v7[1] = *(_DWORD *)(a1 + 1028);
  v13 = *(_QWORD *)(a1 + 552);
  v8 = *(_QWORD *)(a1 + 544);
  v14 = *(_QWORD *)(a1 + 1160) << 12;
  v9 = *(_QWORD *)(a1 + 1032) << 12;
  v16 = *(_QWORD *)(a1 + 520);
  v11 = *(_QWORD *)(a1 + 536);
  v17 = *(_QWORD *)(a1 + 512);
  v12 = *(_QWORD *)(a1 + 528);
  v15 = *(_QWORD *)(a1 + 984) << 12;
  v4 = *(_DWORD *)a2;
  v5 = *(_QWORD *)(a2 + 1360);
  v10 = *(_QWORD *)(a1 + 992) << 12;
  v18 = v15;
  v19[0] = v7;
  v19[1] = 104LL;
  return EtwpLogKernelEvent((__int64)v19, v5, v4, 1u, 0x321u, 0x501802u);
}
