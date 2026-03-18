/*
 * XREFs of NtGdiFONTOBJ_pfdg @ 0x14033CC60
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1400D1B14 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D2000 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D3D78 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400DA83C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x14017D914 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 */

void *__fastcall NtGdiFONTOBJ_pfdg(__int64 a1, __int64 a2)
{
  void *v3; // rbx
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v5; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  struct _FD_GLYPHSET *v9; // rdi
  unsigned int v10; // ebp
  char *v11; // rax
  struct W32_PUSH_LOCK *v12[4]; // [rsp+30h] [rbp-78h] BYREF
  UMPDOBJ *v13; // [rsp+50h] [rbp-58h]
  unsigned __int64 v14; // [rsp+B8h] [rbp+10h] BYREF

  v3 = 0LL;
  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v12, CurrentThread);
  v5 = v13;
  if ( v13 )
  {
    v7 = UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)v13, a1);
    v8 = v7;
    if ( v7 )
    {
      v3 = (void *)*((_QWORD *)v5 + 43);
      if ( !v3 )
      {
        v14 = v7;
        UMPDAcquireRFONTSem((struct RFONTOBJ *)&v14, v5, 0, 0, 0LL);
        v9 = *(struct _FD_GLYPHSET **)(v8 + 472);
        if ( v9 )
        {
          if ( v9 < MmSystemRangeStart )
          {
            v3 = v9;
            *((_QWORD *)v5 + 43) = v9;
          }
          else
          {
            v10 = 4 * (v9->cGlyphsSupported + 4 * (v9->cRuns + 1));
            if ( v10 )
            {
              v11 = UMPDOBJ::_AllocUserMem(v5, v10, 0);
              v3 = v11;
              if ( v11 )
              {
                if ( (unsigned int)WriteFD_GLYPHSET((struct _FD_GLYPHSET *)v11, v9, v10) )
                  *((_QWORD *)v5 + 43) = v3;
                else
                  v3 = 0LL;
              }
            }
          }
        }
        UMPDReleaseRFONTSem((struct RFONTOBJ *)&v14, v5, 0LL, 0LL, 0LL);
        v14 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
      }
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v12);
    return v3;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v12);
    return 0LL;
  }
}
