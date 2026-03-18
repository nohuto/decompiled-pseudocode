/*
 * XREFs of ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x140152360
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x140044080 (EngFreeMem.c)
 *     EngAllocMem @ 0x140044130 (EngAllocMem.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1400C3A40 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C4690 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bInitGdiInfo@@YAHPEAU_devicemodeW@@PEAU_GDIINFO@@@Z @ 0x1401524EC (-bInitGdiInfo@@YAHPEAU_devicemodeW@@PEAU_GDIINFO@@@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

struct DHPDEV__ *__fastcall StubDispEnablePDEV(
        struct _devicemodeW *a1,
        unsigned __int16 *a2,
        __int64 a3,
        HSURF *a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        struct tagDEVINFO *a8)
{
  size_t v9; // r14
  _DWORD *v10; // rdi
  size_t v12; // r8
  __int64 v13; // rbx
  __int64 *v14; // [rsp+58h] [rbp-B0h] BYREF
  int v15; // [rsp+60h] [rbp-A8h]
  struct _GDIINFO Src; // [rsp+68h] [rbp-A0h] BYREF

  v9 = 320LL;
  memset(&Src, 0, sizeof(Src));
  v10 = 0LL;
  if ( bInitGdiInfo(a1, &Src) )
  {
    v10 = EngAllocMem(1u, 0x20u, 0x62664444u);
    if ( v10 )
    {
      v12 = 312LL;
      if ( a7 <= 0x138 )
        v12 = a7;
      memmove(a8, &unk_140270D90, v12);
      if ( a5 < 0x140 )
        v9 = a5;
      memmove(a6, &Src, v9);
      v13 = 0LL;
      v10[4] = Src.ulHorzRes;
      v10[5] = Src.ulVertRes;
      v15 = 0;
      v14 = 0LL;
      if ( (unsigned int)PALMEMOBJ::bCreatePalette(
                           (struct OBJECT **)&v14,
                           8,
                           0,
                           0LL,
                           0xFF0000u,
                           0xFF00u,
                           0xFFu,
                           0x1000200u,
                           1) )
      {
        v15 = 1;
        v13 = *v14;
      }
      PALMEMOBJ::~PALMEMOBJ(&v14);
      *((_QWORD *)a8 + 37) = v13;
      *((_QWORD *)v10 + 3) = v13;
      if ( !*((_QWORD *)a8 + 37) )
      {
        EngFreeMem(v10);
        return 0LL;
      }
    }
  }
  return (struct DHPDEV__ *)v10;
}
