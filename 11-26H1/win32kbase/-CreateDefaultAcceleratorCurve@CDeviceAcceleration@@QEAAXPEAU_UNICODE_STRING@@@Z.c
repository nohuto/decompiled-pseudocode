/*
 * XREFs of ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1400E2678
 * Callers:
 *     ReadDefaultAccelerationCurves @ 0x1400E2B00 (ReadDefaultAccelerationCurves.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     OpenCacheKeyEx @ 0x1400E1D30 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall CDeviceAcceleration::CreateDefaultAcceleratorCurve(
        CDeviceAcceleration *this,
        struct _UNICODE_STRING *a2,
        int a3)
{
  int v5; // edi
  __int64 v6; // r14
  __int64 v7; // rdi
  BYTE *Text; // rdx
  int v9; // edx
  int v10; // ecx
  void *v11; // rsi
  int v12; // r8d
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  ULONG v20; // r15d
  __int64 UserSessionState; // rax
  int v22; // edi
  BYTE *v23; // rdx
  int v24; // ecx
  void *v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  ULONG v33; // eax
  _BYTE *v34; // rax
  __int128 v35; // xmm1
  __int64 v36; // xmm0_8
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  ULONG Length; // [rsp+30h] [rbp-D0h] BYREF
  int v40; // [rsp+34h] [rbp-CCh] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v43; // [rsp+50h] [rbp-B0h]
  _OWORD v44[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h]
  WCHAR SourceString[8]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  WCHAR v49[40]; // [rsp+E0h] [rbp-20h] BYREF

  if ( !a2 )
    goto LABEL_23;
  Length = 0;
  DestinationString = 0LL;
  v43 = 0LL;
  MessageResourceEntry = 0LL;
  v5 = 0;
  v40 = *(_DWORD *)(W32GetUserSessionState((_DWORD)this, (_DWORD)a2, a3) + 62776);
  SourceString[0] = 0;
  v6 = -1LL;
  if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, 0x266u, &MessageResourceEntry) < 0 )
  {
LABEL_35:
    SourceString[v5] = 0;
    goto LABEL_6;
  }
  v7 = -1LL;
  Text = MessageResourceEntry->Text;
  do
    ++v7;
  while ( *(_WORD *)&Text[2 * v7] );
  v5 = v7 - 2;
  if ( v5 >= 0 )
  {
    if ( v5 > 39 )
      v5 = 39;
    memmove(SourceString, Text, 2LL * (unsigned int)v5);
    goto LABEL_35;
  }
LABEL_6:
  while ( 1 )
  {
    v11 = OpenCacheKeyEx(a2, 0xCu, 0x20019u, &v40);
    if ( !v11 )
      break;
    Length = 52;
    v13 = Win32AllocPoolWithQuotaZInitImpl(v10, 0x34uLL, 0x72707355u);
    if ( !v13 )
      goto LABEL_28;
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( ZwQueryValueKey(v11, &DestinationString, KeyValuePartialInformation, (PVOID)v13, Length, &Length) >= 0 )
    {
      Length = *(_DWORD *)(v13 + 8);
      memmove(v44, (const void *)(v13 + 12), Length);
      GreDeleteFastMutex((char *)v13, v17, v18, v19);
      ZwClose(v11);
      v20 = Length;
      goto LABEL_10;
    }
    if ( !v40 )
    {
      GreDeleteFastMutex((char *)v13, v14, v15, v16);
LABEL_28:
      ZwClose(v11);
      break;
    }
    GreDeleteFastMutex((char *)v13, v14, v15, v16);
    ZwClose(v11);
  }
  v20 = 0;
LABEL_10:
  Length = 0;
  DestinationString = 0LL;
  v43 = 0LL;
  UserSessionState = W32GetUserSessionState(v10, v9, v12);
  MessageResourceEntry = 0LL;
  v22 = 0;
  v40 = *(_DWORD *)(UserSessionState + 62776);
  v49[0] = 0;
  if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, 0x267u, &MessageResourceEntry) < 0 )
  {
LABEL_39:
    v49[v22] = 0;
    goto LABEL_14;
  }
  v23 = MessageResourceEntry->Text;
  do
    ++v6;
  while ( *(_WORD *)&v23[2 * v6] );
  v22 = v6 - 2;
  if ( (int)v6 - 2 >= 0 )
  {
    if ( v22 > 39 )
      v22 = 39;
    memmove(v49, v23, 2LL * (unsigned int)v22);
    goto LABEL_39;
  }
LABEL_14:
  while ( 1 )
  {
    v25 = OpenCacheKeyEx(a2, 0xCu, 0x20019u, &v40);
    if ( !v25 )
      break;
    Length = 52;
    v26 = Win32AllocPoolWithQuotaZInitImpl(v24, 0x34uLL, 0x72707355u);
    if ( !v26 )
      goto LABEL_20;
    RtlInitUnicodeString(&DestinationString, v49);
    if ( ZwQueryValueKey(v25, &DestinationString, KeyValuePartialInformation, (PVOID)v26, Length, &Length) >= 0 )
    {
      Length = *(_DWORD *)(v26 + 8);
      memmove(SourceString, (const void *)(v26 + 12), Length);
      GreDeleteFastMutex((char *)v26, v30, v31, v32);
      ZwClose(v25);
      v33 = Length;
      goto LABEL_22;
    }
    if ( !v40 )
    {
      GreDeleteFastMutex((char *)v26, v27, v28, v29);
LABEL_20:
      ZwClose(v25);
      break;
    }
    GreDeleteFastMutex((char *)v26, v27, v28, v29);
    ZwClose(v25);
  }
  v33 = 0;
LABEL_22:
  if ( v20 == 40 && v33 == 40 )
  {
    v34 = (char *)this + 8;
    v35 = v44[1];
    *((_OWORD *)this + 1) = v44[0];
    v36 = v45;
    *((_OWORD *)this + 2) = v35;
    v37 = *(_OWORD *)SourceString;
    *((_QWORD *)this + 6) = v36;
    v38 = v47;
    *(_OWORD *)((char *)this + 56) = v37;
    *(_QWORD *)&v37 = v48;
    *(_OWORD *)((char *)this + 72) = v38;
    *((_QWORD *)this + 11) = v37;
    goto LABEL_25;
  }
LABEL_23:
  v34 = (char *)this + 8;
  if ( !*((_BYTE *)this + 8) )
  {
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 28181LL;
    *((_QWORD *)this + 4) = 81920LL;
    *((_QWORD *)this + 5) = 252969LL;
    *((_QWORD *)this + 6) = 2621440LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 70141LL;
    *((_QWORD *)this + 9) = 271360LL;
    *((_QWORD *)this + 10) = 1244160LL;
    *((_QWORD *)this + 11) = 29081600LL;
  }
LABEL_25:
  *v34 = 1;
}
