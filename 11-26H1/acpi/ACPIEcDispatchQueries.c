/*
 * XREFs of ACPIEcDispatchQueries @ 0x14003E738
 * Callers:
 *     ACPIEcServiceIoLoop @ 0x14001F500 (ACPIEcServiceIoLoop.c)
 *     ACPIEcCompleteQueryMethod @ 0x14003E6C0 (ACPIEcCompleteQueryMethod.c)
 * Callees:
 *     ACPIEcRunQueryMethod @ 0x14003E600 (ACPIEcRunQueryMethod.c)
 *     ACPIEcUnloadPending @ 0x140060338 (ACPIEcUnloadPending.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIEcDispatchQueries(__int64 a1)
{
  KSPIN_LOCK *v2; // r14
  unsigned int v3; // esi
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  void (__fastcall *v6)(_QWORD, __int64); // rdi
  __int64 v7; // rbx
  KIRQL v8; // r9
  unsigned __int8 v9; // al
  unsigned int v10; // ebx
  bool v11; // zf
  KIRQL v12; // al
  unsigned __int8 v13; // al
  KIRQL v14; // dl

  v2 = (KSPIN_LOCK *)(a1 + 88);
  while ( 1 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(v2);
    v9 = *(_BYTE *)(a1 + 446);
    if ( !v9 )
      break;
    v3 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 456) + 24LL * v9 + 1);
    v4 = (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a1 + 456) + 24LL * v9 + 1) >> 5;
    *(_DWORD *)(a1 + 4 * v4 + 124) &= ~(1 << (*(_BYTE *)(*(_QWORD *)(a1 + 456) + 24LL * v9 + 1) & 0x1F));
    v5 = *(_QWORD *)(a1 + 456);
    *(_BYTE *)(a1 + 446) = *(_BYTE *)(v5 + 24LL * v9);
    v6 = *(void (__fastcall **)(_QWORD, __int64))(v5 + 24LL * v9 + 8);
    v7 = *(_QWORD *)(v5 + 24LL * v9 + 16);
    KeReleaseSpinLock(v2, v8);
    v6(v3, v7);
  }
  if ( !*(_BYTE *)(a1 + 122) )
  {
    while ( 1 )
    {
      v13 = *(_BYTE *)(a1 + 444);
      if ( !v13 )
        break;
      v10 = v13;
      *(_DWORD *)(a1 + 4 * ((unsigned __int64)v13 >> 5) + 124) &= ~(1 << (v13 & 0x1F));
      v11 = *(_BYTE *)(a1 + 464) == 0;
      *(_BYTE *)(a1 + 444) = *(_BYTE *)(v13 + a1 + 188);
      if ( !v11 )
        *(_BYTE *)(v13 + a1 + 188) = 0;
      *(_BYTE *)(a1 + 122) = 1;
      KeReleaseSpinLock(v2, v8);
      ACPIEcRunQueryMethod(a1, v10);
      v12 = KeAcquireSpinLockRaiseToDpc(v2);
      v8 = v12;
      if ( *(_BYTE *)(a1 + 122) == 1 )
      {
        *(_BYTE *)(a1 + 122) = 2;
        v14 = v12;
        goto LABEL_13;
      }
    }
    v11 = *(_BYTE *)(a1 + 121) == 1;
    *(_BYTE *)(a1 + 122) = 0;
    if ( v11 )
      ACPIEcUnloadPending(a1);
  }
  v14 = v8;
LABEL_13:
  KeReleaseSpinLock(v2, v14);
}
