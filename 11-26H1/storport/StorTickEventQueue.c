/*
 * XREFs of StorTickEventQueue @ 0x1400341D0
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x140034050 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterRequestComplete @ 0x14000E730 (RaidAdapterRequestComplete.c)
 *     StorEtwHwTimeoutDetectedEvent @ 0x14004F8BC (StorEtwHwTimeoutDetectedEvent.c)
 *     RaidUnitAbortSrb @ 0x1400A6B30 (RaidUnitAbortSrb.c)
 *     StorEtwMiniportBugAbortTimeoutEvent @ 0x1400B1164 (StorEtwMiniportBugAbortTimeoutEvent.c)
 *     StorEtwMiniportBugResetBrokenEvent @ 0x1400B13B0 (StorEtwMiniportBugResetBrokenEvent.c)
 */

__int64 __fastcall StorTickEventQueue(__int64 a1, _DWORD *a2, KSPIN_LOCK **a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r13
  unsigned int v6; // ecx
  char v7; // r15
  unsigned int v9; // ebp
  KSPIN_LOCK *v10; // rdi
  KSPIN_LOCK *v11; // r14
  __int64 v12; // r8
  KSPIN_LOCK v13; // rcx
  unsigned int v14; // eax
  char v16; // r14
  unsigned int v17; // r13d
  KSPIN_LOCK v18; // rdx
  _DWORD *v19; // r14
  __int64 v20; // r10
  __int64 v21; // r11
  ULONGLONG v22; // r8
  __int64 v23; // rax
  ULONGLONG v24; // r10
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rcx
  ULONG_PTR v28; // r8
  __int16 v29; // ax
  __int64 v30; // r8
  unsigned int v31; // ecx
  KSPIN_LOCK v32; // rdx
  __int64 v33; // rdx
  KSPIN_LOCK *v34; // rax
  unsigned int v35; // eax
  unsigned int v36; // edx
  _WORD *v37; // r8
  int v38; // eax
  __int64 v39; // rbx
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  char v43; // [rsp+30h] [rbp-A8h]
  char v44; // [rsp+31h] [rbp-A7h]
  __int64 v45; // [rsp+38h] [rbp-A0h]
  __int64 v46; // [rsp+40h] [rbp-98h]
  unsigned int v47; // [rsp+48h] [rbp-90h]
  int v48; // [rsp+4Ch] [rbp-8Ch]
  __int64 v49; // [rsp+50h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-80h] BYREF
  __int128 v51; // [rsp+70h] [rbp-68h] BYREF
  ULONGLONG UnbiasedInterruptTime; // [rsp+80h] [rbp-58h]
  char v54; // [rsp+E8h] [rbp+10h]

  v4 = 0;
  v5 = a1;
  v45 = 0LL;
  v6 = a2[1];
  v7 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  _interlockedbittestandreset((volatile signed __int32 *)(v5 + 512), 2u);
  v47 = v6;
  v9 = 0;
  v10 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( (*a2 & 1) != 0 )
  {
    v16 = 1;
    v43 = 0;
    v44 = 1;
    v17 = 0;
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    while ( 1 )
    {
      v54 = 0;
      while ( v4 < a2[2] )
      {
        v46 = 0LL;
        v10 = (KSPIN_LOCK *)&a2[16 * v4 + 16];
        v49 = 0LL;
        v48 = 0;
        ++v17;
        v45 = 0LL;
        KeAcquireInStackQueuedSpinLockAtDpcLevel(v10 + 5, &LockHandle);
        if ( v16 )
        {
          v34 = (KSPIN_LOCK *)v10[2];
          v10[4] = (KSPIN_LOCK)v34;
          if ( v34 != v10 + 2 )
            v7 = 1;
        }
        v18 = v10[4];
        v19 = v10 + 2;
        if ( (KSPIN_LOCK *)v18 == v10 + 2 )
        {
          v30 = 0LL;
          v20 = 0LL;
        }
        else
        {
          v20 = v18 - 64;
          v21 = *(_QWORD *)(v18 + 24);
          v45 = v18 - 64;
          v22 = v21 + (unsigned int)(5000000 * *(_DWORD *)(v18 + 16));
          if ( v22 > UnbiasedInterruptTime || (*(_BYTE *)(v18 - 48) & 0x1C) == 0x10 )
          {
            v10[4] = (KSPIN_LOCK)v19;
            v45 = v18 - 64;
LABEL_35:
            v30 = v46;
            goto LABEL_38;
          }
          v23 = *(_QWORD *)(v18 + 160);
          v24 = *(_QWORD *)(v23 + 1408);
          if ( v22 < v24 )
          {
            v25 = *(_QWORD *)(v23 + 24);
            v51 = 0LL;
            v26 = *(_QWORD *)(v25 + 16);
            v27 = *(_QWORD *)(v26 + 48);
            if ( !v27 )
              goto LABEL_24;
            v35 = *(unsigned __int16 *)(v26 + 40);
            if ( !(_WORD)v35 )
              goto LABEL_24;
            v36 = v35 >> 1;
            do
            {
              if ( !v36 )
                goto LABEL_24;
              v37 = (_WORD *)(v27 + 2LL * --v36);
            }
            while ( *v37 != 92 );
            if ( v37 )
              v28 = (ULONG_PTR)(v37 + 1);
            else
LABEL_24:
              v28 = *(_QWORD *)(v26 + 48);
            v29 = *(_WORD *)(v26 + 40) - v28;
            *((_QWORD *)&v51 + 1) = v28;
            LOWORD(v51) = v27 + v29;
            WORD1(v51) = v27 + v29 + 2;
            if ( MiniportBugActionPolicy == 1 )
            {
              StorEtwMiniportBugResetBrokenEvent(v45, v24 - v21, &v51);
            }
            else if ( MiniportBugActionPolicy == 2 )
            {
              KeBugCheckEx(0xF0u, 1uLL, v28, *(_QWORD *)(v45 + 168), *(_QWORD *)(*(_QWORD *)(v45 + 224) + 8LL));
            }
          }
          v20 = v45;
          if ( (*a2 & 4) != 0 )
          {
            v38 = *(_DWORD *)(v45 + 776);
            if ( v38 == 3 )
            {
              v30 = 0LL;
              v9 = -1073741643;
              v54 = 0;
            }
            else if ( v38 )
            {
              v30 = 0LL;
              if ( (*(_BYTE *)(v45 + 17) & 4) != 0 )
              {
                v54 = 1;
                v10[4] = *(_QWORD *)v10[4];
              }
            }
            else
            {
              v54 = 1;
              v10[4] = *(_QWORD *)v10[4];
              v46 = *(_QWORD *)(v45 + 224);
              v40 = *(_QWORD *)(v45 + 168);
              v49 = v40;
              v41 = *(unsigned __int8 *)(v40 + 2);
              if ( (_BYTE)v41 == 40 )
                v41 = *(unsigned int *)(v40 + 20);
              v48 = v41;
              if ( (unsigned int)v41 <= 0x20 )
              {
                v42 = 0x1000D0000LL;
                if ( _bittest64(&v42, v41) )
                  goto LABEL_35;
              }
              if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v45 + 776), 1, 0) )
                goto LABEL_35;
              v30 = 0LL;
              v46 = 0LL;
              v49 = 0LL;
              if ( (*(_BYTE *)(v45 + 17) & 4) == 0 )
                v10[4] = (KSPIN_LOCK)v19;
            }
          }
          else
          {
            v30 = 0LL;
            v9 = -1073741643;
          }
        }
LABEL_38:
        if ( (*a2 & 4) != 0 )
        {
          if ( v9 != -1073741643 )
            goto LABEL_40;
          goto LABEL_53;
        }
        if ( v9 == -1073741643 )
        {
          *((_DWORD *)v10 + 12) = -2;
          goto LABEL_53;
        }
        v31 = *((_DWORD *)v10 + 12);
        if ( !v31 )
          goto LABEL_47;
        if ( v31 > v47 )
        {
          v31 -= v47;
          *((_DWORD *)v10 + 12) = v31;
LABEL_47:
          if ( v31 )
            goto LABEL_40;
          goto LABEL_48;
        }
        *((_DWORD *)v10 + 12) = 0;
        v31 = 0;
LABEL_48:
        v32 = *v10;
        if ( (*(_DWORD *)(*v10 + 48) & 1) != 0 )
        {
          *((_DWORD *)v10 + 12) = v31 + v47;
LABEL_40:
          if ( v43 || !v30 )
            goto LABEL_41;
          goto LABEL_53;
        }
        v20 = v32 - 48;
        *((_DWORD *)v10 + 12) = -2;
        v45 = v32 - 48;
        v9 = -1073741643;
LABEL_53:
        if ( v20 && *(_DWORD *)(v20 + 776) != 3 )
        {
          v33 = *a2 >> 2;
          LOBYTE(v33) = (*a2 & 4) != 0;
          StorEtwHwTimeoutDetectedEvent(v20, v33, v30);
          v43 = 1;
        }
LABEL_41:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( v9 == -1073741643 )
          break;
        if ( v46 )
        {
          if ( v48 == 16 )
          {
            v39 = v45;
            v9 = -1073741643;
            StorEtwMiniportBugAbortTimeoutEvent(v45);
            v5 = a1;
            goto LABEL_97;
          }
          if ( (unsigned int)(v48 - 18) > 1 && v48 != 32 )
          {
            *(_BYTE *)(v45 + 17) |= 4u;
            if ( (int)RaidUnitAbortSrb(v46, v49) < 0 )
            {
              v39 = v45;
              *(_BYTE *)(v45 + 17) &= ~4u;
              if ( _InterlockedCompareExchange((volatile signed __int32 *)(v45 + 776), 0, 1) != 4 )
              {
                v5 = a1;
                v9 = -1073741643;
                goto LABEL_97;
              }
              RaidAdapterRequestComplete(*(_QWORD *)(v46 + 24), v45, 1);
              v4 = 0;
              v9 = 0;
              goto LABEL_43;
            }
          }
        }
        v16 = v44;
        ++v4;
      }
      v4 = 0;
