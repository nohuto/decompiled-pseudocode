/*
 * XREFs of BiEnumerateSubKeys @ 0x1409A2660
 * Callers:
 *     BiDeleteKey @ 0x1409A2588 (BiDeleteKey.c)
 *     BiCleanupLoadedStores @ 0x1409A4348 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x1409A53B4 (BiOpenSystemStore.c)
 *     BiBuildIdentifierList @ 0x1409A5E6C (BiBuildIdentifierList.c)
 *     BcdEnumerateObjects @ 0x140B6FB7C (BcdEnumerateObjects.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryKey @ 0x140728280 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiEnumerateSubKeys(unsigned __int64 a1, _QWORD *a2, ULONG *a3)
{
  unsigned int v4; // r14d
  unsigned int *v5; // r15
  _QWORD *v6; // r12
  NTSTATUS v7; // ebx
  __int64 v8; // r13
  unsigned int v9; // r14d
  unsigned __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned __int64 v12; // rax
  __int64 Pool2; // rax
  ULONG v14; // ecx
  ULONG j; // esi
  NTSTATUS v16; // eax
  char *v17; // rbx
  char *v18; // rcx
  unsigned int i; // [rsp+34h] [rbp-B4h]
  ULONG ResultLength; // [rsp+38h] [rbp-B0h] BYREF
  ULONG Length; // [rsp+3Ch] [rbp-ACh]
  HANDLE KeyHandle; // [rsp+40h] [rbp-A8h]
  _QWORD *v24; // [rsp+48h] [rbp-A0h]
  ULONG *v25; // [rsp+50h] [rbp-98h]
  void *v26; // [rsp+58h] [rbp-90h]
  _QWORD *v27; // [rsp+60h] [rbp-88h]
  ULONG *v28; // [rsp+68h] [rbp-80h]
  __int128 KeyInformation; // [rsp+70h] [rbp-78h] BYREF
  __int128 v30; // [rsp+80h] [rbp-68h]
  __int128 v31; // [rsp+90h] [rbp-58h]

  v25 = a3;
  v24 = a2;
  v27 = a2;
  v28 = a3;
  KeyInformation = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  ResultLength = 0;
  v4 = 0;
  for ( i = 0; ; i = v4 )
  {
    *a2 = 0LL;
    *a3 = 0;
    v5 = 0LL;
    v6 = 0LL;
    KeyHandle = (HANDLE)(a1 & 0xFFFFFFFFFFFFFFFDuLL);
    v7 = ZwQueryKey((HANDLE)(a1 & 0xFFFFFFFFFFFFFFFDuLL), KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
    if ( ((v7 + 0x80000000) & 0x80000000) != 0 || v7 == -2147483643 )
    {
      v8 = DWORD1(v30);
      if ( !DWORD1(v30) )
      {
        v7 = 0;
        goto LABEL_31;
      }
      v9 = DWORD2(v30) + 2;
      if ( (unsigned int)(DWORD2(v30) + 2) < DWORD2(v30) )
      {
        v9 = -1;
        v7 = -1073741675;
      }
      else
      {
        v7 = 0;
      }
      if ( v7 >= 0 )
      {
        v10 = v9 * (unsigned __int64)DWORD1(v30);
        v9 = -1;
        if ( v10 <= 0xFFFFFFFF )
          v9 = v10;
        v7 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
      }
      v11 = 0;
      if ( v7 >= 0 )
      {
        v12 = 8LL * DWORD1(v30);
        v11 = -1;
        if ( v12 <= 0xFFFFFFFF )
          v11 = v12;
        v7 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
      }
      if ( v7 >= 0 )
      {
        v7 = v11 + v9 < v11 ? 0xC0000095 : 0;
        if ( v11 + v9 >= v11 )
        {
          Pool2 = ExAllocatePool2(0x102uLL);
          v6 = (_QWORD *)Pool2;
          if ( Pool2 )
          {
            v26 = (void *)(Pool2 + 8 * v8);
            v14 = -1;
            if ( DWORD2(v30) < 0xFFFFFFE6 )
              v14 = DWORD2(v30) + 26;
            Length = v14;
            v7 = DWORD2(v30) >= 0xFFFFFFE6 ? 0xC0000095 : 0;
            if ( (unsigned int)(DWORD2(v30) + 26) < 0x1A )
              goto LABEL_30;
            v5 = (unsigned int *)ExAllocatePool2(0x102uLL);
            if ( v5 )
            {
              for ( j = 0; ; ++j )
              {
                if ( j >= (unsigned int)v8 )
                  goto LABEL_29;
                v16 = ZwEnumerateKey(KeyHandle, j, KeyBasicInformation, v5, Length, &ResultLength);
                v7 = v16;
                if ( v16 == -2147483622 )
                  break;
                if ( v16 < 0 )
                  goto LABEL_30;
                if ( (unsigned __int64)v5[3] + 2 > v9 )
                {
                  v7 = -1073741789;
                  goto LABEL_30;
                }
                v17 = (char *)v26;
                v6[j] = v26;
                memmove(v17, v5 + 4, v5[3]);
                v18 = &v17[v5[3]];
                *(_WORD *)v18 = 0;
                v26 = v18 + 2;
                v9 += -2 - v5[3];
              }
              if ( j )
              {
LABEL_29:
                *v24 = v6;
                *v25 = j;
                v7 = 0;
                goto LABEL_30;
              }
              goto LABEL_30;
            }
          }
          v7 = -1073741670;
        }
      }
LABEL_30:
      v4 = i;
    }
LABEL_31:
    if ( v5 )
      ExFreePoolWithTag(v5, 0x4B444342u);
    if ( v7 < 0 && v6 )
      ExFreePoolWithTag(v6, 0x4B444342u);
    if ( v7 != -1073741443 )
      break;
    __debugbreak();
    a1 = (unsigned __int64)KeyHandle;
    a2 = v24;
    a3 = v25;
    if ( v4 >= 5 )
      break;
    ++v4;
  }
  return (unsigned int)v7;
}
