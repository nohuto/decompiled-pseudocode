/*
 * XREFs of _RegRtlEnumValue @ 0x140975A14
 * Callers:
 *     _RegRtlCopyTreeInternal @ 0x1408A3800 (_RegRtlCopyTreeInternal.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1409742E8 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpCtxRegEnumValue @ 0x140975750 (_PnpCtxRegEnumValue.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1409757A0 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140AB4F34 (_PnpGetGenericStorePropertyLocales.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140ADFC40 (DrvDbSetDeviceIdDriverInfMatches.c)
 * Callees:
 *     ZwEnumerateValueKey @ 0x140728220 (ZwEnumerateValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlEnumValue(
        HANDLE KeyHandle,
        ULONG Index,
        void *a3,
        _DWORD *a4,
        _DWORD *a5,
        void *a6,
        unsigned int *a7)
{
  unsigned __int64 v10; // rax
  KEY_VALUE_INFORMATION_CLASS v12; // ebp
  ULONG Length; // ebx
  _DWORD *Pool2; // rsi
  unsigned int v15; // edi
  size_t v16; // r8
  __int64 v17; // rbx
  ULONG v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rbx
  size_t v22; // r8
  ULONG ResultLength[4]; // [rsp+30h] [rbp-38h] BYREF

  ResultLength[0] = 0;
  v10 = 2LL * (unsigned int)*a4;
  if ( !a7 )
  {
    v12 = KeyValueBasicInformation;
    if ( v10 <= 0xFFFFFFFF )
    {
      Length = v10 + 16;
      if ( (int)v10 + 16 >= (unsigned int)v10 )
        goto LABEL_4;
    }
    return (unsigned int)-1073741675;
  }
  v12 = KeyValueFullInformation;
  if ( v10 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v19 = v10 + 24;
  if ( (int)v10 + 24 < (unsigned int)v10 )
    return (unsigned int)-1073741675;
  Length = v19 + *a7;
  if ( Length < v19 )
    return (unsigned int)-1073741675;
LABEL_4:
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v15 = ZwEnumerateValueKey(KeyHandle, Index, v12, Pool2, Length, ResultLength);
    if ( !v15 || v15 == -2147483643 )
    {
      if ( v12 )
      {
        if ( a5 )
          *a5 = Pool2[1];
        if ( v15
          || (unsigned int)*a4 < ((unsigned __int64)(unsigned int)Pool2[4] >> 1) + 1
          || (v20 = Pool2[3], *a7 < v20) )
        {
          v15 = -1073741789;
          *a4 = (Pool2[4] >> 1) + 1;
          *a7 = Pool2[3];
        }
        else
        {
          v21 = Pool2[4] >> 1;
          *a7 = v20;
          v22 = (unsigned int)Pool2[4];
          *a4 = v21;
          memmove(a3, Pool2 + 5, v22);
          *((_WORD *)a3 + v21) = 0;
          memmove(a6, (char *)Pool2 + (unsigned int)Pool2[2], (unsigned int)Pool2[3]);
        }
      }
      else
      {
        if ( a5 )
          *a5 = Pool2[1];
        if ( v15 || (v16 = (unsigned int)Pool2[2], (unsigned int)*a4 < (v16 >> 1) + 1) )
        {
          v15 = -1073741789;
          LODWORD(v17) = (Pool2[2] >> 1) + 1;
        }
        else
        {
          v17 = (unsigned int)v16 >> 1;
          memmove(a3, Pool2 + 3, v16);
          *((_WORD *)a3 + v17) = 0;
        }
        *a4 = v17;
      }
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v15;
}
