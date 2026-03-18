/*
 * XREFs of _pLoadAdditinalMode @ 0x14038D4B8
 * Callers:
 *     _pGetAdditionalTiming @ 0x14038D1C0 (_pGetAdditionalTiming.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1400546F4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _pPopulateProgressiveTimingList @ 0x140275AFC (_pPopulateProgressiveTimingList.c)
 *     _pReadDetailTimingFromReg @ 0x140275BF4 (_pReadDetailTimingFromReg.c)
 *     _pRegNameFromConnectorType @ 0x14038DA10 (_pRegNameFromConnectorType.c)
 */

__int64 __fastcall pLoadAdditinalMode(int a1)
{
  __int64 v1; // rdi
  ULONG v2; // r15d
  const WCHAR *v3; // rax
  NTSTATUS appended; // eax
  __int64 v5; // rbx
  NTSTATUS v6; // eax
  HANDLE v7; // rcx
  NTSTATUS v8; // eax
  unsigned int *v9; // rsi
  unsigned __int16 *v10; // r13
  NTSTATUS v11; // eax
  __int64 result; // rax
  NTSTATUS v13; // eax
  unsigned int v14; // eax
  int v15; // edi
  int v16; // edi
  int v17; // edi
  _QWORD *v18; // rax
  unsigned int v19; // [rsp+38h] [rbp-39h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-11h] BYREF
  __int128 KeyInformation; // [rsp+68h] [rbp-9h] BYREF
  __int128 v25; // [rsp+78h] [rbp+7h]
  __int128 v26; // [rsp+88h] [rbp+17h]

  v1 = a1;
  WdLogSingleEntry1(7LL);
  WdLogGlobalForLineNumber = 566;
  if ( (_DWORD)v1 == -2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 572;
  }
  *(_QWORD *)&Destination.Length = 15859712LL;
  Destination.Buffer = (wchar_t *)&unk_140168780;
  v2 = 0;
  if ( RtlAppendUnicodeToString(
         &Destination,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\AdditionalModeLists\\") < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 584;
  }
  v3 = (const WCHAR *)pRegNameFromConnectorType((unsigned int)v1);
  if ( !v3 )
  {
    WdLogSingleEntry1(7LL);
    result = 3221226021LL;
    WdLogGlobalForLineNumber = 594;
    return result;
  }
  appended = RtlAppendUnicodeToString(&Destination, v3);
  v5 = appended;
  if ( appended < 0 )
  {
    if ( appended != -1073741789 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 603;
    }
    WdLogSingleEntry2(2LL, v1, v5);
    WdLogGlobalForLineNumber = 605;
    return (unsigned int)v5;
  }
  KeyHandle = 0LL;
  v6 = DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, 0LL, &Destination);
  LODWORD(v5) = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry2(7LL, v1, v6);
    WdLogGlobalForLineNumber = 620;
    return (unsigned int)v5;
  }
  v7 = KeyHandle;
  if ( !KeyHandle )
  {
    WdLogSingleEntry0(1LL);
    v7 = KeyHandle;
    WdLogGlobalForLineNumber = 625;
  }
  ResultLength = 0;
  KeyInformation = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v8 = ZwQueryKey(v7, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
  LODWORD(v5) = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(3LL, v1, v8);
    WdLogGlobalForLineNumber = 836;
    goto LABEL_23;
  }
  if ( !DWORD1(v25) )
  {
    WdLogSingleEntry1(7LL);
    WdLogGlobalForLineNumber = 829;
    LODWORD(v5) = -1073741275;
LABEL_23:
    ZwClose(KeyHandle);
    return (unsigned int)v5;
  }
  v19 = 0;
  v9 = (unsigned int *)operator new[]((unsigned int)(28 * (DWORD1(v25) - 1) + 48), 0x4D677844u, 256LL);
  if ( v9 )
  {
    v10 = (unsigned __int16 *)operator new[](0x96uLL, 0x4D677844u, 256LL);
    if ( v10 )
    {
      while ( v2 < DWORD1(v25) )
      {
        v11 = ZwEnumerateKey(KeyHandle, v2, KeyBasicInformation, v10, 0x96u, &ResultLength);
        LODWORD(v5) = v11;
        switch ( v11 )
        {
          case -2147483643:
            goto LABEL_16;
          case -2147483622:
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 705;
            goto LABEL_20;
          case -1073741789:
LABEL_16:
            WdLogSingleEntry2(3LL, v1, v2);
            WdLogGlobalForLineNumber = 695;
            break;
          default:
            if ( v11 < 0 )
            {
              WdLogSingleEntry3(3LL, v1, v2, v11);
              WdLogGlobalForLineNumber = 717;
            }
            else
            {
              Destination.MaximumLength = v10[6];
              Destination.Length = Destination.MaximumLength;
              Destination.Buffer = v10 + 8;
              Handle = 0LL;
              v13 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, KeyHandle, &Destination);
              LODWORD(v5) = v13;
              if ( v13 >= 0 )
              {
                LODWORD(v5) = pReadDetailTimingFromReg(Handle, v1, v2, &v9[7 * v19 + 5]);
                ZwClose(Handle);
                v14 = v19 + 1;
                if ( (int)v5 < 0 )
                  v14 = v19;
                v19 = v14;
              }
              else
              {
                WdLogSingleEntry3(3LL, v1, v2, v13);
                WdLogGlobalForLineNumber = 759;
              }
            }
            break;
        }
        ++v2;
      }
LABEL_20:
      if ( v19 )
      {
        *(_QWORD *)v9 = qword_140169578;
        v9[2] = v1;
        v9[4] = v19;
        *((_BYTE *)v9 + 12) = 0;
        qword_140169578 = v9;
        if ( (_DWORD)v1 )
        {
          v15 = v1 - 1;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( v17 )
              {
                if ( v17 != 11 )
                {
                  v18 = (_QWORD *)pPopulateProgressiveTimingList(v9);
                  if ( v18 )
                  {
                    *v18 = qword_140169578;
                    qword_140169578 = v18;
                  }
                }
              }
            }
          }
        }
        LODWORD(v5) = 0;
      }
      else
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 673;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
      LODWORD(v5) = -1073741801;
    }
    goto LABEL_23;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 654;
  ZwClose(KeyHandle);
  return 3221225495LL;
}
