/*
 * XREFs of RtlGetSystemGlobalData @ 0x1404853A0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 */

DWORD __cdecl RtlGetSystemGlobalData(RTL_SYSTEM_GLOBAL_DATA_ID DataId, PVOID Buffer, DWORD Size)
{
  __int32 v4; // ecx
  __int64 v5; // rax
  __int32 v7; // ecx
  __int32 v8; // ecx
  __int32 v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  struct _LIST_ENTRY **p_Blink; // rax
  __int16 v15; // ax
  struct _LIST_ENTRY *v16; // rdx
  __int32 v17; // ecx
  __int32 v18; // ecx
  __int32 v19; // ecx
  __int32 v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  char v24; // al
  struct _LIST_ENTRY *Flink; // [rsp+48h] [rbp+20h]

  if ( DataId > GlobalDataIdSystemExpirationDate )
  {
    v17 = DataId - 10;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        if ( Size != 2 )
          return -1073741306;
        v15 = MEMORY[0xFFFFF780000002D6];
        goto LABEL_32;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( !v20 )
        {
          if ( Size == 4 )
          {
            v13 = MEMORY[0xFFFFF780000002E4];
            goto LABEL_22;
          }
          return -1073741306;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          if ( Size == 4 )
          {
            v13 = MEMORY[0xFFFFF780000002F0];
            goto LABEL_22;
          }
          return -1073741306;
        }
        v22 = v21 - 2;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( v23 == 1 )
            {
              if ( Size == 8 )
              {
                v5 = MEMORY[0xFFFFF780000003B8];
                goto LABEL_6;
              }
              return -1073741306;
            }
            return -1073741811;
          }
          if ( Size != 2 )
            return -1073741306;
          v15 = MEMORY[0xFFFFF780000003C6];
LABEL_32:
          *(_WORD *)Buffer = v15;
          return 0;
        }
        if ( Size != 1 )
          return -1073741306;
        v24 = MEMORY[0xFFFFF780000003C6];
      }
      else
      {
        if ( Size != 1 )
          return -1073741306;
        v24 = MEMORY[0xFFFFF780000002EC];
      }
    }
    else
    {
      if ( Size != 1 )
        return -1073741306;
      v24 = MEMORY[0xFFFFF780000002D4];
    }
    *(_BYTE *)Buffer = v24;
    return 0;
  }
  if ( DataId == GlobalDataIdSystemExpirationDate )
  {
    if ( Size == 8 )
    {
      v5 = MEMORY[0xFFFFF780000002C8];
      goto LABEL_6;
    }
    return -1073741306;
  }
  v4 = DataId - 1;
  if ( !v4 )
  {
    if ( Size == 8 )
    {
      v5 = MEMORY[0xFFFFF78000000250];
LABEL_6:
      *(_QWORD *)Buffer = v5;
      return 0;
    }
    return -1073741306;
  }
  v7 = v4 - 1;
  if ( !v7 )
  {
    if ( Size != 8 )
      return -1073741306;
    while ( 1 )
    {
      Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
      if ( MEMORY[0xFFFFF7800000000C] == MEMORY[0xFFFFF78000000010] )
        break;
      _mm_pause();
    }
    goto LABEL_44;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( Size != 8 )
      return -1073741306;
    if ( PsIsCurrentThreadInServerSilo() )
      v16 = PsGetCurrentServerSiloGlobals()[80].Blink + 37;
    else
      v16 = (struct _LIST_ENTRY *)0xFFFFF78000000020LL;
    while ( 1 )
    {
      Flink = v16->Flink;
      if ( (unsigned __int64)v16->Flink >> 32 == LODWORD(v16->Blink) )
        break;
      _mm_pause();
    }
LABEL_44:
    *(_QWORD *)Buffer = Flink;
    return 0;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( Size != 2 )
      return -1073741306;
    v15 = MEMORY[0xFFFFF7800000002C];
    goto LABEL_32;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( Size != 2 )
      return -1073741306;
    v15 = MEMORY[0xFFFFF7800000002E];
    goto LABEL_32;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( Size == 4 )
    {
      if ( PsIsCurrentThreadInServerSilo() )
        p_Blink = &PsGetCurrentServerSiloGlobals()[80].Blink[36].Blink;
      else
        p_Blink = (struct _LIST_ENTRY **)0xFFFFF78000000240LL;
      *(_DWORD *)Buffer = *(_DWORD *)p_Blink;
      return 0;
    }
    return -1073741306;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( Size == 4 )
    {
      v13 = MEMORY[0xFFFFF7800000026C];
      goto LABEL_22;
    }
    return -1073741306;
  }
  if ( v12 == 1 )
  {
    if ( Size == 4 )
    {
      v13 = MEMORY[0xFFFFF78000000270];
LABEL_22:
      *(_DWORD *)Buffer = v13;
      return 0;
    }
    return -1073741306;
  }
  return -1073741811;
}
