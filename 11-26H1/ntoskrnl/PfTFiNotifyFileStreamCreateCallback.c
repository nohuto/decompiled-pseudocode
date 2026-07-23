/*
 * XREFs of PfTFiNotifyFileStreamCreateCallback @ 0x140484E20
 * Callers:
 *     <none>
 * Callees:
 *     PfFbLogEntryReserve @ 0x1404850D8 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x1404851D0 (PfFbLogEntryComplete.c)
 *     _wcsupr @ 0x140538D10 (_wcsupr.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall PfTFiNotifyFileStreamCreateCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  int v5; // r10d
  const void *v6; // r12
  int v7; // ebx
  unsigned int v8; // r14d
  int v9; // ebp
  __int64 v10; // r8
  unsigned int *v11; // rdi
  int v12; // edx
  int v13; // r8d
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  unsigned int *v18; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v17 = 0LL;
  v18 = 0LL;
  v5 = *(_DWORD *)(v2 + 32);
  v6 = (const void *)(*(_QWORD *)(v2 + 24) + 2LL * (unsigned __int16)v5);
  v7 = *(unsigned __int16 *)(v2 + 34) - (unsigned __int16)v5;
  v8 = (2 * v7 + 53) & 0xFFFFFFF8;
  v9 = PfFbLogEntryReserve(a1, a1 + 288, &v17, &v18, v8);
  if ( v9 < 0 )
  {
    v15 = v17;
  }
  else
  {
    v11 = v18;
    *v18 = *v18 & 0xFFFFFFF8 ^ (*v18 & 0xFFFFFFF8 ^ (8 * v8)) & 0x7FFFFFF8;
    v11[1] = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 40LL);
    v11[2] = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 44LL);
    *((_QWORD *)v11 + 3) = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
    v11[8] = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 48LL);
    *((_QWORD *)v11 + 2) = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL);
    v12 = v11[10] ^ (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 36LL) ^ v11[10]) & 1;
    v11[10] = v12;
    v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(a2 + 16) + 36LL) >> 3)) & 2;
    v11[10] = v13;
    v11[10] = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(2 * *(_DWORD *)(*(_QWORD *)(a2 + 16) + 36LL))) & 4;
    *((_WORD *)v11 + 21) = v7;
    memmove(v11 + 11, v6, (unsigned int)(2 * v7));
    *((_WORD *)v11 + *((unsigned __int16 *)v11 + 21) + 22) = 0;
    wcsupr((wchar_t *)v11 + 22);
    PfFbLogEntryComplete(a1, v17, v14, v8);
    v15 = 0LL;
  }
  if ( v15 )
    PfFbLogEntryComplete(a1, v15, v10, 0LL);
  if ( v9 < 0 )
    ++*(_DWORD *)(a1 + 708);
  return (unsigned int)v9;
}
