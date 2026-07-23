/*
 * XREFs of SshpFlushBlockerDataCache @ 0x140ADCCA0
 * Callers:
 *     SshNotifySystemSessionChange @ 0x140ADC854 (SshNotifySystemSessionChange.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     SSHSupportEtwEventEnabled @ 0x1404A885C (SSHSupportEtwEventEnabled.c)
 *     SSHSupportEtwWrite @ 0x1404D54FC (SSHSupportEtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall SshpFlushBlockerDataCache(ULONG *a1, __int64 a2)
{
  __int64 v3; // rcx
  ULONG i; // esi
  __int64 v5; // rbx
  unsigned __int16 *v6; // rsi
  unsigned int v7; // r11d
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned int v10; // ebx
  unsigned __int16 *v11; // r8
  ULONG v12; // r10d
  int *v13; // rdx
  __int64 v14; // rcx
  ULONG *v15; // r9
  __int64 v16; // rcx
  ULONGLONG v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  ULONGLONG v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  char v23; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+40h] [rbp-C0h] BYREF
  ULONG *v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  _BYTE v27[64]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v28; // [rsp+378h] [rbp+278h] BYREF

  v28 = a2;
  v23 = 0;
  if ( SshpTraceHandleRegistered )
  {
    if ( SSHSupportEtwEventEnabled((__int64)a1, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA) )
    {
      v3 = a1[1];
      if ( (_DWORD)v3 )
      {
        v6 = (unsigned __int16 *)(a1 + 6);
        v7 = 2;
        v23 = v28;
        *(_QWORD *)&v24.Size = 1LL;
        v24.Ptr = (ULONGLONG)&v23;
        v8 = 0LL;
        v25 = a1 + 1;
        v9 = v3;
        v10 = 4;
        v26 = 4LL;
        do
        {
          v11 = (unsigned __int16 *)*((_QWORD *)v6 - 2);
          v12 = *v6;
          v13 = (int *)&v27[v8];
          v14 = 2LL * v7;
          v6 += 16;
          v15 = (ULONG *)&v27[v8 + 32];
          v7 += 5;
          *v13 = *v11 >> 1;
          v8 += 4LL;
          *((_QWORD *)&v24.Size + v14) = 16LL;
          *v15 = v12 >> 1;
          *(&v24.Ptr + v14) = *((_QWORD *)v6 - 5);
          v16 = 2LL * (v10 - 1);
          *(&v24.Ptr + v16) = (ULONGLONG)v13;
          *((_QWORD *)&v24.Size + v16) = 4LL;
          v17 = *((_QWORD *)v11 + 1);
          v18 = 2LL * v10;
          *(&v24.Size + 2 * v18) = *v11;
          *(&v24.Ptr + v18) = v17;
          v19 = 2LL * (v10 + 1);
          v20 = *((_QWORD *)v6 - 3);
          *(&v24.Reserved + 2 * v18) = 0;
          *(&v24.Ptr + v19) = (ULONGLONG)v15;
          *((_QWORD *)&v24.Size + v19) = 4LL;
          v21 = 2LL * (v10 + 2);
          v10 += 5;
          *(&v24.Ptr + v21) = v20;
          *(&v24.Size + 2 * v21) = v12;
          *(&v24.Reserved + 2 * v21) = 0;
          --v9;
        }
        while ( v9 );
        v22 = 2LL * v7;
        *(&v24.Ptr + v22) = (ULONGLONG)&v28;
        *((_QWORD *)&v24.Size + v22) = 8LL;
        SSHSupportEtwWrite((__int64)&v28, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, (__int64)v11, v7 + 1, &v24);
      }
    }
  }
  for ( i = 0; i < a1[1]; *(_OWORD *)&a1[v5 + 6] = 0LL )
  {
    v5 = 8LL * i;
    CmpFreeTransientPoolWithTag(*(void **)&a1[v5 + 8], *a1);
    ++i;
    *(_OWORD *)&a1[v5 + 2] = 0LL;
  }
  a1[1] = 0;
}
