/*
 * XREFs of RtlFindLongestRunClearCapped @ 0x1403FDC2C
 * Callers:
 *     MiFindPageFileWriteCluster @ 0x1403FEDBC (MiFindPageFileWriteCluster.c)
 *     MiModwriterConfirmMdl @ 0x140401828 (MiModwriterConfirmMdl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindLongestRunClearCapped(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r15d
  int v6; // edx
  unsigned int v7; // r11d
  unsigned int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // r13d
  __int64 v11; // rbp
  unsigned int v12; // r8d
  __int64 v13; // r10
  unsigned int v14; // r14d
  unsigned __int8 *v15; // r12
  unsigned int v16; // ecx
  unsigned __int8 v17; // r9
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // r15d
  char v21; // cl
  unsigned int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // r9d
  unsigned int v25; // eax
  unsigned int v26; // r15d
  unsigned int v27; // r13d
  __int64 result; // rax
  __int64 v29; // rdx
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // [rsp+0h] [rbp-58h]
  unsigned int v33; // [rsp+4h] [rbp-54h]
  unsigned int v34; // [rsp+8h] [rbp-50h]
  int v35; // [rsp+10h] [rbp-48h]
  unsigned int v36; // [rsp+14h] [rbp-44h]
  unsigned int v38; // [rsp+70h] [rbp+18h]
  unsigned int v39; // [rsp+78h] [rbp+20h]

  v3 = *a1;
  v36 = *a1;
  v6 = *a1 & 7;
  v35 = v6;
  v39 = (*a1 >> 3) + (v6 != 0);
  v7 = 0;
  v8 = 0;
  v9 = *((_QWORD *)a1 + 1);
  v10 = (*a3 < *a1 ? *a3 : 0) & 0xFFFFFFF8;
  v38 = v10;
  v11 = v10 >> 3;
  v12 = 0;
  LODWORD(v13) = 0;
  v14 = v10;
  v15 = (unsigned __int8 *)(v11 + v9 + 1);
  v16 = v39;
  v17 = *(_BYTE *)(v11 + v9);
  if ( (_DWORD)v11 == v39 - 1 && v6 )
    v17 |= byte_140018470[v3 & 7];
  v18 = 0;
  while ( 1 )
  {
    v32 = v18;
    v19 = v12;
    v33 = v8;
    v20 = v7;
    if ( v18 >= v16 )
      break;
    if ( v17 )
    {
      v8 = *((unsigned __int8 *)RtlpBitsClearLow + v17) + (_DWORD)v13;
      if ( v8 )
      {
        if ( v8 >= a2 )
        {
LABEL_14:
          *a3 = v14;
          return a2;
        }
        if ( v8 > v12 )
        {
          v12 = *((unsigned __int8 *)RtlpBitsClearLow + v17) + (_DWORD)v13;
          v7 = v14;
        }
      }
      if ( v14 != v10 )
        v8 = v33;
      v13 = *((unsigned __int8 *)RtlpBitsClearHigh + v17);
      v14 = 8 * v11 - v13 + 8;
      v21 = *((_BYTE *)&qword_140018478 - v13) | byte_1400327C0[*((unsigned __int8 *)RtlpBitsClearLow + v17)];
      while ( 1 )
      {
        v17 |= v21;
        if ( v17 == 0xFF )
          break;
        v29 = *((unsigned __int8 *)RtlpBitsClearAnywhere + v17);
        if ( v12 >= (unsigned int)v29 )
          break;
        v21 = byte_1400327C0[v29];
        v30 = 0;
        while ( ((unsigned __int8)v21 & v17) != 0 )
        {
          v21 *= 2;
          ++v30;
        }
        v7 = 8 * v11 + v30;
        if ( (unsigned int)v29 >= a2 )
        {
          result = a2;
          goto LABEL_51;
        }
        v12 = *((unsigned __int8 *)RtlpBitsClearAnywhere + v17);
      }
    }
    else
    {
      LODWORD(v13) = v13 + 8;
      if ( (unsigned int)v13 >= a2 )
        goto LABEL_14;
    }
    LODWORD(v11) = v11 + 1;
    v34 = v7;
    v22 = v12;
    v23 = v13;
    v24 = v12;
    v25 = v13;
    v26 = v13;
    v27 = v8;
    if ( (unsigned int)v11 >= v39 )
    {
      if ( (_DWORD)v13 )
      {
        LODWORD(v13) = 0;
        v8 = v26;
        v12 = v25;
        v7 = v14;
        if ( v14 != v38 )
          v8 = v27;
        if ( v25 <= v24 )
          v12 = v22;
        if ( v23 <= v22 )
          v7 = v34;
      }
      LODWORD(v11) = 0;
      v15 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
    }
    v17 = *v15++;
    if ( (_DWORD)v11 == v39 - 1 )
    {
      if ( v35 )
        v17 |= byte_140018470[v36 & 7];
    }
    v10 = v38;
    v18 = v32 + 1;
    v16 = v39;
  }
  if ( (_DWORD)v13 )
  {
    v7 = v14;
    v31 = v8 + v13;
    if ( v14 + (_DWORD)v13 != v10 )
      v31 = v13;
    if ( v31 > v12 )
      v12 = v31;
    if ( v31 <= v19 )
      v7 = v20;
  }
  else if ( !v12 )
  {
    *a3 = 0;
    return 0LL;
  }
  if ( v12 > a2 )
    v12 = a2;
  result = v12;
LABEL_51:
  *a3 = v7;
  return result;
}
