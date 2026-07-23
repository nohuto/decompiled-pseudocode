/*
 * XREFs of MiGetLargePagesForChain @ 0x140283FC4
 * Callers:
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 * Callees:
 *     MiInitializeDemandCoalesceContext @ 0x140206BB0 (MiInitializeDemandCoalesceContext.c)
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 *     MiConvertLargeActivePageToChain @ 0x1404035D0 (MiConvertLargeActivePageToChain.c)
 *     MiAppendPageChain @ 0x14044F110 (MiAppendPageChain.c)
 *     MiInitializePageHeatList @ 0x1404655D0 (MiInitializePageHeatList.c)
 *     MiGetLargePage @ 0x1405209D4 (MiGetLargePage.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall MiGetLargePagesForChain(__int64 a1, int a2)
{
  int v4; // r13d
  int v5; // r13d
  _OWORD *v6; // r12
  unsigned int v7; // esi
  unsigned __int64 result; // rax
  unsigned __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rcx
  __int128 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B0h]
  _OWORD v14[3]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+90h] [rbp-70h]
  int v16; // [rsp+98h] [rbp-68h]
  _BYTE v17[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v18; // [rsp+A4h] [rbp-5Ch]

  v13 = 0LL;
  v12 = 0LL;
  memset_0(v17, 0, 0x90uLL);
  v4 = *(_DWORD *)(a1 + 32) & 1;
  v15 = 0LL;
  memset(v14, 0, sizeof(v14));
  v16 = 0;
  v5 = 16 * v4 + 2;
  MiInitializePageHeatList(v17, 1LL, 0LL, 16LL);
  v6 = *(_OWORD **)(a1 + 64);
  v7 = 1;
  if ( !v6 )
  {
    MiInitializeDemandCoalesceContext(v14, 16LL, 1uLL, 1);
    v6 = v14;
  }
  result = *(_QWORD *)(a1 + 80) - *(_QWORD *)(a1 + 104);
  if ( result >= 0x10 )
  {
    while ( v7 <= 2 )
    {
      result = *(_QWORD *)(a1 + 80) - *(_QWORD *)(a1 + 104);
      if ( result >= MiPageSizes[v7]
        && (result = MiGetLargePage(
                       *(_QWORD *)a1,
                       *(_QWORD *)(a1 + 16),
                       v7,
                       a2,
                       (*(_DWORD *)(a1 + 48) >> 18) & 3,
                       v5,
                       (__int64)v6,
                       (__int64)v17),
            (v9 = result) != 0) )
      {
        v10 = MiPageSizes[v7];
        MiConvertLargeActivePageToChain(result);
        v11 = *(_QWORD *)(a1 + 16);
        if ( v11 )
          *(_QWORD *)(a1 + 16) = v11 + (v10 << 12);
        *(_QWORD *)&v12 = v9;
        v13 = v10;
        *((_QWORD *)&v12 + 1) = v9 + 48 * v10 - 48;
        MiAppendPageChain(a1 + 88, &v12);
        result = *(_QWORD *)(a1 + 80) - *(_QWORD *)(a1 + 104);
        if ( result < 0x10 )
          break;
      }
      else
      {
        ++v7;
      }
    }
  }
  if ( v18 )
    return MiIssuePageHeatList(v17);
  return result;
}
