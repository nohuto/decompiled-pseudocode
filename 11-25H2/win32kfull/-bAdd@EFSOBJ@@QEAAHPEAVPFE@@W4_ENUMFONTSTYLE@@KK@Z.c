/*
 * XREFs of ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x140102B24
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1401025BC (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x140104440 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x140102DBC (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 */

__int64 __fastcall EFSOBJ::bAdd(EFSOBJ *a1, __int64 a2, int a3, char a4, int a5)
{
  __int64 v5; // rax
  unsigned int v6; // edi
  int v7; // r14d
  __int64 v10; // rdx
  char *v11; // rbx
  unsigned __int64 v12; // r13
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int8 *v17; // rbx
  unsigned __int8 v18; // cl
  int v19; // esi
  char v21; // al
  __int64 v22; // rbx
  _QWORD v23[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v24; // [rsp+78h] [rbp+48h] BYREF
  int v25; // [rsp+80h] [rbp+50h]

  v25 = a3;
  v5 = *(_QWORD *)(a2 + 32);
  v6 = 0;
  v7 = a5;
  v24 = 0LL;
  v23[0] = a2;
  v10 = *(int *)(v5 + 40);
  LODWORD(v24) = a3;
  BYTE5(v24) = a5;
  v11 = (char *)(v5 + v10);
  v12 = v5 + v10 + 16;
  v13 = a4 & 2;
  if ( (a4 & 2) != 0 )
  {
    BYTE4(v24) = 2;
    if ( a5 == 1 )
    {
      if ( (_DWORD)v10 )
        v21 = *v11;
      else
        v21 = *(_BYTE *)(v5 + 44);
      BYTE5(v24) = v21;
    }
  }
  EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v24, (struct PFEOBJ *)v23);
  if ( v13 )
  {
    if ( v7 == 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL) )
      {
        v17 = (unsigned __int8 *)(v11 + 1);
        v18 = *v17;
        if ( *v17 != 1 )
        {
          v19 = v25;
          do
          {
            if ( v18 > 0xFDu )
              break;
            if ( (unsigned __int64)v17 >= v12 )
              break;
            BYTE5(v24) = v18;
            LODWORD(v24) = v19;
            BYTE4(v24) = 2;
            HIWORD(v24) = 0;
            EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v24, (struct PFEOBJ *)v23);
            v18 = *++v17;
          }
          while ( *v17 != 1 );
        }
      }
    }
  }
  else if ( *(_DWORD *)(a2 + 132) )
  {
    BYTE4(v24) = 3;
    do
    {
      v22 = *(unsigned __int8 *)(v6 + a2 + 140);
      HIWORD(v24) = *(unsigned __int8 *)(v6 + a2 + 140);
      BYTE5(v24) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v15, v14, v16) + 96) + 19680LL)
                            + 196 * v22
                            + 128);
      EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v24, (struct PFEOBJ *)v23);
      ++v6;
    }
    while ( v6 < *(_DWORD *)(a2 + 132) );
  }
  return 1LL;
}
