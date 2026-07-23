/*
 * XREFs of PiUpdateDriverDBCache @ 0x140A37858
 * Callers:
 *     PiIsDriverBlocked @ 0x140A3814C (PiIsDriverBlocked.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1403C27C0 (RtlInsertElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x14041C050 (RtlLookupElementGenericTableAvl.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     RtlNumberGenericTableElementsAvl @ 0x140487580 (RtlNumberGenericTableElementsAvl.c)
 *     wcsrchr @ 0x14053A7D0 (wcsrchr.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall PiUpdateDriverDBCache(__int64 a1, void *a2, __int64 a3, int a4, __int128 *a5)
{
  _QWORD *result; // rax
  _QWORD *v8; // r15
  wchar_t *v9; // rax
  wchar_t *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  _KSCHEDULING_GROUP *v13; // rax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdi
  _KSCHEDULING_GROUP_POLICY Policy; // rcx
  _KSCHEDULING_GROUP *volatile *v16; // rax
  void *QueryHistoryTimeStamp; // rbx
  _QWORD *v18; // rcx
  _WORD *v19; // rbx
  __int128 v20; // xmm0
  const wchar_t *v21; // rcx
  wchar_t *v22; // rax
  _KSCHEDULING_GROUP_POLICY v23; // rax
  __int128 Buffer; // [rsp+20h] [rbp-40h] BYREF
  __int128 v25; // [rsp+30h] [rbp-30h]
  _BYTE v26[24]; // [rsp+40h] [rbp-20h] BYREF

  Buffer = 0LL;
  v25 = 0LL;
  memset(v26, 0, sizeof(v26));
  result = RtlImageNtHeader(a2);
  v8 = result;
  if ( !result )
    return result;
  qword_140FD84E0 = 1LL;
  v9 = wcsrchr(*(const wchar_t **)(a1 + 8), 0x5Cu);
  if ( v9 )
    v10 = v9 + 1;
  else
    v10 = *(wchar_t **)(a1 + 8);
  v11 = -1LL;
  *((_QWORD *)&v25 + 1) = v10;
  v12 = -1LL;
  do
    ++v12;
  while ( v10[v12] );
  LOWORD(v25) = 2 * v12;
  WORD1(v25) = 2 * v12;
  v13 = (_KSCHEDULING_GROUP *)RtlLookupElementGenericTableAvl(
                                (PRTL_AVL_TABLE)&KiSystemServiceTraceCallbackLock.1136,
                                &Buffer);
  SchedulingGroup = v13;
  if ( v13 )
  {
    Policy = v13->Policy;
    if ( *(_KSCHEDULING_GROUP **)(*(_QWORD *)&v13->Policy + 8LL) == v13 )
    {
      v16 = *(_KSCHEDULING_GROUP *volatile **)&v13->RelativeWeight;
      if ( *v16 == SchedulingGroup )
      {
        *(_KSCHEDULING_GROUP_POLICY *)v16 = Policy;
        *(_QWORD *)(*(_QWORD *)&Policy + 8LL) = v16;
LABEL_10:
        QueryHistoryTimeStamp = (void *)SchedulingGroup->QueryHistoryTimeStamp;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)&KiSystemServiceTraceCallbackLock.1136, SchedulingGroup);
        ExFreePoolWithTag(QueryHistoryTimeStamp, 0);
        goto LABEL_20;
      }
    }
LABEL_13:
    __fastfail(3u);
  }
  if ( RtlNumberGenericTableElementsAvl((PRTL_AVL_TABLE)&KiSystemServiceTraceCallbackLock.1136) >= 0x100 )
  {
    SchedulingGroup = KiSystemServiceTraceCallbackLock.SchedulingGroup;
    if ( *(struct _KTHREAD **)&KiSystemServiceTraceCallbackLock.SchedulingGroup->RelativeWeight != (struct _KTHREAD *)&KiSystemServiceTraceCallbackLock.SchedulingGroup )
      goto LABEL_13;
    v23 = KiSystemServiceTraceCallbackLock.SchedulingGroup->Policy;
    if ( *(_KSCHEDULING_GROUP *volatile *)(*(_QWORD *)&KiSystemServiceTraceCallbackLock.SchedulingGroup->Policy + 8LL) != KiSystemServiceTraceCallbackLock.SchedulingGroup )
      goto LABEL_13;
    KiSystemServiceTraceCallbackLock.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)KiSystemServiceTraceCallbackLock.SchedulingGroup->Policy;
    *(_QWORD *)(*(_QWORD *)&v23 + 8LL) = &KiSystemServiceTraceCallbackLock.SchedulingGroup;
  }
  if ( SchedulingGroup )
    goto LABEL_10;
LABEL_20:
  v20 = *a5;
  v21 = *(const wchar_t **)(a1 + 8);
  *(_DWORD *)&v26[4] = a4;
  *(_OWORD *)&v26[8] = v20;
  *(_DWORD *)v26 = *((_DWORD *)v8 + 2);
  v22 = wcsrchr(v21, 0x5Cu);
  if ( v22 )
    v19 = v22 + 1;
  else
    v19 = *(_WORD **)(a1 + 8);
  do
    ++v11;
  while ( v19[v11] );
  WORD1(v25) = 2 * v11;
  LOWORD(v25) = 2 * v11;
  result = (_QWORD *)ExAllocatePool2(0x100uLL);
  *((_QWORD *)&v25 + 1) = result;
  if ( result )
  {
    memmove(result, v19, (unsigned __int16)v25);
    result = RtlInsertElementGenericTableAvl(
               (PRTL_AVL_TABLE)&KiSystemServiceTraceCallbackLock.1136,
               &Buffer,
               0x38u,
               0LL);
    if ( result )
    {
      v18 = *(_QWORD **)&KiSystemServiceTraceCallbackLock.WaitRegister.Flags;
      if ( **(struct _KTHREAD ***)&KiSystemServiceTraceCallbackLock.WaitRegister.Flags != (struct _KTHREAD *)&KiSystemServiceTraceCallbackLock.SchedulingGroup )
        goto LABEL_13;
      *result = &KiSystemServiceTraceCallbackLock.SchedulingGroup;
      result[1] = v18;
      *v18 = result;
      *(_QWORD *)&KiSystemServiceTraceCallbackLock.WaitRegister.Flags = result;
    }
  }
  return result;
}
