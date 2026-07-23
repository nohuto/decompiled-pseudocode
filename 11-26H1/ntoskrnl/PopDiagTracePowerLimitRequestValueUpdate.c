/*
 * XREFs of PopDiagTracePowerLimitRequestValueUpdate @ 0x1407D77C8
 * Callers:
 *     PoSetPowerLimitValue @ 0x1407CD610 (PoSetPowerLimitValue.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     PoStoreDiagnosticContext @ 0x140426240 (PoStoreDiagnosticContext.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTracePowerLimitRequestValueUpdate(__int64 a1, __int64 a2)
{
  unsigned __int64 *v4; // rbx
  char *v5; // r13
  unsigned int *v6; // r12
  int v7; // edi
  void *Pool2; // rsi
  unsigned __int64 *v9; // rax
  unsigned int v10; // r8d
  __int64 v11; // rdx
  int v12; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-51h] BYREF
  __int64 i; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  int *v16; // [rsp+60h] [rbp-29h]
  __int64 v17; // [rsp+68h] [rbp-21h]
  char *v18; // [rsp+70h] [rbp-19h]
  int v19; // [rsp+78h] [rbp-11h]
  int v20; // [rsp+7Ch] [rbp-Dh]
  __int64 v21; // [rsp+80h] [rbp-9h]
  __int64 v22; // [rsp+88h] [rbp-1h]
  void *v23; // [rsp+90h] [rbp+7h]
  int v24; // [rsp+98h] [rbp+Fh]
  int v25; // [rsp+9Ch] [rbp+13h]

  v13 = 0LL;
  v4 = 0LL;
  i = 0LL;
  v5 = 0LL;
  v12 = 0;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_LIMIT_REQUEST_UPDATE) )
    {
      v6 = (unsigned int *)(a1 + 32);
      v7 = 16 * *(_DWORD *)(a1 + 32);
      if ( v7 )
      {
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          if ( a2 )
          {
            PoStoreDiagnosticContext(a2, 0LL, &v13);
            v9 = (unsigned __int64 *)ExAllocatePool2(0x100uLL);
            v4 = v9;
            if ( !v9 )
            {
LABEL_13:
              ExFreePoolWithTag(Pool2, 0x67696450u);
              return;
            }
            if ( (int)PoStoreDiagnosticContext(a2, v9, &v13) < 0 )
            {
LABEL_12:
              ExFreePoolWithTag(v4, 0x50455654u);
              goto LABEL_13;
            }
            v5 = (char *)v4 + v4[4];
            v12 = v13 - *((_DWORD *)v4 + 8);
          }
          v10 = 0;
          for ( i = a1; v10 < *v6; *((_DWORD *)Pool2 + 2 * v11 + 3) = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v11 + 12) )
          {
            v11 = v10++;
            v11 *= 2LL;
            *((_DWORD *)Pool2 + 2 * v11) = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v11);
            *((_DWORD *)Pool2 + 2 * v11 + 1) = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v11 + 4);
            *((_DWORD *)Pool2 + 2 * v11 + 2) = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v11 + 8);
          }
          UserData.Ptr = (ULONGLONG)&i;
          v20 = 0;
          v16 = &v12;
          v19 = v12;
          v25 = 0;
          *(_QWORD *)&UserData.Size = 8LL;
          v17 = 4LL;
          v18 = v5;
          v21 = a1 + 32;
          v22 = 4LL;
          v23 = Pool2;
          v24 = v7;
          EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_LIMIT_REQUEST_UPDATE, 0LL, 5u, &UserData);
          if ( !v4 )
            goto LABEL_13;
          goto LABEL_12;
        }
      }
    }
  }
}
