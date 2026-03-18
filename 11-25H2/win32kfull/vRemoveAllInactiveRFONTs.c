/*
 * XREFs of vRemoveAllInactiveRFONTs @ 0x14022710C
 * Callers:
 *     ?vDelayedReclaim@RFONTOBJ@@QEAAXXZ @ 0x140018FBC (-vDelayedReclaim@RFONTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400BA064 (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400D7660 (--0-$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140207440 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall vRemoveAllInactiveRFONTs(__int64 a1)
{
  int v2; // edi
  __int64 v3; // r15
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rbx
  __int64 v7; // r14
  _QWORD *v8; // r14
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r9
  __int64 v19; // rbx
  HSEMAPHORE *v20; // rdi
  _QWORD *v21; // rsi
  HSEMAPHORE v22; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v23[40]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v24[130]; // [rsp+58h] [rbp-B0h] BYREF

  v2 = 0;
  LODWORD(v22) = 0;
  memset_0(v24, 0, 0x408uLL);
  v3 = 0LL;
  v6 = *(_QWORD *)(W32GetSessionState(v5, v4) + 96);
  SEMOBJ<17>::SEMOBJ<17>((HSEMAPHORE *)v23, v6 + 4872);
  SEMOBJ<18>::SEMOBJ<18>(&v22, v6 + 4872);
  if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 3512);
    v2 = 1;
  }
  else
  {
    v7 = a1;
  }
  if ( (v2 & 1) != 0 )
    v2 &= ~1u;
  v8 = *(_QWORD **)(v7 + 1536);
  while ( 1 )
  {
    v9 = v8;
    if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 3512);
      v2 |= 2u;
    }
    else
    {
      v10 = a1;
    }
    v11 = (_QWORD *)(v10 + 1536);
    if ( (v2 & 2) != 0 )
      v2 &= ~2u;
    if ( v8 == v11 )
      break;
    v12 = v8 - 84;
    v24[v3] = v8 - 84;
    v3 = (unsigned int)(v3 + 1);
    v13 = (_QWORD *)*v8;
    v8 = v13;
    if ( (_QWORD *)v13[1] != v9
      || (v14 = (_QWORD *)v9[1], (_QWORD *)*v14 != v9)
      || (*v14 = v13, v13[1] = v14, v15 = v12[61], *(_QWORD **)(v15 + 8) != v12 + 61)
      || (v16 = (_QWORD *)v12[62], (_QWORD *)*v16 != v12 + 61) )
    {
      __fastfail(3u);
    }
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    v17 = v12[16];
    W32GetSessionState((_DWORD)v16, v15);
    --*(_DWORD *)(v17 + 68);
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
    *(_DWORD *)(*(_QWORD *)(a1 + 3512) + 1552LL) = 0;
  else
    *(_DWORD *)(a1 + 1552) = 0;
  SEMOBJ<18>::vUnlock(&v22);
  SEMOBJ<17>::vUnlock((HSEMAPHORE *)v23);
  v24[v3] = 0LL;
  v19 = (unsigned int)v3;
  if ( (_DWORD)v3 )
  {
    v20 = (HSEMAPHORE *)v24;
    v21 = v24;
    do
    {
      v22 = *v20;
      memset(&v23[8], 0, 32);
      PushThreadGuardedObject(&v23[8], v21, vRestartRemoveAllInactiveRFONTs, v18);
      RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v22, 0LL, 0LL, 1);
      PopThreadGuardedObject(&v23[8]);
      v22 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
      ++v21;
      ++v20;
      --v19;
    }
    while ( v19 );
  }
}
