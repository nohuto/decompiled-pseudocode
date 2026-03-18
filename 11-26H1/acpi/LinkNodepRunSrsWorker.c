/*
 * XREFs of LinkNodepRunSrsWorker @ 0x1400719F0
 * Callers:
 *     LinkNodepRunSrsAsync @ 0x140055358 (LinkNodepRunSrsAsync.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_q @ 0x14002EC00 (WPP_RECORDER_SF_q.c)
 *     _ACPIInternalError @ 0x14004B798 (_ACPIInternalError.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall LinkNodepRunSrsWorker(__int64 a1, int a2, __int64 a3, __int64 **a4)
{
  int v5; // edi
  char v6; // r12
  int v7; // ecx
  __int64 (__fastcall *v8)(_QWORD, _QWORD, _QWORD, _QWORD); // rdx
  int v9; // ecx
  __int64 *v10; // rcx
  int v11; // eax
  __int64 *v12; // rax
  __int64 *v13; // r8
  char v14; // r9
  __int64 *v15; // r13
  char v16; // r15
  unsigned __int16 v17; // si
  int v18; // ebp
  char v19; // cl
  unsigned __int16 v20; // dx
  unsigned int v21; // ebp
  __int64 *Pool2; // rax
  __int64 **v23; // rdi
  __int64 *v24; // rdx
  __int64 *v25; // rdx
  __int64 *v26; // rax
  char v27; // cl
  __int64 *v28; // rsi
  __int64 *v29; // rcx
  __int64 v31; // [rsp+90h] [rbp+8h]
  char v32; // [rsp+98h] [rbp+10h]

  v31 = a1;
  v5 = a2;
  v6 = 0;
  if ( a2 < 0 )
  {
LABEL_44:
    if ( *((_DWORD *)a4 + 9) )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64 *))a4[10])(a1, (unsigned int)v5, 0LL, a4[11]);
    ExFreePoolWithTag(a4, 0);
    return (unsigned int)v5;
  }
  _InterlockedAdd((volatile signed __int32 *)a4 + 9, 1u);
  v7 = *((_DWORD *)a4 + 8);
  v8 = LinkNodepRunSrsWorker;
  if ( v7 )
  {
    v9 = v7 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        ACPIInternalError(0x508EDuLL);
LABEL_42:
      ExFreePoolWithTag(a4[3], 0);
      v5 = 0;
LABEL_43:
      a1 = v31;
      goto LABEL_44;
    }
  }
  else
  {
    v10 = *a4;
    *((_DWORD *)a4 + 8) = 1;
    v11 = ACPIGet(
            (__int64)v10,
            1397903455,
            738263048,
            0LL,
            0,
            (__int64)LinkNodepRunSrsWorker,
            (__int64)a4,
            (__int64)(a4 + 2),
            0LL);
    v5 = v11;
    if ( v11 == 259 )
      return 259LL;
    if ( v11 < 0 )
      goto LABEL_43;
  }
  v12 = a4[2];
  *((_DWORD *)a4 + 8) = 2;
  if ( !v12 )
  {
    v5 = -1073741772;
    goto LABEL_43;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v8,
      20,
      13,
      (__int64)&WPP_27c747d966ad35cece80159593e08d4b_Traceguids,
      (char)v12);
  }
  v13 = a4[2];
  v14 = 0;
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  v32 = 0;
  v18 = 0;
  while ( 1 )
  {
    v19 = *(_BYTE *)v13;
    if ( !*(_BYTE *)v13 )
      break;
    if ( *(char *)v13 < 0 )
    {
      v20 = *(_WORD *)((char *)v13 + 1) + 3;
    }
    else
    {
      v20 = (v19 & 7) + 1;
      v19 &= 0x78u;
    }
    switch ( v19 )
    {
      case 120:
        v18 += v20;
        if ( v20 > 1u )
          v16 = 1;
        goto LABEL_26;
      case 32:
        v17 = v20;
        break;
      case -119:
        v17 = 9;
        v32 = 1;
        break;
      default:
        goto LABEL_23;
    }
    v15 = v13;
    v18 += v17;
    v14 = 1;
LABEL_23:
    v13 = (__int64 *)((char *)v13 + v20);
  }
LABEL_26:
  if ( !v14 )
  {
    ExFreePoolWithTag(a4[2], 0);
    v5 = -1073741275;
    goto LABEL_43;
  }
  v21 = v18 + 1;
  Pool2 = (__int64 *)ExAllocatePool2(64LL, v21, 1097884481LL);
  v23 = a4 + 3;
  a4[3] = Pool2;
  if ( !Pool2 )
  {
    ExFreePoolWithTag(a4[2], 0);
    v5 = -1073741670;
    goto LABEL_43;
  }
  memmove(Pool2, v15, v17);
  ExFreePoolWithTag(a4[2], 0);
  v24 = *v23;
  if ( v32 )
  {
    *((_BYTE *)v24 + 4) = 1;
    *(_WORD *)((char *)v24 + 1) = v17 - 3;
    *(_DWORD *)((char *)v24 + 5) = *((_DWORD *)a4 + 2);
  }
  else
  {
    *(_WORD *)((char *)v24 + 1) = 1 << *((_DWORD *)a4 + 2);
  }
  v25 = *v23;
  *((_BYTE *)*v23 + v17) = 120;
  if ( v16 )
  {
    *((_BYTE *)v25 + v17) = 121;
    v26 = *v23;
    v27 = *(_BYTE *)*v23;
    if ( v27 != 121 )
    {
      do
      {
        v26 = (__int64 *)((char *)v26 + 1);
        v6 = v27;
        v27 = *(_BYTE *)v26;
      }
      while ( *(_BYTE *)v26 != 121 );
      v23 = a4 + 3;
    }
    *((_BYTE *)v25 + v17 + 1) = -v6;
  }
  v28 = AMLIGetNamedChild(*a4, 1397904223);
  if ( !v28 )
  {
    v29 = *v23;
    v5 = -1073741772;
    ExFreePoolWithTag(v29, 0);
    goto LABEL_43;
  }
  a4[9] = *v23;
  *((_WORD *)a4 + 21) = 3;
  *((_DWORD *)a4 + 16) = v21;
  v5 = AMLIAsyncEvalObject(v28, 0LL, 1, (__int64)(a4 + 5), LinkNodepRunSrsWorker, (__int64)a4);
  AMLIDereferenceHandleEx((__int64)v28);
  if ( v5 != 259 )
  {
    if ( v5 >= 0 )
      goto LABEL_42;
    goto LABEL_43;
  }
  return 259LL;
}
