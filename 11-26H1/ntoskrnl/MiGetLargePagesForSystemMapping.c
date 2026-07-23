/*
 * XREFs of MiGetLargePagesForSystemMapping @ 0x140B4E990
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1402A46AC (MiMakeZeroedPageTablesEx.c)
 * Callees:
 *     MiInitializeDemandCoalesceContext @ 0x140206BB0 (MiInitializeDemandCoalesceContext.c)
 *     MiThreadIdealNode @ 0x1402F0BA4 (MiThreadIdealNode.c)
 *     MiObtainSystemCharges @ 0x14033CB70 (MiObtainSystemCharges.c)
 *     MiAllocateLargeZeroPages @ 0x1403D0630 (MiAllocateLargeZeroPages.c)
 *     MiReturnSystemCharges @ 0x1404AC8F8 (MiReturnSystemCharges.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetLargePagesForSystemMapping(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // r10
  unsigned __int64 v6; // rax
  __int64 v8; // r15
  int v9; // r12d
  unsigned __int64 v10; // rdi
  unsigned int v11; // r11d
  int v12; // eax
  int v13; // eax
  __int64 v14; // r8
  bool v15; // zf
  int v16; // r14d
  int *v17; // rsi
  int *v18; // r13
  __int64 v19; // rdi
  unsigned int v21[2]; // [rsp+30h] [rbp-89h] BYREF
  __int64 v22; // [rsp+38h] [rbp-81h]
  unsigned __int64 v23; // [rsp+40h] [rbp-79h]
  __int64 v24; // [rsp+48h] [rbp-71h]
  int v25; // [rsp+50h] [rbp-69h]
  int v26; // [rsp+54h] [rbp-65h]
  __int64 v27; // [rsp+58h] [rbp-61h]
  __int64 v28; // [rsp+60h] [rbp-59h]
  __int64 v29; // [rsp+68h] [rbp-51h]
  _OWORD *v30; // [rsp+70h] [rbp-49h]
  __int64 v31; // [rsp+78h] [rbp-41h]
  __int64 v32; // [rsp+80h] [rbp-39h]
  _OWORD v33[3]; // [rsp+90h] [rbp-29h] BYREF
  __int64 v34; // [rsp+C0h] [rbp+7h]
  int v35; // [rsp+C8h] [rbp+Fh]

  v21[1] = 0;
  v28 = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  v35 = 0;
  v4 = (a3 + 1) & 0xFFFFFFFFFFE00000uLL;
  v5 = a2;
  v6 = (a2 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  memset(v33, 0, sizeof(v33));
  if ( v6 >= v4 )
    return 1075380276LL;
  v8 = *(_QWORD *)(a1 + 96);
  v9 = 0;
  v10 = (v4 - v6) >> 12;
  v11 = 1;
  if ( (*(_DWORD *)(a1 + 128) & 8) == 0 && *(_QWORD *)(v8 + 23448) )
  {
    if ( !(unsigned int)MiObtainSystemCharges(*(ULONG **)(a1 + 96), v10, *(_DWORD *)(a1 + 120)) )
      return 3221225626LL;
    *(_QWORD *)(a1 + 104) += v10;
    v11 = 1;
    v5 = a2;
    v9 = 1;
  }
  v12 = *(_DWORD *)(a1 + 124);
  if ( v12 )
    v13 = v12 - 1;
  else
    v13 = MiThreadIdealNode(0LL, 0LL);
  v14 = (unsigned __int16)KeNumberNodes;
  v15 = (*(_DWORD *)(a1 + 128) & 0x400) == 0;
  v23 = v10;
  if ( !v15 )
    v14 = v11;
  v21[0] = 8;
  v16 = 0;
  v22 = v8;
  v25 = v13;
  v26 = 4;
  v17 = (int *)(qword_140E2D810 + 4LL * v13 * (unsigned int)(unsigned __int16)KeNumberNodes);
  v29 = v5;
  v27 = -1LL;
  v18 = &v17[v14];
  v24 = 512LL;
  MiInitializeDemandCoalesceContext(v33, 512LL, v10 >> 9, v11);
  v32 = a1;
  v30 = v33;
  while ( 1 )
  {
    MiAllocateLargeZeroPages(v21);
    v19 = v23 - v31;
    if ( v23 == v31 )
      break;
    if ( ++v17 == v18 )
      goto LABEL_18;
    v25 = *v17;
  }
  v16 = 1;
LABEL_18:
  if ( v9 )
  {
    if ( v19 )
    {
      MiReturnSystemCharges(v8, v23 - v31, v23 - v31, *(_DWORD *)(a1 + 120));
      *(_QWORD *)(a1 + 104) -= v19;
    }
  }
  return v16 == 0 ? 0xC0000017 : 0;
}
