/*
 * XREFs of sub_1400D5D7C @ 0x1400D5D7C
 * Callers:
 *     sub_1400D67D4 @ 0x1400D67D4 (sub_1400D67D4.c)
 *     sub_1400DA840 @ 0x1400DA840 (sub_1400DA840.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140055A00 @ 0x140055A00 (sub_140055A00.c)
 *     sub_14006922C @ 0x14006922C (sub_14006922C.c)
 *     sub_14008DF74 @ 0x14008DF74 (sub_14008DF74.c)
 *     sub_1400CB254 @ 0x1400CB254 (sub_1400CB254.c)
 *     sub_1400CB5C0 @ 0x1400CB5C0 (sub_1400CB5C0.c)
 *     sub_1400D12D0 @ 0x1400D12D0 (sub_1400D12D0.c)
 *     sub_1400D1300 @ 0x1400D1300 (sub_1400D1300.c)
 *     sub_1400D1354 @ 0x1400D1354 (sub_1400D1354.c)
 *     sub_1400D1430 @ 0x1400D1430 (sub_1400D1430.c)
 *     sub_1400D4018 @ 0x1400D4018 (sub_1400D4018.c)
 *     sub_1400D6CBC @ 0x1400D6CBC (sub_1400D6CBC.c)
 *     sub_14012A214 @ 0x14012A214 (sub_14012A214.c)
 *     sub_14012BAB0 @ 0x14012BAB0 (sub_14012BAB0.c)
 *     sub_1401B207C @ 0x1401B207C (sub_1401B207C.c)
 */

