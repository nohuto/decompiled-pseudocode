/*
 * XREFs of ?MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z @ 0x140180280
 * Callers:
 *     <none>
 * Callees:
 *     GreDwmUseDeviceBitmapsForMultiAdapter @ 0x14017EC88 (GreDwmUseDeviceBitmapsForMultiAdapter.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401807C4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z @ 0x140180818 (-pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

HBITMAP __fastcall MulCreateDeviceBitmapEx(
        struct DHPDEV__ *a1,
        SIZEL a2,
        __int64 a3,
        __int64 a4,
        struct DHSURF__ *a5,
        unsigned int a6,
        unsigned int a7,
        void **a8)
{
  __int64 v8; // rbx
  DHSURF v10; // r13
  HBITMAP RedirectionDeviceBitmap; // rbp
  __int64 v12; // rdi
  struct DHPDEV__ *v14; // r15
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(_QWORD, SIZEL); // rax
  HSURF v17; // rax
  HSURF v18; // r12
  SURFOBJ *v19; // rax
  SURFOBJ *v20; // r14
  DHSURF v21; // rax
  DHSURF v22; // rax
  HSURF v23; // rcx
  struct DHPDEV__ *v25; // r12
  SURFOBJ *v26; // rax
  struct DHPDEV__ *i; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 (__fastcall *v30)(_QWORD, SIZEL, __int64, __int64); // rax
  HSURF v31; // rax
  int v32; // [rsp+50h] [rbp-68h]
  void *v33; // [rsp+58h] [rbp-60h]
  DHSURF pv; // [rsp+60h] [rbp-58h]
  struct DHPDEV__ *v35; // [rsp+68h] [rbp-50h]
  HDEV v36[9]; // [rsp+70h] [rbp-48h] BYREF
  ULONG iFormatCompat; // [rsp+D0h] [rbp+18h]
  unsigned int v39; // [rsp+D8h] [rbp+20h]

  v39 = a4;
  iFormatCompat = a3;
  v8 = *((_QWORD *)a1 + 4);
  v10 = 0LL;
  RedirectionDeviceBitmap = 0LL;
  v12 = 0LL;
  if ( _bittest((const signed __int32 *)(v8 + 40), 0x1Au) )
  {
    if ( (a4 & 2) != 0 || !(unsigned int)GreDwmUseDeviceBitmapsForMultiAdapter((Gre::Base *)a1) )
      return 0LL;
    a4 = v39;
    v33 = 0LL;
    goto LABEL_41;
  }
  v33 = 0LL;
  if ( (a4 & 2) != 0 )
  {
    if ( a8 )
      v33 = *a8;
LABEL_41:
    a3 = iFormatCompat;
  }
  v35 = 0LL;
  if ( !_bittest((const signed __int32 *)(v8 + 40), 0x1Au) )
    goto LABEL_4;
  for ( i = *(struct DHPDEV__ **)a1; i; i = *(struct DHPDEV__ **)i )
  {
    v28 = *(_QWORD *)(*((_QWORD *)i + 7) + 2568LL);
    if ( v28 && *(_DWORD *)(v28 + 240) == *((_DWORD *)a1 + 26) && *(_DWORD *)(v28 + 244) == *((_DWORD *)a1 + 27) )
    {
      v35 = i;
      goto LABEL_56;
    }
  }
  i = 0LL;
LABEL_56:
  v29 = *(_QWORD *)(v8 + 1784);
  if ( v29 )
    *(_QWORD *)(v29 + 104) = 0LL;
  v14 = i;
  if ( !i )
  {
LABEL_4:
    v14 = *(struct DHPDEV__ **)a1;
    goto LABEL_5;
  }
  while ( 1 )
  {
LABEL_5:
    if ( !v14 )
    {
      if ( a8 && (a4 & 2) == 0 )
        *a8 = v33;
      return RedirectionDeviceBitmap;
    }
    v15 = *((_QWORD *)v14 + 6);
    v32 = 0;
    if ( (*(_DWORD *)(v15 + 1808) & 0x8000000) == 0 )
    {
      v16 = *(__int64 (__fastcall **)(_QWORD, SIZEL))(v15 + 3432);
      if ( !v16 )
        goto LABEL_67;
      v17 = (HSURF)((__int64 (__fastcall *)(_QWORD, _QWORD))v16)(*(_QWORD *)(v15 + 1784), a2);
      v18 = v17;
      if ( !v17 )
        goto LABEL_67;
      v19 = EngLockSurface(v17);
      v20 = v19;
      if ( !v19 )
        break;
      v12 = *(_QWORD *)&v19[6].iBitmapFormat;
      goto LABEL_12;
    }
    if ( (*(_DWORD *)(v15 + 2112) & 0x8000) == 0 )
      goto LABEL_67;
    v30 = *(__int64 (__fastcall **)(_QWORD, SIZEL, __int64, __int64))(v15 + 2760);
    if ( !v30 )
      goto LABEL_67;
    v31 = (HSURF)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v30)(*(_QWORD *)(v15 + 1784), a2, a3, a4);
    v18 = v31;
    if ( !v31 )
      goto LABEL_67;
    v20 = EngLockSurface(v31);
    v32 = 1;
    if ( !v20 )
      break;
LABEL_12:
    if ( v10 )
    {
      v25 = a1;
    }
    else
    {
      v21 = (DHSURF)pAllocateAndInitializeMDSURF((struct _VDEV *)a1);
      pv = v21;
      if ( !v21 )
      {
        if ( !RedirectionDeviceBitmap )
          goto LABEL_17;
LABEL_64:
        EngDeleteSurface((HSURF)RedirectionDeviceBitmap);
        if ( (_DWORD)v10 )
          goto LABEL_17;
        v22 = pv;
        if ( !pv )
          goto LABEL_17;
LABEL_16:
        EngFreeMem(v22);
LABEL_17:
        EngUnlockSurface(v20);
        v23 = v18;
LABEL_18:
        EngDeleteSurface(v23);
        return 0LL;
      }
      RedirectionDeviceBitmap = EngCreateRedirectionDeviceBitmap(v21, a2, iFormatCompat);
      if ( !RedirectionDeviceBitmap )
      {
        v22 = pv;
        goto LABEL_16;
      }
      if ( !EngModifySurface(
              (HSURF)RedirectionDeviceBitmap,
              *((HDEV *)a1 + 4),
              *((_DWORD *)a1 + 17),
              3u,
              pv,
              0LL,
              0,
              0LL) )
        goto LABEL_64;
      LODWORD(v10) = 1;
      v26 = EngLockSurface((HSURF)RedirectionDeviceBitmap);
      if ( !v26 )
        goto LABEL_64;
      v10 = pv;
      v25 = a1;
      *(_QWORD *)pv = a1;
      *((_QWORD *)pv + 1) = pv + 6;
      pv[4] = (struct DHSURF__)v14[4];
      LODWORD(v26[1].hsurf) |= 0x800000u;
      *(_QWORD *)&v26[6].lDelta = v33;
      *(_QWORD *)&v26[6].iBitmapFormat = v12;
      HIDWORD(v26[1].dhpdev) = a6;
      if ( (v39 & 0x10) != 0 )
      {
        if ( (HIDWORD(v20[1].hsurf) & 0x2000) != 0 )
          HIDWORD(v26[1].hsurf) |= 0x2000u;
        v39 &= ~0x10u;
      }
      EngUnlockSurface(v26);
    }
    *(_QWORD *)(*((_QWORD *)v10 + 1) + 8LL * *((unsigned int *)v14 + 4)) = v20;
    if ( v32 )
    {
      LODWORD(v20[1].hsurf) |= 0x80000u;
      HIDWORD(v20[1].hsurf) |= 1u;
    }
    else if ( (v39 & 1) != 0 )
    {
      HIDWORD(v20[1].hsurf) |= 1u;
      *(_QWORD *)&v20[6].lDelta = v33;
      HIDWORD(v20[1].dhpdev) = a6;
      *(_QWORD *)&v20[6].iBitmapFormat = v12;
    }
    else if ( (v39 & 2) != 0 )
    {
      HIDWORD(v20[1].hsurf) |= 8u;
    }
    HIDWORD(v20[1].hsurf) |= 4u;
    LODWORD(v20[1].hsurf) |= 0x4000u;
    *(_QWORD *)&v20[1].cjBits = RedirectionDeviceBitmap;
    if ( (*(_DWORD *)(v15 + 2156) & 0x100) == 0 )
    {
      EPALOBJ::EPALOBJ((EPALOBJ *)v36, **(HPALETTE **)(v15 + 1792));
      v20[1].hdev = v36[0];
      v36[0] = 0LL;
    }
    LODWORD(v20[1].hsurf) |= 0x800000u;
    GreMarkUndeletableBitmap(v20->hsurf);
    if ( v35 )
    {
      a4 = v39;
      a3 = iFormatCompat;
      if ( v14 == v35 )
        v14 = v25;
      v14 = *(struct DHPDEV__ **)v14;
      if ( v14 != v35 )
        continue;
    }
    v14 = *(struct DHPDEV__ **)v14;
    a4 = v39;
    a3 = iFormatCompat;
  }
  EngDeleteSurface(v18);
LABEL_67:
  if ( RedirectionDeviceBitmap )
  {
    v23 = (HSURF)RedirectionDeviceBitmap;
    goto LABEL_18;
  }
  return 0LL;
}
