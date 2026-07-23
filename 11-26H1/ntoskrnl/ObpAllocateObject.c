/*
 * XREFs of ObpAllocateObject @ 0x140910050
 * Callers:
 *     NtCreateEvent @ 0x1408F5E80 (NtCreateEvent.c)
 *     ObCreateObject @ 0x14090EB60 (ObCreateObject.c)
 *     IopAllocRealFileObject @ 0x14090F390 (IopAllocRealFileObject.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     CmpCreateKeyBody @ 0x14092BC40 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     ObCreateObjectTypeEx @ 0x140A67030 (ObCreateObjectTypeEx.c)
 * Callees:
 *     SeAuditHeaderRequired @ 0x140443100 (SeAuditHeaderRequired.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpAllocateObject(_DWORD *a1, char a2, __int64 a3, __int128 *a4, int a5, char **a6, _BYTE *a7)
{
  int v8; // ebx
  char v10; // r8
  int v11; // r10d
  _WORD *v12; // r11
  bool v13; // r13
  int v14; // r9d
  char v15; // di
  char v16; // cl
  char v17; // si
  char v18; // r12
  unsigned __int8 v19; // r15
  char v20; // di
  int v21; // r8d
  int v22; // eax
  unsigned int v23; // ecx
  char *PoolWithTag; // rax
  char *v25; // rcx
  char *v26; // r8
  __int64 v27; // rdx
  __int128 v28; // xmm0
  char v29; // dl
  signed __int32 v30; // r8d
  unsigned __int32 v31; // eax
  unsigned __int32 i; // r8d
  unsigned __int8 v34; // r9
  unsigned int v35; // [rsp+20h] [rbp-58h]
  int v36; // [rsp+24h] [rbp-54h]
  int v37; // [rsp+80h] [rbp+8h]
  int v39; // [rsp+90h] [rbp+18h]

  v8 = *a1 & 0x20;
  v13 = SeAuditHeaderRequired((POBJECT_TYPE *)a3);
  if ( v13 )
    v10 |= 0x20u;
  v14 = 32;
  v36 = 32;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess
    || KeGetCurrentThread()->ApcState.Process == PsIdleProcess
    || !PsInitialSystemProcess )
  {
    v39 = 0;
  }
  else
  {
    v39 = 32;
    v10 |= 8u;
  }
  v15 = *(_BYTE *)(a3 + 66);
  v16 = v10 | 4;
  v17 = v15 & 0x10;
  if ( (v15 & 0x10) == 0 )
    v16 = v10;
  if ( *v12 )
  {
    if ( (v15 & 2) != 0 )
      return 3221225523LL;
    v16 |= 2u;
  }
  else
  {
    v14 = 0;
    v36 = 0;
  }
  v18 = v16 | 1;
  v19 = (v15 >> 7) & 0x30;
  v20 = v15 & 0x20;
  if ( !v20 )
    v18 = v16;
  if ( a7 && (*a7 || a7[1]) )
  {
    v18 |= 0x40u;
    v37 = 16;
    v21 = 48;
  }
  else
  {
    v21 = 0;
    v37 = 0;
  }
  v22 = 64;
  if ( !v13 )
    v22 = 48;
  v35 = v14 + v39 + v11 + (v17 != 0 ? 0x10 : 0) + (v20 != 0 ? 0x20 : 0) + v22 + v37;
  v23 = v21 + v19 + v35;
  if ( v23 + a5 < v23 )
    return 3221225485LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(
                          (POOL_TYPE)(*(_DWORD *)(a3 + 100) | 0x400),
                          v23 + a5,
                          *(_DWORD *)(a3 + 192));
  v25 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( v19 )
  {
    v34 = -(char)(v35 + (_BYTE)PoolWithTag) & 0x3F;
    if ( v34 )
    {
      v25 = &PoolWithTag[v34];
      v18 |= 0x80u;
      *((_DWORD *)v25 - 1) = v34;
    }
  }
  if ( v37 )
  {
    v26 = &v25[v35 + a5];
    *(_QWORD *)v25 = v26;
    *(_OWORD *)v26 = 0LL;
    *((_OWORD *)v26 + 1) = 0LL;
    *((_OWORD *)v26 + 2) = 0LL;
    v27 = *(_QWORD *)v25;
    v25 += 16;
    *(_BYTE *)(v27 + 24) = *a7;
  }
  if ( v13 )
  {
    *(_QWORD *)v25 = 0LL;
    *((_QWORD *)v25 + 1) = 0LL;
    v25 += 16;
  }
  if ( v8 )
  {
    *(_QWORD *)v25 = 0LL;
    v25 += 16;
  }
  if ( v39 )
  {
    *(_DWORD *)v25 = a1[5];
    *((_DWORD *)v25 + 1) = a1[6];
    *((_DWORD *)v25 + 2) = a1[7];
    *((_QWORD *)v25 + 2) = 0LL;
    v25 += 32;
  }
  if ( v17 )
  {
    *((_DWORD *)v25 + 2) &= 0xFF000000;
    v25[11] = 0;
    *(_QWORD *)v25 = 0LL;
    v25 += 16;
  }
  if ( v36 )
  {
    v28 = *a4;
    *(_QWORD *)v25 = 0LL;
    *((_DWORD *)v25 + 6) = 0;
    *(_OWORD *)(v25 + 8) = v28;
    v25 += 32;
  }
  if ( v20 )
  {
    *((_WORD *)v25 + 12) = 0;
    *((_QWORD *)v25 + 2) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    *((_QWORD *)v25 + 1) = v25;
    *(_QWORD *)v25 = v25;
    v25 += 32;
  }
  v25[26] = v18;
  v29 = 1;
  v25[25] = 0;
  v25[27] = 1;
  if ( v17 )
  {
    v25[27] = 65;
    v29 = 65;
  }
  *((_QWORD *)v25 + 1) = 0LL;
  *(_QWORD *)v25 = 1LL;
  *((_QWORD *)v25 + 2) = 0LL;
  v25[24] = ObHeaderCookie ^ *(_BYTE *)(a3 + 40) ^ BYTE1(v25);
  if ( !a2 )
  {
    v29 |= 2u;
    v25[27] = v29;
    if ( (*a1 & 0x10000) != 0 )
    {
      v29 |= 4u;
      v25[27] = v29;
    }
  }
  if ( (*a1 & 0x10) != 0 )
  {
    v29 |= 0x10u;
    v25[27] = v29;
  }
  if ( (*a1 & 0x20) != 0 )
    v25[27] = v29 | 8;
  *((_QWORD *)v25 + 4) = a1;
  *((_QWORD *)v25 + 5) = 0LL;
  v30 = _InterlockedExchangeAdd((volatile signed __int32 *)(a3 + 44), 1u);
  v31 = *(_DWORD *)(a3 + 52);
  for ( i = v30 + 1; i > v31; v31 = _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 52), i, v31) )
    ;
  *a6 = v25;
  return 0LL;
}
