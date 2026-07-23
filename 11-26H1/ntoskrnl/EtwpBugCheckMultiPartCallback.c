/*
 * XREFs of EtwpBugCheckMultiPartCallback @ 0x1406CAD00
 * Callers:
 *     <none>
 * Callees:
 *     KeTestSpinLock @ 0x140441C80 (KeTestSpinLock.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void __fastcall EtwpBugCheckMultiPartCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        GUID *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  unsigned __int64 *v4; // rbx
  __int64 v6; // rcx
  _QWORD **v7; // rsi
  unsigned __int64 v8; // r8
  __int64 v9; // r14
  unsigned int v10; // ebp
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // r9
  _DWORD *v14; // rdx
  int v15; // eax
  int v16; // edx

  v4 = *(unsigned __int64 **)&ReasonSpecificData[3].Data1;
  *(_DWORD *)ReasonSpecificData[2].Data4 = 0;
  ReasonSpecificData[1] = EtwSecondaryDumpDataGuid;
  if ( !v4 )
  {
    v4 = &ExpSysDbgLock.Spare35[1];
    *(_OWORD *)&ExpSysDbgLock.Spare35[1] = 0LL;
    *(_QWORD *)&ReasonSpecificData[3].Data1 = &ExpSysDbgLock.Spare35[1];
  }
  if ( *((_BYTE *)v4 + 2) )
  {
    v7 = (_QWORD **)(v4 + 1);
    v8 = v4[1];
    if ( v8 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 712) + 8LL * *(unsigned __int16 *)v4);
      v14 = *(_DWORD **)(v8 + 16);
      if ( v14[2] <= *v14 )
        v15 = v14[2];
      else
        v15 = v14[1];
      v14[12] = v15;
      *(_DWORD *)ReasonSpecificData[2].Data4 = v15;
      if ( *(_DWORD *)ReasonSpecificData->Data4 )
        *(_QWORD *)&ReasonSpecificData[2].Data1 = v14;
      v12 = (_QWORD *)**v7;
      if ( v12 == (_QWORD *)(v13 + 80) )
        v12 = 0LL;
LABEL_26:
      *v7 = v12;
      if ( !v12 )
LABEL_27:
        ++*(_WORD *)v4;
    }
    else
    {
      while ( (unsigned int)*(unsigned __int16 *)v4 < *(_DWORD *)(EtwpHostSiloState + 16) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 712) + 8LL * *(unsigned __int16 *)v4);
        if ( (v9 & 1) == 0
          && *(int *)(v9 + 12) < 0
          && (*(_DWORD *)(v9 + 300) & 1) == 0
          && KeTestSpinLock((PKSPIN_LOCK)(v9 + 696)) )
        {
          v10 = *(unsigned __int16 *)(v9 + 136) + 48;
          *(_DWORD *)ReasonSpecificData[2].Data4 = v10;
          if ( !*(_DWORD *)ReasonSpecificData->Data4 )
            goto LABEL_17;
          if ( v10 <= *(_DWORD *)&ReasonSpecificData->Data4[4] )
          {
            v11 = *(_QWORD *)&ReasonSpecificData->Data1;
            *(_DWORD *)v11 = 32223201;
            *(_DWORD *)(v11 + 4) = *(_DWORD *)v9;
            *(_DWORD *)(v11 + 16) = *(_DWORD *)(v9 + 4);
            *(_DWORD *)(v11 + 12) = *(_DWORD *)(v9 + 200);
            *(_QWORD *)(v11 + 24) = *(_QWORD *)(v9 + 792);
            *(_DWORD *)(v11 + 8) = *(_DWORD *)(v9 + 12);
            *(_DWORD *)(v11 + 20) = *(unsigned __int16 *)(v9 + 136);
            *(_OWORD *)(v11 + 32) = *(_OWORD *)(v9 + 304);
            memmove((void *)(v11 + 48), *(const void **)(v9 + 144), *(unsigned __int16 *)(v9 + 136));
            *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
            *(_DWORD *)ReasonSpecificData[2].Data4 = v10;
            *(_DWORD *)ReasonSpecificData->Data4 = v10;
LABEL_17:
            v12 = *(_QWORD **)(v9 + 80);
            if ( v12 != (_QWORD *)(v9 + 80) )
              goto LABEL_26;
            *v7 = 0LL;
            goto LABEL_27;
          }
        }
        ++*(_WORD *)v4;
      }
    }
  }
  else
  {
    *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
    if ( *(_DWORD *)ReasonSpecificData->Data4 )
    {
      v6 = *(_QWORD *)&ReasonSpecificData->Data1;
      *(_QWORD *)(v6 + 16) = stru_140F03830.AffinityVersion;
      *(_DWORD *)(v6 + 8) = HIDWORD(stru_140F03830.CycleTime);
      *(_QWORD *)(v6 + 24) = *(_QWORD *)&stru_140F03830.CurrentRunTime;
      *(_DWORD *)v6 = KeMaximumIncrement;
      *(_DWORD *)(v6 + 4) = NtBuildNumber;
      *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
      *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
      *(_DWORD *)ReasonSpecificData->Data4 = 32;
    }
    *((_BYTE *)v4 + 2) = 1;
    v7 = (_QWORD **)(v4 + 1);
  }
  v16 = *(_DWORD *)ReasonSpecificData[3].Data4;
  if ( (unsigned int)*(unsigned __int16 *)v4 >= *(_DWORD *)(EtwpHostSiloState + 16) )
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 = v16 & 0xFFFFFFFE;
    *v7 = 0LL;
    *((_BYTE *)v4 + 2) = 0;
    *(_WORD *)v4 = 0;
  }
  else
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 = v16 | 1;
  }
}
