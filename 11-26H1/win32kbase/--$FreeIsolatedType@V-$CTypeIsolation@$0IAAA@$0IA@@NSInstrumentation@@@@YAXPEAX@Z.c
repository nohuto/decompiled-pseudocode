/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400164D4
 * Callers:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x140015A00 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 * Callees:
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1400B7B38 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<32768,128>>(unsigned __int64 a1)
{
  __int64 *v2; // r14
  __int64 v3; // r15
  __int64 *i; // rsi
  __int64 *v5; // r12
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  ULONG v9; // ebx
  __int64 v10; // rbx
  __int64 *v11; // rcx
  __int64 **v12; // rax
  __int64 v13; // rax

  v2 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4384LL) + 56LL);
  if ( !v2 || !a1 )
    return;
  if ( *((_BYTE *)v2 + 36) )
  {
    memset((void *)a1, 0, 0x80uLL);
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)v2[3], (PVOID)a1);
    return;
  }
  v3 = v2[2];
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  for ( i = (__int64 *)*v2; ; i = (__int64 *)*i )
  {
    if ( i == v2 )
    {
      ExReleasePushLockSharedEx(v3, 0LL);
      KeLeaveCriticalRegion();
      KeBugCheckEx(0x164u, 0x21uLL, a1, 0LL, 0LL);
    }
    v5 = (__int64 *)i[4];
    v6 = v5[1];
    v7 = v6 ^ v5[2];
    if ( a1 >= v7 && a1 < v7 + 0x8000 )
      break;
LABEL_23:
    ;
  }
  if ( (a1 & 0x7F) != 0 )
  {
    NSInstrumentation::PlatformAbort(2LL, a1);
    goto LABEL_23;
  }
  if ( !RtlTestBit(
          (PRTL_BITMAP)(v5[3] ^ v5[2]),
          ((a1 >> 7) & 0x1F) + 32 * (((unsigned int)a1 - ((unsigned int)v6 ^ (unsigned int)v5[2])) >> 12)) )
    KeBugCheckEx(0x164u, 0x23uLL, a1, 0LL, 0LL);
  v8 = *v5;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v8, 0LL);
  v9 = ((a1 >> 7) & 0x1F) + 32 * (((unsigned int)a1 - (*((_DWORD *)v5 + 2) ^ (unsigned int)v5[2])) >> 12);
  RtlClearBit((PRTL_BITMAP)(v5[3] ^ v5[2]), v9);
  memset((void *)a1, 0, 0x80uLL);
  *((_DWORD *)v5 + 8) = v9;
  ExReleasePushLockExclusiveEx(v8);
  KeLeaveCriticalRegion();
  if ( i == (__int64 *)*v2 )
  {
    ExReleasePushLockSharedEx(v3, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v3, 0LL);
    KeLeaveCriticalRegion();
    v10 = v2[2];
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    v11 = (__int64 *)*i;
    if ( *(__int64 **)(*i + 8) != i
      || (v12 = (__int64 **)i[1], *v12 != i)
      || (*v12 = v11, v11[1] = (__int64)v12, v13 = *v2, *(__int64 **)(*v2 + 8) != v2) )
    {
      __fastfail(3u);
    }
    *i = v13;
    i[1] = (__int64)v2;
    *(_QWORD *)(v13 + 8) = i;
    *v2 = (__int64)i;
    ExReleasePushLockExclusiveEx(v10);
  }
  KeLeaveCriticalRegion();
}
