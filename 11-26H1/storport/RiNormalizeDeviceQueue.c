/*
 * XREFs of RiNormalizeDeviceQueue @ 0x140022EC0
 * Callers:
 *     RaidAdapterRestartQueues @ 0x140010F40 (RaidAdapterRestartQueues.c)
 *     RaidStartNextIoPacket @ 0x140018C10 (RaidStartNextIoPacket.c)
 *     RaidNormalizeDeviceQueue @ 0x140022D20 (RaidNormalizeDeviceQueue.c)
 *     RaidUnitRestartQueue @ 0x140029650 (RaidUnitRestartQueue.c)
 *     StorPortUnitActiveConditionStep1 @ 0x14002BDC0 (StorPortUnitActiveConditionStep1.c)
 * Callees:
 *     RiGetEnqueueReason @ 0x140023E10 (RiGetEnqueueReason.c)
 *     RiDecrementDeviceQueueCount @ 0x1400241C8 (RiDecrementDeviceQueueCount.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     GetZoneIndexFromUnitAndLba @ 0x140073F50 (GetZoneIndexFromUnitAndLba.c)
 *     PortSrbGetLbaFromCdb @ 0x14012FABC (PortSrbGetLbaFromCdb.c)
 */

char *__fastcall RiNormalizeDeviceQueue(__int64 a1, char a2)
{
  _QWORD *v2; // r14
  char *v4; // rsi
  _QWORD *v6; // rbx
  ULONG v7; // r9d
  struct _SLIST_ENTRY *v8; // r10
  struct _SLIST_ENTRY *v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rax
  PSLIST_ENTRY EntrySList; // rax
  char *v15; // rbx
  PSLIST_ENTRY v17; // rax
  __int64 v18; // rdx
  struct _SLIST_ENTRY *Next; // r8
  char *v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rax
  char v25; // cl
  char v26; // bp
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  char **v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r9
  unsigned int v37; // ebp
  __int64 i; // r10
  __int64 v39; // rcx
  unsigned __int64 v40; // r8
  __int64 v41; // r11
  int v42; // ecx
  int v43; // ecx
  __int64 v44; // r9
  unsigned __int8 v45; // r8
  unsigned int v46; // r13d
  __int64 j; // r12
  __int64 v48; // rcx
  unsigned __int64 v49; // r11
  __int64 v50; // r10
  __int64 v51; // rbp
  int v52; // ecx
  int v53; // ecx
  __int64 v54; // rbp
  __int64 LbaFromCdb; // r12
  __int64 ZoneIndexFromUnitAndLba; // r13
  unsigned int v57; // eax
  char v58; // cl
  _OWORD v59[3]; // [rsp+40h] [rbp-38h] BYREF

  v2 = (_QWORD *)(a1 + 144);
  v4 = *(char **)(a1 + 144);
  if ( v4 == (char *)(a1 + 144) )
  {
    if ( !ExQueryDepthSList((PSLIST_HEADER)(a1 + 112)) )
    {
      v59[0] = 0LL;
      if ( ExQueryDepthSList((PSLIST_HEADER)(a1 + 96)) )
      {
        *((_QWORD *)&v59[0] + 1) = v59;
        *(_QWORD *)&v59[0] = v59;
        v17 = ExpInterlockedFlushSList((PSLIST_HEADER)(a1 + 96));
        if ( v17 )
        {
          do
          {
            v18 = *(_QWORD *)&v59[0];
            Next = v17->Next;
            v20 = (char *)(&v17[-1].Next + 1);
            if ( *(_OWORD **)(*(_QWORD *)&v59[0] + 8LL) != v59 )
              goto LABEL_55;
            *(_QWORD *)v20 = *(_QWORD *)&v59[0];
            v17->Next = (_SLIST_ENTRY *)v59;
            v17 = Next;
            *(_QWORD *)(v18 + 8) = v20;
            *(_QWORD *)&v59[0] = v20;
            v20[20] &= ~2u;
          }
          while ( Next );
        }
        if ( *(_OWORD **)&v59[0] != v59 )
        {
          v21 = a1 + 128;
          v22 = *(_QWORD **)(a1 + 136);
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) != a1 + 128 )
            goto LABEL_55;
          if ( *v22 != v21 )
            goto LABEL_55;
          if ( *(_OWORD **)(*(_QWORD *)&v59[0] + 8LL) != v59 )
            goto LABEL_55;
          if ( **((_OWORD ***)&v59[0] + 1) != v59 )
            goto LABEL_55;
          *v22 = v59;
          v23 = (_QWORD *)*((_QWORD *)&v59[0] + 1);
          *(_QWORD *)(a1 + 136) = *((_QWORD *)&v59[0] + 1);
          *v23 = v21;
          v24 = *(_QWORD *)&v59[0];
          *((_QWORD *)&v59[0] + 1) = v22;
          if ( *(_OWORD **)(*(_QWORD *)&v59[0] + 8LL) != v59 || (_OWORD *)*v22 != v59 )
            goto LABEL_55;
          *v22 = *(_QWORD *)&v59[0];
          *(_QWORD *)(v24 + 8) = v22;
        }
      }
      v6 = (_QWORD *)(a1 + 128);
      if ( (_QWORD *)*v6 != v6 && !ExQueryDepthSList((PSLIST_HEADER)(a1 + 112)) )
      {
        v7 = 0;
        v8 = 0LL;
        v9 = 0LL;
        while ( 1 )
        {
          v10 = (_QWORD *)*v6;
          if ( (_QWORD *)*v6 == v6 || v7 >= 0x40 )
            break;
          v11 = *v10;
          if ( *(_QWORD **)(*v10 + 8LL) != v10 )
            goto LABEL_55;
          v12 = (_QWORD *)v10[1];
          if ( (_QWORD *)*v12 != v10 )
            goto LABEL_55;
          *v12 = v11;
          *(_QWORD *)(v11 + 8) = v12;
          *((_BYTE *)v10 + 20) |= 2u;
          v13 = ((unsigned __int64)v10 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v9 )
            v9->Next = (_SLIST_ENTRY *)v13;
          else
            v8 = (struct _SLIST_ENTRY *)v13;
          v9 = (struct _SLIST_ENTRY *)v13;
          ++v7;
        }
        v9->Next = 0LL;
        InterlockedPushListSList((PSLIST_HEADER)(a1 + 112), v8, v9, v7);
      }
    }
    if ( !ExQueryDepthSList((PSLIST_HEADER)(a1 + 112)) )
      return 0LL;
    EntrySList = FirstEntrySList((PSLIST_HEADER)(a1 + 112));
    if ( EntrySList )
      v4 = (char *)(&EntrySList[-1].Next + 1);
    else
      v4 = 0LL;
  }
  v15 = v4;
  if ( !v4 )
    return v15;
  v25 = v4[22];
  v26 = (v25 ^ (16 * a2)) & 0x10;
  v4[22] = v25 ^ v26;
  if ( v25 )
  {
    if ( v26 == v25 )
      --*(_DWORD *)(a1 + 32);
  }
  else if ( v26 )
  {
    ++*(_DWORD *)(a1 + 32);
  }
  if ( (v4[22] & 0x40) != 0 )
  {
    v35 = *(_QWORD *)(*((_QWORD *)v4 + 8) + 8LL);
    if ( *(_BYTE *)(v35 + 2) != 40 )
    {
      v45 = *(_BYTE *)(v35 + 10);
      v36 = v35 + 72;
      goto LABEL_92;
    }
    v36 = 0LL;
    if ( !*(_DWORD *)(v35 + 20) )
    {
      v37 = *(_DWORD *)(v35 + 56);
      for ( i = 0LL; (unsigned int)i < v37; i = (unsigned int)(i + 1) )
      {
        v39 = *(unsigned int *)(v35 + 4 * i + 120);
        if ( (unsigned int)v39 >= 0x80 )
        {
          v40 = *(unsigned int *)(v35 + 16);
          if ( (unsigned int)v39 < (unsigned int)v40 )
          {
            v41 = (unsigned int)v39;
            v42 = *(_DWORD *)(v39 + v35);
            if ( v42 == 64 )
            {
              if ( v41 + 40 <= v40 )
              {
                if ( !*(_BYTE *)(v41 + v35 + 10) )
                  break;
LABEL_70:
                v44 = v35 + 24;
LABEL_71:
                v36 = v41 + v44;
                break;
              }
            }
            else
            {
              v43 = v42 - 65;
              if ( v43 )
              {
                if ( v43 == 1 && v41 + 40 <= v40 )
                {
                  if ( !*(_DWORD *)(v41 + v35 + 12) )
                    break;
                  v44 = v35 + 32;
                  goto LABEL_71;
                }
              }
              else if ( v41 + 56 <= v40 )
              {
                if ( !*(_BYTE *)(v41 + v35 + 10) )
                  break;
                goto LABEL_70;
              }
            }
          }
        }
      }
    }
    v45 = 0;
    if ( !*(_DWORD *)(v35 + 20) )
    {
      v46 = *(_DWORD *)(v35 + 56);
      for ( j = 0LL; (unsigned int)j < v46; j = (unsigned int)(j + 1) )
      {
        v48 = *(unsigned int *)(v35 + 4 * j + 120);
        if ( (unsigned int)v48 >= 0x80 )
        {
          v49 = *(unsigned int *)(v35 + 16);
          if ( (unsigned int)v48 < (unsigned int)v49 )
          {
            v50 = v35 + v48;
            v51 = (unsigned int)v48;
            v52 = *(_DWORD *)(v35 + v48);
            if ( v52 == 64 )
            {
              if ( v51 + 40 <= v49 )
              {
LABEL_87:
                v45 = *(_BYTE *)(v50 + 10);
                break;
              }
            }
            else
            {
              v53 = v52 - 65;
              if ( v53 )
              {
                if ( v53 == 1 && v51 + 40 <= v49 )
                  break;
              }
              else if ( v51 + 56 <= v49 )
              {
                goto LABEL_87;
              }
            }
          }
        }
      }
    }
LABEL_92:
    v54 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 8) + 40LL) + 64LL);
    LbaFromCdb = PortSrbGetLbaFromCdb(v36, v45);
    ZoneIndexFromUnitAndLba = (unsigned int)GetZoneIndexFromUnitAndLba(v54, LbaFromCdb);
    v57 = RtlInterlockedSetClearRun(v54 + 3448, ZoneIndexFromUnitAndLba, 1LL);
    if ( v57 == 1 )
    {
      v58 = v4[22];
      v4[22] = v58 & 0xBF;
      if ( v58 )
      {
        if ( (v58 & 0xBF) == 0 )
          --*(_DWORD *)(a1 + 32);
      }
    }
    if ( (qword_140172448 & 0x1000) != 0 )
      DbgLogRequest(
        *(_QWORD *)(v54 + 24),
        48,
        LbaFromCdb,
        ZoneIndexFromUnitAndLba,
        *(unsigned __int8 *)(*(_QWORD *)(v54 + 3440) + ZoneIndexFromUnitAndLba),
        v57,
        0LL);
  }
  if ( (unsigned int)RiGetEnqueueReason(a1, v4) )
    return 0LL;
  if ( (_QWORD *)*v2 == v2 )
  {
    ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 112));
  }
  else
  {
    v33 = *(_QWORD *)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 )
      goto LABEL_55;
    v34 = (char **)*((_QWORD *)v4 + 1);
    if ( *v34 != v4 )
      goto LABEL_55;
    *v34 = (char *)v33;
    *(_QWORD *)(v33 + 8) = v34;
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), 4uLL);
  RiDecrementDeviceQueueCount(a1, v4);
  v4[20] &= 0xFCu;
  v27 = ((__int64)*(unsigned int *)(a1 + 88) >> 2) & 0x3FFFFFFF;
  if ( (int)v27 > *(_DWORD *)(a1 + 184) )
    *(_DWORD *)(a1 + 184) = v27;
  if ( (v4[22] & 1) != 0 )
    *(_BYTE *)(a1 + 38) = 1;
  if ( (v4[22] & 0x20) != 0 )
  {
    v28 = *(_QWORD *)(*((_QWORD *)v4 + 8) + 8LL);
    v29 = 96LL;
    if ( *(_BYTE *)(v28 + 2) != 40 )
      v29 = 48LL;
    v30 = (_QWORD *)(*(_QWORD *)(v29 + v28) + 24LL);
    v31 = *v30;
    if ( *(_QWORD **)(*v30 + 8LL) == v30 )
    {
      v32 = (_QWORD *)v30[1];
      if ( (_QWORD *)*v32 == v30 )
      {
        *v32 = v31;
        *(_QWORD *)(v31 + 8) = v32;
        return v15;
      }
    }
LABEL_55:
    __fastfail(3u);
  }
  return v15;
}
