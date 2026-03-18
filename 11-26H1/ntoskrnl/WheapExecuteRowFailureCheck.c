/*
 * XREFs of WheapExecuteRowFailureCheck @ 0x140849DB0
 * Callers:
 *     WheapPfaMemoryCheck @ 0x14084A0EC (WheapPfaMemoryCheck.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403DFEC0 (WheaLogInternalEvent.c)
 *     WheaAttemptRowOffline @ 0x1406D5AE0 (WheaAttemptRowOffline.c)
 *     WheaGetNotifyAllOfflinesPolicy @ 0x1406D5D90 (WheaGetNotifyAllOfflinesPolicy.c)
 *     MmGetPageBadStatus @ 0x1406F2340 (MmGetPageBadStatus.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1408480E0 (WheaAttemptPhysicalPageOffline.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

char __fastcall WheapExecuteRowFailureCheck(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _LIST_ENTRY *v5; // rdi
  char v7; // r15
  struct _KTHREAD *Blink; // rdx
  unsigned int v9; // r10d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned int v12; // r13d
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rax
  struct _LIST_ENTRY *v16; // r8
  struct _KTHREAD *v17; // rdi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  struct _KTHREAD **v20; // rax
  struct _LIST_ENTRY **p_Flink; // rax
  struct _LIST_ENTRY *v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  struct _LIST_ENTRY *v26; // rcx
  struct _LIST_ENTRY *v27; // rax
  struct _LIST_ENTRY *P; // [rsp+30h] [rbp-50h] BYREF
  struct _LIST_ENTRY *p_P; // [rsp+38h] [rbp-48h]
  unsigned __int64 v30; // [rsp+40h] [rbp-40h] BYREF
  __int128 Src; // [rsp+48h] [rbp-38h] BYREF
  __int128 v32; // [rsp+58h] [rbp-28h]
  __int128 v33; // [rsp+68h] [rbp-18h]

  p_P = (struct _LIST_ENTRY *)&P;
  v5 = (struct _LIST_ENTRY *)&P;
  P = (struct _LIST_ENTRY *)&P;
  Src = 0LL;
  v7 = 0;
  v32 = 0LL;
  v33 = 0LL;
  if ( *(_BYTE *)off_140E095D8 )
  {
    Blink = (struct _KTHREAD *)WheapPfaLock.Header.WaitListHead.Blink;
    v9 = 1;
    v10 = a1;
    v11 = a1;
    v12 = *(_DWORD *)off_140E095F8;
    v13 = *(unsigned int *)off_140E095B8;
    v14 = a1 - v13;
    if ( a1 < v13 )
      v14 = 0LL;
    v15 = v13 + a1;
    if ( (struct _LIST_ENTRY **)WheapPfaLock.Header.WaitListHead.Blink != &WheapPfaLock.Header.WaitListHead.Blink )
    {
      do
      {
        v16 = (struct _LIST_ENTRY *)Blink;
        v17 = Blink;
        Blink = *(struct _KTHREAD **)&Blink->Header.Lock;
        v18 = (unsigned __int64)v16[2].Blink;
        if ( v18 >= v14 && v18 <= v15 )
        {
          if ( v18 != a1 )
          {
            ++v9;
            v19 = (unsigned __int64)v16[2].Blink;
            if ( v18 >= v10 )
              v19 = v10;
            v10 = v19;
            if ( v18 <= v11 )
              v18 = v11;
            v11 = v18;
          }
          if ( Blink->Header.WaitListHead.Flink != v16
            || (v20 = (struct _KTHREAD **)v16->Blink, *v20 != (struct _KTHREAD *)v16)
            || (*v20 = Blink,
                Blink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v20,
                p_Flink = &p_P->Flink,
                (struct _LIST_ENTRY **)p_P->Flink != &P) )
          {
LABEL_40:
            __fastfail(3u);
          }
          v16->Blink = p_P;
          *(_QWORD *)&v17->Header.Lock = &P;
          *p_Flink = v16;
          v15 = v13 + a1;
          p_P = v16;
        }
      }
      while ( Blink != (struct _KTHREAD *)&WheapPfaLock.Header.WaitListHead.Blink );
      v5 = P;
    }
    if ( v9 < v12 )
    {
      while ( v5 != (struct _LIST_ENTRY *)&P )
      {
        v26 = WheapPfaLock.Header.WaitListHead.Blink;
        v27 = v5;
        v5 = v5->Flink;
        if ( (struct _LIST_ENTRY **)WheapPfaLock.Header.WaitListHead.Blink->Blink != &WheapPfaLock.Header.WaitListHead.Blink )
          goto LABEL_40;
        v27->Flink = WheapPfaLock.Header.WaitListHead.Blink;
        v27->Blink = (struct _LIST_ENTRY *)&WheapPfaLock.Header.WaitListHead.Blink;
        v26->Blink = v27;
        WheapPfaLock.Header.WaitListHead.Blink = v27;
      }
    }
    else
    {
      v7 = 1;
      while ( v5 != (struct _LIST_ENTRY *)&P )
      {
        v22 = v5;
        v5 = v5->Flink;
        ExFreePoolWithTag(v22, 0x61656857u);
      }
      if ( v11 - v10 < v13 )
      {
        v23 = v11;
        v11 = v13 + v10;
        if ( v23 < v13 )
          v10 = 0LL;
        else
          v10 = v23 - v13;
      }
      *(_QWORD *)&Src = 0x1674C6857LL;
      *((_QWORD *)&Src + 1) = 48LL;
      *(_QWORD *)&v32 = 0x800000544C4E524BuLL;
      *((_QWORD *)&v32 + 1) = 0x1000000002LL;
      *(_QWORD *)&v33 = v10;
      *((_QWORD *)&v33 + 1) = v11;
      WheaLogInternalEvent(&Src);
      if ( WheaGetNotifyAllOfflinesPolicy() && *(_BYTE *)off_140E09638 )
      {
        WheaAttemptRowOffline(v10, 0LL, v11 - v10 + 1, a5);
      }
      else
      {
        while ( v10 <= v11 )
        {
          v30 = v10 << 12;
          if ( !(unsigned int)MmGetPageBadStatus(&v30, v24) )
            WheaAttemptPhysicalPageOffline(v10, 0, 0, 0, a5);
          ++v10;
        }
      }
    }
  }
  return v7;
}
