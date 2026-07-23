/*
 * XREFs of KiAdjustTimer2DueTimes @ 0x140339568
 * Callers:
 *     KiAdjustTimerDueTimes @ 0x1403E84DC (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiInsertTimer2 @ 0x1403397B0 (KiInsertTimer2.c)
 *     KiShouldActivateHRTimerClock @ 0x140339874 (KiShouldActivateHRTimerClock.c)
 *     KiRemoveTimer2 @ 0x14037AC60 (KiRemoveTimer2.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x14037B19C (KiSendClockInterruptToTargetProcessor.c)
 *     KiRequestTimer2Expiration @ 0x1404475C4 (KiRequestTimer2Expiration.c)
 *     RtlULongLongSub @ 0x1404A8EE4 (RtlULongLongSub.c)
 */

__int64 __fastcall KiAdjustTimer2DueTimes(__int64 a1, signed __int64 a2)
{
  __int64 v2; // r12
  _QWORD *v3; // rdi
  __int64 v4; // r10
  __int64 v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r13
  _QWORD **v9; // rcx
  _QWORD *v10; // r15
  _QWORD *v11; // rax
  _QWORD *i; // rcx
  char v13; // al
  ULONGLONG *v14; // r8
  ULONGLONG v15; // rcx
  signed __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // bl
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  __int64 result; // rax
  _QWORD *v25; // r8
  ULONGLONG v26; // rcx
  _QWORD *v27; // r8
  _QWORD v28[2]; // [rsp+20h] [rbp-10h] BYREF
  char v30; // [rsp+78h] [rbp+48h] BYREF

  v2 = 0LL;
  v30 = 0;
  v3 = v28;
  v28[1] = v28;
  v4 = a1;
  v28[0] = v28;
  v5 = (__int64)&KiTimer2Collections;
  do
  {
    v6 = *(_QWORD *)(v5 + 8);
    if ( (v6 & 1) != 0 )
    {
      if ( v6 == 1 )
        goto LABEL_31;
      v7 = (_QWORD *)(v6 ^ (v5 | 1));
    }
    else
    {
      v7 = *(_QWORD **)(v5 + 8);
    }
    if ( v7 )
    {
      v8 = 0LL;
      if ( v2 >= 3 )
        v8 = 24LL;
      do
      {
        v9 = (_QWORD **)v7[1];
        v10 = &v7[v8 / 0xFFFFFFFFFFFFFFF8uLL];
        v11 = v7;
        if ( v9 )
        {
          v7 = (_QWORD *)v7[1];
          for ( i = *v9; i; i = (_QWORD *)*i )
            v7 = i;
        }
        else
        {
          while ( 1 )
          {
            v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v7 || (_QWORD *)*v7 == v11 )
              break;
            v11 = v7;
          }
        }
        v13 = *((_BYTE *)v10 + 104);
        if ( v13 != *(_BYTE *)v4 && (v13 || (*((_BYTE *)v10 + 105) & 2) == 0) )
        {
          KiRemoveTimer2(v10 - 3);
          v4 = a1;
          v14 = v10 + 6;
          v15 = v10[6];
          v16 = *(_QWORD *)(a1 + 24);
          if ( v16 >= 0 )
          {
            if ( RtlULongLongSub(v15, v16, v14) )
              *v25 = 0LL;
            v26 = v10[7];
            if ( v26 != -1LL && RtlULongLongSub(v26, *(_QWORD *)(v4 + 24), v10 + 7) )
              *v27 = 0LL;
          }
          else
          {
            a2 = -v16;
            v17 = a2 + v15;
            if ( a2 + v15 < v15 || v17 == -1 )
              v17 = -2LL;
            v18 = v10[7];
            *v14 = v17;
            if ( v18 != -1LL )
            {
              v20 = v18 + a2;
              if ( v18 + a2 < v18 || v20 == -1 )
                v20 = -2LL;
              v10[7] = v20;
            }
          }
          v19 = v28[0];
          if ( *(_QWORD **)(v28[0] + 8LL) != v28 )
            __fastfail(3u);
          *v10 = v28[0];
          v10[1] = v28;
          v3 = v10;
          *(_QWORD *)(v19 + 8) = v10;
          v28[0] = v10;
        }
      }
      while ( v7 );
    }
LABEL_31:
    ++v2;
    v5 += 24LL;
  }
  while ( v5 < (__int64)&KiCpuPartitionAssignmentLock );
  v21 = 0;
  if ( v3 != v28 )
  {
    do
    {
      v22 = v3 - 3;
      LOBYTE(a2) = 1;
      v3 = (_QWORD *)*v3;
      KiInsertTimer2(v22, a2, &v30);
      if ( v30 )
        v21 = 1;
    }
    while ( v3 != v28 );
    if ( v21 )
      KiRequestTimer2Expiration();
  }
  v23 = qword_140F26DE0;
  if ( qword_140F26DE0 >= (unsigned __int64)qword_140F26DC8 )
    v23 = qword_140F26DC8;
  result = KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], v23);
  if ( (_BYTE)result )
    return KiSendClockInterruptToTargetProcessor((unsigned int)KiClockTimerOwner);
  return result;
}
