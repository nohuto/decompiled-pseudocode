/*
 * XREFs of ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1403388E8
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1403387C0 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x14010BFCC (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1401790F8 (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1401D7B2C (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x140341158 (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 */

char __fastcall UmfdHostLifeTimeManager::TryResurrectUmfdAllocations(__int64 a1, struct PFF *a2)
{
  struct PFF *v2; // rdi
  unsigned int i; // esi
  __int64 v5; // rbx
  struct _IFIMETRICS *v6; // rax
  struct _IFIMETRICS *v7; // r14
  void **v8; // rbx
  struct _IFIMETRICS *v9; // rax
  struct _IFIMETRICS *v10; // rdi
  struct _IFIMETRICS *v11; // rax
  unsigned __int64 v12; // r8
  struct _IFIMETRICS *v13; // rdx
  _QWORD v15[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF
  unsigned __int64 v17; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp+48h] BYREF

  v2 = a2;
  v16 = *((_QWORD *)a2 + 12);
  v15[0] = a2;
  for ( i = 1; ; ++i )
  {
    v5 = i - 1;
    if ( (unsigned int)v5 >= *((_DWORD *)v2 + 54) )
      break;
    v18 = 0LL;
    v6 = PDEVOBJ::QueryFont((PDEVOBJ *)&v16, *((struct DHPDEV__ **)v2 + 13), a1, i, &v18);
    v7 = v6;
    if ( !v6 )
      return 0;
    v8 = (void **)*((_QWORD *)v2 + v5 + 28);
    if ( !UmfdAllocation::UpdateKernelmodeAllocation(v8[4], v6) )
    {
      v12 = v18;
      v13 = v7;
      goto LABEL_16;
    }
    if ( v8[2] )
    {
      v17 = 0LL;
      v9 = (struct _IFIMETRICS *)PFFOBJ::QueryFontTree((PFFOBJ *)v15, *((struct DHPDEV__ **)v2 + 13), a1, i, 3u, &v17);
      v10 = v9;
      if ( !v9 )
        return 0;
      if ( !UmfdAllocation::UpdateKernelmodeAllocation(v8[2], v9) )
        goto LABEL_14;
      v2 = (struct PFF *)v15[0];
    }
    if ( v8[6] )
    {
      v17 = 0LL;
      v11 = (struct _IFIMETRICS *)PFFOBJ::QueryFontTree((PFFOBJ *)v15, *((struct DHPDEV__ **)v2 + 13), a1, i, 2u, &v17);
      v10 = v11;
      if ( !v11 )
        return 0;
      if ( !UmfdAllocation::UpdateKernelmodeAllocation(v8[6], v11) )
      {
LABEL_14:
        v12 = v17;
        v13 = v10;
LABEL_16:
        PDEVOBJ::Free((PDEVOBJ *)&v16, v13, v12);
        return 0;
      }
      v2 = (struct PFF *)v15[0];
    }
  }
  return 1;
}
