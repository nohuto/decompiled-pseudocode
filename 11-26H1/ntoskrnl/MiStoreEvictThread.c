/*
 * XREFs of MiStoreEvictThread @ 0x1404A9A20
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     KeDisableTimer2 @ 0x1403B3D14 (KeDisableTimer2.c)
 *     MiStoreEvictPageFile @ 0x140404A30 (MiStoreEvictPageFile.c)
 *     KiInitializeTimer2 @ 0x14044E75C (KiInitializeTimer2.c)
 *     MiStoreAttemptContractPageFile @ 0x1404DE9D4 (MiStoreAttemptContractPageFile.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictThread(_DWORD *P)
{
  int v2; // ebx
  __int64 v3; // rsi
  struct _KEVENT *v4; // rbx
  struct _KEVENT *i; // r13
  int v6; // r12d
  __int64 v7; // rbx
  unsigned int v8; // r15d
  __int64 v9; // rdi
  KIRQL v10; // al
  KIRQL v11; // bl
  volatile LONG *v12; // rcx
  volatile LONG *v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rdi
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h]
  __int64 v19; // [rsp+58h] [rbp-B0h]
  _BYTE v20[144]; // [rsp+68h] [rbp-A0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+F8h] [rbp-10h] BYREF

  memset_0(v20, 0, 0x88uLL);
  KeWaitForSingleObject(P + 2, WrKernel, 0, 0, 0LL);
  v2 = P[8];
  v3 = *(_QWORD *)P;
  ExFreePoolWithTag(P, 0);
  if ( !v2 )
  {
    KiInitializeTimer2((unsigned __int64)v20, 0LL, 0LL, 8);
    Object = 0LL;
    v18 = -1LL;
    KeSetTimer2((__int64)v20, -600000000LL, 600000000LL, (__int64)&Object);
    v18 = (__int64)v20;
    Object = (PVOID)(v3 + 1448);
    v4 = (struct _KEVENT *)(v3 + 1424);
    v19 = v3 + 1424;
    for ( i = (struct _KEVENT *)*(&Object
                                + KeWaitForMultipleObjects(
                                    3u,
                                    &Object,
                                    WaitAny,
                                    WrVirtualMemory,
                                    0,
                                    0,
                                    0LL,
                                    &WaitBlockArray));
          i != (struct _KEVENT *)(v3 + 1448);
          i = (struct _KEVENT *)*(&Object
                                + KeWaitForMultipleObjects(
                                    3u,
                                    &Object,
                                    WaitAny,
                                    WrVirtualMemory,
                                    0,
                                    0,
                                    0LL,
                                    &WaitBlockArray)) )
    {
      if ( i == v4 )
        KeResetEvent(v4);
      while ( 1 )
      {
        v6 = *(_DWORD *)(v3 + 1312);
        v7 = 0LL;
        v8 = *(_DWORD *)(v3 + 22296);
        if ( v8 )
        {
          do
          {
            v9 = *(_QWORD *)(v3 + 8 * v7 + 22304);
            if ( (*(_BYTE *)(v9 + 172) & 0x40) != 0 )
            {
              MiStoreEvictPageFile(*(_QWORD *)(v3 + 8 * v7 + 22304));
              if ( *(_DWORD *)(v9 + 168) >= 0x100u )
                LODWORD(v7) = v7 - 1;
            }
            v7 = (unsigned int)(v7 + 1);
          }
          while ( (unsigned int)v7 < v8 );
        }
        v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1408));
        v11 = v10;
        if ( v6 == *(_DWORD *)(v3 + 1312) )
          break;
        v12 = (volatile LONG *)(v3 + 1408);
        if ( v10 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v12);
        else
          ExReleaseSpinLockExclusive(v12, v10);
      }
      if ( v6 )
      {
        *(_DWORD *)(v3 + 1312) = 0;
        KeSetEvent((PRKEVENT)(v3 + 1488), 0, 0);
      }
      v13 = (volatile LONG *)(v3 + 1408);
      if ( v11 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v13);
      else
        ExReleaseSpinLockExclusive(v13, v11);
      if ( i == (struct _KEVENT *)v20 )
      {
        v14 = *(_DWORD *)(v3 + 22296);
        if ( v14 )
        {
          v15 = v3 + 22304;
          v16 = v14;
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)v15 + 172LL) & 0x40) != 0 )
              MiStoreAttemptContractPageFile();
            v15 += 8LL;
            --v16;
          }
          while ( v16 );
        }
      }
      v4 = (struct _KEVENT *)(v3 + 1424);
    }
    KeDisableTimer2((__int64)v20, 1, 1, 0LL);
  }
}
