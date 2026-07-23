/*
 * XREFs of RtlpWalkLFHBlock @ 0x1800940A0
 * Callers:
 *     RtlpWalkHeap @ 0x180093700 (RtlpWalkHeap.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpIsLFHZoneAllocation @ 0x1800949A0 (RtlpIsLFHZoneAllocation.c)
 *     RtlpGetFirstBlockAddress @ 0x180094A10 (RtlpGetFirstBlockAddress.c)
 */

char __fastcall RtlpWalkLFHBlock(__int64 a1, _RTL_SRWLOCK **a2)
{
  _RTL_SRWLOCK *v4; // r14
  _RTL_SRWLOCK *v5; // rbx
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
  unsigned __int64 Value; // rdx
  _QWORD *SchedulerSharedDataSlot; // rcx
  _RTL_SRWLOCK *i; // rax
  int v29; // eax
  unsigned __int64 v30; // rax
  unsigned __int8 v31; // dl
  char v32; // r8
  unsigned __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  unsigned __int64 v36; // rbp
  char v37; // al
  __int64 v38; // rax
  unsigned __int64 FirstBlockAddress; // r9
  char v40; // al
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  __int16 v43; // r10
  char v44; // cl
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  char v48; // cl
  unsigned __int64 v49; // rcx
  int v50; // eax

  if ( *(_BYTE *)(a1 + 418) != 2 )
    return 0;
  v4 = *(_RTL_SRWLOCK **)(a1 + 408);
  if ( !v4 )
    return 0;
  v5 = *a2;
  if ( *((_WORD *)a2 + 9) )
  {
    v6 = (unsigned __int8 *)&v5[-2];
    v7 = (unsigned __int64)v6;
    _m_prefetchw(v6);
    if ( v6[15] == 5 )
      v7 = (unsigned __int64)&v6[-16 * v6[14]];
  }
  else
  {
    v7 = (unsigned __int64)v5 - *((unsigned __int8 *)a2 + 16);
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
            *((_BYTE *)a2 + 16) = 16;
            *a2 = (_RTL_SRWLOCK *)(v12 + 16);
            *((_WORD *)a2 + 9) = 0;
            *(_RTL_SRWLOCK **)((char *)a2 + 36) = (_RTL_SRWLOCK *)16;
            v21 = 16LL * *(unsigned __int16 *)(v8 + 36) - 16;
LABEL_37:
            a2[1] = (_RTL_SRWLOCK *)v21;
            *((_BYTE *)a2 + 17) = *(_BYTE *)(v12 + 14);
            result = 1;
            *((_WORD *)a2 + 9) |= 0x8000u;
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
          *a2 = (_RTL_SRWLOCK *)(v16 + 16);
          v18 = 0LL;
          *((_WORD *)a2 + 9) = 1;
          v19 = *(_BYTE *)(v12 + 15);
          if ( v19 == 5 )
          {
            v20 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v12 + 12);
            *((_BYTE *)a2 + 16) = v20;
          }
          else if ( (v19 & 0x40) != 0 )
          {
            v20 = *(unsigned __int16 *)(v12 + 16LL * (*(_BYTE *)(v12 + 15) & 0x3F) + 12);
            *((_BYTE *)a2 + 16) = v20;
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
                v17 = *((_WORD *)a2 + 9);
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
              v17 = *((_WORD *)a2 + 9);
            }
            v20 = *(_QWORD *)(v12 + 16LL * (unsigned __int16)v22);
            *((_BYTE *)a2 + 16) = v20;
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
            *((_BYTE *)a2 + 16) = v20;
          }
          *(_RTL_SRWLOCK **)((char *)a2 + 36) = (_RTL_SRWLOCK *)v20;
          goto LABEL_32;
        }
        *a2 = *(_RTL_SRWLOCK **)(v8 + 8);
        *((_WORD *)a2 + 9) = 8193;
      }
    }
    return 0;
  }
  Value = v4[3].Value;
  if ( ((*(_BYTE *)(v7 + 10) ^ (unsigned __int8)((*(_DWORD *)(Value + 124) >> 20) & *(_BYTE *)(Value + 138))) & 1) != 0 )
  {
    if ( *(_DWORD *)(Value + 124) )
    {
      v35 = *(_DWORD *)(v7 + 8);
      if ( (v35 & *(_DWORD *)(Value + 124)) != 0 )
        LOWORD(v35) = *(_WORD *)(Value + 136) ^ v35;
    }
    else
    {
      LOWORD(v35) = *(_WORD *)(v7 + 8);
    }
    if ( (unsigned __int16)v35 > 4u && HIDWORD((*a2)[2].Ptr) == -253701952 )
    {
      v36 = (*a2)->Value;
      if ( (unsigned __int8)RtlpIsLFHZoneAllocation(v4) )
      {
        v37 = *(_BYTE *)(v7 + 15);
        if ( (v37 & 0x40) != 0 )
          v38 = v7 + 16LL * (*(_BYTE *)(v7 + 15) & 0x3F);
        else
          v38 = v37 == 4 ? v7 + 16LL * *(unsigned __int8 *)(v7 + 14) : v7;
        Value = *(_QWORD *)(v36 + 8);
        if ( Value == v38 + 16 )
        {
          FirstBlockAddress = RtlpGetFirstBlockAddress(v36);
          v40 = *(_BYTE *)(FirstBlockAddress + 15);
          if ( (v40 & 0x40) != 0 )
          {
            v41 = FirstBlockAddress + 16LL * (*(_BYTE *)(FirstBlockAddress + 15) & 0x3F);
          }
          else if ( v40 == 4 )
          {
            v41 = FirstBlockAddress + 16LL * *(unsigned __int8 *)(FirstBlockAddress + 14);
          }
          else
          {
            v41 = FirstBlockAddress;
          }
          v42 = 0LL;
          *a2 = (_RTL_SRWLOCK *)(v41 + 16);
          if ( (*(_BYTE *)(FirstBlockAddress + 15) & 0x3F) == 0 )
          {
            *((_WORD *)a2 + 9) = 0;
            *((_BYTE *)a2 + 16) = 16;
            *(_RTL_SRWLOCK **)((char *)a2 + 36) = (_RTL_SRWLOCK *)16;
            v46 = 16LL * *(unsigned __int16 *)(v36 + 36) - 16;
LABEL_116:
            a2[1] = (_RTL_SRWLOCK *)v46;
            *((_BYTE *)a2 + 17) = *(_BYTE *)(FirstBlockAddress + 14);
            result = 1;
            *((_WORD *)a2 + 9) |= 0x8000u;
            return result;
          }
          LOBYTE(v43) = 1;
          *((_WORD *)a2 + 9) = 1;
          v44 = *(_BYTE *)(FirstBlockAddress + 15);
          if ( v44 == 5 )
          {
            v45 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(FirstBlockAddress + 12);
            *((_BYTE *)a2 + 16) = v45;
          }
          else if ( (v44 & 0x40) != 0 )
          {
            v45 = *(unsigned __int16 *)(FirstBlockAddress + 16LL * (*(_BYTE *)(FirstBlockAddress + 15) & 0x3F) + 12);
            *((_BYTE *)a2 + 16) = v45;
          }
          else if ( (v44 & 0x3F) == 0x3F )
          {
            if ( v44 >= 0 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                LODWORD(v47) = *(_DWORD *)(FirstBlockAddress + 8);
                if ( ((unsigned int)v47 & *(_DWORD *)(a1 + 124)) != 0 )
                  LOWORD(v47) = *(_WORD *)(a1 + 136) ^ v47;
                v43 = *((_WORD *)a2 + 9);
              }
              else
              {
                LOWORD(v47) = *(_WORD *)(FirstBlockAddress + 8);
              }
            }
            else
            {
              if ( *(_WORD *)(FirstBlockAddress + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (FirstBlockAddress >> 4)) )
                v47 = 0LL;
              else
                v47 = *(_QWORD *)(FirstBlockAddress
                                - ((unsigned __int64)(*(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
              LOWORD(v47) = *(_WORD *)(v47 + 36);
              v43 = *((_WORD *)a2 + 9);
            }
            v45 = *(_QWORD *)(FirstBlockAddress + 16LL * (unsigned __int16)v47);
            *((_BYTE *)a2 + 16) = v45;
            if ( (v43 & 2) != 0 )
            {
LABEL_111:
              v48 = *(_BYTE *)(FirstBlockAddress + 15);
              if ( v48 == 5 )
              {
                v49 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(FirstBlockAddress + 12);
              }
              else if ( (v48 & 0x40) != 0 )
              {
                v49 = *(unsigned __int16 *)(FirstBlockAddress + 16LL * (*(_BYTE *)(FirstBlockAddress + 15) & 0x3F) + 12);
              }
              else if ( (v48 & 0x3F) == 0x3F )
              {
                if ( v48 >= 0 )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v50 = *(_DWORD *)(FirstBlockAddress + 8);
                    if ( (v50 & *(_DWORD *)(a1 + 124)) != 0 )
                    {
                      v49 = *(_QWORD *)(FirstBlockAddress + 16LL * (unsigned __int16)(*(_WORD *)(a1 + 136) ^ v50));
                      goto LABEL_115;
                    }
                  }
                  else
                  {
                    LOWORD(v50) = *(_WORD *)(FirstBlockAddress + 8);
                  }
                }
                else
                {
                  if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(FirstBlockAddress + 8) ^ (FirstBlockAddress >> 4))) )
                    v42 = *(_QWORD *)(FirstBlockAddress
                                    - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
                  LOWORD(v50) = *(_WORD *)(v42 + 36);
                }
                v49 = *(_QWORD *)(FirstBlockAddress + 16LL * (unsigned __int16)v50);
              }
              else
              {
                v49 = *(_BYTE *)(FirstBlockAddress + 15) & 0x3F;
              }
LABEL_115:
              v46 = 16LL * *(unsigned __int16 *)(v36 + 36) - v49;
              goto LABEL_116;
            }
          }
          else
          {
            v45 = *(_BYTE *)(FirstBlockAddress + 15) & 0x3F;
            *((_BYTE *)a2 + 16) = v45;
          }
          *(_RTL_SRWLOCK **)((char *)a2 + 36) = (_RTL_SRWLOCK *)v45;
          goto LABEL_111;
        }
      }
    }
  }
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( Value = 0LL; (unsigned int)Value < 8; Value = (unsigned int)(Value + 1) )
    {
      if ( !SchedulerSharedDataSlot[(unsigned int)Value] )
      {
        SchedulerSharedDataSlot[(unsigned int)Value] = v4;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)v4, Value);
  for ( i = (_RTL_SRWLOCK *)v4[1].Value; i != &v4[1]; i = (_RTL_SRWLOCK *)i->Value )
  {
    if ( v7 >= (unsigned __int64)i && v7 < (unsigned __int64)&i[126] )
    {
      RtlReleaseSRWLockExclusive(v4);
      goto LABEL_70;
    }
  }
  RtlReleaseSRWLockExclusive(v4);
  if ( v4 != *a2 )
  {
    v30 = v4[3].Value;
    v31 = *(_BYTE *)(v7 + 10);
    v32 = *(_BYTE *)(v30 + 138);
    if ( ((v31 ^ (unsigned __int8)(v32 & (*(_DWORD *)(v30 + 124) >> 20))) & 1) == 0
      || ((v31 ^ (unsigned __int8)(v32 & (*(_DWORD *)(v30 + 124) >> 17))) & 8) == 0 )
    {
      return 0;
    }
  }
LABEL_70:
  *((_WORD *)a2 + 9) = 8193;
  *((_BYTE *)a2 + 16) = 16;
  *(_RTL_SRWLOCK **)((char *)a2 + 36) = (_RTL_SRWLOCK *)16;
  v33 = v4[3].Value;
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
  a2[1] = (_RTL_SRWLOCK *)(16LL * (unsigned __int16)v34 - 16);
  *((_BYTE *)a2 + 17) = *(_BYTE *)(v7 + 14);
  return 1;
}
