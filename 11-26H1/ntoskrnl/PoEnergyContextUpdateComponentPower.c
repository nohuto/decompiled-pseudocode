/*
 * XREFs of PoEnergyContextUpdateComponentPower @ 0x1409CBF10
 * Callers:
 *     PsUpdateComponentPower @ 0x140451F70 (PsUpdateComponentPower.c)
 *     NtSetThreadExecutionState @ 0x1407D51F0 (NtSetThreadExecutionState.c)
 *     PopPowerRequestCallbackDisplayRequired @ 0x140ABE670 (PopPowerRequestCallbackDisplayRequired.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     RtlTimelineBitmapUpdate @ 0x1404365B0 (RtlTimelineBitmapUpdate.c)
 *     RtlTimelineBitmapUpdateRange @ 0x140458110 (RtlTimelineBitmapUpdateRange.c)
 *     KeQueryTimelineBitmapTime @ 0x14047EAE8 (KeQueryTimelineBitmapTime.c)
 *     RtlStateDurationUpdate @ 0x1404C5A38 (RtlStateDurationUpdate.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopEtEnergyContextSetState @ 0x1409CC484 (PopEtEnergyContextSetState.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x1409CDAE4 (PopEtEnergyContextProcessStateUpdate.c)
 */

void *__fastcall PoEnergyContextUpdateComponentPower(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  int v4; // ebp
  void *result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  int v11; // esi
  int v12; // esi
  int v13; // esi
  unsigned int v14; // eax
  int v15; // r9d
  unsigned int v16; // edx
  unsigned int v17; // r8d
  int v18; // eax
  unsigned int v19; // r8d
  __int64 *v20; // rcx
  unsigned int v21; // r8d
  int v22; // eax
  __int64 *v23; // r11
  int v24; // r8d
  int v25; // r9d
  unsigned int TimelineBitmapTime; // eax
  int v27; // esi
  int v28; // r8d
  int v29; // r9d
  unsigned int v30; // eax
  unsigned int v31; // r9d
  __int16 v32; // dx
  unsigned int v33; // r8d
  unsigned int *v34; // rcx
  unsigned int v35; // edx
  unsigned int v36; // eax
  __int16 v37; // r8
  bool v38; // zf
  __int64 v39; // rbp
  bool v40; // bl
  __int64 *v41; // rbp
  __int64 v42; // rcx
  unsigned int v43; // eax
  unsigned int v44; // r8d
  bool v45; // zf
  unsigned int v46; // edx
  unsigned int v47; // ebx
  __int64 v49; // [rsp+20h] [rbp-D8h]
  __int64 v50; // [rsp+20h] [rbp-D8h]
  __int64 v51; // [rsp+20h] [rbp-D8h]
  __int64 v52; // [rsp+20h] [rbp-D8h]
  _DWORD v53[36]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(a1 + 1640);
  v4 = a3;
  result = memset_0(v53, 0, sizeof(v53));
  if ( v3 )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)(v3 + 440), v8, v9, v10);
    if ( a2 > 10 )
    {
      if ( a2 != 11 )
      {
        if ( a2 != 12 )
        {
          if ( a2 != 13 )
          {
            if ( a2 == 14 )
              ++*(_DWORD *)(v3 + 428);
            return (void *)PopReleaseRwLock((struct _KTHREAD *)(v3 + 440));
          }
          ++*(_DWORD *)(v3 + 424);
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          v20 = (__int64 *)(v3 + 376);
          goto LABEL_38;
        }
        v23 = (__int64 *)(v3 + 408);
        if ( v4 == 3 )
        {
          if ( *(int *)(v3 + 412) < 0 )
            return (void *)PopReleaseRwLock((struct _KTHREAD *)(v3 + 440));
          v49 = *v23;
          v24 = 4096;
          if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
             - (unsigned int)*v23 <= 0x1000 )
            v24 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *v23;
          if ( ~v24 < (HIDWORD(v49) & 0x7FFFFFFFu) )
            v25 = -1;
          else
            v25 = (HIDWORD(v49) & 0x7FFFFFFF) + v24;
          HIDWORD(v50) = HIDWORD(v49) & 0x80000000 | v25 & 0x7FFFFFFF;
          LODWORD(v50) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *v23 = v50;
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          v20 = (__int64 *)(v3 + 368);
          goto LABEL_38;
        }
        if ( (unsigned int)(v4 - 1) > 1 )
          return (void *)PopReleaseRwLock((struct _KTHREAD *)(v3 + 440));
        v47 = *(_DWORD *)(v3 + 480);
        if ( v4 == 1 )
        {
          *(_DWORD *)(v3 + 480) = ++v47;
          if ( v47 > 1 )
            return (void *)PopReleaseRwLock((struct _KTHREAD *)(v3 + 440));
        }
        else if ( v47 )
        {
          *(_DWORD *)(v3 + 480) = --v47;
          if ( v47 )
            return (void *)PopReleaseRwLock((struct _KTHREAD *)(v3 + 440));
        }
        RtlStateDurationUpdate(
          (unsigned __int64 *)(v3 + 408),
          v47 != 0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v43 = KeQueryTimelineBitmapTime();
        v45 = v47 == 0;
        v20 = (__int64 *)(v3 + 368);
LABEL_56:
        v16 = v43;
        if ( v45 )
        {
          RtlTimelineBitmapUpdateRange(v20, v43 - (v44 >> 12), v43);
          return (void *)PopReleaseRwLock((struct _KTHREAD *)(v3 + 440));
        }
        goto LABEL_16;
      }
    }
    else if ( a2 != 10 )
    {
      v11 = a2 - 4;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 2;
          if ( !v13 )
          {
            v14 = KeQueryTimelineBitmapTime();
            v15 = -1;
            v16 = v14;
            if ( (_WORD)v4 )
            {
              v17 = *(_DWORD *)(v3 + 128);
              if ( ~(unsigned __int16)v4 < v17 )
                v18 = -1;
              else
                v18 = v17 + (unsigned __int16)v4;
              *(_DWORD *)(v3 + 128) = v18;
              RtlTimelineBitmapUpdate((unsigned int *)(v3 + 320), v16);
            }
            if ( WORD1(a3) )
            {
              v21 = *(_DWORD *)(v3 + 132);
              v22 = v21 + WORD1(a3);
              if ( ~WORD1(a3) < v21 )
                v22 = v15;
              *(_DWORD *)(v3 + 132) = v22;
              RtlTimelineBitmapUpdate((unsigned int *)(v3 + 328), v16);
            }
            if ( !WORD2(a3) )
              return (void *)PopReleaseRwLock((struct _KTHREAD *)(v3 + 440));
            v19 = *(_DWORD *)(v3 + 136);
            if ( ~WORD2(a3) >= v19 )
              v15 = v19 + WORD2(a3);
            *(_DWORD *)(v3 + 136) = v15;
            v20 = (__int64 *)(v3 + 336);
            goto LABEL_16;
          }
          v27 = v13 - 1;
          if ( !v27 )
          {
            v53[1] = HIDWORD(a3);
            v53[0] = v4;
            PopEtEnergyContextSetState(a1, v53);
            return (void *)PopReleaseRwLock((struct _KTHREAD *)(v3 + 440));
          }
          if ( v27 != 1 )
            return (void *)PopReleaseRwLock((struct _KTHREAD *)(v3 + 440));
          v51 = *(_QWORD *)(v3 + 384);
          v28 = 1000;
          if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
             - (unsigned int)v51 <= 0x3E8 )
            v28 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v51;
          if ( ~v28 < (HIDWORD(v51) & 0x7FFFFFFFu) )
            v29 = -1;
          else
            v29 = (HIDWORD(v51) & 0x7FFFFFFF) + v28;
          HIDWORD(v52) = HIDWORD(v51) & 0x80000000 | v29 & 0x7FFFFFFF;
          LODWORD(v52) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_QWORD *)(v3 + 384) = v52;
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          v20 = (__int64 *)(v3 + 344);
LABEL_38:
          v16 = TimelineBitmapTime;
