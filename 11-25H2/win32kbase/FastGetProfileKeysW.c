/*
 * XREFs of FastGetProfileKeysW @ 0x1401AB3B0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     OpenCacheKeyEx @ 0x1400A9CE0 (OpenCacheKeyEx.c)
 *     UserReAllocPoolWithQuota @ 0x14012D210 (UserReAllocPoolWithQuota.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall FastGetProfileKeysW(const UNICODE_STRING *a1, unsigned int a2, void *a3, _QWORD *a4)
{
  _WORD *v5; // rbp
  char *v6; // rsi
  _WORD *v7; // rbx
  unsigned int v8; // edi
  ULONG v9; // r15d
  ULONG Length; // r12d
  __int64 v11; // rcx
  void *v12; // r13
  _DWORD *v13; // rbp
  NTSTATUS v14; // eax
  ULONG v15; // eax
  __int64 v16; // rax
  unsigned int v17; // r14d
  _WORD *v18; // rax
  size_t v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // rbp
  _WORD *v22; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-278h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-274h]
  void *Src; // [rsp+38h] [rbp-270h]
  _QWORD *v27; // [rsp+40h] [rbp-268h]
  _BYTE KeyValueInformation[512]; // [rsp+50h] [rbp-258h] BYREF

  v27 = a4;
  Src = a3;
  v5 = a3;
  v25 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  Length = 512;
  v12 = OpenCacheKeyEx(a1, a2, 0x20019u, 0LL);
  if ( !v12 )
  {
LABEL_19:
    v20 = -1LL;
    do
      ++v20;
    while ( v5[v20] );
    v21 = (unsigned int)(2 * v20 + 4);
    v22 = (_WORD *)Win32AllocPoolWithQuotaZInitImpl(v11, v21, 0x72707355u);
    v7 = v22;
    if ( v22 )
    {
      memmove(v22, Src, v21 - 2);
      v8 = v21 - 2;
    }
    if ( v12 )
      goto LABEL_24;
    goto LABEL_25;
  }
  *a4 = 0LL;
  v13 = KeyValueInformation;
  while ( 1 )
  {
    ResultLength = 0;
    v14 = ZwEnumerateValueKey(v12, v9, KeyValueBasicInformation, v13, Length, &ResultLength);
    if ( v14 != -2147483643 )
      break;
    v15 = ResultLength;
    if ( ResultLength <= Length )
      goto LABEL_13;
    if ( v6 )
    {
      GreDeleteFastMutex(v6);
      v15 = ResultLength;
      v13 = KeyValueInformation;
      Length = 512;
    }
    v16 = Win32AllocPoolWithQuotaZInitImpl(v11, v15, 0x72707355u);
    v6 = (char *)v16;
    if ( v16 )
    {
      Length = ResultLength;
      v13 = (_DWORD *)v16;
    }
    else
    {
LABEL_18:
      ++v9;
    }
  }
  if ( v14 < 0 )
    goto LABEL_13;
  v17 = (v8 + v13[2] + 4099) & 0xFFFFF000;
  if ( v25 >= v17 )
  {
LABEL_17:
    v19 = (unsigned int)v13[2];
    v25 = v17;
    memmove(&v7[(unsigned __int64)v8 >> 1], v13 + 3, v19);
    v7[(unsigned __int64)(v8 + v13[2]) >> 1] = 0;
    v8 += v13[2] + 2;
    goto LABEL_18;
  }
  if ( !v7 )
  {
    v7 = (_WORD *)Win32AllocPoolWithQuotaZInitImpl(v11, v17, 0x72707355u);
    if ( !v7 )
      goto LABEL_13;
    goto LABEL_17;
  }
  v18 = UserReAllocPoolWithQuota(v7, v8, v17, 0x72707355u);
  if ( v18 )
  {
    v7 = v18;
    goto LABEL_17;
  }
LABEL_13:
  if ( !v9 )
  {
    v5 = Src;
    goto LABEL_19;
  }
LABEL_24:
  ZwClose(v12);
LABEL_25:
  if ( v6 )
    GreDeleteFastMutex(v6);
  if ( v7 )
    v7[(unsigned __int64)v8 >> 1] = 0;
  *v27 = v7;
  return v8 >> 1;
}
