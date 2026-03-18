/*
 * XREFs of DpiProcessMiracastNotifyInterrupt @ 0x14006A3A8
 * Callers:
 *     DxgNotifyInterruptCB @ 0x14003D130 (DxgNotifyInterruptCB.c)
 * Callees:
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x140087B94 (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     McTemplateK0xqqqqqqqq_EtwWriteTransfer @ 0x140089DC0 (McTemplateK0xqqqqqqqq_EtwWriteTransfer.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

struct MIRACAST_CHUNK *__fastcall DpiProcessMiracastNotifyInterrupt(__int64 a1, __int64 a2, int a3)
{
  struct MIRACAST_CHUNK *result; // rax
  __int64 v4; // rbx
  int v5; // edi
  _DWORD *v7; // r14
  struct MIRACAST_CHUNK *v8; // rax
  struct MIRACAST_CHUNK *v9; // rsi
  struct MIRACAST_CHUNK **v10; // rcx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (struct MIRACAST_CHUNK *)&retaddr;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  if ( !v4 || *(_DWORD *)(v4 + 16) != 1953656900 || *(_DWORD *)(v4 + 20) != 2 )
  {
    v5 = -1073741811;
    result = (struct MIRACAST_CHUNK *)WdLogSingleEntry2(2LL, *(_QWORD *)(a1 + 64), -1073741811LL);
    WdLogGlobalForLineNumber = 8047;
    goto LABEL_19;
  }
  v7 = (_DWORD *)(a2 + 48);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
    result = (struct MIRACAST_CHUNK *)McTemplateK0xqqqqqqqq_EtwWriteTransfer(
                                        *(_QWORD *)(a2 + 24) >> 40,
                                        a2,
                                        a3,
                                        *(_QWORD *)(v4 + 3376),
                                        *(_DWORD *)(a2 + 8),
                                        *(_DWORD *)(a2 + 16),
                                        *(_DWORD *)(a2 + 24),
                                        (unsigned __int16)WORD2(*(_QWORD *)(a2 + 24)) >> 8,
                                        *(_DWORD *)(a2 + 32),
                                        *(_DWORD *)(a2 + 36),
                                        *v7,
                                        *(_DWORD *)(a2 + 52));
  if ( *(_QWORD *)(v4 + 3368) && !*(_BYTE *)(v4 + 3385) )
  {
    if ( *(_DWORD *)(a2 + 8) != *(_DWORD *)(v4 + 3360) )
    {
      v5 = -1073741811;
      result = (struct MIRACAST_CHUNK *)WdLogSingleEntry2(2LL, v4, -1073741811LL);
      WdLogGlobalForLineNumber = 8087;
LABEL_10:
      *(_BYTE *)(v4 + 3385) = 1;
      goto LABEL_19;
    }
    if ( *v7 > *(_DWORD *)(v4 + 3352) )
    {
      v5 = -1073741811;
      result = (struct MIRACAST_CHUNK *)WdLogSingleEntry2(2LL, v4, -1073741811LL);
      WdLogGlobalForLineNumber = 8100;
      goto LABEL_10;
    }
    v8 = MIRACAST_CHUNK_LIST::RemoveHead(*(MIRACAST_CHUNK_LIST **)(v4 + 3392));
    v9 = v8;
    if ( v8 )
    {
      *((_OWORD *)v8 + 1) = *(_OWORD *)(a2 + 16);
      *((_QWORD *)v8 + 4) = *(_QWORD *)(a2 + 32);
      *((_DWORD *)v8 + 10) = *v7;
      memmove((char *)v8 + 44, *(const void **)(a2 + 40), (unsigned int)*v7);
      result = *(struct MIRACAST_CHUNK **)(v4 + 3400);
      v10 = (struct MIRACAST_CHUNK **)*((_QWORD *)result + 1);
      if ( *v10 != result )
        __fastfail(3u);
      *(_QWORD *)v9 = result;
      *((_QWORD *)v9 + 1) = v10;
      *v10 = v9;
      *((_QWORD *)result + 1) = v9;
      ++*((_DWORD *)result + 4);
    }
    else
    {
      result = (struct MIRACAST_CHUNK *)WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 8119;
      v5 = -1073741801;
      *(_BYTE *)(v4 + 3384) = 1;
    }
  }
LABEL_19:
  *(_DWORD *)(a2 + 52) = v5;
  return result;
}
