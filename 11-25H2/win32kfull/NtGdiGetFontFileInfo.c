/*
 * XREFs of NtGdiGetFontFileInfo @ 0x1400B9510
 * Callers:
 *     <none>
 * Callees:
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x140017728 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x14009AD34 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1401C2EFC (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 */

__int64 __fastcall NtGdiGetFontFileInfo(unsigned int a1, unsigned int a2, __int64 a3, unsigned __int64 a4, void *a5)
{
  __int64 v7; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rdx
  struct PFT *v14; // rcx
  struct PFF *PFFFromId; // rdi
  __int64 v16; // r8
  unsigned int v17; // ebx
  __int64 v18; // r15
  const wchar_t *v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  __int64 v24; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v26[2]; // [rsp+48h] [rbp-30h] BYREF
  int v27; // [rsp+58h] [rbp-20h]

  v7 = a2;
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)v26);
  v12 = *(_QWORD *)(W32GetSessionState(v10, v9, v11) + 96);
  SEMOBJ<17>::SEMOBJ<17>(&v24, v12 + 4872);
  PFFFromId = GetPFFFromId(*(struct PFT **)(v12 + 20416), a1, 0LL);
  v17 = 0;
  if ( !PFFFromId )
  {
    v14 = *(struct PFT **)(v12 + 20408);
    if ( v14 )
      PFFFromId = GetPFFFromId(v14, a1, 0LL);
  }
  if ( !PFFFromId )
  {
    SEMOBJ<17>::vUnlock(&v24);
    goto LABEL_18;
  }
  v26[0] = PFFFromId;
  W32GetSessionState(v14, v13, v16);
  ++*((_DWORD *)PFFFromId + 17);
  v27 = 0;
  SEMOBJ<17>::vUnlock(&v24);
  if ( (unsigned int)v7 >= *((_DWORD *)PFFFromId + 9) )
  {
LABEL_18:
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v26);
    return 87LL;
  }
  _mm_lfence();
  v18 = *(_QWORD *)(*((_QWORD *)PFFFromId + 26) + 8 * v7);
  v19 = &pszFormat;
  if ( *(_QWORD *)(v18 + 80) )
    v19 = *(const wchar_t **)(v18 + 80);
  v20 = -1LL;
  do
    ++v20;
  while ( v19[v20] );
  v21 = 2 * v20 + 2;
  v22 = 2 * v20 + 18;
  v25 = v22;
  if ( a5 )
  {
    GreProbeAndWriteToUntrustedVa(a5, 8uLL, &v25, 8uLL, 8uLL);
    v22 = v25;
  }
  if ( a3 && a4 >= v22 )
  {
    v24 = *(unsigned int *)(v18 + 24);
    GreProbeAndWriteToUntrustedVa((void *)a3, 4uLL, (const void *)v18, 4uLL, 1uLL);
    GreProbeAndWriteToUntrustedVa((void *)(a3 + 4), 4uLL, (const void *)(v18 + 4), 4uLL, 1uLL);
    GreProbeAndWriteToUntrustedVa((void *)(a3 + 8), 8uLL, &v24, 8uLL, 1uLL);
    GreProbeAndWriteToUntrustedVa((void *)(a3 + 16), a4 - 16, v19, v21, 1uLL);
  }
  else
  {
    v17 = 122;
  }
  PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v26);
  return v17;
}
