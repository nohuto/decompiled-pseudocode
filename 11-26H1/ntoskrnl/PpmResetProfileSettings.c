/*
 * XREFs of PpmResetProfileSettings @ 0x1404E4C60
 * Callers:
 *     PpmRegisterProfiles @ 0x1407E6B9C (PpmRegisterProfiles.c)
 *     PpmDisableProfile @ 0x140AD85C4 (PpmDisableProfile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmResetProfileSettings(__int64 a1)
{
  __int64 v1; // r8
  _OWORD *v2; // rdx
  int *p_SchedulerAssistPriorityFloor; // rax
  __int64 v4; // r9
  __int128 v5; // xmm1
  _OWORD *v6; // rdx
  _OWORD *v7; // rcx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  __int64 result; // rax

  v1 = 5LL;
  v2 = (_OWORD *)(a1 + 40);
  p_SchedulerAssistPriorityFloor = &PopDirectedDripsDiagLock.SchedulerAssistPriorityFloor;
  v4 = 5LL;
  do
  {
    *v2 = *(_OWORD *)p_SchedulerAssistPriorityFloor;
    v2[1] = *((_OWORD *)p_SchedulerAssistPriorityFloor + 1);
    v2[2] = *((_OWORD *)p_SchedulerAssistPriorityFloor + 2);
    v2[3] = *((_OWORD *)p_SchedulerAssistPriorityFloor + 3);
    v2[4] = *((_OWORD *)p_SchedulerAssistPriorityFloor + 4);
    v2[5] = *((_OWORD *)p_SchedulerAssistPriorityFloor + 5);
    v2[6] = *((_OWORD *)p_SchedulerAssistPriorityFloor + 6);
    v2 += 8;
    v5 = *((_OWORD *)p_SchedulerAssistPriorityFloor + 7);
    p_SchedulerAssistPriorityFloor += 32;
    *(v2 - 1) = v5;
    --v4;
  }
  while ( v4 );
  *v2 = *(_OWORD *)p_SchedulerAssistPriorityFloor;
  v2[1] = *((_OWORD *)p_SchedulerAssistPriorityFloor + 1);
  v2[2] = *((_OWORD *)p_SchedulerAssistPriorityFloor + 2);
  v2[3] = *((_OWORD *)p_SchedulerAssistPriorityFloor + 3);
  *((_QWORD *)v2 + 8) = *((_QWORD *)p_SchedulerAssistPriorityFloor + 8);
  v6 = (_OWORD *)(a1 + 752);
  v7 = (_OWORD *)(a1 + 752);
  v8 = &unk_140F0B790;
  do
  {
    *v7 = *v8;
    v7[1] = v8[1];
    v7[2] = v8[2];
    v7[3] = v8[3];
    v7[4] = v8[4];
    v7[5] = v8[5];
    v7[6] = v8[6];
    v7 += 8;
    v9 = v8[7];
    v8 += 8;
    *(v7 - 1) = v9;
    --v1;
  }
  while ( v1 );
  *v7 = *v8;
  v7[1] = v8[1];
  v7[2] = v8[2];
  v7[3] = v8[3];
  *((_QWORD *)v7 + 8) = *((_QWORD *)v8 + 8);
  result = 3LL;
  do
  {
    *(_OWORD *)((char *)v6 - 712) = 0LL;
    *v6++ = 0LL;
    --result;
  }
  while ( result );
  return result;
}
