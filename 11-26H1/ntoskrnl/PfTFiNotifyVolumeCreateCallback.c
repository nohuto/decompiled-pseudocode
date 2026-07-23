/*
 * XREFs of PfTFiNotifyVolumeCreateCallback @ 0x140484CA0
 * Callers:
 *     <none>
 * Callees:
 *     PfFbLogEntryReserve @ 0x1404850D8 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x1404851D0 (PfFbLogEntryComplete.c)
 *     _wcsupr @ 0x140538D10 (_wcsupr.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall PfTFiNotifyVolumeCreateCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v5; // r13d
  unsigned int v6; // r14d
  int v7; // ebp
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int *v11; // rdi
  int v12; // edx
  __int16 v13; // cx
  __int64 v14; // r8
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  unsigned int *v16; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v15 = 0LL;
  v16 = 0LL;
  v5 = 2 * *(unsigned __int16 *)(v2 + 30);
  v6 = (v5 + 65) & 0xFFFFFFF8;
  v7 = PfFbLogEntryReserve(a1, a1 + 288, &v15, &v16, v6);
  if ( v7 >= 0 )
  {
    v11 = v16;
    *v16 = (8 * v6) | *v16 & 0x80000002 | 2;
    v11[1] = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 52LL);
    v11[2] = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 56LL);
    *((_QWORD *)v11 + 3) = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
    v12 = v11[9] ^ (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 48LL) ^ v11[9]) & 0xF;
    v11[9] = v12;
    v11[9] = v12 ^ (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 48LL) ^ v12) & 0xF0;
    *((_QWORD *)v11 + 2) = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL);
    v11[8] = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
    v13 = 2 * *(_WORD *)(*(_QWORD *)(a2 + 16) + 30LL);
    *((_WORD *)v11 + 20) = v13;
    *((_WORD *)v11 + 21) = v13;
    memmove(v11 + 14, *(const void **)(*(_QWORD *)(a2 + 16) + 40LL), v5);
    *((_WORD *)v11 + *(unsigned __int16 *)(*(_QWORD *)(a2 + 16) + 30LL) + 28) = 0;
    wcsupr((wchar_t *)v11 + 28);
    PfFbLogEntryComplete(a1, v15, v14, v6);
    v9 = 0LL;
  }
  else
  {
    v9 = v15;
  }
  if ( v9 )
    PfFbLogEntryComplete(a1, v9, v8, 0LL);
  if ( v7 < 0 )
    ++*(_DWORD *)(a1 + 708);
  return (unsigned int)v7;
}
