/*
 * XREFs of USBDInternal_BuildServicePath @ 0x140043BFC
 * Callers:
 *     USBDInternal_QueryUsbVerifierSettings @ 0x140043F8C (USBDInternal_QueryUsbVerifierSettings.c)
 * Callees:
 *     memmove @ 0x1400468C0 (memmove.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

__int64 __fastcall USBDInternal_BuildServicePath(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  char *v4; // rdi
  unsigned int v5; // ebx
  const void *v6; // r14
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  char *PoolWithTag; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  _WORD *v12; // rax
  signed int v13; // r9d
  unsigned __int64 v14; // rax
  char *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  signed __int64 v18; // rax
  __int16 v19; // r9
  char *v20; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  if ( *(_WORD *)(v2 + 56) > 0x10u && RtlCompareMemory(*(const void **)(v2 + 64), L"\\Driver\\", 0x10uLL) == 16 )
  {
    v6 = (const void *)(*(_QWORD *)(v2 + 64) + 16LL);
    v7 = *(unsigned __int16 *)(v2 + 56) - 16;
    v8 = v7 + 24;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, v7 + 24, 0x68334855u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v7 + 24);
      memmove(v4, v6, v7);
      v10 = (unsigned __int64)(v7 + 24) >> 1;
      if ( v10 )
      {
        v11 = (unsigned __int64)(v7 + 24) >> 1;
        v12 = v4;
        do
        {
          if ( !*v12 )
            break;
          ++v12;
          --v11;
        }
        while ( v11 );
        v13 = v11 == 0 ? 0xC000000D : 0;
        if ( v11 )
          v14 = v10 - v11;
        else
          v14 = 0LL;
        if ( v11 )
        {
          v15 = &v4[2 * v14];
          v16 = v10 - v14;
          if ( v10 != v14 )
          {
            v17 = 2147483646LL;
            v18 = (char *)L"\\Parameters" - v15;
            do
            {
              if ( !v17 )
                break;
              v19 = *(_WORD *)&v15[v18];
              if ( !v19 )
                break;
              *(_WORD *)v15 = v19;
              --v17;
              v15 += 2;
              --v16;
            }
            while ( v16 );
          }
          v20 = v15 - 2;
          if ( v16 )
            v20 = v15;
          v13 = v16 == 0 ? 0x80000005 : 0;
          *(_WORD *)v20 = 0;
        }
        v5 = v13;
        if ( v13 >= 0 )
        {
          v5 = 0;
          goto LABEL_31;
        }
      }
      else
      {
        v5 = -1073741811;
        v13 = -1073741811;
      }
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "RtlStringCchCatW failed with status 0x%x", v13);
      ExFreePoolWithTag(v4, 0x68334855u);
      v4 = 0LL;
    }
    else
    {
      v5 = -1073741670;
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Couldnt allocate servicePath of size %d\n", v8);
    }
  }
  else
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Unexpected Driver name, Drvobj 0x%p\n", (const void *)v2);
    v5 = -1073741595;
  }
LABEL_31:
  result = v5;
  *a2 = v4;
  return result;
}
