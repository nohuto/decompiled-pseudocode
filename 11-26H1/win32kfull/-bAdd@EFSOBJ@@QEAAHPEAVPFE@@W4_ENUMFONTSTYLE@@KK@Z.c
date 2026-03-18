/*
 * XREFs of ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1400FFEE4
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1400FF484 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1400FF9B8 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x140100054 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 */

__int64 __fastcall EFSOBJ::bAdd(EFSOBJ *a1, __int64 a2, int a3, char a4, int a5)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  int v7; // r14d
  __int64 v10; // rax
  __int64 v11; // r15
  int v12; // r13d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int8 *v16; // rbx
  unsigned __int8 v17; // cl
  unsigned __int64 v18; // rsi
  int v19; // r14d
  __int64 v21; // rbx
  __int64 v22; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-8h]
  __int64 v24; // [rsp+78h] [rbp+48h] BYREF
  int v25; // [rsp+80h] [rbp+50h]

  v25 = a3;
  v5 = *(_QWORD *)(a2 + 32);
  v6 = 0;
  v7 = a5;
  v24 = 0LL;
  v22 = a2;
  v10 = *(int *)(v5 + 40);
  LODWORD(v24) = a3;
  v23 = v10 + v5 + 16;
  v11 = v10;
  BYTE5(v24) = a5;
  v12 = a4 & 2;
  if ( (a4 & 2) != 0 )
  {
    BYTE4(v24) = 2;
    if ( a5 == 1 )
    {
      if ( (_DWORD)v10 )
        LOBYTE(v10) = *(_BYTE *)(v10 + v5);
      else
        LODWORD(v10) = *(unsigned __int8 *)(v5 + 44);
      BYTE5(v24) = v10;
    }
  }
  EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v24, (struct PFEOBJ *)&v22);
  if ( v12 )
  {
    if ( v7 == 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL) )
      {
        v16 = (unsigned __int8 *)(v11 + v5 + 1);
        v17 = *v16;
        if ( *v16 != 1 )
        {
          v18 = v23;
          v19 = v25;
          do
          {
            if ( v17 > 0xFDu )
              break;
            if ( (unsigned __int64)v16 >= v18 )
              break;
            BYTE5(v24) = v17;
            LODWORD(v24) = v19;
            BYTE4(v24) = 2;
            HIWORD(v24) = 0;
            EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v24, (struct PFEOBJ *)&v22);
            v17 = *++v16;
          }
          while ( *v16 != 1 );
        }
      }
    }
  }
  else if ( *(_DWORD *)(a2 + 132) )
  {
    BYTE4(v24) = 3;
    do
    {
      v21 = *(unsigned __int8 *)(v6 + a2 + 140);
      HIWORD(v24) = *(unsigned __int8 *)(v6 + a2 + 140);
      BYTE5(v24) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v14, v13, v15) + 96) + 19656LL)
                            + 196 * v21
                            + 128);
      EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v24, (struct PFEOBJ *)&v22);
      ++v6;
    }
    while ( v6 < *(_DWORD *)(a2 + 132) );
  }
  return 1LL;
}