LABEL_43:
      v16 = 0;
      v44 = 0;
      if ( !v54 || v17 >= 0x64 )
      {
        v5 = a1;
LABEL_11:
        if ( v9 == -1073741643 )
        {
          v39 = v45;
          goto LABEL_97;
        }
        goto LABEL_12;
      }
    }
  }
  if ( !a2[2] )
    return v9;
  while ( 1 )
  {
    v11 = (KSPIN_LOCK *)&a2[16 * (unsigned __int64)v4];
    v10 = v11 + 8;
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v11 + 13, &LockHandle);
    v13 = v11[8];
    v14 = *((_DWORD *)v11 + 28);
    if ( (KSPIN_LOCK *)*v10 != v10 )
      v7 = 1;
    if ( v14 >= 0xFFFFFFFE )
      goto LABEL_10;
    if ( v14 && v14 <= v47 )
      break;
    if ( v14 > v47 )
    {
      v14 -= v47;
      *((_DWORD *)v11 + 28) = v14;
    }
    if ( !v14 )
      goto LABEL_76;
LABEL_10:
    v9 = 0;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( ++v4 >= a2[2] )
      goto LABEL_11;
  }
  *((_DWORD *)v11 + 28) = 0;
LABEL_76:
  v39 = v13 - 48;
  StorEtwHwTimeoutDetectedEvent(v13 - 48, 0LL, v12);
  *((_DWORD *)v11 + 28) = -2;
  v9 = -1073741643;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_97:
  if ( a3 )
    *a3 = v10;
  if ( a4 && v39 )
    *a4 = *(_QWORD *)(v39 + 168);
LABEL_12:
  if ( v7 )
    _interlockedbittestandset((volatile signed __int32 *)(v5 + 512), 2u);
  return v9;
}
