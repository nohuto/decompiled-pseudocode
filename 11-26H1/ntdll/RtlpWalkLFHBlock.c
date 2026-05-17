/*
 * XREFs of RtlpWalkLFHBlock @ 0x180073AB0
 * Callers:
 *     RtlpWalkHeap @ 0x180073110 (RtlpWalkHeap.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpIsLFHZoneAllocation @ 0x1800743B0 (RtlpIsLFHZoneAllocation.c)
 *     RtlpGetFirstBlockAddress @ 0x180074420 (RtlpGetFirstBlockAddress.c)
 */

char __fastcall RtlpWalkLFHBlock(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  _QWORD *v5; // rbx
  unsigned __int8 *v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  __int16 v10; // ax
  __int64 v11; // r11
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rcx
  char v15; // al
  unsigned __int64 v16; // rax
  __int16 v17; // r10
  __int64 v18; // rdx
  char v19; // cl
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  char v23; // cl
  unsigned __int64 v24; // rcx
  char result; // al
  __int64 i; // rdx
  _QWORD *SchedulerSharedDataSlot; // rcx
  _QWORD *j; // rax
  int v29; // eax
  __int64 v30; // rax
  unsigned __int8 v31; // dl
  char v32; // r8
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  _QWORD *v36; // rax
  __int64 v37; // rbp
  char v38; // al
  __int64 v39; // rax
  unsigned __int64 FirstBlockAddress; // r9
  char v41; // al
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int16 v44; // r10
  char v45; // cl
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  char v49; // cl
  unsigned __int64 v50; // rcx
  int v51; // eax

  if ( *(_BYTE *)(a1 + 418) != 2 )
    return 0;
  v4 = *(_QWORD *)(a1 + 408);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD **)a2;
  if ( *(_WORD *)(a2 + 18) )
  {
    v6 = (unsigned __int8 *)(v5 - 2);
    v7 = (unsigned __int64)v6;
    _m_prefetchw(v6);
    if ( v6[15] == 5 )
      v7 = (unsigned __int64)&v6[-16 * v6[14]];
  }
  else
  {
    v7 = (unsigned __int64)v5 - *(unsigned __int8 *)(a2 + 16);
  }
  if ( *(char *)(v7 + 15) < 0 )
  {
    if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4))) )
    {
      v8 = *(_QWORD *)(v7
                     - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)(v7 >> 4)) >> 12));
      if ( v8 )
      {
        if ( (*(_BYTE *)(v8 + 38) & 3) != 0 )
          v9 = (((16 * (*(unsigned __int16 *)(v8 + 36) + 256LL)) & 0xFFFFFFFFFFFFF000uLL) + 4096) >> 4;
        else
          LOWORD(v9) = *(_WORD *)(v8 + 36);
        v10 = *(_WORD *)(v8 + 38);
        v11 = *(_QWORD *)(v8 + 8);
        v12 = v7 + 16LL * (unsigned __int16)v9;
        if ( (v10 & 1) != 0 )
        {
          v13 = ((16 * (*(unsigned __int16 *)(v8 + 36) + 256LL)) & 0xFFFFFFFFFFFFF000uLL)
              - 16LL * *(unsigned __int16 *)(v8 + 36)
              - 16
              + ((v11 + 4095) & 0xFFFFFFFFFFFFF000uLL);
        }
        else if ( (v10 & 2) != 0 )
        {
          v13 = ((v11 + 4095) & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        else
        {
          v13 = v11
              + ((unsigned __int16)RtlpLFHKey ^ (unsigned __int64)(unsigned __int16)v11 ^ (unsigned __int16)(*(_WORD *)(**(_QWORD **)v8 + 24LL) ^ *(_DWORD *)(v11 + 24)));
        }
        if ( (*(_BYTE *)(v8 + 38) & 3) != 0 )
          v14 = (((16 * (*(unsigned __int16 *)(v8 + 36) + 256LL)) & 0xFFFFFFFFFFFFF000uLL) + 4096) >> 4;
        else
          LOWORD(v14) = *(_WORD *)(v8 + 36);
        if ( ((v12 - v13) >> 4) / (unsigned __int16)v14 < *(unsigned __int16 *)(v8 + 40) )
        {
          v15 = *(_BYTE *)(v12 + 15);
          if ( (v15 & 0x3F) == 0 )
          {
            *(_BYTE *)(a2 + 16) = 16;
            *(_QWORD *)a2 = v12 + 16;
            *(_WORD *)(a2 + 18) = 0;
            *(_QWORD *)(a2 + 36) = 16LL;
            v21 = 16LL * *(unsigned __int16 *)(v8 + 36) - 16;
LABEL_37:
            *(_QWORD *)(a2 + 8) = v21;
            *(_BYTE *)(a2 + 17) = *(_BYTE *)(v12 + 14);
            result = 1;
            *(_WORD *)(a2 + 18) |= 0x8000u;
            return result;
          }
          if ( (v15 & 0x40) != 0 )
          {
            v16 = v12 + 16LL * (*(_BYTE *)(v12 + 15) & 0x3F);
          }
          else if ( v15 == 4 )
          {
            v16 = v12 + 16LL * *(unsigned __int8 *)(v12 + 14);
          }
          else
          {
            v16 = v12;
          }
          LOBYTE(v17) = 1;
          *(_QWORD *)a2 = v16 + 16;
          v18 = 0LL;
          *(_WORD *)(a2 + 18) = 1;
          v19 = *(_BYTE *)(v12 + 15);
          if ( v19 == 5 )
          {
            v20 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v12 + 12);
            *(_BYTE *)(a2 + 16) = v20;
          }
          else if ( (v19 & 0x40) != 0 )
          {
            v20 = *(unsigned __int16 *)(v12 + 16LL * (*(_BYTE *)(v12 + 15) & 0x3F) + 12);
            *(_BYTE *)(a2 + 16) = v20;
          }
          else if ( (v19 & 0x3F) == 0x3F )
          {
            if ( v19 >= 0 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                LODWORD(v22) = *(_DWORD *)(v12 + 8);
                if ( ((unsigned int)v22 & *(_DWORD *)(a1 + 124)) != 0 )
                  LOWORD(v22) = *(_WORD *)(a1 + 136) ^ v22;
                v17 = *(_WORD *)(a2 + 18);
              }
              else
              {
                LOWORD(v22) = *(_WORD *)(v12 + 8);
              }
            }
            else
            {
              if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v12 + 8) ^ a1 ^ (v12 >> 4)) )
                v22 = 0LL;
              else
                v22 = *(_QWORD *)(v12
                                - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v12 >> 4)) >> 12));
              LOWORD(v22) = *(_WORD *)(v22 + 36);
              v17 = *(_WORD *)(a2 + 18);
            }
            v20 = *(_QWORD *)(v12 + 16LL * (unsigned __int16)v22);
            *(_BYTE *)(a2 + 16) = v20;
            if ( (v17 & 2) != 0 )
            {
LABEL_32:
              v23 = *(_BYTE *)(v12 + 15);
              if ( v23 == 5 )
              {
                v24 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v12 + 12);
              }
              else if ( (v23 & 0x40) != 0 )
              {
                v24 = *(unsigned __int16 *)(v12 + 16LL * (*(_BYTE *)(v12 + 15) & 0x3F) + 12);
              }
              else if ( (v23 & 0x3F) == 0x3F )
              {
                if ( v23 >= 0 )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v29 = *(_DWORD *)(v12 + 8);
                    if ( (v29 & *(_DWORD *)(a1 + 124)) != 0 )
                    {
                      v24 = *(_QWORD *)(v12 + 16LL * (unsigned __int16)(*(_WORD *)(a1 + 136) ^ v29));
                      goto LABEL_36;
                    }
                  }
                  else
                  {
                    LOWORD(v29) = *(_WORD *)(v12 + 8);
                  }
                }
                else
                {
                  if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v12 + 8) ^ a1 ^ (v12 >> 4))) )
                    v18 = *(_QWORD *)(v12
                                    - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v12 >> 4)) >> 12));
                  LOWORD(v29) = *(_WORD *)(v18 + 36);
                }
                v24 = *(_QWORD *)(v12 + 16LL * (unsigned __int16)v29);
              }
              else
              {
                v24 = *(_BYTE *)(v12 + 15) & 0x3F;
              }
