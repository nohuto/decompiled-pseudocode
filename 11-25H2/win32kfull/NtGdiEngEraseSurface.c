/*
 * XREFs of NtGdiEngEraseSurface @ 0x1401E2D60
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400D64F4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400D66EC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1400D6998 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     EngEraseSurface @ 0x1401E2EE0 (EngEraseSurface.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiEngEraseSurface(struct _SURFOBJ *a1, struct _RECTL *a2, ULONG iColor)
{
  struct _RECTL *v4; // rbx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v7; // r9
  struct UMPDOBJ *v8; // r14
  SURFOBJ *v10; // rsi
  unsigned int v11; // edi
  SURFOBJ *pso[8]; // [rsp+40h] [rbp-F8h] BYREF
  struct W32_PUSH_LOCK *v13[4]; // [rsp+80h] [rbp-B8h] BYREF
  struct UMPDOBJ *v14; // [rsp+A0h] [rbp-98h]
  __int128 v15; // [rsp+F0h] [rbp-48h] BYREF

  v4 = a2;
  v15 = 0LL;
  CurrentThread = GreGetCurrentThread((__int64)a1, (__int64)a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v13, CurrentThread);
  v8 = v14;
  if ( !v14 )
    goto LABEL_2;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)v14, v7);
  v10 = pso[0];
  if ( pso[0] )
  {
    if ( v4 )
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (struct _RECTL *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&v15, v4, 0x10uLL);
      v4 = (struct _RECTL *)&v15;
    }
    if ( (*((_DWORD *)v8 + 111) & 0x100) != 0 && !v4 )
    {
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
LABEL_2:
      UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v13);
      return 0LL;
    }
    v11 = bCheckSurfaceRect(v10, v4, 0LL);
    if ( v11 )
      v11 = EngEraseSurface(v10, v4, iColor);
  }
  else
  {
    v11 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v13);
  return v11;
}
