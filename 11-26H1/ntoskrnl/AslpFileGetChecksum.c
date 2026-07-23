/*
 * XREFs of AslpFileGetChecksum @ 0x14089282C
 * Callers:
 *     AslpFileGetChecksumAttributes @ 0x140892980 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 */

__int64 __fastcall AslpFileGetChecksum(unsigned int *a1, __int64 a2)
{
  unsigned int *v3; // r13
  unsigned int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  unsigned int *v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r12
  size_t v10; // r15
  __int64 v11; // rcx
  unsigned int *v12; // rax
  unsigned int v13; // ebx
  size_t i; // rdx
  unsigned int v15; // ebx
  char v16; // al

  v3 = a1;
  v4 = 4096;
  v5 = 512;
  v6 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(a2 + 16);
  if ( v8 >= 0x1000 )
  {
    if ( v8 < 0x1200 )
      v5 = *(_DWORD *)(a2 + 16) - 4096;
  }
  else
  {
    v5 = 0;
    v4 = *(_DWORD *)(a2 + 16);
  }
  if ( v4 >= 4 )
  {
    v9 = *(_QWORD *)(a2 + 24);
    v10 = v4;
    if ( MmIsUserAddress(v9) )
    {
      v12 = (unsigned int *)AslAlloc(v11, (unsigned int)v10);
      v7 = v12;
      if ( !v12 )
      {
        v13 = -1073741801;
        goto LABEL_17;
      }
      RtlCopyFromUser(v12, (void *)(*(_QWORD *)(a2 + 24) + v5), v10);
      a1 = v7;
    }
    else
    {
      a1 = (unsigned int *)(v9 + v5);
    }
    for ( i = 0LL; i < v10 >> 2; ++i )
    {
      v15 = *a1++ + v6;
      v16 = v15;
      v6 = v15 >> 1;
      if ( (v16 & 1) != 0 )
        v6 |= 0x80000000;
    }
  }
  *v3 = v6;
  v13 = 0;
LABEL_17:
  if ( v7 )
    AslFree(a1, v7);
  return v13;
}
