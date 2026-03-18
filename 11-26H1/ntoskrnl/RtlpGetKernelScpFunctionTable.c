/*
 * XREFs of RtlpGetKernelScpFunctionTable @ 0x140623030
 * Callers:
 *     RtlCopyKernelScpUnwindInfo @ 0x140622E44 (RtlCopyKernelScpUnwindInfo.c)
 *     RtlCreateKernelScpFunctionTable @ 0x140622F2C (RtlCreateKernelScpFunctionTable.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall RtlpGetKernelScpFunctionTable(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4, int *a5)
{
  __int64 v5; // rdi
  __int64 v8; // r11
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rbx
  int v11; // r8d
  unsigned __int64 v12; // rdi
  int v13; // eax
  int v14; // edx
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned int *v18; // r8
  int v19; // r8d
  int v20; // r10d
  __int64 v21; // r11
  unsigned int *v22; // rdx
  __int64 result; // rax
  unsigned int v24[6]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a4;
  v24[0] = 0;
  v8 = RtlImageDirectoryEntryToData(a1, 1, 3u, v24);
  if ( v8 )
  {
    if ( v24[0] )
    {
      v9 = v24[0] / 0xCuLL;
      if ( v24[0] == 12 * v9 )
      {
        v10 = a3 - a2;
        v11 = v9 - 1;
        v12 = v10 + v5;
        v13 = 0;
        while ( v11 >= v13 )
        {
          v14 = (v11 + v13) >> 1;
          v15 = v14;
          v16 = *(unsigned int *)(v8 + 12LL * v14);
          if ( v12 > v16 )
          {
            v17 = *(unsigned int *)(v8 + 12LL * v14 + 4);
            if ( v10 < v17 )
            {
              if ( v10 > v16 || v12 < v17 )
                return 0LL;
              if ( v14 > 0 )
              {
                v18 = (unsigned int *)(v8 - 12 + 12LL * v14);
                do
                {
                  if ( *v18 < v10 )
                    break;
                  --v14;
                  --v15;
                  v18 -= 3;
                }
                while ( v15 > 0 );
              }
              v19 = v14 + 1;
              v20 = 1;
              v21 = v8 + 12LL * v14;
              if ( v14 + 1 < v9 )
              {
                v22 = (unsigned int *)(v21 + 16);
                do
                {
                  if ( *v22 > v12 )
                    break;
                  ++v19;
                  ++v20;
                  v22 += 3;
                }
                while ( v19 < v9 );
              }
              result = v21;
              *a5 = v20;
              return result;
            }
            v13 = v14 + 1;
          }
          else
          {
            v11 = v14 - 1;
          }
        }
      }
    }
  }
  return 0LL;
}
