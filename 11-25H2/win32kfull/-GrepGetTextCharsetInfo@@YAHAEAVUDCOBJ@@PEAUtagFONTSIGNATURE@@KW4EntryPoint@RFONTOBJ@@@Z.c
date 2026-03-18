/*
 * XREFs of ?GrepGetTextCharsetInfo@@YAHAEAVUDCOBJ@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x140080588
 * Callers:
 *     NtGdiGetTextCharsetInfo @ 0x140080680 (NtGdiGetTextCharsetInfo.c)
 *     GreGetTextCharsetInfo @ 0x1403050AC (GreGetTextCharsetInfo.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x140017F90 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z @ 0x1400802FC (-GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z.c)
 */

__int64 __fastcall GrepGetTextCharsetInfo(struct UDCOBJ *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v7; // ebx
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  _DWORD v14[6]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v7 = (unsigned int)GrepGetCharSet(a1) >> 16;
  if ( a2 )
  {
    v9 = *(_QWORD *)a1;
    v14[0] = a4;
    v10 = *(unsigned __int16 *)(v9 + 12);
    v15 = 0LL;
    v14[1] = v10;
    RFONTOBJ::vInit((RFONTOBJ *)&v15, a1, 0, 2u, (const struct RFONTOBJ::Tag *)v14);
    if ( v15 )
    {
      v11 = *(_QWORD *)(v15 + 120);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 32);
        if ( *(_DWORD *)(v12 + 4) > 4u && (v13 = *(int *)(v12 + 196), (_DWORD)v13) )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v13 + v12);
          *(_QWORD *)(a2 + 16) = *(_QWORD *)(v13 + v12 + 16);
        }
        else
        {
          *(_OWORD *)a2 = 0LL;
          *(_DWORD *)(a2 + 16) = 0;
          *(_DWORD *)(a2 + 20) = 0;
        }
        goto LABEL_5;
      }
      EngSetLastError(6u);
    }
    v7 = 1;
LABEL_5:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
  }
  return v7;
}
