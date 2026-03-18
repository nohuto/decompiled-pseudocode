/*
 * XREFs of ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x14017E8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401807C4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z @ 0x140180818 (-pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

HBITMAP __fastcall MulCreateDeviceBitmap(struct DHPDEV__ *a1, SIZEL sizl, ULONG a3)
{
  __int64 **v3; // r15
  struct _MDSURF *v4; // rsi
  HBITMAP Bitmap; // r14
  __int64 *v8; // rbx
  __int64 (__fastcall *v10)(__int64, SIZEL); // rax
  HSURF v11; // rax
  HSURF v12; // r13
  SURFOBJ *v13; // rbp
  __int64 v14; // rcx
  _BYTE v15[32]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v16; // [rsp+50h] [rbp-48h]
  HDEV v17; // [rsp+A0h] [rbp+8h] BYREF
  ULONG iFormat; // [rsp+B0h] [rbp+18h]

  iFormat = a3;
  v3 = *(__int64 ***)a1;
  v4 = 0LL;
  Bitmap = 0LL;
  while ( v3 )
  {
    v8 = v3[6];
    if ( (v8[226] & 0x8000000) != 0 )
    {
      v10 = (__int64 (__fastcall *)(__int64, SIZEL))v8[345];
      if ( v10 )
      {
        v11 = (HSURF)((__int64 (__fastcall *)(_QWORD, _QWORD))v10)(v8[223], sizl);
        v12 = v11;
        if ( v11 )
        {
          v13 = EngLockSurface(v11);
          if ( v13 )
          {
            if ( !v4 )
            {
              v4 = pAllocateAndInitializeMDSURF((struct _VDEV *)a1);
              if ( !v4 )
                goto LABEL_17;
              Bitmap = EngCreateBitmap(sizl, 0, iFormat, 1u, 0LL);
              if ( !Bitmap )
              {
                EngFreeMem(v4);
LABEL_17:
                EngUnlockSurface(v13);
                EngDeleteSurface(v12);
                return 0LL;
              }
            }
            v14 = *((_QWORD *)v4 + 1);
            *(_QWORD *)v4 = a1;
            *(_QWORD *)(v14 + 8LL * *((unsigned int *)v3 + 4)) = v13;
            LODWORD(v13[1].hsurf) |= 0x80000u;
            LODWORD(v13[1].hsurf) |= 0x4000u;
            *(_QWORD *)&v13[1].cjBits = Bitmap;
            if ( (*((_DWORD *)v8 + 539) & 0x100) == 0 )
            {
              EPALOBJ::EPALOBJ((EPALOBJ *)&v17, *(HPALETTE *)v8[224]);
              v13[1].hdev = v17;
              v17 = 0LL;
            }
          }
        }
      }
    }
    v3 = (__int64 **)*v3;
  }
  if ( v4 )
  {
    SURFREF::SURFREF((SURFREF *)v15, (HSURF)Bitmap);
    if ( v16 )
    {
      *(_DWORD *)(v16 + 112) |= 0x400000u;
      *(_WORD *)(v16 + 100) = 3;
      *(_QWORD *)(v16 + 24) = v4;
      EngAssociateSurface((HSURF)Bitmap, *((HDEV *)a1 + 4), *((_DWORD *)a1 + 17));
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v15);
  }
  return Bitmap;
}
