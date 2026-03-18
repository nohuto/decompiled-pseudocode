/*
 * XREFs of IoctlStorageStreamsGetOpenStreams @ 0x14001C670
 * Callers:
 *     IoctlToNVMe @ 0x1400104F0 (IoctlToNVMe.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x140025078 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x14002533C (NVMeDirectiveStreamsReturnParameters.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 */

__int64 __fastcall IoctlStorageStreamsGetOpenStreams(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 SrbDataBuffer; // rax
  __int64 v6; // r8
  unsigned int *v7; // r15
  _DWORD *v8; // rsi
  __int64 result; // rax
  unsigned __int8 v10; // cl
  unsigned int v11; // r14d
  int v12; // edx
  unsigned __int64 v13; // rax
  int v14; // ecx
  unsigned int *v15; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+38h] [rbp-50h] BYREF
  __int128 v17; // [rsp+48h] [rbp-40h]

  v4 = 0;
  v15 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v15);
  v7 = v15;
  v8 = (_DWORD *)SrbDataBuffer;
  if ( *v15 >= 0x24 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v10 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v10 = *(_BYTE *)(a2 + 7);
    if ( v10 == 255 )
    {
      *(_BYTE *)(a2 + 3) = 32;
      goto LABEL_3;
    }
    if ( (*(_BYTE *)(a1 + 3728) & 3) == 3 && *(unsigned __int8 *)(a1 + 3729) == v10 )
    {
      if ( (unsigned int)v10 < *(_DWORD *)(a1 + 224) && *(_QWORD *)(a1 + 8LL * v10 + 1672) )
      {
        _mm_lfence();
        v11 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v10 + 1672) + 16LL);
      }
      else
      {
        v11 = 0;
      }
      v16 = 0LL;
      v17 = 0LL;
      result = NVMeDirectiveStreamsReturnParameters(a1, v11, v6, &v16);
      if ( (_DWORD)result )
      {
LABEL_16:
        *(_BYTE *)(a2 + 3) = 4;
        goto LABEL_30;
      }
      v12 = WORD4(v17);
      v13 = *v7;
      LODWORD(v15) = WORD4(v17);
      if ( v13 < (unsigned __int64)(4 * (unsigned int)WORD4(v17) + 12) + 28 )
      {
        v8[8] = 4 * WORD4(v17) + 12;
        v4 = 8;
        v8[7] = 1;
        result = 3238002692LL;
        *(_BYTE *)(a2 + 3) = 18;
        goto LABEL_30;
      }
      if ( v8[7] == 1 )
      {
        if ( WORD4(v17) )
        {
          result = NVMeDirectiveStreamsGetStatus(a1, v11, WORD4(v17), (unsigned int)&v15, (__int64)(v8 + 10));
          if ( (_DWORD)result )
          {
            result = (unsigned int)result;
            if ( (_DWORD)result == -1056964604 )
            {
              v14 = (int)v15;
              v4 = 8;
              v8[7] = 1;
              v8[8] = 4 * v14 + 12;
              *(_BYTE *)(a2 + 3) = 18;
              goto LABEL_30;
            }
            goto LABEL_16;
          }
          v12 = (int)v15;
        }
        else
        {
          result = 0LL;
        }
        v8[9] = v12;
        v4 = 4 * v12 + 12;
        *(_BYTE *)(a2 + 3) = 1;
        goto LABEL_30;
      }
      result = 3238002694LL;
    }
    else
    {
      result = 3238002695LL;
    }
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_30;
  }
  *(_BYTE *)(a2 + 3) = 21;
LABEL_3:
  result = 3238002694LL;
LABEL_30:
  v8[6] = v4;
  return result;
}
