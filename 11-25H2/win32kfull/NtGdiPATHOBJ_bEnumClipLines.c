/*
 * XREFs of NtGdiPATHOBJ_bEnumClipLines @ 0x14033CFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x14006B744 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D3CC4 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

_BOOL8 __fastcall NtGdiPATHOBJ_bEnumClipLines(__int64 a1, __int64 a2, volatile void *a3)
{
  SIZE_T v4; // r14
  BOOL v6; // esi
  struct _CLIPLINE *v7; // rbx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v9; // r13
  unsigned __int64 v10; // r15
  struct _CLIPLINE *v11; // rax
  __int64 v12; // rcx
  struct W32_PUSH_LOCK *v14[4]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v15; // [rsp+50h] [rbp-78h]

  v4 = (unsigned int)a2;
  v6 = 0;
  v7 = 0LL;
  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v14, CurrentThread);
  v9 = v15;
  if ( v15 && (unsigned int)(v4 - 33) <= 0x270FFDF )
  {
    v10 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>(v15, a1);
    if ( v10 )
    {
      v11 = (struct _CLIPLINE *)PALLOCNOZ(v4, 1886221639LL);
      v7 = v11;
      if ( v11 )
      {
        memset(v11, 0, (unsigned int)v4);
        if ( (*(_DWORD *)(v9 + 444) & 0x100) != 0 )
        {
          v12 = *(_QWORD *)(v10 + 72);
          v6 = 1;
          if ( v12 )
            v6 = *(_QWORD *)(v12 + 144) == 0LL;
        }
        if ( !v6 )
          v6 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)(v10 + 72), (struct _PATHOBJ *)v10, v4, v11, 0);
      }
    }
    ProbeForWrite(a3, v4, 4u);
    if ( v7 )
      memmove((void *)a3, v7, v4);
    else
      memset_0((void *)a3, 0, v4);
    if ( v7 )
      Win32FreePool(v7);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v14);
    return v6;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v14);
    return 0LL;
  }
}
