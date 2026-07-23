/*
 * XREFs of IovpCallDriver2 @ 0x140C3187C
 * Callers:
 *     VfAfterCallDriver @ 0x140C320AC (VfAfterCallDriver.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViErrorReport1 @ 0x14064927C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140649300 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140649394 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140649438 (ViErrorReport6.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140C36F3C (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140C36FEC (IovUtilIsDeviceObjectMarked.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140C3FD80 (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpSessionDataDereference @ 0x140C40568 (IovpSessionDataDereference.c)
 */

_UNKNOWN **__fastcall IovpCallDriver2(__int64 a1, int *a2)
{
  _UNKNOWN **result; // rax
  _DWORD *v3; // rbp
  __int64 v6; // rsi
  KIRQL v7; // al
  bool v8; // zf
  int v9; // eax
  _QWORD *v10; // rdi
  __int64 LowerDeviceObjectWithTag; // rax
  __int64 v12; // r8
  void *v13; // r15
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // r9d
  __int64 v20; // rcx
  unsigned int v21; // ecx
  __int64 v22; // r8
  int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rax
  int v27; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_DWORD **)a1;
  if ( !*(_QWORD *)a1 )
    return result;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 8));
  v8 = *(_QWORD *)(v6 + 216) == 0LL;
  *(_BYTE *)(v6 + 16) = v7;
  if ( !v8 && (*(_DWORD *)(a1 + 24) & 0x2000000) != 0 )
    *a2 = 259;
  v9 = *(_DWORD *)(a1 + 24);
  v10 = *(_QWORD **)(a1 + 160);
  if ( (v9 & 0x20000000) == 0 || *a2 == 259 || (v9 & 0x1000000) != 0 )
    goto LABEL_17;
  LowerDeviceObjectWithTag = IovUtilGetLowerDeviceObjectWithTag(*(_QWORD *)(a1 + 160));
  v13 = (void *)LowerDeviceObjectWithTag;
  if ( (*(_DWORD *)(a1 + 24) & 0x10000000) == 0 )
  {
    v14 = *(_QWORD **)(a1 + 64);
    v15 = *(_QWORD *)(v14[39] + 40LL);
    if ( !v15 )
      goto LABEL_30;
    v16 = *(_DWORD *)(v15 + 396);
    if ( (v16 & 0x10) == 0 )
    {
      if ( (v16 & 0x10000) != 0 )
        goto LABEL_12;
LABEL_30:
      if ( !v13 )
        goto LABEL_17;
      goto LABEL_16;
    }
    if ( v10 == v14 )
    {
      if ( !(unsigned int)IovUtilIsDeviceObjectMarked(v10, 0LL, v12) )
        goto LABEL_30;
      v21 = 545;
    }
    else
    {
      if ( (unsigned int)IovUtilIsDeviceObjectMarked(v10, 0LL, v12)
        || !(unsigned int)IovUtilIsDeviceObjectMarked(v10, 0LL, v22) )
      {
        goto LABEL_30;
      }
      v21 = 547;
    }
    ViErrorReport10(v21, *(const void **)(a1 + 48), *(const void **)(a1 + 72), v10);
    goto LABEL_30;
  }
LABEL_12:
  if ( LowerDeviceObjectWithTag )
  {
    v17 = *(_QWORD *)(v10[1] + 80LL);
    if ( !v17 || !*(_QWORD *)(v17 + 104) )
      ViErrorReport10(0x21Du, *(const void **)(a1 + 48), *(const void **)(a1 + 72), v10);
LABEL_16:
    ObfDereferenceObjectWithTag(v13, 0x49667256u);
  }
LABEL_17:
  v18 = *(_DWORD *)(a1 + 24);
  if ( (v18 & 0x40000000) == 0 || (v3[8] & 2) != 0 )
    goto LABEL_36;
  v19 = *a2;
  if ( (v18 & 0x2000000) != 0 )
  {
    if ( v19 == 259 || (v18 & 0x1000000) != 0 )
      goto LABEL_36;
    v20 = 574LL;
  }
  else
  {
    if ( v19 != 259 && (v18 & 0x1000000) == 0 )
      goto LABEL_36;
    v20 = 588LL;
  }
  ViErrorReport6(v20, *(const void **)(a1 + 48), *(const void **)(a1 + 72), v19);
  v3[8] |= 2u;
LABEL_36:
  if ( _bittest((const signed __int32 *)(a1 + 24), 0x1Eu) )
  {
    v23 = *(_DWORD *)(a1 + 56);
    v24 = (unsigned int)*a2;
    if ( (_DWORD)v24 == v23 )
    {
      if ( (_DWORD)v24 == -1 )
        ViErrorReport6(549LL, *(const void **)(a1 + 48), *(const void **)(a1 + 72), -1);
    }
    else if ( (_DWORD)v24 != 259 )
    {
      if ( (v3[8] & 1) == 0 )
        ViErrorReport4(v24, *(const void **)(a1 + 48), (const void **)(a1 + 72), v23, *a2);
      v3[8] |= 1u;
    }
  }
  else
  {
    if ( *a2 != 259 )
    {
      if ( (*(_DWORD *)(v6 + 56) & 0x400000) == 0 )
        ViErrorReport1(0x226u, *(const void **)(a1 + 48), *(const void **)(a1 + 72));
      *(_DWORD *)(v6 + 56) |= 0x400000u;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) |= 0x4000000u;
    v25 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v25 + 8) != a1 + 32 || (v26 = *(_QWORD **)(a1 + 40), *v26 != a1 + 32) )
      __fastfail(3u);
    *v26 = v25;
    *(_QWORD *)(v25 + 8) = v26;
  }
  v27 = *(_DWORD *)(a1 + 24);
  if ( (v27 & 0x8000000) != 0 && *a2 != 259 && (v27 & 0x1000000) == 0 )
    *a2 = *(_DWORD *)(a1 + 60);
  IovpSessionDataDereference(v3);
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 20));
  return (_UNKNOWN **)VfIrpDatabaseEntryReleaseLock(v6);
}
