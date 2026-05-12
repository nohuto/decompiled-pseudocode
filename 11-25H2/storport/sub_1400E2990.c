/*
 * XREFs of sub_1400E2990 @ 0x1400E2990
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400DCB68 @ 0x1400DCB68 (sub_1400DCB68.c)
 *     NaptrDnsRecordConvert @ 0x1400DF8C8 (NaptrDnsRecordConvert.c)
 *     sub_1400E1B60 @ 0x1400E1B60 (sub_1400E1B60.c)
 *     sub_1400E4544 @ 0x1400E4544 (sub_1400E4544.c)
 *     sub_1400E5FA4 @ 0x1400E5FA4 (sub_1400E5FA4.c)
 *     sub_1400E61F4 @ 0x1400E61F4 (sub_1400E61F4.c)
 *     sub_1400E63C4 @ 0x1400E63C4 (sub_1400E63C4.c)
 *     sub_1400E6738 @ 0x1400E6738 (sub_1400E6738.c)
 *     sub_1400E69E8 @ 0x1400E69E8 (sub_1400E69E8.c)
 *     sub_1400E6EA4 @ 0x1400E6EA4 (sub_1400E6EA4.c)
 *     sub_1400E74D0 @ 0x1400E74D0 (sub_1400E74D0.c)
 *     sub_1400F2254 @ 0x1400F2254 (sub_1400F2254.c)
 *     sub_1400F2B50 @ 0x1400F2B50 (sub_1400F2B50.c)
 *     sub_1400F2E10 @ 0x1400F2E10 (sub_1400F2E10.c)
 *     sub_140194F8C @ 0x140194F8C (sub_140194F8C.c)
 */

