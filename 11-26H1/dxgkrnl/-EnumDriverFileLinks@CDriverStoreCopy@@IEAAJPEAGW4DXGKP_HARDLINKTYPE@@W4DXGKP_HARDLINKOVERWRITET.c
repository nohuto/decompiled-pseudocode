/*
 * XREFs of ?EnumDriverFileLinks@CDriverStoreCopy@@IEAAJPEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1401D71CC
 * Callers:
 *     ?EnumSingleRegistry@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@PEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1401D7584 (-EnumSingleRegistry@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@PEAGW4DXGKP_HARDLINKTYPE@@W4DXGK.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall CDriverStoreCopy::EnumDriverFileLinks(__int64 a1, const WCHAR *a2, int a3, int a4)
{
  NTSTATUS v5; // ebx
  ULONG v6; // r13d
  _DWORD *v7; // rsi
  ULONG i; // r12d
  int v9; // eax
  _WORD *v10; // r15
  _QWORD *v11; // rdi
  __int16 *v12; // r14
  unsigned int v13; // eax
  __int16 *v14; // r8
  __int16 *v15; // rax
  __int16 v16; // dx
  __int16 *v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-79h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-71h] BYREF
  int v22; // [rsp+40h] [rbp-69h]
  int v23; // [rsp+44h] [rbp-65h]
  __int64 v24; // [rsp+48h] [rbp-61h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-59h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-49h] BYREF
  _OWORD KeyInformation[2]; // [rsp+90h] [rbp-19h] BYREF
  __int128 v28; // [rsp+B0h] [rbp+7h]

  v24 = a1;
  v23 = a4;
  DestinationString = 0LL;
  v22 = a3;
  RtlInitUnicodeString(&DestinationString, a2);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  ResultLength = 0;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v28 = 0LL;
  v5 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v5 >= 0 && (_DWORD)v28 )
  {
    v6 = DWORD2(v28) + 26 + DWORD1(v28);
    v7 = (_DWORD *)operator new[](v6, 0x4B677844u, 256LL);
    if ( v7 )
    {
      for ( i = 0; i < (unsigned int)v28; ++i )
      {
        v5 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, v7, v6, &ResultLength);
        if ( v5 >= 0 )
        {
          v9 = v7[1];
          if ( v9 == 7 || v9 == 1 )
          {
            v10 = (_WORD *)((char *)v7 + (unsigned int)v7[2]);
            if ( *v10 == 46 || *v10 == 92 )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 1551;
              v5 = -1073741811;
            }
            v11 = (_QWORD *)operator new[]((unsigned int)v7[3] + 42LL, 0x4B677844u, 256LL);
            if ( !v11 )
            {
              v5 = -1073741801;
              break;
            }
            v12 = (__int16 *)v11 + 18;
            v13 = v7[3] + 2;
            *((_DWORD *)v11 + 8) = v13;
            memmove((char *)v11 + 36, v10, v13);
            v14 = (__int16 *)v11 + ((unsigned __int64)(unsigned int)v7[3] >> 1) + 18;
            v15 = (__int16 *)v11 + 18;
            *v14 = 0;
            if ( (__int16 *)((char *)v11 + 36) != v14 )
            {
              do
              {
                v16 = *v15;
                v17 = ++v15;
                if ( v16 == 92 )
                {
                  v12 = v17;
                }
                else if ( !v16 )
                {
                  if ( v17 == v14 )
                    break;
                  while ( *v15 == 32 )
                  {
                    if ( ++v15 == v14 )
                      goto LABEL_26;
                  }
                  if ( *v15 )
                    v12 = v15++;
                }
              }
              while ( v15 != v14 );
            }
LABEL_26:
            if ( !*v12 || *v12 == 46 )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 1605;
              v5 = -1073741811;
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v11);
              break;
            }
            *((_DWORD *)v11 + 4) = v22;
            *((_DWORD *)v11 + 5) = v23;
            v18 = (__int64 *)(v24 + 1608);
            v11[3] = v12;
            v19 = *v18;
            if ( *(__int64 **)(*v18 + 8) != v18 )
              __fastfail(3u);
            *v11 = v19;
            v11[1] = v18;
            *(_QWORD *)(v19 + 8) = v11;
            *v18 = (__int64)v11;
          }
        }
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
    }
    else
    {
      v5 = -1073741801;
    }
  }
  ZwClose(KeyHandle);
  return (unsigned int)v5;
}
