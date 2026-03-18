/*
 * XREFs of ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1400AA4BC
 * Callers:
 *     ReadDefaultAccelerationCurves @ 0x1400AAA10 (ReadDefaultAccelerationCurves.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     OpenCacheKeyEx @ 0x1400A9CE0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

void __fastcall CDeviceAcceleration::CreateDefaultAcceleratorCurve(
        CDeviceAcceleration *this,
        struct _UNICODE_STRING *a2)
{
  int v4; // edi
  __int64 v5; // r14
  __int64 v6; // rdi
  BYTE *Text; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // rsi
  __int64 v11; // rdi
  ULONG v12; // r15d
  __int64 UserSessionState; // rax
  int v14; // edi
  BYTE *v15; // rdx
  __int64 v16; // rcx
  void *v17; // rsi
  __int64 v18; // rdi
  ULONG v19; // eax
  _BYTE *v20; // rax
  __int128 v21; // xmm1
  __int64 v22; // xmm0_8
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __m128i si128; // xmm0
  __m128i v26; // xmm1
  ULONG Length; // [rsp+30h] [rbp-D0h] BYREF
  int v28; // [rsp+34h] [rbp-CCh] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v31; // [rsp+50h] [rbp-B0h]
  _OWORD v32[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+80h] [rbp-80h]
  _OWORD v34[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-58h]
  WCHAR SourceString[40]; // [rsp+B0h] [rbp-50h] BYREF

  if ( !a2 )
    goto LABEL_23;
  Length = 0;
  DestinationString = 0LL;
  v31 = 0LL;
  MessageResourceEntry = 0LL;
  v4 = 0;
  v28 = *(_DWORD *)(W32GetUserSessionState(this, a2) + 62784);
  SourceString[0] = 0;
  v5 = -1LL;
  if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, 0x266u, &MessageResourceEntry) < 0 )
  {
LABEL_35:
    SourceString[v4] = 0;
    goto LABEL_6;
  }
  v6 = -1LL;
  Text = MessageResourceEntry->Text;
  do
    ++v6;
  while ( *(_WORD *)&Text[2 * v6] );
  v4 = v6 - 2;
  if ( v4 >= 0 )
  {
    if ( v4 > 39 )
      v4 = 39;
    memmove(SourceString, Text, 2LL * v4);
    goto LABEL_35;
  }
LABEL_6:
  while ( 1 )
  {
    v10 = OpenCacheKeyEx(a2, 0xCu, 0x20019u, &v28);
    if ( !v10 )
      break;
    Length = 52;
    v11 = Win32AllocPoolWithQuotaZInitImpl(v9, 0x34uLL, 0x72707355u);
    if ( !v11 )
      goto LABEL_28;
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( ZwQueryValueKey(v10, &DestinationString, KeyValuePartialInformation, (PVOID)v11, Length, &Length) >= 0 )
    {
      Length = *(_DWORD *)(v11 + 8);
      memmove(v34, (const void *)(v11 + 12), Length);
      GreDeleteFastMutex((char *)v11);
      ZwClose(v10);
      v12 = Length;
      goto LABEL_10;
    }
    if ( !v28 )
    {
      GreDeleteFastMutex((char *)v11);
LABEL_28:
      ZwClose(v10);
      break;
    }
    GreDeleteFastMutex((char *)v11);
    ZwClose(v10);
  }
  v12 = 0;
LABEL_10:
  Length = 0;
  DestinationString = 0LL;
  v31 = 0LL;
  UserSessionState = W32GetUserSessionState(v9, v8);
  MessageResourceEntry = 0LL;
  v14 = 0;
  v28 = *(_DWORD *)(UserSessionState + 62784);
  SourceString[0] = 0;
  if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, 0x267u, &MessageResourceEntry) < 0 )
  {
LABEL_39:
    SourceString[v14] = 0;
    goto LABEL_14;
  }
  v15 = MessageResourceEntry->Text;
  do
    ++v5;
  while ( *(_WORD *)&v15[2 * v5] );
  v14 = v5 - 2;
  if ( (int)v5 - 2 >= 0 )
  {
    if ( v14 > 39 )
      v14 = 39;
    memmove(SourceString, v15, 2LL * v14);
    goto LABEL_39;
  }
LABEL_14:
  while ( 1 )
  {
    v17 = OpenCacheKeyEx(a2, 0xCu, 0x20019u, &v28);
    if ( !v17 )
      break;
    Length = 52;
    v18 = Win32AllocPoolWithQuotaZInitImpl(v16, 0x34uLL, 0x72707355u);
    if ( !v18 )
      goto LABEL_20;
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( ZwQueryValueKey(v17, &DestinationString, KeyValuePartialInformation, (PVOID)v18, Length, &Length) >= 0 )
    {
      Length = *(_DWORD *)(v18 + 8);
      memmove(v32, (const void *)(v18 + 12), Length);
      GreDeleteFastMutex((char *)v18);
      ZwClose(v17);
      v19 = Length;
      goto LABEL_22;
    }
    if ( !v28 )
    {
      GreDeleteFastMutex((char *)v18);
LABEL_20:
      ZwClose(v17);
      break;
    }
    GreDeleteFastMutex((char *)v18);
    ZwClose(v17);
  }
  v19 = 0;
LABEL_22:
  if ( v12 == 40 && v19 == 40 )
  {
    v20 = (char *)this + 8;
    v21 = v34[1];
    *((_OWORD *)this + 1) = v34[0];
    v22 = v35;
    *((_OWORD *)this + 2) = v21;
    v23 = v32[0];
    *((_QWORD *)this + 6) = v22;
    v24 = v32[1];
    *(_OWORD *)((char *)this + 56) = v23;
    *(_QWORD *)&v23 = v33;
    *(_OWORD *)((char *)this + 72) = v24;
    *((_QWORD *)this + 11) = v23;
    goto LABEL_25;
  }
LABEL_23:
  v20 = (char *)this + 8;
  if ( !*((_BYTE *)this + 8) )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v26 = _mm_load_si128((const __m128i *)&_xmm);
    v33 = 29081600LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 28181LL;
    *((_QWORD *)this + 4) = 81920LL;
    *((_QWORD *)this + 5) = 252969LL;
    *((_QWORD *)this + 6) = 2621440LL;
    *(__m128i *)((char *)this + 56) = si128;
    si128.m128i_i64[0] = v33;
    *(__m128i *)((char *)this + 72) = v26;
    *((_QWORD *)this + 11) = si128.m128i_i64[0];
  }
LABEL_25:
  *v20 = 1;
}
