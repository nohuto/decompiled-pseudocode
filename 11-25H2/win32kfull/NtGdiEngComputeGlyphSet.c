/*
 * XREFs of NtGdiEngComputeGlyphSet @ 0x14017CE30
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D3D78 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     EngComputeGlyphSet @ 0x14017CFE0 (EngComputeGlyphSet.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x14017D914 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 */

__int64 __fastcall NtGdiEngComputeGlyphSet(__int64 nCodePage, __int64 nFirstChar, INT cChars)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  INT v6; // ebp
  INT v7; // r15d
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v9; // r14
  FD_GLYPHSET *v10; // rax
  struct _FD_GLYPHSET *v11; // rsi
  unsigned int cjThis; // ebp
  __int64 v13; // rax
  struct W32_PUSH_LOCK *v15[4]; // [rsp+20h] [rbp-88h] BYREF
  UMPDOBJ *v16; // [rsp+40h] [rbp-68h]

  v3 = 0LL;
  v5 = 0LL;
  v6 = nFirstChar;
  v7 = nCodePage;
  CurrentThread = GreGetCurrentThread(nCodePage, nFirstChar);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v15, CurrentThread);
  v9 = v16;
  if ( v16 )
  {
    v10 = EngComputeGlyphSet(v7, v6, cChars);
    v11 = v10;
    if ( v10 )
    {
      cjThis = v10->cjThis;
      if ( v10->cjThis )
      {
        v13 = (__int64)UMPDOBJ::_AllocUserMem(v9, cjThis, 0);
        v5 = v13;
        if ( v13 )
          v5 = -(__int64)((unsigned int)WriteFD_GLYPHSET((struct _FD_GLYPHSET *)v13, v11, cjThis) != 0) & v13;
      }
      EngFreeMem(v11);
    }
    v3 = v5;
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v15);
  return v3;
}
