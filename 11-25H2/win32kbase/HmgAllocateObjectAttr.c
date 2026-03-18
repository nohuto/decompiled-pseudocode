/*
 * XREFs of HmgAllocateObjectAttr @ 0x14008EC40
 * Callers:
 *     GreSetBrushOwner @ 0x1400711D0 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140087310 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x14008EAB0 (NtGdiCreateRectRgn.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x14011732C (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1401A06DC (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateObjectAttr()
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 *v6; // r8
  int v7; // ecx
  char *v9; // rsi
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 *v15; // rcx
  __int64 **v16; // rax
  void *v17; // [rsp+40h] [rbp+8h] BYREF
  HSEMAPHORE v18; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = GreGetCurrentThread();
  v1 = 0LL;
  v2 = 0LL;
  if ( *((_QWORD *)CurrentThread + 5) )
  {
    v2 = *((_QWORD *)CurrentThread + 5);
    *((_QWORD *)CurrentThread + 5) = 0LL;
    return v2;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
  v4 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v4 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  SEMOBJ<20>::SEMOBJ<20>(&v18);
  if ( *(_QWORD *)(v4 + 48) )
    goto LABEL_5;
  v17 = 0LL;
  v9 = (char *)HmgAllocateSecureUserMemory(&v17);
  if ( !v9 )
    goto LABEL_5;
  v10 = PALLOCNOZ(1384LL, 1717658183LL);
  if ( v10 )
  {
    v11 = (__int64 *)(v4 + 208);
    v12 = *(_QWORD *)(v4 + 208);
    if ( *(_QWORD *)(v12 + 8) != v4 + 208 )
      goto LABEL_23;
    *(_QWORD *)v10 = v12;
    *(_QWORD *)(v10 + 8) = v11;
    *(_QWORD *)(v12 + 8) = v10;
    v13 = 170LL;
    *v11 = v10;
    v14 = (_QWORD *)(v10 + 24);
    *(_DWORD *)(v10 + 16) = 170;
    *(_QWORD *)(v4 + 48) = v9 + 4056;
    do
    {
      *v14 = v9;
      v9 += 24;
      ++v14;
      --v13;
    }
    while ( v13 );
LABEL_5:
    if ( !*(_QWORD *)(v4 + 48) )
    {
LABEL_8:
      SEMOBJ<20>::vUnlock(&v18);
      return v2;
    }
    v5 = v4 + 208;
    v2 = *(_QWORD *)(v4 + 48);
    v6 = *(__int64 **)(v4 + 208);
    v7 = *((_DWORD *)v6 + 4) - 1;
    *((_DWORD *)v6 + 4) = v7;
    if ( v7 )
    {
      *(_QWORD *)(v4 + 48) = v6[(unsigned int)(v7 - 1) + 3];
      goto LABEL_8;
    }
    v15 = (__int64 *)*v6;
    if ( *(__int64 **)(*v6 + 8) == v6 )
    {
      v16 = (__int64 **)v6[1];
      if ( *v16 == v6 )
      {
        *v16 = v15;
        v15[1] = (__int64)v16;
        GreDeleteFastMutex((char *)v6);
        if ( *(_QWORD *)v5 != v5 )
          v1 = *(_QWORD *)(*(_QWORD *)v5 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v5 + 16LL) - 1) + 24);
        *(_QWORD *)(v4 + 48) = v1;
        goto LABEL_8;
      }
    }
LABEL_23:
    __fastfail(3u);
  }
  HmgFreeAllocateSecureUserMemory(v9, v17);
  SEMOBJ<20>::vUnlock(&v18);
  return 0LL;
}
