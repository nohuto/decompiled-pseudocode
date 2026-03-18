/*
 * XREFs of DpiFdoHandleFilterResources @ 0x140241E00
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DpiFdoHandleFilterResources(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  IRP *v3; // rbp
  __int64 v4; // r14
  int Status; // esi
  unsigned int *Information; // rbx
  char *v7; // rcx
  unsigned int i; // r8d
  __int64 v9; // rax
  unsigned int j; // edx
  __int64 v11; // rax
  unsigned int v12; // edi
  _OWORD *Pool2; // rax
  _OWORD *v14; // r14
  unsigned int *v15; // r15
  unsigned int v16; // r12d
  __int128 v17; // xmm1
  unsigned int *v18; // rdi
  __int64 v19; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = a2;
  v4 = *(_QWORD *)(v2 + 40);
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v2 + 160), a2);
  Status = v3->IoStatus.Status;
  if ( Status >= 0 )
  {
    Information = (unsigned int *)v3->IoStatus.Information;
    if ( !*(_QWORD *)(v4 + 184) )
    {
      if ( Information )
      {
        v7 = (char *)(Information + 8);
        for ( i = 0; i < Information[7]; ++i )
        {
          v9 = *((unsigned int *)v7 + 1);
          for ( j = 0; j < (unsigned int)v9; ++j )
          {
            v11 = 32LL * j;
            if ( v7[v11 + 9] == 2 )
              v7[v11 + 9] = 0;
            v9 = *((unsigned int *)v7 + 1);
          }
          v7 += 32 * v9 + 8;
        }
      }
    }
    if ( *(_BYTE *)(v2 + 1155) == 1 )
    {
      v12 = *Information + 96 * Information[7];
      if ( v12 >= *Information )
      {
        Pool2 = (_OWORD *)ExAllocatePool2(256LL, v12, 1953656900LL);
        v14 = Pool2;
        if ( Pool2 )
        {
          memset(Pool2, 0, v12);
          v15 = Information + 8;
          v16 = 0;
          v17 = *((_OWORD *)Information + 1);
          *v14 = *(_OWORD *)Information;
          v14[1] = v17;
          *(_DWORD *)v14 = v12;
          v18 = (unsigned int *)(v14 + 2);
          if ( Information[7] )
          {
            do
            {
              memmove(v18, v15, 32LL * v15[1] + 8);
              ++v16;
              v19 = 8LL * v18[1];
              LOWORD(v18[v19 + 2]) = 257;
              BYTE2(v18[v19 + 2]) = 3;
              LOWORD(v18[v19 + 3]) = 1;
              v18[v19 + 4] = 12;
              v18[v19 + 5] = 1;
              *(_QWORD *)&v18[v19 + 6] = 944LL;
              *(_QWORD *)&v18[v19 + 8] = 955LL;
              LOWORD(v18[v19 + 10]) = 257;
              BYTE2(v18[v19 + 10]) = 3;
              LOWORD(v18[v19 + 11]) = 1;
              v18[v19 + 12] = 32;
              v18[v19 + 13] = 1;
              *(_QWORD *)&v18[v19 + 14] = 960LL;
              *(_QWORD *)&v18[v19 + 16] = 991LL;
              LOWORD(v18[v19 + 18]) = 769;
              BYTE2(v18[v19 + 18]) = 3;
              LOWORD(v18[v19 + 19]) = 0;
              v18[v19 + 20] = 0x20000;
              v18[v19 + 21] = 1;
              *(_QWORD *)&v18[v19 + 22] = 655360LL;
              *(_QWORD *)&v18[v19 + 24] = 786431LL;
              v18[1] += 3;
              v15 += 8 * v15[1] + 2;
              v18 += 8 * v18[1] + 2;
            }
            while ( v16 < Information[7] );
            v3 = a2;
          }
          ExFreePoolWithTag(Information, 0);
          v3->IoStatus.Information = (ULONG_PTR)v14;
        }
        else
        {
          Status = -1073741801;
          WdLogSingleEntry1(6LL);
          WdLogGlobalForLineNumber = 6801;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 6782;
      }
    }
    else
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 6720;
    }
  }
  else if ( !*(_BYTE *)(v2 + 480) && !*(_BYTE *)(v2 + 2719) && !*(_BYTE *)(v2 + 1158) && !*(_BYTE *)(v2 + 2716) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6692;
  }
  v3->IoStatus.Status = Status;
  IofCompleteRequest(v3, 1);
  return (unsigned int)Status;
}
