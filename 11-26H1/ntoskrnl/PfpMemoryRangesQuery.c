/*
 * XREFs of PfpMemoryRangesQuery @ 0x140602624
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140A5C19C (PfQuerySuperfetchInformation.c)
 * Callees:
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140B4F390 (MmGetPhysicalMemoryRangesEx2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpMemoryRangesQuery(__int64 a1, char a2, _DWORD *a3)
{
  _QWORD *v6; // rdi
  int *v7; // rbx
  int ULongFromUser; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 PhysicalMemoryRangesEx2; // rax
  __int64 i; // rbx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r14
  __int64 v15; // rcx
  unsigned __int64 j; // rsi
  __int64 v17; // r12
  __int64 v20; // [rsp+88h] [rbp+20h]

  v6 = 0LL;
  v7 = *(int **)(a1 + 16);
  if ( a2 )
  {
    ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
    ULongFromUser = RtlReadULongFromUser(v7);
  }
  else
  {
    ULongFromUser = *v7;
  }
  if ( ULongFromUser == 2 )
  {
    if ( a2 )
      v10 = RtlReadULongFromUser(v7 + 1);
    else
      v10 = v7[1];
    if ( (v10 & 0xFFFFFFFE) != 0 )
    {
      v9 = -1073741811;
    }
    else
    {
      PhysicalMemoryRangesEx2 = MmGetPhysicalMemoryRangesEx2(0LL);
      v6 = (_QWORD *)PhysicalMemoryRangesEx2;
      if ( !PhysicalMemoryRangesEx2 )
        goto LABEL_12;
      for ( i = PhysicalMemoryRangesEx2; *(__int64 *)(i + 8) > 0; i += 16LL )
        ;
      v13 = (i - PhysicalMemoryRangesEx2) >> 4;
      if ( v13 <= 0xFFFFFFFF && (v14 = 16 * (v13 + 1), v14 <= 0xFFFFFFFF) )
      {
        if ( *(_DWORD *)(a1 + 24) >= (unsigned int)v14 )
        {
          v15 = *(_QWORD *)(a1 + 16);
          v20 = v15;
          if ( a2 )
          {
            RtlWriteULongToUser(v15 + 8, (unsigned int)v13);
            v15 = v20;
          }
          else
          {
            *(_DWORD *)(v15 + 8) = v13;
          }
          for ( j = 0LL; j < v13; ++j )
          {
            v17 = v15 + 16 * j;
            if ( a2 )
              RtlWriteULong64ToUser(v17 + 16, v6[2 * j] / 4096LL);
            else
              *(_QWORD *)(v17 + 16) = v6[2 * j] / 4096LL;
            if ( a2 )
              RtlWriteULong64ToUser(v17 + 24, v6[2 * j + 1] / 4096LL);
            else
              *(_QWORD *)(v17 + 24) = v6[2 * j + 1] / 4096LL;
            v15 = v20;
          }
          *a3 = v14;
          v9 = 0;
        }
        else
        {
          v9 = -1073741789;
          *a3 = v14;
        }
      }
      else
      {
LABEL_12:
        v9 = -1073741670;
      }
    }
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v9;
}
