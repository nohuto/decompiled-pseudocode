/*
 * XREFs of ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x140261E10
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x14034DAE0 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1401DD3CC (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x14020A220 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1402923EC (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

char __fastcall UmfdHostLifeTimeManager::TryResurrectUmfdAllocations(__int64 a1, struct PFF *a2)
{
  __int64 v2; // rdi
  struct PFF *v3; // rsi
  unsigned int i; // r14d
  __int64 v6; // rbx
  void *v7; // rax
  void *v8; // r15
  void **v9; // rbx
  void *v10; // rax
  void *v11; // rsi
  void *v12; // rax
  unsigned __int64 v13; // r8
  void *v14; // rdx
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+88h] [rbp+48h] BYREF
  unsigned __int64 v18; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp+58h] BYREF

  v2 = *((_QWORD *)a2 + 12);
  v3 = a2;
  v17 = v2;
  v16[0] = a2;
  for ( i = 1; ; ++i )
  {
    v6 = i - 1;
    if ( (unsigned int)v6 >= *((_DWORD *)v3 + 54) )
      break;
    v19 = 0LL;
    v7 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, unsigned __int64 *))(v2 + 2888))(
                   *((_QWORD *)v3 + 13),
                   a1,
                   i,
                   &v19);
    v8 = v7;
    if ( !v7 )
      return 0;
    v9 = (void **)*((_QWORD *)v3 + v6 + 28);
    if ( !UmfdAllocation::UpdateKernelmodeAllocation(v9[4], v7) )
    {
      v13 = v19;
      v14 = v8;
      goto LABEL_16;
    }
    if ( v9[2] )
    {
      v18 = 0LL;
      v10 = (void *)PFFOBJ::QueryFontTree((PFFOBJ *)v16, *((struct DHPDEV__ **)v3 + 13), a1, i, 3u, &v18);
      v11 = v10;
      if ( !v10 )
        return 0;
      if ( !UmfdAllocation::UpdateKernelmodeAllocation(v9[2], v10) )
        goto LABEL_14;
      v3 = (struct PFF *)v16[0];
    }
    if ( v9[6] )
    {
      v18 = 0LL;
      v12 = (void *)PFFOBJ::QueryFontTree((PFFOBJ *)v16, *((struct DHPDEV__ **)v3 + 13), a1, i, 2u, &v18);
      v11 = v12;
      if ( !v12 )
        return 0;
      if ( !UmfdAllocation::UpdateKernelmodeAllocation(v9[6], v12) )
      {
LABEL_14:
        v13 = v18;
        v14 = v11;
LABEL_16:
        PDEVOBJ::Free((PDEVOBJ *)&v17, v14, v13);
        return 0;
      }
      v3 = (struct PFF *)v16[0];
    }
  }
  return 1;
}
