/*
 * XREFs of VidSchiFillSubmitCommandDataVirtual @ 0x140020D50
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1400224B0 (VidSchiSendToExecutionQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiFillSubmitCommandDataVirtual(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 v4; // rbx
  __int64 v5; // r10
  __int64 v6; // rax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // r9d
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  v4 = *(_QWORD *)(v2 + 96);
  v5 = *(_QWORD *)(v4 + 24);
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_OWORD *)(a2 + 48) = 0LL;
  *(_OWORD *)(a2 + 64) = 0LL;
  *(_OWORD *)(a2 + 80) = 0LL;
  if ( (*(_DWORD *)(v2 + 112) & 2) != 0 || (v6 = *(_QWORD *)(a1 + 56)) != 0 && (*(_DWORD *)(v6 + 72) & 0x8000) != 0 )
    v7 = 8;
  else
    v7 = 0;
  *(_DWORD *)(a2 + 52) = v7;
  v8 = v7 ^ (*(_DWORD *)(a1 + 92) >> 6) & 0x40;
  *(_DWORD *)(a2 + 52) = v8;
  v9 = v8 ^ (*(_DWORD *)(a1 + 92) >> 7) & 0x80;
  *(_DWORD *)(a2 + 52) = v9;
  v10 = v9 ^ ((*(_BYTE *)(v2 + 917) & 1) << 8);
  *(_DWORD *)(a2 + 52) = v10;
  if ( *(_DWORD *)(a1 + 88) )
  {
    *(_DWORD *)(a2 + 52) = v10 | 1;
    *(_QWORD *)a2 = *(_QWORD *)(v2 + 64);
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)(v2 + 64);
    if ( (*(_DWORD *)(a1 + 92) & 0x10) != 0 )
    {
      v10 |= 0x30u;
      *(_DWORD *)(a2 + 52) = v10;
      *(_DWORD *)(a2 + 48) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 404LL);
      *(_DWORD *)(a2 + 44) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 168LL);
    }
    v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(*(_DWORD *)(a1 + 92) >> 7)) & 2;
    *(_DWORD *)(a2 + 52) = v11;
    *(_DWORD *)(a2 + 52) = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(*(_DWORD *)(a1 + 92) >> 1)) & 4;
  }
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 176);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 148);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 152);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 156) - *(_DWORD *)(a1 + 152);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 184);
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 104);
  v12 = *(unsigned __int16 *)(v4 + 4);
  v13 = *(_QWORD *)(v5 + 696);
  if ( (unsigned int)v12 < *(_DWORD *)(v5 + 768) )
    v13 += 8 * v12;
  *(_DWORD *)(a2 + 56) = *(unsigned __int16 *)(*(_QWORD *)v13 + 6LL);
  v14 = *(unsigned __int16 *)(v4 + 4);
  v15 = *(__int64 **)(v5 + 696);
  if ( (unsigned int)v14 < *(_DWORD *)(v5 + 768) )
    v15 += v14;
  result = *v15;
  *(_DWORD *)(a2 + 60) = *(unsigned __int16 *)(*v15 + 8);
  return result;
}
