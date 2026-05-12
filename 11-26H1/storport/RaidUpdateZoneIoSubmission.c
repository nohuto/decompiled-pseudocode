/*
 * XREFs of RaidUpdateZoneIoSubmission @ 0x14007461C
 * Callers:
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUpdateZoneIoMetadata @ 0x14002B1E0 (RaidUpdateZoneIoMetadata.c)
 * Callees:
 *     RaidGetIoStartingLbaAndLength @ 0x140026030 (RaidGetIoStartingLbaAndLength.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     IsZonedWriteRequest @ 0x140034D00 (IsZonedWriteRequest.c)
 *     GetZoneIndexFromUnitAndLba @ 0x140073F50 (GetZoneIndexFromUnitAndLba.c)
 *     PortSrbGetLbaFromCdb @ 0x14012FABC (PortSrbGetLbaFromCdb.c)
 */

void __fastcall RaidUpdateZoneIoSubmission(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rdi
  int v7; // r12d
  unsigned __int8 *v8; // rsi
  char v9; // bp
  unsigned int v10; // r11d
  __int64 i; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // ecx
  unsigned __int8 *v17; // rcx
  char v18; // r11
  unsigned __int8 v19; // bp
  unsigned int v20; // r14d
  __int64 v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // r14
  ULONG_PTR LbaFromCdb; // rax
  __int64 ZoneIndexFromUnitAndLba; // r11
  _QWORD *v30; // rdx
  signed __int8 v31; // al
  char v32; // tt
  _QWORD *v33; // r10
  __int64 v34; // r11
  unsigned int v35; // [rsp+80h] [rbp+18h] BYREF
  __int64 v36; // [rsp+88h] [rbp+20h] BYREF

  if ( a3 )
    a2 = *(_QWORD *)(a3 + 160);
  if ( !a2 )
    return;
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_DWORD *)(v6 + 12);
  if ( *(_BYTE *)(v6 + 2) != 40 )
  {
    v19 = *(_BYTE *)(v6 + 10);
    v8 = (unsigned __int8 *)(v6 + 72);
    goto LABEL_42;
  }
  v8 = 0LL;
  v9 = 0;
  if ( !*(_DWORD *)(v6 + 20) )
  {
    v10 = *(_DWORD *)(v6 + 56);
    for ( i = 0LL; (unsigned int)i < v10; i = (unsigned int)(i + 1) )
    {
      v12 = *(unsigned int *)(v6 + 4 * i + 120);
      if ( (unsigned int)v12 >= 0x80 )
      {
        v13 = *(unsigned int *)(v6 + 16);
        if ( (unsigned int)v12 < (unsigned int)v13 )
        {
          v14 = (unsigned int)v12;
          v15 = *(_DWORD *)(v12 + v6) - 64;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              if ( v16 == 1 && v14 + 40 <= v13 )
              {
                v17 = (unsigned __int8 *)(v14 + v6 + 32);
                if ( !*(_DWORD *)(v14 + v6 + 12) )
                  v17 = v8;
                v8 = v17;
                break;
              }
            }
            else if ( v14 + 56 <= v13 )
            {
              v9 = 1;
              if ( !*(_BYTE *)(v14 + v6 + 10) )
                break;
              v8 = (unsigned __int8 *)(v14 + v6 + 24);
            }
          }
          else if ( v14 + 40 <= v13 )
          {
            if ( *(_BYTE *)(v14 + v6 + 10) )
              v8 = (unsigned __int8 *)(v14 + v6 + 24);
            break;
          }
          if ( v9 )
            break;
        }
      }
    }
  }
  v18 = 0;
  v19 = 0;
  if ( *(_DWORD *)(v6 + 20) )
    goto LABEL_42;
  v20 = *(_DWORD *)(v6 + 56);
  v21 = 0LL;
  if ( !v20 )
    goto LABEL_42;
  while ( 1 )
  {
    v22 = *(unsigned int *)(v6 + 4 * v21 + 120);
    if ( (unsigned int)v22 >= 0x80 )
    {
      v23 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v22 < (unsigned int)v23 )
        break;
    }
LABEL_38:
    v21 = (unsigned int)(v21 + 1);
    if ( (unsigned int)v21 >= v20 )
      goto LABEL_42;
  }
  v24 = (unsigned int)v22;
  v25 = *(_DWORD *)(v22 + v6) - 64;
  if ( v25 )
  {
    v26 = v25 - 1;
    if ( v26 )
    {
      if ( v26 == 1 && v24 + 40 <= v23 )
        goto LABEL_42;
    }
    else if ( v24 + 56 <= v23 )
    {
      v19 = *(_BYTE *)(v24 + v6 + 10);
      v18 = 1;
    }
    goto LABEL_37;
  }
  if ( v24 + 40 > v23 )
  {
LABEL_37:
    if ( v18 )
      goto LABEL_42;
    goto LABEL_38;
  }
  v19 = *(_BYTE *)(v24 + v6 + 10);
LABEL_42:
  v27 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 64LL);
  if ( IsZonedWriteRequest(v27, a2, 0LL, 0LL) )
  {
    LbaFromCdb = PortSrbGetLbaFromCdb(v8, v19);
    ZoneIndexFromUnitAndLba = (unsigned int)GetZoneIndexFromUnitAndLba(v27, LbaFromCdb);
    v30 = (_QWORD *)(v27 + 3440);
    if ( (v7 & 0x1000000) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 176));
    }
    else
    {
      do
      {
        v31 = *(_BYTE *)(*v30 + ZoneIndexFromUnitAndLba);
        if ( !v31 )
          break;
        v32 = *(_BYTE *)(*v30 + ZoneIndexFromUnitAndLba);
      }
      while ( v32 != _InterlockedCompareExchange8(
                       (volatile signed __int8 *)(*v30 + ZoneIndexFromUnitAndLba),
                       v31 - 1,
                       v31) );
    }
    if ( (qword_140172448 & 0x1000) != 0 )
    {
      v36 = 0LL;
      v35 = 0;
      RaidGetIoStartingLbaAndLength(v8, (__int64)&v36, (__int64)&v35);
      DbgLogRequest(*(_QWORD *)(v27 + 24), 46, v36, v35, *(unsigned __int8 *)(v34 + *v33), v6, 0LL);
    }
  }
}