LABEL_16:
          RtlTimelineBitmapUpdate((unsigned int *)v20, v16);
          return (void *)PopReleaseRwLock((struct _KTHREAD *)(v3 + 440));
        }
        RtlStateDurationUpdate(
          (unsigned __int64 *)(v3 + 112),
          v4 != 0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v30 = KeQueryTimelineBitmapTime();
        v32 = *(_WORD *)(v3 + 472);
        v33 = v30;
        v34 = (unsigned int *)(v3 + 312);
        if ( v4 )
        {
          *(_WORD *)(v3 + 472) = v32 | 2;
          v35 = v30;
LABEL_46:
          RtlTimelineBitmapUpdate(v34, v35);
LABEL_47:
          PopEtEnergyContextProcessStateUpdate(a1);
          return (void *)PopReleaseRwLock((struct _KTHREAD *)(v3 + 440));
        }
        *(_WORD *)(v3 + 472) = v32 & 0xFFFD;
        v46 = v30;
      }
      else
      {
        RtlStateDurationUpdate(
          (unsigned __int64 *)(v3 + 104),
          v4 != 0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v36 = KeQueryTimelineBitmapTime();
        v37 = *(_WORD *)(v3 + 472);
        v34 = (unsigned int *)(v3 + 304);
        if ( v4 )
        {
          v35 = v36;
          *(_WORD *)(v3 + 472) = v37 | 1;
          goto LABEL_46;
        }
        v46 = v36;
        *(_WORD *)(v3 + 472) = v37 & 0xFFFE;
        v33 = v36;
      }
      RtlTimelineBitmapUpdateRange((__int64 *)v34, v46 - (v31 >> 12), v33);
      goto LABEL_47;
    }
    v38 = v4 == 0;
    v39 = 360LL;
    v40 = !v38;
    if ( a2 != 11 )
      v39 = 352LL;
    v41 = (__int64 *)(v3 + v39);
    v42 = 400LL;
    if ( a2 != 11 )
      v42 = 392LL;
    RtlStateDurationUpdate(
      (unsigned __int64 *)(v3 + v42),
      !v38,
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    v43 = KeQueryTimelineBitmapTime();
    v45 = !v40;
    v20 = v41;
    goto LABEL_56;
  }
  return result;
}
