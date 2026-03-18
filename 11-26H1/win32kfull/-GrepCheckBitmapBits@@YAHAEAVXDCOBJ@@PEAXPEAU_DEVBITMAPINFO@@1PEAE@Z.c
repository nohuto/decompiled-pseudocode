/*
 * XREFs of ?GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x14032FE90
 * Callers:
 *     NtGdiCheckBitmapBits @ 0x1403304B0 (NtGdiCheckBitmapBits.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1402931A8 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepCheckBitmapBits(
        struct XDCOBJ *a1,
        void *a2,
        struct _DEVBITMAPINFO *a3,
        void *a4,
        unsigned __int8 *a5)
{
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 v12; // [rsp+58h] [rbp-B0h] BYREF
  char v13; // [rsp+60h] [rbp-A8h]
  int v14; // [rsp+64h] [rbp-A4h]
  _BYTE v15[32]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+88h] [rbp-80h]
  _BYTE v17[160]; // [rsp+98h] [rbp-70h] BYREF

  v9 = 0;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v17);
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v17, a1, 0) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 3208) )
      {
        COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v15, a2);
        if ( v16 )
        {
          v12 = 0LL;
          v13 = 0;
          v14 = 0;
          SURFMEM::bCreateDIB((SURFMEM *)&v12, a3, a4, 0LL, 0, 0LL, 0LL, 0, 1, 0);
          if ( v12 )
            v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int8 *))(v10 + 3208))(
                   *(_QWORD *)(v10 + 1784),
                   *(_QWORD *)(v16 + 24),
                   (v12 + 24) & -(__int64)(v12 != 0),
                   a5);
          SURFMEM::~SURFMEM((SURFMEM *)&v12);
        }
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v15);
      }
      else
      {
        EngSetLastError(0x57u);
      }
    }
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v17);
  return v9;
}
