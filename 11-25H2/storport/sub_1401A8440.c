/*
 * XREFs of sub_1401A8440 @ 0x1401A8440
 * Callers:
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14008C878 @ 0x14008C878 (sub_14008C878.c)
 *     sub_14008DA54 @ 0x14008DA54 (sub_14008DA54.c)
 *     sub_140133108 @ 0x140133108 (sub_140133108.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 *     sub_1401A8874 @ 0x1401A8874 (sub_1401A8874.c)
 *     sub_1401A8974 @ 0x1401A8974 (sub_1401A8974.c)
 */

void __fastcall sub_1401A8440(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r14
  int v5; // r12d
  int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r15
  int v10; // eax
  char v11; // al
  unsigned int v12; // eax
  unsigned int i; // edi
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  ULONGLONG UnbiasedInterruptTime; // rax
  int v17; // eax
  _QWORD **v18; // rdi
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  char v21; // [rsp+80h] [rbp+40h] BYREF
  __int64 v22; // [rsp+88h] [rbp+48h] BYREF

  if ( !a1 )
    return;
  *(_BYTE *)(a1 + 113) &= ~2u;
  v2 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v3 = 0LL;
  v4 = 0LL;
  v22 = 0LL;
  v21 = 0;
  v5 = 0;
  if ( (int)sub_14008DA54(v2, &v21) < 0 )
    return;
  if ( !v21 )
  {
    v6 = -1073741637;
    goto LABEL_30;
  }
  v7 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 113) |= 2u;
  v8 = sub_1400143E0(64LL, 288LL, 1296851282LL, v7);
  v3 = v8;
  if ( !v8 )
    goto LABEL_6;
  KeInitializeSpinLock((PKSPIN_LOCK)(v8 + 112));
  KeInitializeEvent((PRKEVENT)(v3 + 88), SynchronizationEvent, 0);
  v9 = v3 + 120;
  *(_QWORD *)(v3 + 152) = v3 + 144;
  *(_QWORD *)(v3 + 144) = v3 + 144;
  *(_QWORD *)(v3 + 128) = v3 + 120;
  *(_QWORD *)(v3 + 120) = v3 + 120;
  KeInitializeSpinLock((PKSPIN_LOCK)(v3 + 160));
  KeInitializeSpinLock((PKSPIN_LOCK)(v3 + 136));
  v10 = sub_14008C878(*(_QWORD *)(a1 + 8), &v22);
  v4 = v22;
  v6 = v10;
  if ( v10 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v22 + 40))(*(_QWORD *)(v22 + 8), v3);
    if ( v6 >= 0 )
    {
      v11 = *(_QWORD *)v3;
      if ( (v11 & 0x20) != 0 )
      {
        v12 = 5;
      }
      else if ( (v11 & 0x10) != 0 )
      {
        v12 = 4;
      }
      else if ( (v11 & 8) != 0 )
      {
        v12 = 3;
      }
      else if ( (v11 & 4) != 0 )
      {
        v12 = 2;
      }
      else if ( (v11 & 2) != 0 )
      {
        v12 = 1;
      }
      else
      {
        v12 = (*(_QWORD *)v3 & 1) == 0 ? 6 : 0;
      }
      *(_DWORD *)(v3 + 56) = v12;
      *(_DWORD *)(v3 + 60) = v12;
      if ( v12 < 6 )
      {
        for ( i = 0; i < 4; ++i )
        {
          v14 = (_QWORD *)sub_1400143E0(64LL, 24LL, 1296851282LL, *(_QWORD *)(a1 + 8));
          if ( !v14 )
            break;
          v15 = *(_QWORD **)(v3 + 128);
          if ( *v15 != v9 )
LABEL_37:
            __fastfail(3u);
          *v14 = v9;
          ++v5;
          v14[1] = v15;
          *v15 = v14;
          *(_QWORD *)(v3 + 128) = v14;
        }
        if ( !v5 )
        {
LABEL_6:
          v6 = -1073741670;
          goto LABEL_30;
        }
        v6 = sub_1401A8874((PVOID)v3);
        if ( v6 >= 0 )
        {
          *(_QWORD *)(v3 + 40) = KeQueryUnbiasedInterruptTime();
          *(_QWORD *)(v3 + 48) = KeQueryUnbiasedInterruptTime();
          UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
          *(_QWORD *)(v3 + 256) = -1LL;
          *(_QWORD *)(v3 + 168) = UnbiasedInterruptTime;
          *(_QWORD *)(a1 + 6224) = v3;
          *(_QWORD *)(a1 + 6216) = v4;
          LODWORD(UnbiasedInterruptTime) = *(_DWORD *)(v3 + 12);
          *(_QWORD *)(v3 + 16) = a1;
          *(_DWORD *)(v3 + 12) = UnbiasedInterruptTime | 1;
          v17 = PoRegisterForEffectivePowerModeNotifications(
                  2LL,
                  sub_1401319E0,
                  *(_QWORD *)(a1 + 6224),
                  v3 + 64,
                  *(_QWORD *)(a1 + 8));
          v4 = v22;
          v6 = v17;
          if ( v17 < 0 )
            v6 = 0;
        }
      }
      else
      {
        v6 = -1073741823;
      }
    }
  }
LABEL_30:
  sub_140133108(a1, v3, v6);
  if ( v6 < 0 )
  {
    if ( v3 )
    {
      sub_1401A8974(v3);
      v18 = (_QWORD **)(v3 + 120);
      while ( 1 )
      {
        v19 = *v18;
        if ( *v18 == v18 )
          break;
        if ( (_QWORD **)v19[1] != v18 )
          goto LABEL_37;
        v20 = (_QWORD *)*v19;
        if ( *(_QWORD **)(*v19 + 8LL) != v19 )
          goto LABEL_37;
        *v18 = v20;
        v20[1] = v18;
        ExFreePoolWithTag(v19, 0x4D4C6152u);
      }
      ExFreePoolWithTag((PVOID)v3, 0x4D4C6152u);
      *(_QWORD *)(a1 + 6224) = 0LL;
    }
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD))(v4 + 24))(*(_QWORD *)(v4 + 8));
      *(_QWORD *)(a1 + 6216) = 0LL;
      ExFreePoolWithTag((PVOID)v4, 0x4D4C6152u);
    }
  }
}
