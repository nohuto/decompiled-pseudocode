/*
 * XREFs of MiQueryMemoryListInformation @ 0x14034A834
 * Callers:
 *     MmQueryMemoryListInformation @ 0x14034A628 (MmQueryMemoryListInformation.c)
 *     MmManagePartitionMemoryInformation @ 0x140ABB3FC (MmManagePartitionMemoryInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiQueryMemoryListInformation(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  _QWORD *v3; // r9
  unsigned int *v4; // r10
  __int64 *v5; // r11
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 *v21; // rdx
  unsigned __int64 result; // rax

  v2 = a1[2786];
  v3 = a2 + 13;
  v4 = (unsigned int *)(a1 + 948);
  *a2 = a1[410];
  v5 = a1 + 458;
  v6 = 8LL;
  a2[1] = a1[426];
  a2[2] = a1[2906];
  a2[3] = a1[2922];
  a2[4] = a1[930];
  a2[21] = a1[2932];
  do
  {
    v7 = *v5;
    v5 += 11;
    *(v3 - 8) = v7;
    v8 = *v4++;
    *v3++ = v8;
    --v6;
  }
  while ( v6 );
  if ( *a2 > v2 )
  {
    *a2 = v2;
    v9 = 0LL;
  }
  else
  {
    v9 = v2 - *a2;
  }
  v10 = a2[1];
  if ( v10 > v9 )
  {
    a2[1] = v9;
    v11 = 0LL;
  }
  else
  {
    v11 = v9 - v10;
  }
  v12 = a2[2];
  v13 = v11;
  if ( v12 > v11 )
  {
    a2[2] = v11;
    v14 = 0LL;
  }
  else
  {
    v14 = v11 - v12;
    v13 = a2[2];
  }
  v15 = a2[3];
  if ( v15 > v14 )
  {
    a2[3] = v14;
    v16 = 0LL;
  }
  else
  {
    v16 = v14 - v15;
  }
  v17 = a2[4];
  if ( v17 > v16 )
  {
    a2[4] = v16;
    v18 = 0LL;
  }
  else
  {
    v18 = v16 - v17;
  }
  v19 = a2[21];
  if ( v19 >= v13 )
    v19 = v13;
  v20 = 8LL;
  a2[21] = v19;
  v21 = a2 + 5;
  do
  {
    result = *v21;
    if ( *v21 > v18 )
    {
      *v21 = v18;
      v18 = 0LL;
    }
    else
    {
      v18 -= result;
    }
    ++v21;
    --v20;
  }
  while ( v20 );
  return result;
}