LABEL_36:
              v21 = 16LL * *(unsigned __int16 *)(v8 + 36) - v24;
              goto LABEL_37;
            }
          }
          else
          {
            v20 = *(_BYTE *)(v12 + 15) & 0x3F;
            *(_BYTE *)(a2 + 16) = v20;
          }
          *(_QWORD *)(a2 + 36) = v20;
          goto LABEL_32;
        }
        *(_QWORD *)a2 = *(_QWORD *)(v8 + 8);
        *(_WORD *)(a2 + 18) = 8193;
      }
    }
    return 0;
  }
  i = *(_QWORD *)(v4 + 24);
  if ( ((*(_BYTE *)(v7 + 10) ^ (unsigned __int8)((*(_DWORD *)(i + 124) >> 20) & *(_BYTE *)(i + 138))) & 1) != 0 )
  {
    if ( *(_DWORD *)(i + 124) )
    {
      v35 = *(_DWORD *)(v7 + 8);
      if ( (v35 & *(_DWORD *)(i + 124)) != 0 )
        LOWORD(v35) = *(_WORD *)(i + 136) ^ v35;
    }
    else
    {
      LOWORD(v35) = *(_WORD *)(v7 + 8);
    }
    if ( (unsigned __int16)v35 > 4u )
    {
      v36 = *(_QWORD **)a2;
      if ( *(_DWORD *)(*(_QWORD *)a2 + 20LL) == -253701952 )
      {
        v37 = *v36;
        if ( (unsigned __int8)RtlpIsLFHZoneAllocation(v4, *v36) )
        {
          v38 = *(_BYTE *)(v7 + 15);
          if ( (v38 & 0x40) != 0 )
            v39 = v7 + 16LL * (*(_BYTE *)(v7 + 15) & 0x3F);
          else
            v39 = v38 == 4 ? v7 + 16LL * *(unsigned __int8 *)(v7 + 14) : v7;
          i = *(_QWORD *)(v37 + 8);
          if ( i == v39 + 16 )
          {
            FirstBlockAddress = RtlpGetFirstBlockAddress(v37);
            v41 = *(_BYTE *)(FirstBlockAddress + 15);
            if ( (v41 & 0x40) != 0 )
            {
              v42 = FirstBlockAddress + 16LL * (*(_BYTE *)(FirstBlockAddress + 15) & 0x3F);
            }
            else if ( v41 == 4 )
            {
              v42 = FirstBlockAddress + 16LL * *(unsigned __int8 *)(FirstBlockAddress + 14);
            }
            else
            {
              v42 = FirstBlockAddress;
            }
            v43 = 0LL;
            *(_QWORD *)a2 = v42 + 16;
            if ( (*(_BYTE *)(FirstBlockAddress + 15) & 0x3F) == 0 )
            {
              *(_WORD *)(a2 + 18) = 0;
              *(_BYTE *)(a2 + 16) = 16;
              *(_QWORD *)(a2 + 36) = 16LL;
              v47 = 16LL * *(unsigned __int16 *)(v37 + 36) - 16;
LABEL_116:
              *(_QWORD *)(a2 + 8) = v47;
              *(_BYTE *)(a2 + 17) = *(_BYTE *)(FirstBlockAddress + 14);
              result = 1;
              *(_WORD *)(a2 + 18) |= 0x8000u;
              return result;
            }
            LOBYTE(v44) = 1;
            *(_WORD *)(a2 + 18) = 1;
            v45 = *(_BYTE *)(FirstBlockAddress + 15);
            if ( v45 == 5 )
            {
              v46 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(FirstBlockAddress + 12);
              *(_BYTE *)(a2 + 16) = v46;
            }
            else if ( (v45 & 0x40) != 0 )
            {
              v46 = *(unsigned __int16 *)(FirstBlockAddress + 16LL * (*(_BYTE *)(FirstBlockAddress + 15) & 0x3F) + 12);
              *(_BYTE *)(a2 + 16) = v46;
            }
            else if ( (v45 & 0x3F) == 0x3F )
            {
              if ( v45 >= 0 )
              {
                if ( *(_DWORD *)(a1 + 124) )
                {
                  LODWORD(v48) = *(_DWORD *)(FirstBlockAddress + 8);
                  if ( ((unsigned int)v48 & *(_DWORD *)(a1 + 124)) != 0 )
                    LOWORD(v48) = *(_WORD *)(a1 + 136) ^ v48;
                  v44 = *(_WORD *)(a2 + 18);
                }
                else
                {
                  LOWORD(v48) = *(_WORD *)(FirstBlockAddress + 8);
                }
              }
              else
              {
                if ( *(_WORD *)(FirstBlockAddress + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (FirstBlockAddress >> 4)) )
                  v48 = 0LL;
                else
                  v48 = *(_QWORD *)(FirstBlockAddress
                                  - ((unsigned __int64)(*(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
                LOWORD(v48) = *(_WORD *)(v48 + 36);
                v44 = *(_WORD *)(a2 + 18);
              }
              v46 = *(_QWORD *)(FirstBlockAddress + 16LL * (unsigned __int16)v48);
              *(_BYTE *)(a2 + 16) = v46;
              if ( (v44 & 2) != 0 )
              {
LABEL_111:
                v49 = *(_BYTE *)(FirstBlockAddress + 15);
                if ( v49 == 5 )
                {
                  v50 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(FirstBlockAddress + 12);
                }
                else if ( (v49 & 0x40) != 0 )
                {
                  v50 = *(unsigned __int16 *)(FirstBlockAddress + 16LL * (*(_BYTE *)(FirstBlockAddress + 15) & 0x3F) + 12);
                }
                else if ( (v49 & 0x3F) == 0x3F )
                {
                  if ( v49 >= 0 )
                  {
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      v51 = *(_DWORD *)(FirstBlockAddress + 8);
                      if ( (v51 & *(_DWORD *)(a1 + 124)) != 0 )
                      {
                        v50 = *(_QWORD *)(FirstBlockAddress + 16LL * (unsigned __int16)(*(_WORD *)(a1 + 136) ^ v51));
                        goto LABEL_115;
                      }
                    }
                    else
                    {
                      LOWORD(v51) = *(_WORD *)(FirstBlockAddress + 8);
                    }
                  }
                  else
                  {
                    if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(FirstBlockAddress + 8) ^ (FirstBlockAddress >> 4))) )
                      v43 = *(_QWORD *)(FirstBlockAddress
                                      - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
                    LOWORD(v51) = *(_WORD *)(v43 + 36);
                  }
                  v50 = *(_QWORD *)(FirstBlockAddress + 16LL * (unsigned __int16)v51);
                }
                else
                {
                  v50 = *(_BYTE *)(FirstBlockAddress + 15) & 0x3F;
                }
LABEL_115:
                v47 = 16LL * *(unsigned __int16 *)(v37 + 36) - v50;
                goto LABEL_116;
              }
            }
            else
            {
              v46 = *(_BYTE *)(FirstBlockAddress + 15) & 0x3F;
              *(_BYTE *)(a2 + 16) = v46;
            }
            *(_QWORD *)(a2 + 36) = v46;
            goto LABEL_111;
          }
        }
      }
    }
  }
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      if ( !SchedulerSharedDataSlot[(unsigned int)i] )
      {
        SchedulerSharedDataSlot[(unsigned int)i] = v4;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)v4, i);
  for ( j = *(_QWORD **)(v4 + 8); j != (_QWORD *)(v4 + 8); j = (_QWORD *)*j )
  {
    if ( v7 >= (unsigned __int64)j && v7 < (unsigned __int64)(j + 126) )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)v4);
      goto LABEL_70;
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)v4);
  if ( v4 != *(_QWORD *)a2 )
  {
    v30 = *(_QWORD *)(v4 + 24);
    v31 = *(_BYTE *)(v7 + 10);
    v32 = *(_BYTE *)(v30 + 138);
    if ( ((v31 ^ (unsigned __int8)(v32 & (*(_DWORD *)(v30 + 124) >> 20))) & 1) == 0
      || ((v31 ^ (unsigned __int8)(v32 & (*(_DWORD *)(v30 + 124) >> 17))) & 8) == 0 )
    {
      return 0;
    }
  }
LABEL_70:
  *(_WORD *)(a2 + 18) = 8193;
  *(_BYTE *)(a2 + 16) = 16;
  *(_QWORD *)(a2 + 36) = 16LL;
  v33 = *(_QWORD *)(v4 + 24);
  if ( *(_DWORD *)(v33 + 124) )
  {
    v34 = *(_DWORD *)(v7 + 8);
    if ( (v34 & *(_DWORD *)(v33 + 124)) != 0 )
      LOWORD(v34) = *(_WORD *)(v33 + 136) ^ v34;
  }
  else
  {
    LOWORD(v34) = *(_WORD *)(v7 + 8);
  }
  *(_QWORD *)(a2 + 8) = 16LL * (unsigned __int16)v34 - 16;
  *(_BYTE *)(a2 + 17) = *(_BYTE *)(v7 + 14);
  return 1;
}
