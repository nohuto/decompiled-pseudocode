/*
 * XREFs of BgpRasInitializeRasterizer @ 0x140D1B048
 * Callers:
 *     FopInitializeFonts @ 0x140D19EB8 (FopInitializeFonts.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140356ED0 (FioFwReadBytesAtOffset.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FopGetTableOffsetAndSize @ 0x140D19DB8 (FopGetTableOffsetAndSize.c)
 */

__int64 __fastcall BgpRasInitializeRasterizer(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v3; // rax
  __int64 v4; // rdi
  int TableOffsetAndSize; // edx
  __int16 v6; // cx
  __int16 v7; // cx
  __int16 v8; // ax
  bool v9; // zf
  unsigned __int32 v11; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int32 v12; // [rsp+34h] [rbp-25h] BYREF
  __int128 v13; // [rsp+38h] [rbp-21h] BYREF
  __int128 v14; // [rsp+48h] [rbp-11h]
  int v15; // [rsp+58h] [rbp-1h]
  __int128 v16; // [rsp+60h] [rbp+7h] BYREF
  __int128 v17; // [rsp+70h] [rbp+17h]
  __int128 v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+90h] [rbp+37h]
  __int16 v20; // [rsp+94h] [rbp+3Bh]

  v1 = *(_DWORD *)(a1 + 44);
  v11 = 0;
  v19 = 0;
  v20 = 0;
  v12 = 0;
  v15 = 0;
  v3 = *(_QWORD *)(a1 + 16);
  v16 = 0LL;
  v17 = 0LL;
  v4 = *(_QWORD *)(v3 + 16);
  v18 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  TableOffsetAndSize = FopGetTableOffsetAndSize(v4, v1, 1751474532, (unsigned __int32 *)(a1 + 64), &v11);
  if ( TableOffsetAndSize >= 0 )
  {
    v11 = 0;
    TableOffsetAndSize = FopGetTableOffsetAndSize(v4, v1, 1735162214, (unsigned __int32 *)(a1 + 60), &v11);
    if ( TableOffsetAndSize >= 0 )
    {
      v11 = 0;
      TableOffsetAndSize = FopGetTableOffsetAndSize(v4, v1, 1819239265, (unsigned __int32 *)(a1 + 72), &v11);
      if ( TableOffsetAndSize >= 0 )
      {
        v11 = 0;
        TableOffsetAndSize = FopGetTableOffsetAndSize(v4, v1, 1752003704, (unsigned __int32 *)(a1 + 68), &v11);
        if ( TableOffsetAndSize >= 0 )
        {
          TableOffsetAndSize = FioFwReadBytesAtOffset(v4, *(_DWORD *)(a1 + 64), 0x36u, &v16);
          if ( TableOffsetAndSize >= 0 )
          {
            *(_WORD *)(a1 + 76) = __ROR2__(HIWORD(v19), 8);
            *(_WORD *)(a1 + 120) = __ROR2__(WORD1(v17), 8);
            v11 = 0;
            TableOffsetAndSize = FopGetTableOffsetAndSize(v4, v1, 1751672161, &v12, &v11);
            if ( TableOffsetAndSize >= 0 )
            {
              TableOffsetAndSize = FioFwReadBytesAtOffset(v4, v12, 0x24u, &v13);
              if ( TableOffsetAndSize >= 0 )
              {
                v6 = WORD2(v13);
                *(_WORD *)(a1 + 88) = __ROR2__(HIWORD(v15), 8);
                *(_WORD *)(a1 + 78) = __ROR2__(WORD5(v13), 8);
                v7 = __ROR2__(v6, 8);
                *(_WORD *)(a1 + 84) = __ROR2__(WORD3(v13), 8);
                v8 = __ROR2__(v14, 8);
                v9 = LOBYTE(gLoadedDiffHivesLock.CurrentRunTime) == 0;
                *(_WORD *)(a1 + 82) = v7;
                *(_WORD *)(a1 + 80) = v8;
                *(_WORD *)(a1 + 86) = v7;
                *(_DWORD *)(a1 + 96) = 96;
                if ( v9 )
                {
                  gLoadedDiffHivesLock.TrapFrame = (_KTRAP_FRAME *)100;
                  gLoadedDiffHivesLock.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)&gLoadedDiffHivesLock.StateSaveArea;
                  gLoadedDiffHivesLock.StateSaveArea = (_XSAVE_FORMAT *)&gLoadedDiffHivesLock.StateSaveArea;
                  LOBYTE(gLoadedDiffHivesLock.CurrentRunTime) = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)TableOffsetAndSize;
}
