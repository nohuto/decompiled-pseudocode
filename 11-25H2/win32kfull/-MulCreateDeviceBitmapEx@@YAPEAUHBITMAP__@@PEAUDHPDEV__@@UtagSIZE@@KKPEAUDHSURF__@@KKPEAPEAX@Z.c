/*
 * XREFs of ?MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z @ 0x140181AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z @ 0x140181FB4 (-pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z.c)
 *     GreDwmUseDeviceBitmapsForMultiAdapter @ 0x140182018 (GreDwmUseDeviceBitmapsForMultiAdapter.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

HBITMAP __fastcall MulCreateDeviceBitmapEx(
        struct DHPDEV__ *a1,
        SIZEL a2,
        __int64 a3,
        __int64 a4,
        struct DHSURF__ *a5,
        unsigned int a6,
        LONG a7,
        void **a8)
{
  __int64 v8; // rbx
  DHSURF dhsurf; // r13
  HBITMAP RedirectionDeviceBitmap; // rbp
  __int64 v12; // rdi
  _QWORD *v14; // r15
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(_QWORD, SIZEL); // rax
  HSURF v17; // rax
  HSURF v18; // r12
  SURFOBJ *v19; // rax
  __int64 v20; // rdx
  SURFOBJ *v21; // r14
  struct DHPDEV__ *v22; // r12
  DHSURF v23; // rax
  SURFOBJ *v24; // rax
  HSURF v26; // rcx
  __int64 v27; // rdx
  _QWORD *i; // rcx
  __int64 v29; // rax
  __int64 (__fastcall *v30)(_QWORD, SIZEL, __int64, __int64); // rax
  HSURF v31; // rax
  int v32; // [rsp+50h] [rbp-58h]
  int v33; // [rsp+54h] [rbp-54h]
  void *v34; // [rsp+58h] [rbp-50h]
  _QWORD *v35; // [rsp+60h] [rbp-48h]
  ULONG iFormatCompat; // [rsp+C0h] [rbp+18h]
  unsigned int v38; // [rsp+C8h] [rbp+20h]

  v38 = a4;
  iFormatCompat = a3;
  v8 = *((_QWORD *)a1 + 4);
  dhsurf = 0LL;
  RedirectionDeviceBitmap = 0LL;
  v12 = 0LL;
  if ( _bittest((const signed __int32 *)(v8 + 40), 0x1Au) )
  {
    if ( (a4 & 2) != 0 || !(unsigned int)GreDwmUseDeviceBitmapsForMultiAdapter() )
      return 0LL;
    v34 = 0LL;
    a4 = v38;
    goto LABEL_36;
  }
  v34 = 0LL;
  if ( (a4 & 2) != 0 )
  {
    if ( a8 )
      v34 = *a8;
LABEL_36:
    a3 = iFormatCompat;
  }
  v35 = 0LL;
  if ( !_bittest((const signed __int32 *)(v8 + 40), 0x1Au) )
    goto LABEL_4;
  for ( i = *(_QWORD **)a1; i; i = (_QWORD *)*i )
  {
    v27 = *(_QWORD *)(i[7] + 2568LL);
    if ( v27 && *(_DWORD *)(v27 + 240) == *((_DWORD *)a1 + 26) && *(_DWORD *)(v27 + 244) == *((_DWORD *)a1 + 27) )
    {
      v35 = i;
      goto LABEL_57;
    }
  }
  i = 0LL;
LABEL_57:
  v29 = *(_QWORD *)(v8 + 1784);
  if ( v29 )
    *(_QWORD *)(v29 + 104) = 0LL;
  v14 = i;
  if ( !i )
LABEL_4:
    v14 = *(_QWORD **)a1;
  while ( v14 )
  {
    v15 = v14[6];
    v32 = 0;
    if ( (*(_DWORD *)(v15 + 1808) & 0x8000000) != 0 )
    {
      if ( (*(_DWORD *)(v15 + 2112) & 0x8000) == 0 )
        goto LABEL_41;
      v30 = *(__int64 (__fastcall **)(_QWORD, SIZEL, __int64, __int64))(v15 + 2760);
      if ( !v30 )
        goto LABEL_41;
      v31 = (HSURF)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v30)(*(_QWORD *)(v15 + 1784), a2, a3, a4);
      v18 = v31;
      if ( !v31 )
        goto LABEL_39;
      v21 = EngLockSurface(v31);
      v32 = 1;
    }
    else
    {
      v16 = *(__int64 (__fastcall **)(_QWORD, SIZEL))(v15 + 3432);
      if ( !v16 )
        goto LABEL_41;
      v17 = (HSURF)((__int64 (__fastcall *)(_QWORD, _QWORD))v16)(*(_QWORD *)(v15 + 1784), a2);
      v18 = v17;
      if ( !v17 )
      {
LABEL_39:
        if ( v18 )
          EngDeleteSurface(v18);
LABEL_41:
        if ( !RedirectionDeviceBitmap )
          return 0LL;
        v26 = (HSURF)RedirectionDeviceBitmap;
LABEL_43:
        EngDeleteSurface(v26);
        return 0LL;
      }
      v19 = EngLockSurface(v17);
      v21 = v19;
      if ( v19 )
      {
        v12 = *(_QWORD *)&v19[6].iBitmapFormat;
        goto LABEL_12;
      }
    }
    if ( !v21 )
      goto LABEL_39;
LABEL_12:
    if ( dhsurf )
    {
      v22 = a1;
    }
    else
    {
      v33 = 0;
      v23 = (DHSURF)pAllocateAndInitializeMDSURF((struct _VDEV *)a1);
      dhsurf = v23;
      if ( !v23 || (RedirectionDeviceBitmap = EngCreateRedirectionDeviceBitmap(v23, a2, iFormatCompat)) == 0LL )
      {
        if ( RedirectionDeviceBitmap )
        {
LABEL_71:
          EngDeleteSurface((HSURF)RedirectionDeviceBitmap);
          if ( !v33 )
            goto LABEL_72;
        }
        else
        {
LABEL_72:
          if ( dhsurf )
            EngFreeMem(dhsurf);
        }
        EngUnlockSurface(v21);
        v26 = v18;
        goto LABEL_43;
      }
      if ( !EngModifySurface(
              (HSURF)RedirectionDeviceBitmap,
              *((HDEV *)a1 + 4),
              *((_DWORD *)a1 + 17),
              3u,
              dhsurf,
              0LL,
              0,
              0LL) )
        goto LABEL_71;
      v24 = EngLockSurface((HSURF)RedirectionDeviceBitmap);
      v33 = 1;
      if ( !v24 )
        goto LABEL_71;
      v22 = a1;
      *((_QWORD *)dhsurf + 1) = dhsurf + 6;
      *(_QWORD *)dhsurf = a1;
      dhsurf[4] = (struct DHSURF__)v14[2];
      LODWORD(v24[1].hsurf) |= 0x800000u;
      *(_QWORD *)&v24[6].lDelta = v34;
      *(_QWORD *)&v24[6].iBitmapFormat = v12;
      HIDWORD(v24[1].dhpdev) = a6;
      if ( (v38 & 0x10) != 0 )
      {
        if ( (HIDWORD(v21[1].hsurf) & 0x2000) != 0 )
          HIDWORD(v24[1].hsurf) |= 0x2000u;
        v38 &= ~0x10u;
      }
      EngUnlockSurface(v24);
    }
    *(_QWORD *)(*((_QWORD *)dhsurf + 1) + 8LL * *((unsigned int *)v14 + 4)) = v21;
    if ( v32 )
    {
      LODWORD(v21[1].hsurf) |= 0x80000u;
      HIDWORD(v21[1].hsurf) |= 1u;
    }
    else if ( (v38 & 1) != 0 )
    {
      HIDWORD(v21[1].hsurf) |= 1u;
      *(_QWORD *)&v21[6].lDelta = v34;
      HIDWORD(v21[1].dhpdev) = a6;
      *(_QWORD *)&v21[6].iBitmapFormat = v12;
    }
    else if ( (v38 & 2) != 0 )
    {
      HIDWORD(v21[1].hsurf) |= 8u;
    }
    HIDWORD(v21[1].hsurf) |= 4u;
    LODWORD(v21[1].hsurf) |= 0x4000u;
    *(_QWORD *)&v21[1].cjBits = RedirectionDeviceBitmap;
    if ( (*(_DWORD *)(v15 + 2156) & 0x100) == 0 )
    {
      LOBYTE(v20) = 8;
      v21[1].hdev = (HDEV)HmgShareLockCheck(**(_QWORD **)(v15 + 1792), v20);
    }
    LODWORD(v21[1].hsurf) |= 0x800000u;
    GreMarkUndeletableBitmap(v21->hsurf);
    if ( v35 )
    {
      v14 = v14 == v35 ? *(_QWORD **)v22 : (_QWORD *)*v14;
      a4 = v38;
      a3 = iFormatCompat;
      if ( v14 != v35 )
        continue;
    }
    v14 = (_QWORD *)*v14;
    a4 = v38;
    a3 = iFormatCompat;
  }
  if ( a8 && (a4 & 2) == 0 )
    *a8 = v34;
  return RedirectionDeviceBitmap;
}
