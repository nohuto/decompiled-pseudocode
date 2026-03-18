/*
 * XREFs of Crashdump_EventRing_PrepareForDump @ 0x140053088
 * Callers:
 *     Crashdump_InitializeWithControllerReset @ 0x1400510C0 (Crashdump_InitializeWithControllerReset.c)
 * Callees:
 *     Crashdump_EventRing_UpdateDequeuePointer @ 0x1400532A4 (Crashdump_EventRing_UpdateDequeuePointer.c)
 *     memset @ 0x140059840 (memset.c)
 */

ULONG __fastcall Crashdump_EventRing_PrepareForDump(__int64 a1)
{
  __int64 v1; // r8
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  size_t v7; // r8
  void *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = a1 + 112;
  *(_QWORD *)(a1 + 120) = a1 + 112;
  *(_QWORD *)(a1 + 112) = a1 + 112;
  v3 = *(_QWORD *)(a1 + 104);
  v4 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 72) = v4;
  *(_QWORD *)(v3 + 16) = v4;
  *(_QWORD *)(*(_QWORD *)(a1 + 104) + 24LL) = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(*(_QWORD *)(a1 + 104) + 40LL) = *(_DWORD *)(a1 + 64);
  v5 = *(_QWORD **)(a1 + 120);
  v6 = *(_QWORD **)(a1 + 104);
  if ( *v5 != v1 )
    __fastfail(3u);
  v6[1] = v5;
  *v6 = v1;
  *v5 = v6;
  *(_QWORD *)(v1 + 8) = v6;
  v7 = *(unsigned int *)(a1 + 40);
  v8 = *(void **)(a1 + 32);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a1 + 64) >> 4;
  *(_QWORD *)(a1 + 88) = 1LL;
  *(_DWORD *)(a1 + 80) = 1;
  *(_DWORD *)(a1 + 96) = 0;
  memset(v8, 0, v7);
  memset(*(void **)(a1 + 56), 0, *(unsigned int *)(a1 + 64));
  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = 1;
  _InterlockedOr(v13, 0);
  Crashdump_EventRing_UpdateDequeuePointer(a1);
  v9 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)v9 = *(_QWORD *)(a1 + 48);
  *(_WORD *)(v9 + 8) = *(_WORD *)(a1 + 84);
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_QWORD *)(a1 + 16);
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 1) != 0 )
  {
    *(_DWORD *)(v11 + 16) = v10;
    _InterlockedOr(v13, 0);
    *(_DWORD *)(v11 + 20) = HIDWORD(v10);
  }
  else
  {
    *(_QWORD *)(v11 + 16) = v10;
  }
  _InterlockedOr(v13, 0);
  return DbgPrintEx(0x93u, 3u, "XHCIDUMP: Installed new Event Ring\n");
}
