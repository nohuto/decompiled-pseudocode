/*
 * XREFs of HmgAllocateDcAttr @ 0x14000D8F8
 * Callers:
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 * Callees:
 *     ??1OneApplicationPage@@QEAA@XZ @ 0x14000DC88 (--1OneApplicationPage@@QEAA@XZ.c)
 *     ??0OneApplicationPage@@QEAA@XZ @ 0x14000DCE0 (--0OneApplicationPage@@QEAA@XZ.c)
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

__int64 HmgAllocateDcAttr()
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  void **v6; // rax
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  _DWORD *v12; // rdx
  int v13; // eax
  char *v14; // rdi
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  PVOID BaseAddress[3]; // [rsp+20h] [rbp-18h] BYREF
  char v21; // [rsp+40h] [rbp+8h] BYREF

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    v1 = *CurrentThreadWin32Thread;
  else
    v1 = 0LL;
  v2 = 0LL;
  v3 = 32LL;
  if ( v1 )
    v3 = v1 + 40;
  v4 = *(_QWORD *)v3;
  if ( *(_QWORD *)v3 )
  {
    *(_QWORD *)v3 = 0LL;
    goto LABEL_13;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v10 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  SEMOBJ<20>::SEMOBJ<20>(&v21);
  if ( *(_QWORD *)(v10 + 40) )
    goto LABEL_18;
  OneApplicationPage::OneApplicationPage(BaseAddress);
  v14 = (char *)BaseAddress[0];
  if ( !BaseAddress[0] )
  {
LABEL_28:
    OneApplicationPage::~OneApplicationPage(BaseAddress);
LABEL_18:
    if ( !*(_QWORD *)(v10 + 40) )
      goto LABEL_12;
    v2 = *(_QWORD *)(v10 + 40);
    v11 = v10 + 192;
    v12 = *(_DWORD **)(v10 + 192);
    v13 = v12[4] - 1;
    v12[4] = v13;
    if ( v13 )
    {
      *(_QWORD *)(v10 + 40) = *(_QWORD *)&v12[2 * (v13 - 1) + 6];
      goto LABEL_12;
    }
    v5 = *(_QWORD **)v12;
    if ( *(_DWORD **)(*(_QWORD *)v12 + 8LL) == v12 )
    {
      v6 = (void **)*((_QWORD *)v12 + 1);
      if ( *v6 == v12 )
      {
        *v6 = v5;
        v5[1] = v6;
        GreDeleteFastMutex(v12);
        if ( *(_QWORD *)v11 == v11 )
          v7 = 0LL;
        else
          v7 = *(_QWORD *)(*(_QWORD *)v11 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v11 + 16LL) - 1) + 24);
        *(_QWORD *)(v10 + 40) = v7;
LABEL_12:
        v4 = v2;
        SEMOBJ<20>::vUnlock(&v21);
        if ( !v2 )
          return v4;
LABEL_13:
        *(_QWORD *)(v4 + 352) = 0LL;
        return v4;
      }
    }
LABEL_29:
    __fastfail(3u);
  }
  v15 = PALLOCNOZ(112LL, 1717789767LL);
  if ( v15 )
  {
    v16 = (__int64 *)(v10 + 192);
    v17 = *(_QWORD *)(v10 + 192);
    *(_OWORD *)BaseAddress = 0LL;
    if ( *(_QWORD *)(v17 + 8) != v10 + 192 )
      goto LABEL_29;
    *(_QWORD *)v15 = v17;
    *(_QWORD *)(v15 + 8) = v16;
    *(_QWORD *)(v17 + 8) = v15;
    v18 = 11LL;
    *v16 = v15;
    *(_DWORD *)(v15 + 16) = 11;
    v19 = (_QWORD *)(v15 + 24);
    *(_QWORD *)(v10 + 40) = v14 + 3680;
    do
    {
      *v19 = v14;
      v14 += 368;
      ++v19;
      --v18;
    }
    while ( v18 );
    goto LABEL_28;
  }
  OneApplicationPage::~OneApplicationPage(BaseAddress);
  SEMOBJ<20>::vUnlock(&v21);
  return 0LL;
}
