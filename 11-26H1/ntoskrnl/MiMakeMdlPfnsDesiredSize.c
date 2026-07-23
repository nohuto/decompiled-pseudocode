/*
 * XREFs of MiMakeMdlPfnsDesiredSize @ 0x1406F36C0
 * Callers:
 *     MiInitializeLargeMdlLeafPfns @ 0x1406F3000 (MiInitializeLargeMdlLeafPfns.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiSimpleUnlinkPageEx @ 0x14028D6D0 (MiSimpleUnlinkPageEx.c)
 *     MiSimpleInsertPage @ 0x1403CF00C (MiSimpleInsertPage.c)
 *     MiInitializeLargePfnList @ 0x14045A7B0 (MiInitializeLargePfnList.c)
 *     MiDemotePfnListChain @ 0x1407164C4 (MiDemotePfnListChain.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiMakeMdlPfnsDesiredSize(__int64 a1, unsigned int a2)
{
  __int64 v2; // r13
  __int64 result; // rax
  __int64 *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rsi
  __int64 v9; // r15
  unsigned int PfnPageSizeIndex; // eax
  __int64 v11; // r14
  _QWORD *v12; // rdi
  __int64 v13; // r12
  __int64 v14; // r14
  _QWORD *i; // rdi
  __int64 j; // rdi
  __int64 v17; // rbx
  __int64 *v18; // [rsp+20h] [rbp-79h]
  __int64 v19; // [rsp+30h] [rbp-69h]
  __int128 v20; // [rsp+38h] [rbp-61h] BYREF
  __int64 v21; // [rsp+48h] [rbp-51h]
  _QWORD v22[12]; // [rsp+50h] [rbp-49h] BYREF

  v2 = a2;
  v21 = 0LL;
  v20 = 0LL;
  result = (__int64)memset_0(v22, 0, sizeof(v22));
  v5 = (__int64 *)(a1 + 112);
  v6 = MiPageSizes[v2];
  v21 = 0LL;
  *(_QWORD *)&v20 = 0x3FFFFFFFFFLL;
  *((_QWORD *)&v20 + 1) = 0x3FFFFFFFFFLL;
  v7 = *v5;
  v19 = v6;
  v18 = v5;
  if ( *v5 != 0x3FFFFFFFFFLL )
  {
    do
    {
      v8 = (_QWORD *)(48 * v7 - 0x220000000000LL);
      v9 = *v8 & 0xFFFFFFFFFFLL;
      MiSimpleUnlinkPageEx((__int64)v5, v7);
      PfnPageSizeIndex = MiGetPfnPageSizeIndex((__int64)v8);
      v11 = PfnPageSizeIndex;
      if ( PfnPageSizeIndex == (_DWORD)v2 )
      {
        result = MiSimpleInsertPage((__int64)&v20, v7, 2);
      }
      else
      {
        MiInitializeLargePfnList((__int64)v22);
        v12 = &v22[3 * v11];
        v13 = v11;
        MiSimpleInsertPage((__int64)v12, v7, 2);
        if ( (unsigned int)v11 < (unsigned int)v2 )
        {
          v14 = (unsigned int)(v2 - v11);
          do
          {
            while ( *v12 != 0x3FFFFFFFFFLL )
              MiDemotePfnListChain(v22, (unsigned int)v2);
            v12 += 3;
            --v14;
          }
          while ( v14 );
        }
        result = MiPageSizes[v13];
        for ( i = &v8[6 * result]; v8 != i; v8 += 6 * v19 )
        {
          result = MiSimpleInsertPage((__int64)&v20, v7, 2);
          v7 += v19;
        }
      }
      v5 = v18;
      v7 = v9;
    }
    while ( v9 != 0x3FFFFFFFFFLL );
  }
  for ( j = v20; j != 0x3FFFFFFFFFLL; j = v17 & 0xFFFFFFFFFFLL )
  {
    v17 = *(_QWORD *)(48 * j - 0x220000000000LL);
    MiSimpleUnlinkPageEx((__int64)&v20, j);
    result = MiSimpleInsertPage((__int64)v5, j, 2);
  }
  return result;
}
