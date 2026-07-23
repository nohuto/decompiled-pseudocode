/*
 * XREFs of EtwpTraceThreadRundown @ 0x14051ED18
 * Callers:
 *     EtwpThreadRundownApc @ 0x1406CB5E0 (EtwpThreadRundownApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1406CB674 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpThreadEnumCallback @ 0x1409BDBC0 (EtwpThreadEnumCallback.c)
 * Callees:
 *     PspUnlockThreadSecurityShared @ 0x140271330 (PspUnlockThreadSecurityShared.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     PsGetPagePriorityThread @ 0x1403843A0 (PsGetPagePriorityThread.c)
 *     EtwpLogSystemEventUnsafe @ 0x140406FB0 (EtwpLogSystemEventUnsafe.c)
 *     PspLockThreadSecurityShared @ 0x140442F10 (PspLockThreadSecurityShared.c)
 *     Feature_1023137082__private_IsEnabledDeviceUsageNoInline @ 0x1406C9BF8 (Feature_1023137082__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 */

__int64 __fastcall EtwpTraceThreadRundown(__int64 a1, __int64 a2)
{
  unsigned int v3; // r12d
  __int64 v4; // r13
  unsigned int v5; // esi
  unsigned __int16 v6; // r15
  __int64 v7; // rax
  _WORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rcx
  char v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  __int16 v15; // cx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  unsigned __int16 *v19; // rax
  __int64 *v20; // rcx
  unsigned int v21; // edx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 result; // rax
  _QWORD v26[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 *v27; // [rsp+60h] [rbp-B8h]
  __int64 v28; // [rsp+68h] [rbp-B0h]
  __int64 *v29; // [rsp+70h] [rbp-A8h]
  __int64 v30; // [rsp+78h] [rbp-A0h]
  __int64 v31; // [rsp+80h] [rbp-98h]
  __int64 v32; // [rsp+88h] [rbp-90h]
  _DWORD v33[2]; // [rsp+90h] [rbp-88h] BYREF
  __int64 v34; // [rsp+98h] [rbp-80h]
  __int64 v35; // [rsp+A0h] [rbp-78h]
  __int64 ULong64FromUser; // [rsp+A8h] [rbp-70h]
  __int64 v37; // [rsp+B0h] [rbp-68h]
  __int64 v38; // [rsp+B8h] [rbp-60h]
  __int64 v39; // [rsp+C0h] [rbp-58h]
  __int64 v40; // [rsp+C8h] [rbp-50h]
  int ULongFromUser; // [rsp+D0h] [rbp-48h]
  char v42; // [rsp+D4h] [rbp-44h]
  char PagePriorityThread; // [rsp+D5h] [rbp-43h]
  char IoPriorityThread; // [rsp+D6h] [rbp-42h]
  unsigned __int8 v45; // [rsp+D7h] [rbp-41h]
  __int64 v46; // [rsp+D8h] [rbp-40h]

  v31 = a1;
  v3 = 2;
  v46 = 0LL;
  v4 = *(_QWORD *)(a2 + 32);
  v32 = v4;
  v5 = *(_DWORD *)(a2 + 40);
  v6 = 1284 - (*(_BYTE *)(a2 + 64) != 0);
  if ( (struct _KTHREAD *)a1 != KeGetCurrentThread() )
    v5 &= 0xFFFFE7FF;
  v33[0] = *(_DWORD *)(a1 + 1288);
  v33[1] = *(_DWORD *)(a1 + 1296);
  v34 = *(_QWORD *)(a1 + 56);
  v35 = *(_QWORD *)(a1 + 48);
  v7 = *(unsigned __int16 *)(a1 + 584);
  v8 = *(_WORD **)(a1 + 576);
  if ( (unsigned __int16)v7 >= *v8 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)&v8[4 * v7 + 4];
  v38 = v9;
  v39 = *(_QWORD *)(a1 + 1376);
  v10 = *(_QWORD *)(a1 + 240);
  ULong64FromUser = 0LL;
  v37 = 0LL;
  v40 = v10;
  ULongFromUser = 0;
  v42 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(a1);
  v45 = 0;
  v13 = 1LL;
  if ( (*(_BYTE *)(a1 + 1448) & 8) != 0 )
  {
    v11 = v45;
    if ( *(_QWORD *)(a1 + 1240) != a1 + 1240 )
      v11 = 1LL;
    v45 = v11;
  }
  if ( v10 && v12 )
  {
    v14 = *(_QWORD *)(a1 + 544);
    if ( !*(_QWORD *)(v14 + 784) )
      goto LABEL_18;
    v15 = *(_WORD *)(v14 + 1772);
    if ( v15 != 332 && v15 != 452 )
      LOBYTE(v13) = 0;
    if ( (_BYTE)v13 )
    {
      ULongFromUser = RtlReadULongFromUser(v10 + 12128);
      ULong64FromUser = (unsigned int)RtlReadULongFromUser(v10 + 8196);
      v11 = (unsigned int)RtlReadULongFromUser(v10 + 8200);
      v37 = v11;
    }
    else
    {
LABEL_18:
      ULongFromUser = RtlReadULong64FromUser(v10 + 5920);
      ULong64FromUser = RtlReadULong64FromUser(v10 + 8);
      v37 = RtlReadULong64FromUser(v10 + 16);
    }
  }
  v26[0] = v33;
  v26[1] = 72LL;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)Feature_1023137082__private_IsEnabledDeviceUsageNoInline(v11, v13) )
    PspLockThreadSecurityShared(a1, (__int64)CurrentThread, v17, v18);
  v19 = *(unsigned __int16 **)(a1 + 1696);
  if ( v19 && (v20 = (__int64 *)*((_QWORD *)v19 + 1)) != 0LL )
  {
    v21 = *v19;
    v22 = 2048LL;
    if ( (unsigned __int16)v21 < 0x800u )
      v22 = v21;
    v27 = v20;
    v28 = (unsigned int)v22;
    if ( !(_DWORD)v22 || *((_WORD *)v20 + (v22 >> 1) - 1) )
    {
      v29 = &EtwpNull;
      v30 = 2LL;
      v3 = 3;
    }
  }
  else
  {
    v27 = &EtwpNull;
    v28 = 2LL;
  }
  EtwpLogSystemEventUnsafe(*(_QWORD *)(v4 + 1360), (__int64)v26, a1, *(_DWORD *)v4, v3, v6, v5, 0);
  result = Feature_1023137082__private_IsEnabledDeviceUsageNoInline(v24, v23);
  if ( (_DWORD)result )
    return PspUnlockThreadSecurityShared(a1, CurrentThread);
  return result;
}