__int64 __fastcall sub_1400D5D7C(__int64 Context, __int64 a2)
{
  __int32 v3; // eax
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12
  int v8; // edi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  _DWORD v23[2]; // [rsp+40h] [rbp-10h] BYREF
  int v24; // [rsp+48h] [rbp-8h]
  int v25; // [rsp+4Ch] [rbp-4h]
  int Data; // [rsp+90h] [rbp+40h] BYREF
  ULONG RequiredSize; // [rsp+A0h] [rbp+50h] BYREF
  ULONG Type; // [rsp+A8h] [rbp+58h] BYREF

  Data = 0;
  RequiredSize = 0;
  Type = 0;
  v3 = _InterlockedExchange((volatile __int32 *)(Context + 84), 1);
  if ( v3 != 2 )
  {
    if ( v3 != 8 )
      return 0LL;
    *(_QWORD *)(Context + 144) |= 0x200uLL;
  }
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_QWORD *)(v5 + 16);
  v8 = sub_1401B207C(
         (int)Context + 176,
         *(_QWORD *)(Context + 400),
         *(_DWORD *)(Context + 568),
         *(_DWORD *)(Context + 572),
         BYTE1(*(_QWORD *)(Context + 144)) & 1,
         (*(_QWORD *)(Context + 144) & 0x200LL) != 0);
  if ( v8 >= 0 )
  {
    v9 = *(_QWORD *)(Context + 400);
    if ( !v9 )
    {
      *(_DWORD *)(Context + 1012) = 3;
      v8 = -1073741810;
      goto LABEL_46;
    }
    v8 = sub_1400CB5C0(Context, v6, v7);
    if ( v8 < 0 )
    {
      *(_DWORD *)(Context + 1012) = 4;
      goto LABEL_46;
    }
    if ( *(_DWORD *)(Context + 184) == 5 )
    {
      if ( !*(_QWORD *)(Context + 576) )
      {
        v10 = sub_1400143E0(64LL, 168LL, 1447977298LL, *(_QWORD *)(Context + 8));
        *(_QWORD *)(Context + 576) = v10;
        if ( !v10 )
        {
          v8 = -1073741801;
          goto LABEL_46;
        }
      }
      if ( IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(Context + 32),
             &PropertyKey,
             0,
             0,
             4u,
             &Data,
             &RequiredSize,
             &Type) >= 0 )
      {
        **(_WORD **)(Context + 576) = HIWORD(Data);
        *(_WORD *)(*(_QWORD *)(Context + 576) + 2LL) = Data;
      }
      RequiredSize = sub_14006922C(*(_QWORD *)(Context + 584) + 16LL, 4LL, *(_QWORD *)(Context + 576) + 8LL, v11, 64);
      sub_14008DF74(Context);
    }
    if ( (*(_BYTE *)(Context + 144) & 1) != 0 && !*(_QWORD *)(Context + 592) )
    {
      v8 = sub_1400D1354((__int64 *)Context);
      if ( v8 < 0 )
      {
        *(_DWORD *)(Context + 1012) = 5;
        goto LABEL_46;
      }
    }
    *(_DWORD *)(Context + 904) = 64;
    sub_140055A00(Context + 904);
    v8 = sub_1400D6CBC(Context, v9);
    if ( v8 >= 0 )
    {
      if ( (*(_DWORD *)(Context + 144) & 0x200LL) == 0 )
      {
        v8 = sub_1400CB254(Context);
        if ( v8 < 0 )
          goto LABEL_46;
        sub_1400D4018(Context);
        sub_1400D1430(Context);
        if ( byte_1401688AA && _bittest((const signed __int32 *)(*(_QWORD *)(Context + 400) + 184LL), 0x1Eu) )
        {
          if ( PoRegisterPowerSettingCallback(
                 *(PDEVICE_OBJECT *)(Context + 8),
                 &SettingGuid,
                 sub_14012F0B0,
                 (PVOID)Context,
                 (PVOID *)(*(_QWORD *)(Context + 160) + 280LL)) >= 0 )
          {
            LOBYTE(v12) = 1;
            v13 = PoRegisterCoalescingCallback(sub_1400CB150, v12, *(_QWORD *)(Context + 160) + 288LL, Context);
            v14 = *(_QWORD *)(Context + 160);
            if ( v13 < 0 )
            {
              PoUnregisterPowerSettingCallback(*(PVOID *)(v14 + 280));
              *(_QWORD *)(*(_QWORD *)(Context + 160) + 280LL) = 0LL;
            }
            else
            {
              *(_DWORD *)(v14 + 176) &= ~0x2000u;
              v15 = *(_QWORD *)(Context + 160);
              v23[0] = 1;
              v23[1] = 16;
              *(_DWORD *)(v15 + 176) &= ~0x4000u;
              v24 = sub_1400D12D0(Context);
              v16 = sub_1400D1300(v24);
              v17 = *(_QWORD *)(Context + 1136);
              v25 = v16;
              sub_14012BAB0(v17, v23);
            }
          }
          v18 = PoRegisterPowerSettingCallback(
                  *(PDEVICE_OBJECT *)(Context + 8),
                  &stru_14014A188,
                  sub_14012F0B0,
                  (PVOID)Context,
                  (PVOID *)(*(_QWORD *)(Context + 160) + 296LL));
          v19 = *(_QWORD *)(Context + 160);
          if ( v18 < 0 )
            *(_QWORD *)(v19 + 296) = 0LL;
          else
            *(_DWORD *)(v19 + 176) &= ~0x8000u;
          v8 = 0;
        }
        if ( _bittest((const signed __int32 *)(*(_QWORD *)(Context + 400) + 184LL), 0x1Eu) )
        {
          PoRegisterPowerSettingCallback(
            *(PDEVICE_OBJECT *)(Context + 8),
            &stru_14014A5E0,
            sub_14012F0B0,
            (PVOID)Context,
            (PVOID *)(*(_QWORD *)(Context + 160) + 304LL));
          if ( IoRegisterDeviceInterface(
                 *(PDEVICE_OBJECT *)(Context + 32),
                 &stru_14014A5F0,
                 0LL,
                 (PUNICODE_STRING)(*(_QWORD *)(Context + 160) + 320LL)) >= 0 )
          {
            *(_DWORD *)(*(_QWORD *)(Context + 160) + 176LL) |= 0x10000u;
            IoSetDeviceInterfaceState((PUNICODE_STRING)(*(_QWORD *)(Context + 160) + 320LL), 1u);
          }
          if ( **(_BYTE **)(Context + 160) != 1 && (*(_DWORD *)(Context + 144) & 0x1000LL) != 0 )
            sub_14012A214(Context);
          v8 = 0;
        }
      }
      if ( (*(_DWORD *)(Context + 376) & 2) != 0 )
      {
        v20 = *(_QWORD *)(Context + 1136);
        if ( !_InterlockedCompareExchange(
                (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v20 + 1272) + 40LL) + 192LL),
                1,
                0) )
          KeSetCoalescableTimer(
            (PKTIMER)(*(_QWORD *)(*(_QWORD *)(v20 + 1272) + 40LL) + 128LL),
            (LARGE_INTEGER)-50000000LL,
            0x7D0u,
            0x12Cu,
            (PKDPC)(*(_QWORD *)(*(_QWORD *)(v20 + 1272) + 40LL) + 64LL));
      }
    }
  }
  else
  {
    *(_DWORD *)(Context + 1012) = 2;
  }
LABEL_46:
  v21 = *(_QWORD *)(Context + 160);
  *(_QWORD *)(Context + 144) &= ~0x200uLL;
  if ( *(_BYTE *)v21 == 1 )
  {
    v22 = *(_QWORD *)(v21 + 8);
    if ( (*(_DWORD *)(v22 + 20) & 2) != 0 )
    {
      PoFxIdleComponent(*(_QWORD *)v22, 0LL, 0LL);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(Context + 160) + 8LL) + 20LL) &= ~2u;
    }
  }
  if ( v8 < 0 )
    _InterlockedExchange((volatile __int32 *)(Context + 84), 2);
  return (unsigned int)v8;
}
