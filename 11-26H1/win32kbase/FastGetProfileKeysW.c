/*
 * XREFs of FastGetProfileKeysW @ 0x1401CE190
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     OpenCacheKeyEx @ 0x1400E1D30 (OpenCacheKeyEx.c)
 *     UserReAllocPoolWithQuota @ 0x140166FE0 (UserReAllocPoolWithQuota.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall FastGetProfileKeysW(const UNICODE_STRING *a1, unsigned int a2, void *a3, _QWORD *a4)
{
  _QWORD *v4; // r15
  _WORD *v5; // r14
  char *v6; // rsi
  char *v7; // rbx
  unsigned int v8; // edi
  ULONG v9; // ebp
  ULONG Length; // r12d
  int v11; // ecx
  void *v12; // r13
  _DWORD *v13; // r14
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG v18; // eax
  __int64 v19; // rax
  unsigned int v20; // r15d
  char *v21; // rax
  size_t v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // rbp
  char *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 result; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-278h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-274h]
  void *Src; // [rsp+38h] [rbp-270h]
  _QWORD *v33; // [rsp+40h] [rbp-268h]
  _BYTE KeyValueInformation[512]; // [rsp+50h] [rbp-258h] BYREF

  v33 = a4;
  v4 = a4;
  Src = a3;
  v5 = a3;
  v31 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  Length = 512;
  v12 = OpenCacheKeyEx(a1, a2, 0x20019u, 0LL);
  if ( v12 )
  {
    *v4 = 0LL;
    v13 = KeyValueInformation;
    while ( 1 )
    {
      while ( 1 )
      {
        ResultLength = 0;
        v14 = ZwEnumerateValueKey(v12, v9, KeyValueBasicInformation, v13, Length, &ResultLength);
        if ( v14 != -2147483643 )
          break;
        v18 = ResultLength;
        if ( ResultLength <= Length )
          goto LABEL_14;
        if ( v6 )
        {
          GreDeleteFastMutex(v6, v15, v16, v17);
          v18 = ResultLength;
          v13 = KeyValueInformation;
          Length = 512;
        }
        v19 = Win32AllocPoolWithQuotaZInitImpl(v11, v18, 0x72707355u);
        v6 = (char *)v19;
        if ( v19 )
        {
          Length = ResultLength;
          v13 = (_DWORD *)v19;
        }
        else
        {
          ++v9;
        }
      }
      if ( v14 < 0 )
        break;
      v20 = (v8 + v13[2] + 4099) & 0xFFFFF000;
      if ( v31 < v20 )
      {
        if ( v7 )
        {
          v21 = (char *)UserReAllocPoolWithQuota(v7, v8, v20, 0x72707355u);
          if ( !v21 )
            break;
          v7 = v21;
        }
        else
        {
          v7 = (char *)Win32AllocPoolWithQuotaZInitImpl(v11, v20, 0x72707355u);
          if ( !v7 )
            break;
        }
      }
      v22 = (unsigned int)v13[2];
      v31 = v20;
      memmove(&v7[2 * ((unsigned __int64)v8 >> 1)], v13 + 3, v22);
      *(_WORD *)&v7[2 * ((unsigned __int64)(v8 + v13[2]) >> 1)] = 0;
      v8 += v13[2] + 2;
      ++v9;
    }
LABEL_14:
    v4 = v33;
    if ( v9 )
      goto LABEL_24;
    v5 = Src;
  }
  v23 = -1LL;
  do
    ++v23;
  while ( v5[v23] );
  v24 = (unsigned int)(2 * v23 + 4);
  v25 = (char *)Win32AllocPoolWithQuotaZInitImpl(v11, v24, 0x72707355u);
  v7 = v25;
  if ( v25 )
  {
    memmove(v25, Src, v24 - 2);
    v8 = v24 - 2;
  }
  if ( v12 )
LABEL_24:
    ZwClose(v12);
  if ( v6 )
    GreDeleteFastMutex(v6, v26, v27, v28);
  if ( v7 )
    *(_WORD *)&v7[2 * ((unsigned __int64)v8 >> 1)] = 0;
  result = v8 >> 1;
  *v4 = v7;
  return result;
}
