/*
 * XREFs of HmgAllocateObjectAttr @ 0x14000DAE0
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140034DD0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     GreSetBrushOwner @ 0x140035090 (GreSetBrushOwner.c)
 *     NtGdiCreateRectRgn @ 0x140102C20 (NtGdiCreateRectRgn.c)
 * Callees:
 *     ??1OneApplicationPage@@QEAA@XZ @ 0x14000DC88 (--1OneApplicationPage@@QEAA@XZ.c)
 *     ??0OneApplicationPage@@QEAA@XZ @ 0x14000DCE0 (--0OneApplicationPage@@QEAA@XZ.c)
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

__int64 HmgAllocateObjectAttr()
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  _DWORD *v6; // r8
  int v7; // ecx
  char *v9; // rsi
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  void **v16; // rax
  PVOID BaseAddress[3]; // [rsp+20h] [rbp-18h] BYREF
  char v18; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = GreGetCurrentThread();
  v1 = 0LL;
  v2 = 0LL;
  if ( *((_QWORD *)CurrentThread + 5) )
  {
    v2 = *((_QWORD *)CurrentThread + 5);
    *((_QWORD *)CurrentThread + 5) = 0LL;
    return v2;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v4 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v4 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  SEMOBJ<20>::SEMOBJ<20>(&v18);
  if ( *(_QWORD *)(v4 + 48) )
    goto LABEL_5;
  OneApplicationPage::OneApplicationPage(BaseAddress);
  v9 = (char *)BaseAddress[0];
  if ( !BaseAddress[0] )
  {
LABEL_16:
    OneApplicationPage::~OneApplicationPage(BaseAddress);
LABEL_5:
    if ( !*(_QWORD *)(v4 + 48) )
    {
LABEL_8:
      SEMOBJ<20>::vUnlock(&v18);
      return v2;
    }
    v5 = v4 + 208;
    v2 = *(_QWORD *)(v4 + 48);
    v6 = *(_DWORD **)(v4 + 208);
    v7 = v6[4] - 1;
    v6[4] = v7;
    if ( v7 )
    {
      *(_QWORD *)(v4 + 48) = *(_QWORD *)&v6[2 * (v7 - 1) + 6];
      goto LABEL_8;
    }
    v15 = *(_QWORD **)v6;
    if ( *(_DWORD **)(*(_QWORD *)v6 + 8LL) == v6 )
    {
      v16 = (void **)*((_QWORD *)v6 + 1);
      if ( *v16 == v6 )
      {
        *v16 = v15;
        v15[1] = v16;
        GreDeleteFastMutex(v6);
        if ( *(_QWORD *)v5 != v5 )
          v1 = *(_QWORD *)(*(_QWORD *)v5 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v5 + 16LL) - 1) + 24);
        *(_QWORD *)(v4 + 48) = v1;
        goto LABEL_8;
      }
    }
LABEL_17:
    __fastfail(3u);
  }
  v10 = PALLOCNOZ(1384LL, 1717658183LL);
  if ( v10 )
  {
    v11 = (__int64 *)(v4 + 208);
    v12 = *(_QWORD *)(v4 + 208);
    *(_OWORD *)BaseAddress = 0LL;
    if ( *(_QWORD *)(v12 + 8) != v4 + 208 )
      goto LABEL_17;
    *(_QWORD *)v10 = v12;
    *(_QWORD *)(v10 + 8) = v11;
    *(_QWORD *)(v12 + 8) = v10;
    v13 = 170LL;
    *v11 = v10;
    *(_DWORD *)(v10 + 16) = 170;
    v14 = (_QWORD *)(v10 + 24);
    *(_QWORD *)(v4 + 48) = v9 + 4056;
    do
    {
      *v14 = v9;
      v9 += 24;
      ++v14;
      --v13;
    }
    while ( v13 );
    goto LABEL_16;
  }
  OneApplicationPage::~OneApplicationPage(BaseAddress);
  SEMOBJ<20>::vUnlock(&v18);
  return 0LL;
}
