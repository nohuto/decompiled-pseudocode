/*
 * XREFs of KdpSearchMemory @ 0x140C1ACE4
 * Callers:
 *     KdpSendWaitContinue @ 0x140C1D038 (KdpSendWaitContinue.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x140703BF4 (MmDbgCopyMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KdpQuickMoveMemory @ 0x140C1816C (KdpQuickMoveMemory.c)
 */

__int64 __fastcall KdpSearchMemory(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  unsigned int v3; // eax
  __int64 v4; // rbx
  unsigned int v6; // r13d
  unsigned __int64 v7; // r15
  int v8; // r8d
  __int64 v9; // rdi
  unsigned __int64 i; // rbx
  unsigned int v11; // edx
  int v12; // r12d
  _BYTE *v13; // r14
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rax
  char v17[4]; // [rsp+30h] [rbp-50h] BYREF
  int v18; // [rsp+34h] [rbp-4Ch] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-48h]
  _DWORD v20[4]; // [rsp+40h] [rbp-40h]
  __int128 v21; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-20h]
  _DWORD v23[4]; // [rsp+68h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = -1;
  v4 = *(_QWORD *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 32);
  v7 = v4 + *(_QWORD *)(a1 + 24);
  v19 = v2;
  v22 = v7;
  v18 = 0;
  v17[0] = 0;
  *(_DWORD *)(a1 + 8) = -2147483622;
  v21 = 0LL;
  if ( v6 <= 3 )
    v3 = 0xFFFFFFFF >> (8 * (4 - v6));
  v20[0] = v3;
  v8 = 4;
  v20[1] = v3 << 8;
  v20[2] = v3 << 16;
  v20[3] = v3 << 24;
  v23[0] = 0;
  if ( v6 < 5 )
    v8 = v6;
  KdpQuickMoveMemory((char *)v23, v2, v8);
  v9 = v4 & 3;
  v23[1] = v23[0] << 8;
  v23[2] = v23[0] << 16;
  v23[3] = v23[0] << 24;
  for ( i = v4 & 0xFFFFFFFFFFFFFFFCuLL; ; i += 4LL )
  {
LABEL_6:
    if ( i >= v7 )
      goto LABEL_25;
    if ( (int)MmDbgCopyMemory(i, (__int64)&v18, 4u, 4u, 4) >= 0 )
      break;
    v9 = 0LL;
  }
  v11 = v6 - 4;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= 4 )
    {
      v7 = v22;
      i += 4LL;
      v9 = 0LL;
      goto LABEL_6;
    }
    if ( (v18 & v20[v9]) != v23[v9] )
      goto LABEL_20;
    if ( 4 - (int)v9 >= v6 )
      break;
    v12 = v11 + v9;
    v13 = (_BYTE *)(v2 - (unsigned int)v9 + 4);
    if ( !(v11 + (_DWORD)v9) )
    {
LABEL_22:
      v15 = i + (unsigned int)v9;
      goto LABEL_24;
    }
    v14 = (unsigned int)v9 + i - v19;
    while ( (int)MmDbgCopyMemory((__int64)&v13[v14], (__int64)v17, 1u, 1u, 4) >= 0 )
    {
      if ( v17[0] == *v13 )
      {
        ++v13;
        if ( --v12 )
          continue;
      }
      if ( !v12 )
        goto LABEL_22;
      break;
    }
    v2 = v19;
    v11 = v6 - 4;
LABEL_20:
    v9 = (unsigned int)(v9 + 1);
  }
  v15 = v9 + i;
LABEL_24:
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = v15;
LABEL_25:
  LODWORD(v21) = 3670072;
  *((_QWORD *)&v21 + 1) = a1;
  return KdSendPacket(2LL, &v21, 0LL, &KdpContext);
}
