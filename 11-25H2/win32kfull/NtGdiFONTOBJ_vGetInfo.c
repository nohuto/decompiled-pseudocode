/*
 * XREFs of NtGdiFONTOBJ_vGetInfo @ 0x140201BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1400D1B14 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1400D6CC4 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 *     FONTOBJ_vGetInfo @ 0x140201CD0 (FONTOBJ_vGetInfo.c)
 */

__int64 __fastcall NtGdiFONTOBJ_vGetInfo(__int64 a1, __int64 a2, char *a3)
{
  unsigned int v4; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  FONTOBJ *v7; // r15
  FONTINFO *v8; // rax
  FONTINFO *v9; // rsi
  struct W32_PUSH_LOCK *v11[4]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v12; // [rsp+40h] [rbp-68h]

  v4 = a2;
  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v11, CurrentThread);
  if ( v12 )
  {
    v7 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(v12, a1);
    if ( v7 && v4 && a3 && v4 <= 0x2710000 )
    {
      v8 = (FONTINFO *)PALLOCNOZ(v4, 1886221639LL);
      v9 = v8;
      if ( v8 )
      {
        memset(v8, 0, v4);
        FONTOBJ_vGetInfo(v7, v4, v8);
        bSafeCopyBits(a3, v9, v4);
        Win32FreePool(v9);
      }
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v11);
    return 0LL;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v11);
    return 3221225485LL;
  }
}
