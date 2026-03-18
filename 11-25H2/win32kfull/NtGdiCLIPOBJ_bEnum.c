/*
 * XREFs of NtGdiCLIPOBJ_bEnum @ 0x1400D5C80
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14006EF0C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1400D521C (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1400D6CC4 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 */

__int64 __fastcall NtGdiCLIPOBJ_bEnum(__int64 a1, __int64 a2, void *a3)
{
  int v4; // edi
  unsigned int v5; // r14d
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v8; // ebx
  unsigned __int64 v9; // rax
  __int64 v10; // r9
  XCLIPOBJ *v11; // rbp
  char *v12; // rax
  char *v13; // rsi
  struct W32_PUSH_LOCK *v15[4]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v16; // [rsp+40h] [rbp-78h]
  unsigned int v17; // [rsp+D8h] [rbp+20h] BYREF

  v4 = -1;
  v5 = a2;
  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v15, CurrentThread);
  v8 = 0;
  if ( v16 )
  {
    v9 = UMPDOBJ::GetDDIOBJ<_CLIPOBJ>(v16, a1);
    v11 = (XCLIPOBJ *)v9;
    if ( v9 )
    {
      if ( (*(_DWORD *)(v10 + 444) & 0x100) != 0 && !*(_QWORD *)(v9 + 56) )
      {
        v8 = -1;
        goto LABEL_12;
      }
      if ( v5 <= 0x2710000 )
      {
        v12 = (char *)PALLOCNOZ(v5, 1886221639LL);
        v13 = v12;
        if ( v12 )
        {
          v17 = 0;
          v4 = XCLIPOBJ::bEnum(v11, v5, v12, &v17);
          if ( v4 != -1 && !bSafeCopyBits(a3, v13, v17) )
            v4 = -1;
          Win32FreePool(v13);
        }
      }
    }
    v8 = v4;
  }
LABEL_12:
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v15);
  return v8;
}
