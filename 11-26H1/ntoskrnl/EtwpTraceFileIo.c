/*
 * XREFs of EtwpTraceFileIo @ 0x1402128E0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PsIsServerSilo @ 0x140216B68 (PsIsServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 */

__int64 __fastcall EtwpTraceFileIo(
        __int64 a1,
        struct _EVENT_DATA_DESCRIPTOR *a2,
        ULONG a3,
        unsigned int a4,
        __int16 a5,
        const GUID *ActivityId)
{
  unsigned __int64 v6; // r15
  __int64 v9; // rdi
  __int64 result; // rax
  unsigned int v11; // ebx
  bool i; // zf
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  ULONG v21; // r9d
  __int64 *v22; // r10
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v24; // r8
  unsigned __int8 v25; // al
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v27; // r8
  unsigned __int8 v28; // al

  v6 = a4;
  if ( a1 )
  {
    v9 = *(_QWORD *)(a1 + 1688);
    if ( v9 == -3 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1520LL);
    }
    else if ( v9 )
    {
      if ( !(unsigned __int8)PsIsServerSilo(*(_QWORD *)(a1 + 1688)) )
      {
        do
          v9 = *(_QWORD *)(v9 + 1304);
        while ( !(unsigned __int8)PsIsServerSilo(v9) );
      }
    }
    else
    {
      v9 = 0LL;
    }
  }
  else
  {
    v9 = 0LL;
  }
  if ( EtwpHostSiloState != -4812 && (*(_DWORD *)(EtwpHostSiloState + 4812) & 0x6000000) != 0 )
  {
    v21 = 0;
    if ( a5 == 1100 )
    {
      v22 = KFileEvt_OperationEnd;
    }
    else
    {
      if ( a5 != 1091 )
      {
        switch ( a5 )
        {
          case 1088:
            v22 = KFileEvt_Create;
            goto LABEL_24;
          case 1089:
            v22 = KFileEvt_Cleanup;
            goto LABEL_24;
          case 1090:
            v22 = KFileEvt_Close;
            goto LABEL_24;
          case 1092:
            v22 = KFileEvt_Write;
            goto LABEL_23;
          case 1093:
            v22 = KFileEvt_SetInformation;
            goto LABEL_24;
          case 1094:
            v22 = KFileEvt_Delete;
            goto LABEL_24;
          case 1095:
            v22 = KFileEvt_Rename;
            goto LABEL_24;
          case 1096:
            v22 = KFileEvt_DirEnum;
            goto LABEL_24;
          case 1097:
            v22 = KFileEvt_Flush;
            goto LABEL_24;
          case 1098:
            v22 = (__int64 *)&KFileEvt_QueryInformation;
            goto LABEL_24;
          case 1099:
            v22 = KFileEvt_FSCTL;
            goto LABEL_24;
          case 1101:
            v22 = KFileEvt_DirNotify;
            goto LABEL_24;
          case 1102:
            v22 = KFileEvt_CreateNewFile;
            goto LABEL_24;
          case 1103:
            v22 = KFileEvt_DeletePath;
            goto LABEL_24;
          case 1104:
            v22 = KFileEvt_RenamePath;
            goto LABEL_24;
          case 1105:
            v22 = KFileEvt_SetLinkPath;
            goto LABEL_24;
          case 1106:
            v22 = KFileEvt_SetLink;
            goto LABEL_24;
          case 1107:
            v22 = KFileEvt_SetSecurity;
            goto LABEL_24;
          case 1108:
            v22 = KFileEvt_QuerySecurity;
            goto LABEL_24;
          case 1109:
            v22 = KFileEvt_SetEA;
            goto LABEL_24;
          case 1110:
            v22 = KFileEvt_QueryEA;
            goto LABEL_24;
          default:
            goto LABEL_5;
        }
        goto LABEL_5;
      }
      v22 = KFileEvt_Read;
    }
LABEL_23:
    v21 = 1;
LABEL_24:
    if ( stru_140F03830.SavedApcState.ApcListHead[0].Flink )
    {
      if ( (Flink = stru_140F03830.SavedApcState.ApcListHead[0].Flink[2].Flink, v24 = v22[1], LODWORD(Flink[6].Flink))
        && ((v25 = BYTE4(Flink[6].Flink), *((_BYTE *)v22 + 4) <= v25) || !v25)
        && (((__int64)Flink[6].Blink & 0x40) != 0 && !v24
         || (v24 & (__int64)Flink[7].Flink) != 0
         && (struct _LIST_ENTRY *)(v24 & (__int64)Flink[7].Blink) == Flink[7].Blink)
        || HIWORD(stru_140F03830.SavedApcState.ApcListHead[0].Flink[6].Flink)
        && (Blink = stru_140F03830.SavedApcState.ApcListHead[0].Flink[2].Blink, v27 = v22[1], LODWORD(Blink[6].Flink))
        && ((v28 = BYTE4(Blink[6].Flink), *((_BYTE *)v22 + 4) <= v28) || !v28)
        && (((__int64)Blink[6].Blink & 0x40) != 0 && !v27
         || (v27 & (__int64)Blink[7].Flink) != 0
         && (struct _LIST_ENTRY *)(v27 & (__int64)Blink[7].Blink) == Blink[7].Blink) )
      {
        EtwWriteEx(
          (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Flink,
          (PCEVENT_DESCRIPTOR)v22,
          0LL,
          v21,
          ActivityId,
          0LL,
          a3,
          a2);
      }
    }
  }
LABEL_5:
  result = 1102LL;
  if ( a5 != 1102 )
  {
    v11 = *(_DWORD *)(EtwpHostSiloState + 4520);
    for ( i = !_BitScanForward(&v13, v11); !i; i = !_BitScanForward(&v13, v11) )
    {
      v11 &= v11 - 1;
      v14 = v13;
      result = 32LL * v13;
      v15 = result + EtwpHostSiloState + 4556;
      if ( v15 )
      {
        result = v6 >> 29;
        if ( ((unsigned int)v6 & *(_DWORD *)(v15 + 4 * (v6 >> 29)) & 0x1FFFFFFF) != 0 )
          result = EtwpLogKernelEvent(
                     (_DWORD)a2,
                     EtwpHostSiloState,
                     *(unsigned __int8 *)(EtwpHostSiloState + 2 * v14 + 4504),
                     a3,
                     a5,
                     6297859);
      }
    }
    if ( v9 )
    {
      result = PsGetServerSiloGlobals(v9);
      v16 = *(_QWORD *)(result + 832);
      if ( v16 )
      {
        v17 = *(_DWORD *)(v16 + 4520);
        for ( i = !_BitScanForward((unsigned int *)&v18, v17); !i; i = !_BitScanForward((unsigned int *)&v18, v17) )
        {
          v19 = (unsigned int)v18;
          result = v17 - 1;
          v17 &= result;
          v20 = v16 + 32 * v18 + 4556;
          if ( v20 )
          {
            result = v6 >> 29;
            if ( ((unsigned int)v6 & *(_DWORD *)(v20 + 4 * (v6 >> 29)) & 0x1FFFFFFF) != 0 )
              result = EtwpLogKernelEvent((_DWORD)a2, v16, *(unsigned __int8 *)(v16 + 2 * v19 + 4504), a3, a5, 6297859);
          }
        }
      }
    }
  }
  return result;
}
