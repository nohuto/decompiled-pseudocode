/*
 * XREFs of SepLoadNgenLocations @ 0x140B6054C
 * Callers:
 *     SepSetSystemPaths @ 0x140B603B4 (SepSetSystemPaths.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x140728220 (ZwEnumerateValueKey.c)
 *     ZwQueryKey @ 0x140728280 (ZwQueryKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepLoadNgenLocations(__int64 a1)
{
  unsigned int v1; // r13d
  NTSTATUS v2; // eax
  NTSTATUS v3; // ebx
  ULONG v4; // eax
  ULONG v5; // edi
  unsigned int v6; // esi
  unsigned int v7; // r15d
  unsigned int v8; // r14d
  _DWORD *Pool2; // rsi
  __int64 v10; // rax
  _WORD *v11; // rdi
  ULONG v12; // r12d
  unsigned int v13; // r14d
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  void *v17; // r9
  unsigned int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  ULONG ResultLength; // [rsp+38h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-61h] BYREF
  ULONG Length; // [rsp+48h] [rbp-59h]
  void *v26; // [rsp+50h] [rbp-51h]
  __int64 v27; // [rsp+58h] [rbp-49h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-41h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp-11h] BYREF
  _OWORD KeyInformation[2]; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v31; // [rsp+C0h] [rbp+1Fh]

  v27 = a1;
  v1 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"tv";
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v31 = 0LL;
  KeyValueInformation = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    v3 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( v3 >= 0 )
    {
      v4 = v31;
      if ( (_DWORD)v31 )
      {
        if ( (unsigned int)(DWORD1(v31) - 1) <= 0xFFFE )
        {
          v5 = 0;
          v6 = 0;
          v7 = 0;
          while ( v5 < v4 )
          {
            v3 = ZwEnumerateValueKey(
                   KeyHandle,
                   v5,
                   KeyValueBasicInformation,
                   &KeyValueInformation,
                   0x10u,
                   &ResultLength);
            if ( ((v3 + 0x80000000) & 0x80000000) == 0 && v3 != -2147483643 )
              goto LABEL_46;
            if ( DWORD1(KeyValueInformation) == 4 && DWORD2(KeyValueInformation) >= 2 )
            {
              v6 += DWORD2(KeyValueInformation) + 16;
              if ( v6 < DWORD2(KeyValueInformation) + 16 )
                goto LABEL_45;
              ++v7;
            }
            v4 = v31;
            ++v5;
          }
          if ( !v7 )
          {
            v3 = 0;
            goto LABEL_46;
          }
          v8 = v6 + 8;
          if ( v6 + 8 < v6 )
          {
LABEL_45:
            v3 = -1073741675;
            goto LABEL_46;
          }
          Length = DWORD1(v31) + 16;
          v3 = 0;
          Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
          if ( Pool2 )
          {
            v10 = ExAllocatePool2(0x100uLL);
            v11 = (_WORD *)v10;
            if ( v10 )
            {
              v12 = 0;
              *(_DWORD *)(v10 + 4) = 0xFFFF;
              v26 = (void *)(v10 + 16LL * v7 + 8);
              v13 = v8 - (16 * v7 + 8);
              while ( v12 < (unsigned int)v31 )
              {
                v3 = ZwEnumerateValueKey(KeyHandle, v12, KeyValueBasicInformation, Pool2, Length, &ResultLength);
                if ( v3 < 0 )
                  goto LABEL_43;
                if ( Pool2[1] == 4 )
                {
                  v14 = Pool2[2];
                  if ( v14 >= 2 )
                  {
                    v15 = Pool2[2];
                    while ( !*((_WORD *)Pool2 + ((unsigned __int64)v15 >> 1) + 5) )
                    {
                      Pool2[2] = v14 - 2;
                      v14 -= 2;
                      v15 = v14;
                      if ( v14 < 2 )
                      {
                        if ( !v14 )
                          goto LABEL_40;
                        break;
                      }
                    }
                    if ( v15 > v13 || v1 >= v7 )
                    {
                      v3 = -2147483643;
                      goto LABEL_43;
                    }
                    v16 = (unsigned __int16)v11[2];
                    v17 = v26;
                    if ( v16 >= v15 )
                      LOWORD(v16) = v15;
                    v18 = (unsigned __int16)v11[3];
                    v11[2] = v16;
                    if ( v18 <= Pool2[2] )
                      LOWORD(v18) = Pool2[2];
                    v11[3] = v18;
                    v19 = 2LL * v1;
                    *(_QWORD *)&v11[4 * v19 + 8] = v17;
                    v11[4 * v19 + 4] = *((_WORD *)Pool2 + 4);
                    v11[4 * v19 + 5] = *((_WORD *)Pool2 + 4);
                    memmove(v17, Pool2 + 3, (unsigned int)Pool2[2]);
                    v20 = (unsigned int)Pool2[2];
                    v26 = (char *)v26 + v20;
                    v13 -= v20;
                    ++v1;
                  }
                }
LABEL_40:
                ++v12;
              }
              v11[2] += 8;
              v11[3] += 8;
              v21 = v27;
              *(_DWORD *)v11 = v1;
              if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 40), (signed __int64)v11, 0LL) )
                goto LABEL_44;
LABEL_43:
              ExFreePoolWithTag(v11, 0x63734943u);
            }
            else
            {
              v3 = -1073741801;
            }
LABEL_44:
            ExFreePoolWithTag(Pool2, 0x63734943u);
          }
          else
          {
            v3 = -1073741801;
          }
        }
      }
    }
  }
  else
  {
    v3 = 0;
    if ( v2 != -1073741772 )
      v3 = v2;
  }
LABEL_46:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
