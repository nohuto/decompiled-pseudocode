/*
 * XREFs of ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18000FABC
 * Callers:
 *     ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180010484 (-HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERT.c)
 * Callees:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActGetExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@PEAU_HAM_ACTIVITY@@@Z @ 0x18000FCF0 (-HampActGetExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18001423C (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027E6C (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180063B20 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampActUpdateProperties(struct _HAM_ACTIVITY *a1, struct _HAM_ACTIVITY_DYNAMIC_PROPERTIES *a2)
{
  struct _RM_HAM_ACTIVITY_HOST **v2; // rsi
  DWORD v3; // ebp
  unsigned __int64 v4; // r15
  __int64 v5; // r14
  _QWORD *Value; // rbx
  int v9; // ebx
  int ExecutionSpeed; // ebp
  int v11; // edx
  int v12; // eax
  unsigned int v13; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v14; // rsi
  struct _HAM_DEPENDENCY_GROUP *v15; // rsi
  __int64 v16; // rbp
  __int64 *v17; // rax
  __int64 v18; // r8
  char v21; // al
  int v22; // [rsp+50h] [rbp+8h]
  int v23; // [rsp+50h] [rbp+8h]

  v2 = (struct _RM_HAM_ACTIVITY_HOST **)((char *)a1 + 80);
  v3 = HampLockTrackerId;
  v4 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  v5 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v5);
  *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
  if ( *((_BYTE *)a1 + 562) == 4 )
  {
    v13 = -1073741275;
LABEL_34:
    HampHostReleaseLockExclusive(*v2);
    return v13;
  }
  if ( (*((_BYTE *)a1 + 552) & 8) != 0 )
  {
    v13 = -1058275327;
    goto LABEL_34;
  }
  ExecutionSpeed = HampActGetExecutionSpeed(a1);
  v22 = *(_DWORD *)a2;
  v9 = *(_DWORD *)a2;
  v11 = HIWORD(*(_DWORD *)a2);
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
    *((_DWORD *)a1 + 28) ^= (*((_DWORD *)a1 + 28) ^ ((unsigned __int16)v9 << 9)) & 0x200;
  if ( (v11 & 4) != 0 )
  {
    *((_DWORD *)a1 + 28) ^= (*((_DWORD *)a1 + 28) ^ ((unsigned __int16)v9 << 11)) & 0x4000;
    HampPdcSignalWorker((struct _HAM_PDC_CONTEXT *)(v4 + 136), 0);
  }
  if ( (v22 & 0x20000) != 0 )
    *((_DWORD *)a1 + 28) ^= (*((_DWORD *)a1 + 28) ^ ((unsigned __int16)v9 << 6)) & 0x180;
  v12 = *((_DWORD *)a2 + 1);
  v13 = 0;
  v14 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  v23 = v12;
  if ( (v12 & 1) != 0 )
  {
    if ( !HIBYTE(v12) )
    {
      HIBYTE(v23) = *((_BYTE *)a1 + 427);
      v12 = v23;
    }
    *((_DWORD *)a1 + 106) = v12;
    HampHostUpdateActivityState(v14);
  }
  if ( ExecutionSpeed != (unsigned int)HampActGetExecutionSpeed(a1)
    && ((v21 = *((_BYTE *)a1 + 562), v21 == 3) || v21 == 2) )
  {
    v15 = HampHostCheckEnterDependencyWorker(v14);
  }
  else
  {
    v15 = 0LL;
  }
  v16 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v17 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v18 = *v17;
    if ( (*v17 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v17[2]-- == 1 )
      *v17 = v18 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v16 + 8) = 0;
  RtlReleaseSRWLockExclusive(v16);
  if ( v15 )
    HampDepGroupRunStateChangeWorker(v15);
  RmHamHostUpdateSettings(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
  return v13;
}
