/*
 * XREFs of ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1400317D8
 * Callers:
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_140030B40 @ 0x140030B40 (sub_140030B40.c)
 *     sub_140031178 @ 0x140031178 (sub_140031178.c)
 *     sub_14004093C @ 0x14004093C (sub_14004093C.c)
 *     sub_140098650 @ 0x140098650 (sub_140098650.c)
 *     sub_14009DC38 @ 0x14009DC38 (sub_14009DC38.c)
 *     sub_14009F5C4 @ 0x14009F5C4 (sub_14009F5C4.c)
 * Callees:
 *     sub_1400099A0 @ 0x1400099A0 (sub_1400099A0.c)
 *     sub_140029740 @ 0x140029740 (sub_140029740.c)
 *     sub_14002B350 @ 0x14002B350 (sub_14002B350.c)
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     sub_140055EE0 @ 0x140055EE0 (sub_140055EE0.c)
 *     sub_140058FB8 @ 0x140058FB8 (sub_140058FB8.c)
 *     sub_14006191C @ 0x14006191C (sub_14006191C.c)
 *     sub_140066768 @ 0x140066768 (sub_140066768.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall CMSPAddress::get_DynamicTerminalClasses(CMSPAddress *this, struct tagVARIANT *a2)
{
  char v2; // r12
  int v5; // r14d
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // r15
  struct _SLIST_ENTRY *v9; // rax
  int v10; // r13d
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v12; // rdx
  ULONGLONG v13; // rbx
  unsigned int v14; // r14d
  ULONGLONG v15; // rax
  int v16; // esi
  ULONGLONG v17; // r15
  int v18; // esi
  unsigned int v19; // ebx
  PSLIST_ENTRY v20; // rax
  unsigned int v21; // ecx
  __int64 v22; // r9
  __int64 v23; // rcx
  KIRQL v24; // bl
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  char v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh]
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v31; // [rsp+3Ch] [rbp-C4h] BYREF
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  ULONGLONG v34; // [rsp+48h] [rbp-B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v35; // [rsp+50h] [rbp-B0h] BYREF
  _SLIST_HEADER SListHead; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37[18]; // [rsp+80h] [rbp-80h] BYREF

  v2 = (char)a2;
  memset(&v35, 0, sizeof(v35));
  SListHead = 0LL;
  if ( (unsigned __int8)a2 >= *((_BYTE *)this + 456) )
    return 3221225485LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 81, 1, 0) == 1 )
    return 3221226614LL;
  sub_1400099A0((__int64)this);
  if ( *((int *)this + 1166) > 1 )
  {
    v5 = 0;
    v6 = KeQueryHighestNodeNumber() + 1;
    InitializeSListHead(&SListHead);
    do
    {
      if ( v6 )
      {
        v7 = 0LL;
        v8 = v6;
        do
        {
          v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v7 + *((_QWORD *)this + 584)));
          if ( v9 )
          {
            ExpInterlockedPushEntrySList(&SListHead, v9);
            ++v5;
          }
          else
          {
            _mm_pause();
          }
          v7 += 64LL;
          --v8;
        }
        while ( v8 );
      }
    }
    while ( v5 < *((_DWORD *)this + 1166) );
  }
  sub_14002B350((__int64)this, &v35);
  *((_DWORD *)this + 1272) = 0;
  v10 = sub_140055EE0(this);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  LOBYTE(v12) = v2;
  v13 = UnbiasedInterruptTime;
  v14 = sub_140058FB8((char *)this + 376, v12);
  v15 = KeQueryUnbiasedInterruptTime();
  v16 = *((_DWORD *)this + 1272);
  v17 = v15 - v13;
  v29 = v16;
  if ( *((int *)this + 1166) > 1 )
  {
    v18 = 0;
    v19 = KeQueryHighestNodeNumber() + 1;
    do
    {
      v20 = ExpInterlockedPopEntrySList(&SListHead);
      if ( v20 )
      {
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*((_QWORD *)this + 584) + ((unsigned __int64)(HIDWORD(v20[1].Next) % v19) << 6)),
          v20);
        ++v18;
      }
    }
    while ( v18 < *((_DWORD *)this + 1166) );
    v16 = v29;
  }
  sub_140029740((__int64)this, &v35);
  v21 = *((_DWORD *)this + 150);
  if ( v21 )
  {
    v22 = v21 / 0xF4240 + 1;
    if ( v21 == 1000000 * (v21 / 0xF4240) )
      v22 = v21 / 0xF4240;
    sub_14006191C(this, (char *)this + 4136, (char *)this + 4200, v22);
  }
  else
  {
    v24 = KfRaiseIrql(2u);
    sub_140066768(this);
    KeLowerIrql(v24);
  }
  if ( (unsigned int)dword_140168178 > 5 )
  {
    if ( (unsigned __int8)sub_14003F840(v23, 0x400000000000LL) )
    {
      v37[5] = 16LL;
      v37[4] = (__int64)this + 5064;
      v30 = *((_DWORD *)this + 14);
      v37[6] = (__int64)&v30;
      v37[8] = (__int64)&v28;
      v37[10] = (__int64)&v31;
      v37[12] = (__int64)&v34;
      v37[14] = (__int64)&v32;
      v37[16] = (__int64)&v33;
      v37[7] = 4LL;
      v28 = v2;
      v37[9] = 1LL;
      v31 = v14;
      v37[11] = 4LL;
      v34 = v17;
      v37[13] = 8LL;
      v32 = v10;
      v37[15] = 4LL;
      v33 = v16;
      v37[17] = 4LL;
      sub_140037A5C(v25, (int)&dword_140155D59, v26, v27, 9u, (__int64)v37);
    }
  }
  *((_DWORD *)this + 81) = 0;
  return v14;
}
