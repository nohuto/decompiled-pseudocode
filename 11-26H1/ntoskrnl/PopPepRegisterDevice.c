/*
 * XREFs of PopPepRegisterDevice @ 0x140B3DA28
 * Callers:
 *     PopFxRegisterDeviceWithPep @ 0x14043C668 (PopFxRegisterDeviceWithPep.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PopPepComponentGetResidencyIdleState @ 0x14047D624 (PopPepComponentGetResidencyIdleState.c)
 *     PopPepComponentGetLatencyIdleState @ 0x140484A0C (PopPepComponentGetLatencyIdleState.c)
 *     PopPepInsertDevice @ 0x1404F74FC (PopPepInsertDevice.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall PopPepRegisterDevice(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  char v5; // di
  unsigned int v9; // ebp
  unsigned int v10; // r10d
  unsigned int i; // r9d
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 Pool2; // rax
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // r8
  __int64 *v19; // rdx
  _QWORD *v20; // rcx
  __int64 *v21; // rax
  unsigned int v22; // r15d
  __int64 v23; // rsi
  __int64 *v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // r13
  __int64 v27; // rdx
  _QWORD *v28; // r11
  int v29; // ecx
  unsigned int v30; // ecx
  _DWORD *v31; // rax
  unsigned int j; // r9d
  unsigned __int64 v33; // rdx
  int LatencyIdleState; // eax
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v39; // [rsp+30h] [rbp-48h]
  __int64 v40; // [rsp+38h] [rbp-40h]
  _QWORD *v41; // [rsp+90h] [rbp+18h]

  v5 = 0;
  *a5 = 0LL;
  v9 = *(_DWORD *)(a3 + 8);
  if ( v9 )
  {
    v10 = 0;
    for ( i = 0; i < v9; ++i )
    {
      v12 = *(_DWORD *)(*(_QWORD *)(a3 + 8LL * i + 16) + 28LL);
      if ( v12 <= 0 || v12 + v10 < v10 )
        return v5;
      v10 += v12;
    }
    v13 = 0LL;
    v14 = (int)(208 * v9 + 192);
    if ( v10 )
    {
      v13 = (int)(208 * v9 + 192);
      v14 += 24LL * v10;
    }
    v40 = v14 + 60LL * (v9 + 1);
    Pool2 = ExAllocatePool2(0x40uLL);
    v16 = Pool2;
    if ( Pool2 )
    {
      DbgPrintEx(0x92u, 3u, "PopPep: register device (0x%p, %wZ)\n", Pool2, a1);
      *(_QWORD *)(v16 + 32) = a2;
      v41 = (_QWORD *)(v13 + v16);
      v17 = v16 + v14;
      *(_QWORD *)(v16 + 24) = *(_QWORD *)a3;
      KeInitializeEvent((PRKEVENT)(v16 + 40), NotificationEvent, 0);
      v19 = (__int64 *)(v16 + 72);
      *(_DWORD *)(v16 + 180) = v9;
      v20 = (_QWORD *)(v16 + 72);
      *(_DWORD *)(v16 + 140) = v9;
      *(_BYTE *)(v16 + 136) = 1;
      v21 = ActivityAttributes;
      do
      {
        if ( *(_BYTE *)v21 == 1 )
        {
          *v20 = v17;
          v17 += 20LL;
        }
        ++v20;
        v21 += 17;
      }
      while ( (__int64)v21 < (__int64)&off_140001D80 );
      *(_QWORD *)(v16 + 16) |= 1uLL;
      v22 = 0;
LABEL_15:
      if ( v22 >= v9 )
      {
        v5 = 1;
        *a5 = v16;
        if ( a4 == 2 )
          *(_BYTE *)(v16 + 124) = 1;
        *(_DWORD *)(v16 + 168) = 1;
        PopPepInsertDevice((__int64)v20, v16, v18, (struct _KLOCK_ENTRIES *)&off_140001D80);
      }
      else
      {
        v23 = 208LL * v22;
        v24 = ActivityAttributes;
        v39 = *(_QWORD *)(a3 + 8LL * v22 + 16);
        v25 = v19;
        v26 = v16 + v23 + 192;
        *(_DWORD *)(v26 + 8) = v22;
        *(_DWORD *)(v26 + 4) = 3;
        do
        {
          v27 = v17;
          if ( *(_BYTE *)v24 == 1 )
            v27 = *v25;
          else
            v17 += 20LL;
          v25[(unsigned __int64)v23 / 8 + 22] = v27;
          v24 += 17;
          ++v25;
        }
        while ( (__int64)v24 < (__int64)&off_140001D80 );
        KeInitializeEvent((PRKEVENT)(v26 + 32), NotificationEvent, 0);
        v28 = v41;
        *(_QWORD *)(v23 + v16 + 208) = *(_QWORD *)(v39 + 16);
        v29 = *(_DWORD *)(v39 + 28);
        *(_DWORD *)(v23 + v16 + 380) = v29;
        v30 = v29 - 1;
        if ( v30 >= *(_DWORD *)(v39 + 24) )
          v30 = *(_DWORD *)(v39 + 24);
        *(_DWORD *)(v39 + 24) = v30;
        *(_QWORD *)(v23 + v16 + 304) = -1LL;
        *(_QWORD *)(v23 + v16 + 312) = 0LL;
        v31 = *(_DWORD **)(v23 + v16 + 272);
        *(_DWORD *)(v23 + v16 + 340) = v30;
        *(_QWORD *)(v23 + v16 + 392) = v41;
        *(_QWORD *)(v23 + v16 + 320) = 0LL;
        *v31 |= 4u;
        if ( *(_DWORD *)(v39 + 28) > 1u )
          *(_QWORD *)(v16 + 16) &= ~1uLL;
        for ( j = 0; ; ++j )
        {
          if ( j >= *(_DWORD *)(v39 + 28) )
          {
            v33 = *(_QWORD *)(v23 + v16 + 304);
            *(_DWORD *)(v23 + v16 + 344) = 0;
            LatencyIdleState = PopPepComponentGetLatencyIdleState(v16 + v23 + 192, v33);
            v35 = *(_QWORD *)(v23 + v16 + 312);
            *(_DWORD *)(v23 + v16 + 348) = LatencyIdleState;
            *(_DWORD *)(v23 + v16 + 352) = PopPepComponentGetResidencyIdleState(v36, v35);
            v19 = (__int64 *)(v16 + 72);
            v37 = *(_DWORD *)(v23 + v16 + 380) - 1;
            *(_DWORD *)(v23 + v16 + 356) = v37;
            ++v22;
            *(_DWORD *)(v23 + v16 + 360) = v37;
            *(_DWORD *)(v23 + v16 + 364) = v37;
            goto LABEL_15;
          }
          if ( (unsigned __int64)v28 - v16 > v40 - 24 )
            break;
          *v28 = *(_QWORD *)(*(_QWORD *)(v39 + 32) + 24LL * j);
          v28[1] = *(_QWORD *)(*(_QWORD *)(v39 + 32) + 24LL * j + 8);
          v28 += 3;
          v41 = v28;
        }
        ExFreePoolWithTag((PVOID)v16, 0x54706550u);
      }
    }
  }
  return v5;
}
