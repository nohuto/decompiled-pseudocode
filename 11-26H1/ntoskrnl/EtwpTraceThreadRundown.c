/*
 * XREFs of EtwpTraceThreadRundown @ 0x140412620
 * Callers:
 *     EtwpTraceThreadRundownWithStack @ 0x1405291D8 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpThreadRundownApc @ 0x1406C78E0 (EtwpThreadRundownApc.c)
 *     EtwpThreadEnumCallback @ 0x140A8BF80 (EtwpThreadEnumCallback.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x1403750A0 (PsGetIoPriorityThread.c)
 *     PsGetPagePriorityThread @ 0x1403825F0 (PsGetPagePriorityThread.c)
 *     EtwpLogSystemEventUnsafe @ 0x14041297C (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 */

__int64 __fastcall EtwpTraceThreadRundown(__int64 a1, __int64 a2)
{
  int v3; // r12d
  __int64 v4; // r13
  int v5; // esi
  __int16 v6; // r15
  __int64 v7; // rax
  _WORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r14
  char v11; // r9
  char v12; // dl
  __int64 v13; // rax
  __int16 v14; // cx
  unsigned __int16 *v15; // rax
  __int64 *v17; // rcx
  unsigned int v18; // edx
  unsigned __int64 v19; // rax
  char v20; // cl
  __int64 *v21; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-C0h]
  __int64 *v23; // [rsp+60h] [rbp-B8h]
  __int64 v24; // [rsp+68h] [rbp-B0h]
  __int64 *v25; // [rsp+70h] [rbp-A8h]
  __int64 v26; // [rsp+78h] [rbp-A0h]
  __int64 v27; // [rsp+80h] [rbp-98h]
  __int64 v28; // [rsp+88h] [rbp-90h]
  __int64 v29; // [rsp+90h] [rbp-88h] BYREF
  __int64 v30; // [rsp+98h] [rbp-80h]
  __int64 v31; // [rsp+A0h] [rbp-78h]
  __int64 ULong64FromUser; // [rsp+A8h] [rbp-70h]
  __int64 v33; // [rsp+B0h] [rbp-68h]
  __int64 v34; // [rsp+B8h] [rbp-60h]
  __int64 v35; // [rsp+C0h] [rbp-58h]
  __int64 v36; // [rsp+C8h] [rbp-50h]
  int ULongFromUser; // [rsp+D0h] [rbp-48h]
  char v38; // [rsp+D4h] [rbp-44h]
  char PagePriorityThread; // [rsp+D5h] [rbp-43h]
  char IoPriorityThread; // [rsp+D6h] [rbp-42h]
  char v41; // [rsp+D7h] [rbp-41h]
  __int64 v42; // [rsp+D8h] [rbp-40h]

  v28 = a1;
  v3 = 2;
  v42 = 0LL;
  v4 = *(_QWORD *)(a2 + 32);
  v27 = v4;
  v5 = *(_DWORD *)(a2 + 40);
  v6 = 1284 - (*(_BYTE *)(a2 + 64) != 0);
  if ( (struct _KTHREAD *)a1 != KeGetCurrentThread() )
    v5 &= 0xFFFFE7FF;
  LODWORD(v29) = *(_DWORD *)(a1 + 1288);
  HIDWORD(v29) = *(_DWORD *)(a1 + 1296);
  v30 = *(_QWORD *)(a1 + 56);
  v31 = *(_QWORD *)(a1 + 48);
  v7 = *(unsigned __int16 *)(a1 + 584);
  v8 = *(_WORD **)(a1 + 576);
  if ( (unsigned __int16)v7 >= *v8 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)&v8[4 * v7 + 4];
  v34 = v9;
  v35 = *(_QWORD *)(a1 + 1376);
  v10 = *(_QWORD *)(a1 + 240);
  ULong64FromUser = 0LL;
  v33 = 0LL;
  v36 = v10;
  ULongFromUser = 0;
  v38 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(a1);
  v41 = 0;
  v12 = 1;
  if ( (*(_BYTE *)(a1 + 1448) & 8) != 0 )
  {
    v20 = v41;
    if ( *(_QWORD *)(a1 + 1240) != a1 + 1240 )
      v20 = 1;
    v41 = v20;
  }
  if ( v10 && v11 )
  {
    v13 = *(_QWORD *)(a1 + 544);
    if ( !*(_QWORD *)(v13 + 784) )
      goto LABEL_11;
    v14 = *(_WORD *)(v13 + 1772);
    if ( v14 != 332 && v14 != 452 )
      v12 = 0;
    if ( v12 )
    {
      ULongFromUser = RtlReadULongFromUser(v10 + 12128);
      ULong64FromUser = (unsigned int)RtlReadULongFromUser(v10 + 8196);
      v33 = (unsigned int)RtlReadULongFromUser(v10 + 8200);
    }
    else
    {
LABEL_11:
      ULongFromUser = RtlReadULong64FromUser(v10 + 5920);
      ULong64FromUser = RtlReadULong64FromUser(v10 + 8);
      v33 = RtlReadULong64FromUser(v10 + 16);
    }
  }
  v21 = &v29;
  v22 = 72LL;
  v15 = *(unsigned __int16 **)(a1 + 1696);
  if ( v15 && (v17 = (__int64 *)*((_QWORD *)v15 + 1)) != 0LL )
  {
    v18 = *v15;
    v19 = 2048LL;
    if ( (unsigned __int16)v18 < 0x800u )
      v19 = v18;
    v23 = v17;
    v24 = (unsigned int)v19;
    if ( !(_DWORD)v19 || *((_WORD *)v17 + (v19 >> 1) - 1) )
    {
      v25 = &EtwpNull;
      v26 = 2LL;
      v3 = 3;
    }
  }
  else
  {
    v23 = &EtwpNull;
    v24 = 2LL;
  }
  return EtwpLogSystemEventUnsafe(
           *(_QWORD *)(v4 + 1360),
           (unsigned int)&v21,
           a1,
           *(_DWORD *)v4,
           v3,
           v6,
           v5,
           0,
           v6,
           2,
           v21,
           v22,
           v23,
           v24,
           v25,
           v26,
           v27,
           v28,
           v29,
           v30,
           v31);
}
