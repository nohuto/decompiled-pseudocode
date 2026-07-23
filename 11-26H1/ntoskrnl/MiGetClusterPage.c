/*
 * XREFs of MiGetClusterPage @ 0x140508040
 * Callers:
 *     MiCreateSharedZeroPages @ 0x140282EF0 (MiCreateSharedZeroPages.c)
 *     MiResolvePrivateZeroFault @ 0x1402B71E0 (MiResolvePrivateZeroFault.c)
 * Callees:
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiInsertPageChainHead @ 0x14033C0E0 (MiInsertPageChainHead.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 *     MiIsPteEvaluated @ 0x1403DCEC8 (MiIsPteEvaluated.c)
 *     MiComputeZeroClusterMaximum @ 0x1403DCF50 (MiComputeZeroClusterMaximum.c)
 *     MiConvertLargeActivePageToChain @ 0x1404035D0 (MiConvertLargeActivePageToChain.c)
 *     MiInitializePageChainPacket @ 0x140412300 (MiInitializePageChainPacket.c)
 *     MiGetLargePage @ 0x1405209D4 (MiGetLargePage.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiGetClusterPage(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 *a8)
{
  unsigned int v10; // r14d
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // r10d
  _KPROCESS *Process; // r11
  __int64 v16; // r9
  unsigned int *p_Blink; // r11
  int v18; // edi
  unsigned int v19; // ebx
  unsigned __int64 v20; // rdx
  __int64 *v21; // r11
  __int64 v22; // rcx
  __int64 ProtoPteAddress; // r10
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r9
  __int64 v27; // rax
  unsigned __int64 i; // rcx
  unsigned __int64 j; // rsi
  unsigned __int64 v30; // rax
  bool v31; // zf
  __int64 v32; // rcx
  __int64 v33; // r15
  int v34; // eax
  __int64 LargePage; // rax
  __int64 v36; // rbx
  unsigned __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r12
  int v41; // eax
  __int64 v42; // r9
  __int64 *v43; // r8
  unsigned int *v44; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v45; // [rsp+78h] [rbp-88h]
  unsigned __int64 v46[2]; // [rsp+80h] [rbp-80h] BYREF
  int v47; // [rsp+90h] [rbp-70h]
  unsigned int *v48; // [rsp+98h] [rbp-68h]
  __int64 v49; // [rsp+A0h] [rbp-60h]
  __int64 v50; // [rsp+A8h] [rbp-58h]
  __int64 v51; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v52; // [rsp+B8h] [rbp-48h]
  __int128 v53; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v54; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 *v55; // [rsp+D8h] [rbp-28h]
  __int64 v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  __int64 v58; // [rsp+F0h] [rbp-10h]
  _QWORD v59[11]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v60[16]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v61; // [rsp+1B8h] [rbp+B8h]
  _QWORD v62[16]; // [rsp+1C0h] [rbp+C0h]

  v52 = a2;
  v45 = a5;
  v47 = a3;
  v51 = a1;
  v50 = a4;
  v49 = a7;
  v53 = 0LL;
  memset_0(&v54, 0, 0x78uLL);
  v10 = 0;
  v44 = 0LL;
  memset_0(v59, 0, 0x70uLL);
  v11 = *(_DWORD *)(a1 + 48);
  *(_OWORD *)a8 = 0LL;
  a8[2] = 0LL;
  v12 = *(unsigned int *)(a1 + 24);
  v13 = *(unsigned __int8 *)(a1 + 32);
  v14 = *(unsigned __int8 *)(a1 + 33);
  Process = KeGetCurrentThread()->ApcState.Process;
  v16 = *(unsigned int *)(a1 + 28);
  v46[0] = a2 & 0xFFFFFFFFFFFF0000uLL;
  p_Blink = (unsigned int *)&Process[2].ReadyListHead.Blink;
  v48 = p_Blink;
  v46[1] = 0x10000LL;
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) >> 12 < (v12 | (unsigned __int64)(v13 << 32))
    || ((a2 & 0xFFFFFFFFFFFF0000uLL) + 0xFFFF) >> 12 > (v16 | ((unsigned __int64)v14 << 32)) )
  {
    return 0LL;
  }
  v18 = (*(_DWORD *)(a1 + 48) >> 10) & 0x7F;
  MiInitializePageColorBase((__int64)p_Blink, 3, v18, (__int64)&v53);
  v19 = (DWORD2(v53) >> 9) & 0x3F;
  v54 = 2;
  v55 = v46;
  v56 = 1LL;
  v57 = 0LL;
  v58 = 0LL;
  if ( (v11 & 0x80000) != 0 )
  {
    v20 = ((v46[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v21 = 0LL;
    v22 = *((unsigned __int16 *)v48 + 87);
  }
  else
  {
    ProtoPteAddress = MiGetProtoPteAddress(a1, a2 >> 12, 8u, &v44);
    v24 = *((_QWORD *)v44 + 1);
    v25 = v24 + 8LL * (v44[11] - v44[13]);
    if ( (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) > v24 )
      v24 = ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL;
    if ( v25 > (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v25 = (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) + 4096;
    v26 = 8 * (((a2 & 0xFFFFFFFFFFFFF000uLL) - v46[0]) >> 12);
    v20 = ProtoPteAddress - v26;
    if ( ProtoPteAddress - v26 < v24 || ProtoPteAddress - v26 + 128 > v25 )
      return 0LL;
    v21 = (__int64 *)(((v46[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v22 = *(_DWORD *)(*(_QWORD *)v44 + 60LL) & 0x3FF;
  }
  v27 = *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v22) + 16LL);
  v44 = *(unsigned int **)(stru_140E2ED08.ThreadLock + 8 * v22);
  *(_BYTE *)(56320LL * v19 + v27 + 4155) = 1;
  for ( i = 0LL; i < 0x10; ++i )
    v62[i] = *(_QWORD *)(v20 + 8 * i);
  j = 0LL;
  while ( j < 0x10 )
  {
    v30 = v62[j];
    if ( a6 )
    {
      if ( (v30 & 1) != 0 )
        break;
      v32 = v62[j];
      if ( qword_140E2D8C0 && (v30 & 0x10) == 0 )
        LOWORD(v32) = v30 & qword_140E2D8C8;
      if ( (v32 & 0x400) != 0 || (v32 & 0x800) != 0 || (v32 & 8) != 0 )
        break;
      v31 = ((v30 >> 5) & 0x1F) == a6;
    }
    else
    {
      v31 = v30 == 0;
    }
    if ( v31 && (!v21 || !(unsigned int)MiIsPteEvaluated(v21)) && ++j != v50 )
      continue;
    break;
  }
  v33 = -1LL;
  if ( j == 16 )
  {
    if ( MiComputeZeroClusterMaximum((__int64)&v54, v46[0], (__int64)v48, v51) != 16 )
      return 0LL;
    v34 = MiProtectionToCacheAttribute(v45);
    LargePage = MiGetLargePage((_DWORD)v44, v46[0], 2, v19, v34, 18, v49, 0LL);
    v36 = LargePage;
    if ( LargePage )
    {
      MiConvertLargeActivePageToChain(LargePage);
      *a8 = v36;
      a8[1] = v36 + 720;
      a8[2] = 16LL;
      return 0LL;
    }
  }
  else
  {
    for ( j = 0LL; j < 0x10; ++j )
    {
      v38 = v62[j];
      if ( (v38 & 1) != 0 )
      {
        v33 = (v38 >> 12) & 0xFFFFFFFFFFLL;
        if ( (unsigned __int16)v38 >> 12 != j )
          return 0LL;
        break;
      }
    }
  }
  v39 = (v52 >> 9) & 0x7FFFFFFFF8LL;
  v40 = ((__int64)(v39 - ((v46[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) & 0xF;
  v41 = MiProtectionToCacheAttribute(v45);
  MiInitializePageChainPacket(
    (__int64)v44,
    v48,
    v47,
    v42,
    v18,
    v41,
    49,
    (unsigned int)v40,
    v49,
    9u,
    0LL,
    1LL,
    (__int64)v59);
  MiGetPageChain(v59);
  if ( !v61 )
    return 0LL;
  v43 = MiUnlinkPageChainHead((__int64)v60);
  if ( j == 16 )
  {
    if ( (((__int64)(v43 + 0x44000000000LL) / 48) & 0xF) != (unsigned int)v40 )
      v10 = 1;
  }
  else
  {
    LOBYTE(v10) = v33 + ((__int64)(v39 - ((v46[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) - j != (__int64)(v43 + 0x44000000000LL)
                                                                                      / 48;
  }
  MiInsertPageChainHead(a8, v43);
  return v10;
}
