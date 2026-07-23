/*
 * XREFs of EtwpCoverageHighIrqlCPWorkItemCallback @ 0x1406CA460
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     TelemetryCoverageStringHashInternal @ 0x140501C30 (TelemetryCoverageStringHashInternal.c)
 *     EtwpCoverageRecord @ 0x140B0FA48 (EtwpCoverageRecord.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCoverageHighIrqlCPWorkItemCallback(_QWORD *a1)
{
  __int64 v1; // rdi
  _QWORD **v3; // rsi
  KIRQL v4; // al
  _QWORD *v5; // rbx
  KIRQL v6; // dl
  int v7; // r14d
  _QWORD *v8; // rax
  unsigned __int64 v9; // r15
  _BYTE *v10; // rbp
  _OWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+70h] [rbp+8h] BYREF

  v1 = *a1 + 24LL;
  v12 = 0;
  memset(v11, 0, 24);
  v3 = (_QWORD **)(v1 + 16);
  while ( 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1);
    v5 = *v3;
    v6 = v4;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v5[1] != v3 || (v8 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v3 = v8;
    v7 = 1;
    v8[1] = v3;
LABEL_8:
    v9 = v5[3];
    v10 = (_BYTE *)v5[4];
    v5[4] = v9;
    KeReleaseSpinLock((PKSPIN_LOCK)v1, v6);
    while ( (unsigned __int64)v10 < v9 )
    {
      *(_QWORD *)((char *)v11 + 12) = 0LL;
      DWORD1(v11[1]) = 0;
      *(_QWORD *)&v11[0] = v10;
      DWORD2(v11[0]) = TelemetryCoverageStringHashInternal(v10, &v12);
      EtwpCoverageRecord(a1, v11);
      v10 += (unsigned int)(v12 + 1);
    }
    if ( v7 )
      ExFreePoolWithTag(v5, 0x56777445u);
  }
  v5 = *(_QWORD **)(v1 + 8);
  if ( v5[4] < v5[3] )
  {
    v7 = 0;
    goto LABEL_8;
  }
  v5[3] = v5 + 5;
  v5[4] = v5 + 5;
  *(_DWORD *)(v1 + 72) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)v1, v4);
}
