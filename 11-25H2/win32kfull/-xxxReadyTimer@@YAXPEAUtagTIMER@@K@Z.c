/*
 * XREFs of ?xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1400337A0
 * Callers:
 *     xxxTimersProc @ 0x140246B40 (xxxTimersProc.c)
 *     xxxTimersProc_Old @ 0x14028C0D0 (xxxTimersProc_Old.c)
 * Callees:
 *     SetWakeBit @ 0x1400338D0 (SetWakeBit.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall xxxReadyTimer(struct tagTIMER *a1, int a2)
{
  __int64 v2; // rax
  int v4; // r8d
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // rax
  __int64 **v11; // rcx
  unsigned int v12; // eax
  int v13; // ecx

  v2 = *((_QWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 10);
  *((_DWORD *)a1 + 13) = v4;
  v6 = *(_DWORD *)(*(_QWORD *)(v2 + 464) + 1020LL);
  if ( v6 )
  {
    v12 = v4 + v6;
    v13 = 0x7FFFFFFF;
    if ( v12 < 0x7FFFFFFF )
      v13 = v12;
    *((_DWORD *)a1 + 13) = v13;
  }
  EtwTraceTimerProc(a1);
  v7 = *((_DWORD *)a1 + 12);
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x10) != 0 )
    {
      v7 |= 0x20u;
      *((_DWORD *)a1 + 12) = v7;
    }
    if ( *((_DWORD *)a1 + 34) == *((_DWORD *)a1 + 35) )
      *((_DWORD *)a1 + 35) = a2;
    if ( (v7 & 4) != 0 )
    {
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD, struct tagTIMER *))a1 + 4))(
        0LL,
        280LL,
        *((_QWORD *)a1 + 14),
        a1);
      *((_DWORD *)a1 + 34) = *((_DWORD *)a1 + 35);
    }
    else
    {
      v8 = *((_QWORD *)a1 + 3);
      v9 = (__int64 *)((char *)a1 + 56);
      *((_DWORD *)a1 + 12) = v7 | 1;
      ++*(_DWORD *)(v8 + 644);
      v10 = *((_QWORD *)a1 + 3) + 1344LL;
      v11 = *(__int64 ***)(*((_QWORD *)a1 + 3) + 1352LL);
      if ( *v11 != (__int64 *)v10 )
        __fastfail(3u);
      *v9 = v10;
      *((_QWORD *)a1 + 8) = v11;
      *v11 = v9;
      *(_QWORD *)(v10 + 8) = v9;
      SetWakeBit(*((_QWORD *)a1 + 3), 16LL);
      ++*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 464LL) + 1032LL);
    }
  }
}