void __fastcall sub_1400E2990(PDEVICE_OBJECT DeviceObject, char *Context)
{
  char v3; // di
  __int64 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  _QWORD *v12; // rbp
  unsigned __int16 v13; // r14
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  _QWORD *v17; // r14
  unsigned __int16 v18; // r15
  __int64 v19; // rdx
  _QWORD *v20; // rsi
  unsigned __int16 v21; // bp
  unsigned __int16 i; // di
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  signed __int32 v27[8]; // [rsp+0h] [rbp-C8h] BYREF

  v3 = 0;
  if ( (*((_DWORD *)Context + 34) & 0x400LL) == 0 )
  {
    if ( _InterlockedCompareExchange(*((volatile signed __int32 **)Context + 159), 1, 0) )
      return;
    sub_1400A870C(
      (__int64)Context,
      1,
      4,
      (__int64)L"Rebuild association started",
      (void *)&dword_140149108,
      0,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    sub_1400E61F4(Context, 0LL);
    _interlockedbittestandset((volatile signed __int32 *)Context + 237, 1u);
    sub_1400F2E10(Context);
    v4 = (__int64 *)(Context + 712);
    v7 = sub_1400E69E8(*((_QWORD *)Context + 89), v5, v6);
    v3 = v7;
    if ( v7 >= 0 )
    {
      v12 = Context + 728;
      if ( *((_QWORD *)Context + 91) && (v13 = 0, *((_WORD *)Context + 10)) )
      {
        while ( 1 )
        {
          v14 = *((_QWORD *)Context + 91) + 192LL * v13;
          if ( *(_DWORD *)(v14 + 120) == 5 )
          {
            v15 = sub_1400E69E8(v14, v8, v9);
            v3 = v15;
            if ( v15 < 0 )
              break;
          }
          if ( ++v13 >= *((_WORD *)Context + 10) )
          {
            v4 = (__int64 *)(Context + 712);
            v12 = Context + 728;
            goto LABEL_16;
          }
        }
        *((_DWORD *)Context + 294) = 40;
      }
      else
      {
LABEL_16:
        sub_1400F2B50(Context);
        NaptrDnsRecordConvert(*v4);
        v17 = v12;
        if ( *v12 )
        {
          v18 = 0;
          if ( *((_WORD *)Context + 10) )
          {
            do
              NaptrDnsRecordConvert(*v12 + 192LL * v18++);
            while ( v18 < *((_WORD *)Context + 10) );
            v4 = (__int64 *)(Context + 712);
            v17 = Context + 728;
          }
        }
        LOBYTE(v16) = 37;
        sub_1400E74D0(*v4, v16, 3221225996LL);
        v20 = v17;
        if ( *v17 )
        {
          v21 = 0;
          if ( *((_WORD *)Context + 10) )
          {
            do
            {
              LOBYTE(v19) = 37;
              sub_1400E74D0(*v17 + 192LL * v21++, v19, 3221225996LL);
            }
            while ( v21 < *((_WORD *)Context + 10) );
            v20 = Context + 728;
          }
        }
        sub_1400A870C(
          (__int64)Context,
          1,
          4,
          (__int64)L"Transport connections terminated and outstanding requests drained",
          (void *)&dword_140149108,
          0,
          &dword_140149108,
          0,
          &dword_140149108,
          0,
          &dword_140149108,
          0,
          (void *)&dword_140149108,
          0,
          (void *)&dword_140149108,
          0,
          (void *)&dword_140149108,
          0,
          (void *)&dword_140149108,
          0);
        if ( (*((_DWORD *)Context + 34) & 0x400LL) == 0 )
        {
          sub_1400E6738(Context);
          if ( (*((_DWORD *)Context + 34) & 0x400LL) == 0 )
          {
            sub_1400E1B60((__int64)Context, 0, 1);
            if ( *v20 )
            {
              for ( i = 1; i <= *((_WORD *)Context + 10); ++i )
                sub_1400E1B60((__int64)Context, i, 1);
            }
            v23 = sub_1400E6EA4(*((_QWORD *)Context + 89));
            v3 = v23;
            if ( v23 >= 0 )
            {
              _interlockedbittestandreset((volatile signed __int32 *)Context + 237, 1u);
              if ( (*((_DWORD *)Context + 34) & 0x400LL) == 0 )
              {
                v24 = sub_1400E4544(Context);
                v3 = v24;
                if ( v24 >= 0 )
                {
                  v25 = sub_140194F8C(Context);
                  v3 = v25;
                  if ( v25 >= 0 )
                  {
                    v26 = sub_1400E5FA4(Context);
                    v3 = v26;
                    if ( v26 >= 0 )
                    {
                      **(_QWORD **)(*((_QWORD *)Context + 159) + 40LL) = KeQueryUnbiasedInterruptTime();
                      _InterlockedOr(v27, 0);
                      _InterlockedExchange(*((volatile __int32 **)Context + 159), 0);
                      if ( !_InterlockedCompareExchange(
                              (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 192LL),
                              1,
                              0) )
                        KeSetCoalescableTimer(
                          (PKTIMER)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 128LL),
                          (LARGE_INTEGER)-50000000LL,
                          0x7D0u,
                          0x12Cu,
                          (PKDPC)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 64LL));
                      sub_1400F2254(Context);
                      sub_1400A870C(
                        (__int64)Context,
                        1,
                        4,
                        (__int64)L"Rebuild association succeeded",
                        (void *)&dword_140149108,
                        0,
                        &dword_140149108,
                        0,
                        &dword_140149108,
                        0,
                        &dword_140149108,
                        0,
                        (void *)&dword_140149108,
                        0,
                        (void *)&dword_140149108,
                        0,
                        (void *)&dword_140149108,
                        0,
                        (void *)&dword_140149108,
                        0);
                      goto LABEL_8;
                    }
                    *((_DWORD *)Context + 294) = 44;
                  }
                  else
                  {
                    *((_DWORD *)Context + 294) = 43;
                  }
                }
                else
                {
                  *((_DWORD *)Context + 294) = 42;
                }
              }
            }
            else
            {
              *((_DWORD *)Context + 294) = 41;
            }
          }
        }
      }
    }
    else
    {
      *((_DWORD *)Context + 294) = 40;
    }
    _InterlockedExchange(*((volatile __int32 **)Context + 159), 0);
  }
  if ( (*((_DWORD *)Context + 34) & 0x400LL) == 0 )
  {
    sub_1400A870C(
      (__int64)Context,
      1,
      2,
      (__int64)L"Rebuild association failed",
      L"Status",
      v3,
      L"ErrorState",
      *((_DWORD *)Context + 294),
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    LOBYTE(v10) = 1;
    sub_1400E63C4(Context, v10);
    sub_1400DCB68((__int64)Context, v11);
    *((_DWORD *)Context + 142) = 4;
  }
LABEL_8:
  KeSetEvent((PRKEVENT)(Context + 232), 0, 0);
}
