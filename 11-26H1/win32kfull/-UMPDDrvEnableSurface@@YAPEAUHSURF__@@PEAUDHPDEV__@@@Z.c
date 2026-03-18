/*
 * XREFs of ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x14034B010
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x140235008 (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_QWORD *__fastcall UMPDDrvEnableSurface(struct DHPDEV__ *a1)
{
  _QWORD *v1; // rdi
  UMPDOBJ *v3; // rbx
  int v4; // eax
  HSURF v5; // rsi
  __int64 v6; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v8; // r8
  unsigned __int64 i; // rdx
  UMPDOBJ *v11; // rcx
  int v12; // edx
  size_t Size; // [rsp+20h] [rbp-39h]
  UMPDOBJ *v14; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v15[32]; // [rsp+38h] [rbp-21h] BYREF
  UMPDOBJ *v16; // [rsp+58h] [rbp-1h]
  _DWORD v17[2]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v18; // [rsp+68h] [rbp+Fh]
  __int64 v19; // [rsp+70h] [rbp+17h]
  struct DHPDEV__ *v20; // [rsp+78h] [rbp+1Fh]
  _BYTE v21[12]; // [rsp+80h] [rbp+27h] BYREF

  v1 = 0LL;
  *(_WORD *)((char *)v17 + 1) = 0;
  HIBYTE(v17[0]) = 0;
  v18 = 0LL;
  *(_QWORD *)v21 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v14);
  v3 = v14;
  *(_WORD *)((char *)v17 + 1) = 0;
  HIBYTE(v17[0]) = 0;
  v18 = 0LL;
  if ( !v14 )
    goto LABEL_34;
  v17[1] = 3;
  LOBYTE(v17[0]) = 0;
  v19 = *(_QWORD *)v14;
  v20 = a1;
  LODWORD(Size) = 8;
  v4 = UMPDOBJ::Thunk(v14, v17, 0x20u, v21, Size);
  v5 = *(HSURF *)v21;
  if ( v4 == -1 )
    v5 = 0LL;
  if ( !v5 )
    goto LABEL_33;
  SURFREF::SURFREF((SURFREF *)v15, v5);
  if ( !v16 )
  {
    v5 = 0LL;
LABEL_32:
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v15);
LABEL_33:
    v1 = v5;
    goto LABEL_34;
  }
  CurrentThread = GreGetCurrentThread(v6);
  if ( !CurrentThread )
    goto LABEL_14;
  v8 = *((_QWORD *)CurrentThread + 41);
  if ( !v8 )
    goto LABEL_14;
  for ( i = 0LL; i < *(_QWORD *)(v8 + 32); ++i )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v8 + 40) + 4 * i) == ((unsigned __int16)v5 | ((unsigned int)v5 >> 8) & 0xFF0000) )
      goto LABEL_15;
  }
  if ( !ThreadRestrictNewHandlesRegion::Protect(*(struct _GRETHREAD **)v8, v5) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    goto LABEL_14;
  }
LABEL_15:
  v11 = v16;
  if ( *((_DWORD *)v16 + 2) != 1 )
  {
    *(_DWORD *)v21 = 42137091;
LABEL_17:
    *(_QWORD *)&v21[4] = 1LL;
    RtlLogUnexpectedCodepath(v21);
LABEL_14:
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v15);
    XUMPDOBJ::~XUMPDOBJ(&v14);
    return 0LL;
  }
  if ( !*((_QWORD *)v16 + 6) )
  {
    *(_DWORD *)v21 = 40996157;
    goto LABEL_17;
  }
  v12 = *((_DWORD *)v16 + 28);
  if ( (v12 & 0x40000) != 0 )
  {
    if ( *((_WORD *)v16 + 50) == 1 && (v12 & 0x29) != 0x29 )
      v5 = 0LL;
    if ( (v12 & 0x4000000) != 0 )
    {
      *(_DWORD *)v21 = 32436196;
      *(_QWORD *)&v21[4] = 1LL;
      RtlLogUnexpectedCodepath(v21);
      v11 = v16;
      v5 = 0LL;
    }
    if ( *((_BYTE *)v3 + 440) )
    {
      if ( v11 )
        v1 = (_QWORD *)((char *)v11 + 24);
      UMPDOBJ::vClient(v11, v1);
    }
    goto LABEL_32;
  }
  *(_DWORD *)v21 = 39632839;
  *(_QWORD *)&v21[4] = 1LL;
  RtlLogUnexpectedCodepath(v21);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v15);
LABEL_34:
  XUMPDOBJ::~XUMPDOBJ(&v14);
  return v1;
}
