/*
 * XREFs of NtGdiPATHOBJ_vEnumStartClipLines @ 0x14033D130
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D3CC4 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400D64F4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400D6674 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400D66EC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1402193FC (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     PATHOBJ_vEnumStartClipLines @ 0x140312620 (PATHOBJ_vEnumStartClipLines.c)
 */

__int64 NtGdiPATHOBJ_vEnumStartClipLines(__int64 a1, struct _CLIPOBJ *a2, struct _SURFOBJ *a3, ...)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v7; // r9
  UMPDOBJ *v8; // rdi
  unsigned int v9; // ebx
  SURFOBJ *v10; // r14
  unsigned __int64 v11; // rax
  PATHOBJ *v12; // rsi
  CLIPOBJ *DDIOBJ; // rdx
  int v14; // eax
  LINEATTRS *v15; // rdi
  PFLOAT_LONG pstyle; // rcx
  struct _LINEATTRS v18; // [rsp+20h] [rbp-B1h] BYREF
  __int64 v19; // [rsp+48h] [rbp-89h]
  SURFOBJ *pso[8]; // [rsp+58h] [rbp-79h] BYREF
  struct W32_PUSH_LOCK *v21[4]; // [rsp+98h] [rbp-39h] BYREF
  UMPDOBJ *v22; // [rsp+B8h] [rbp-19h]
  LINEATTRS *pla; // [rsp+150h] [rbp+7Fh] BYREF
  va_list plaa; // [rsp+150h] [rbp+7Fh]
  va_list va1; // [rsp+158h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(plaa, a3);
  pla = va_arg(va1, LINEATTRS *);
  memset(&v18.iEndCap, 0, 32);
  v19 = 0LL;
  CurrentThread = GreGetCurrentThread(a1, (__int64)a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v21, CurrentThread);
  v8 = v22;
  v9 = 0;
  if ( v22 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a3, (struct _SURFOBJ **)v22, v7);
    v10 = pso[0];
    v11 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v8, a1);
    v12 = (PATHOBJ *)v11;
    if ( v10 && v11 && (unsigned int)bCaptureLINEATTRS((struct _LINEATTRS **)plaa, (struct _LINEATTRS *)&v18.iEndCap) )
    {
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v8, a2, &v10->sizlBitmap);
      v14 = *((_DWORD *)v8 + 111);
      v15 = pla;
      if ( (v14 & 0x100) == 0 )
        goto LABEL_9;
      if ( !DDIOBJ )
      {
LABEL_10:
        if ( v15 )
        {
          pstyle = v15->pstyle;
          if ( pstyle )
            Win32FreePool(pstyle);
        }
        goto LABEL_13;
      }
      if ( pla )
      {
LABEL_9:
        PATHOBJ_vEnumStartClipLines(v12, DDIOBJ, v10, pla);
        goto LABEL_10;
      }
    }
LABEL_13:
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    goto LABEL_14;
  }
  v9 = -1073741811;
LABEL_14:
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v21);
  return v9;
}
