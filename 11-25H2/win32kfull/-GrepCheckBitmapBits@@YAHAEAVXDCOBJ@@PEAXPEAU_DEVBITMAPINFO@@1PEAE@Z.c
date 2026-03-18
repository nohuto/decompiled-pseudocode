/*
 * XREFs of ?GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x14033D42C
 * Callers:
 *     NtGdiCheckBitmapBits @ 0x14033DA20 (NtGdiCheckBitmapBits.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x140312C80 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepCheckBitmapBits(
        struct XDCOBJ *a1,
        __int64 a2,
        struct _DEVBITMAPINFO *a3,
        void *a4,
        unsigned __int8 *a5)
{
  unsigned int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v14; // [rsp+68h] [rbp-A0h] BYREF
  char v15; // [rsp+70h] [rbp-98h]
  int v16; // [rsp+74h] [rbp-94h]
  _BYTE v17[32]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v18; // [rsp+98h] [rbp-70h]
  _BYTE v19[144]; // [rsp+A8h] [rbp-60h] BYREF

  v9 = 0;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v19);
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v19, a1, 0) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
    if ( v12 )
    {
      if ( *(_QWORD *)(v12 + 3208) )
      {
        COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v17, a2, v10, v11);
        if ( v18 )
        {
          v14 = 0LL;
          v15 = 0;
          v16 = 0;
          SURFMEM::bCreateDIB((SURFMEM *)&v14, a3, a4, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( v14 )
            v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int8 *))(v12 + 3208))(
                   *(_QWORD *)(v12 + 1784),
                   *(_QWORD *)(v18 + 24),
                   (v14 + 24) & -(__int64)(v14 != 0),
                   a5);
          SURFMEM::~SURFMEM((SURFMEM *)&v14);
        }
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v17);
      }
      else
      {
        EngSetLastError(0x57u);
      }
    }
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v19);
  return v9;
}
