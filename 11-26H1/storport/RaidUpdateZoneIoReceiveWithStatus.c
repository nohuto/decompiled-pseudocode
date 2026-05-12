/*
 * XREFs of RaidUpdateZoneIoReceiveWithStatus @ 0x14005A824
 * Callers:
 *     RaidStartIoPacket @ 0x140005F70 (RaidStartIoPacket.c)
 * Callees:
 *     RaidGetIoStartingLbaAndLength @ 0x140026030 (RaidGetIoStartingLbaAndLength.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     IsZonedWriteRequest @ 0x140034D00 (IsZonedWriteRequest.c)
 *     GetZoneIndexFromUnitAndLba @ 0x140073F50 (GetZoneIndexFromUnitAndLba.c)
 *     PortSrbGetLbaFromCdb @ 0x14012FABC (PortSrbGetLbaFromCdb.c)
 */

bool __fastcall RaidUpdateZoneIoReceiveWithStatus(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned __int8 *v7; // r14
  char v8; // r11
  unsigned int v9; // r10d
  unsigned int i; // r9d
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  unsigned __int8 *v16; // rcx
  char v17; // r10
  unsigned __int8 v18; // bp
  unsigned int v19; // r11d
  unsigned int j; // r9d
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // rsi
  __int64 LbaFromCdb; // rax
  __int64 ZoneIndexFromUnitAndLba; // r10
  __int64 v29; // rdx
  signed __int8 v30; // al
  signed __int8 v31; // al
  char v32; // tt
  bool v33; // bp
  __int64 v34; // r10
  __int64 v36; // [rsp+90h] [rbp+18h] BYREF
  __int64 v37; // [rsp+98h] [rbp+20h] BYREF

  v36 = a3;
  if ( !a2 )
    return 0;
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(_QWORD *)(v5 + 8);
  if ( *(_BYTE *)(v6 + 2) == 40 )
  {
    v7 = 0LL;
    v8 = 0;
    if ( !*(_DWORD *)(v6 + 20) )
    {
      v9 = *(_DWORD *)(v6 + 56);
      for ( i = 0; i < v9; ++i )
      {
        v11 = *(unsigned int *)(v6 + 4LL * i + 120);
        if ( (unsigned int)v11 >= 0x80 )
        {
          v12 = *(unsigned int *)(v6 + 16);
          if ( (unsigned int)v11 < (unsigned int)v12 )
          {
            v13 = (unsigned int)v11;
            v14 = *(_DWORD *)(v11 + v6) - 64;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                if ( v15 == 1 && v13 + 40 <= v12 )
                {
                  v16 = (unsigned __int8 *)(v13 + v6 + 32);
                  if ( !*(_DWORD *)(v13 + v6 + 12) )
                    v16 = v7;
                  v7 = v16;
                  break;
                }
              }
              else if ( v13 + 56 <= v12 )
              {
                v8 = 1;
                if ( !*(_BYTE *)(v13 + v6 + 10) )
                  break;
                v7 = (unsigned __int8 *)(v13 + v6 + 24);
              }
            }
            else if ( v13 + 40 <= v12 )
            {
              if ( *(_BYTE *)(v13 + v6 + 10) )
                v7 = (unsigned __int8 *)(v13 + v6 + 24);
              break;
            }
            if ( v8 )
              break;
          }
        }
      }
    }
    v17 = 0;
    v18 = 0;
    if ( !*(_DWORD *)(v6 + 20) )
    {
      v19 = *(_DWORD *)(v6 + 56);
      for ( j = 0; j < v19; ++j )
      {
        v21 = *(unsigned int *)(v6 + 4LL * j + 120);
        if ( (unsigned int)v21 >= 0x80 )
        {
          v22 = *(unsigned int *)(v6 + 16);
          if ( (unsigned int)v21 < (unsigned int)v22 )
          {
            v23 = (unsigned int)v21;
            v24 = *(_DWORD *)(v21 + v6) - 64;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                if ( v25 == 1 && v23 + 40 <= v22 )
                  break;
              }
              else if ( v23 + 56 <= v22 )
              {
                v18 = *(_BYTE *)(v23 + v6 + 10);
                v17 = 1;
              }
            }
            else if ( v23 + 40 <= v22 )
            {
              v18 = *(_BYTE *)(v23 + v6 + 10);
              break;
            }
            if ( v17 )
              break;
          }
        }
      }
    }
  }
  else
  {
    v18 = *(_BYTE *)(v6 + 10);
    v7 = (unsigned __int8 *)(v6 + 72);
  }
  v26 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 64LL);
  if ( !IsZonedWriteRequest(v26, a2, 0LL, 0LL) )
    return 0;
  LbaFromCdb = PortSrbGetLbaFromCdb(v7, v18);
  ZoneIndexFromUnitAndLba = (unsigned int)GetZoneIndexFromUnitAndLba(v26, LbaFromCdb);
  while ( 1 )
  {
    v29 = *(_QWORD *)(v26 + 3440);
    v30 = *(_BYTE *)(ZoneIndexFromUnitAndLba + v29);
    if ( v30 == -1 )
      break;
    v32 = *(_BYTE *)(ZoneIndexFromUnitAndLba + v29);
    v31 = _InterlockedCompareExchange8((volatile signed __int8 *)(ZoneIndexFromUnitAndLba + v29), v30 + 1, v30);
    if ( v32 == v31 )
    {
      v33 = v31 != 0;
      goto LABEL_46;
    }
  }
  *(_DWORD *)(v6 + 12) |= 0x1000000u;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 176), 1u);
  v33 = 1;
  ++*(_DWORD *)(*(_QWORD *)(v26 + 24) + 5728LL);
  ++*(_DWORD *)(v26 + 2288);
LABEL_46:
  if ( (qword_140172448 & 0x1000) != 0 )
  {
    v37 = 0LL;
    LODWORD(v36) = 0;
    RaidGetIoStartingLbaAndLength(v7, (__int64)&v37, (__int64)&v36);
    DbgLogRequest(
      *(_QWORD *)(v26 + 24),
      45,
      v37,
      (unsigned int)v36,
      *(unsigned __int8 *)(*(_QWORD *)(v26 + 3440) + v34),
      v6,
      0LL);
  }
  return v33;
}
