/*
 * XREFs of ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x140148224
 * Callers:
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x140147AD0 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     xxxLW_LoadFonts @ 0x140147F80 (xxxLW_LoadFonts.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x140127FDC (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ExchangeW32ThreadLock @ 0x140128FC4 (ExchangeW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFonts(
        __int64 a1,
        unsigned int a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  unsigned int *v4; // r15
  ULONG v6; // r12d
  __int64 v7; // rax
  void *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int *v12; // rsi
  struct tagTHREADINFO *v13; // rax
  ULONG v14; // r14d
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v18; // rax
  __int128 v19; // [rsp+30h] [rbp-49h] BYREF
  __int128 v20; // [rsp+40h] [rbp-39h] BYREF
  __int64 v21; // [rsp+50h] [rbp-29h]
  _QWORD v22[2]; // [rsp+58h] [rbp-21h] BYREF
  void (*v23)(void *); // [rsp+68h] [rbp-11h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+E8h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  LOWORD(v4) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  v21 = -1LL;
  v23 = 0LL;
  v6 = 544;
  v7 = 0LL;
  v19 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v20 = 0LL;
  if ( a2 == 56 )
  {
    v7 = CreateProfileUserName(&v20);
    if ( !v7 )
    {
      if ( v21 != -1 )
        PopAndFreeAlwaysW32ThreadLock(&v20);
      return 0LL;
    }
  }
  v8 = (void *)OpenCacheKeyEx(v7, a2, 131097LL, 0LL);
  if ( v21 != -1 )
  {
    PopAndFreeAlwaysW32ThreadLock(&v20);
    v21 = -1LL;
  }
  if ( !v8 )
    return 0LL;
  v9 = xxxbEnumerateRegistryFontsInternal(v8);
  v12 = (unsigned int *)Win32AllocPoolZInit(544LL, 1919972181LL);
  if ( !v12 )
    return v9;
  v13 = PtiCurrent(v11, v10);
  v14 = 0;
  v22[0] = *((_QWORD *)v13 + 48);
  *((_QWORD *)v13 + 48) = v22;
  v23 = Win32FreePool;
  v22[1] = v12;
  while ( 1 )
  {
    v15 = ZwEnumerateKey(v8, v14, KeyBasicInformation, v12, v6 - 2, &ResultLength);
    if ( v15 != -2147483643 && v15 != -1073741789 )
      break;
    ResultLength += 2;
    v18 = Win32AllocPoolZInit(ResultLength, 1919972181LL);
    v4 = (unsigned int *)v18;
    if ( v18 )
    {
      ExchangeW32ThreadLock(v18, (__int64)v22);
      v6 = ResultLength;
      v12 = v4;
      v15 = ZwEnumerateKey(v8, v14, KeyBasicInformation, v4, ResultLength - 2, &ResultLength);
      LOWORD(v4) = 0;
      if ( v15 != -2147483643 && v15 != -1073741789 )
        break;
    }
LABEL_13:
    ++v14;
  }
  if ( v15 >= 0 )
  {
    *((_WORD *)v12 + ((unsigned __int64)v12[3] >> 1) + 8) = (_WORD)v4;
    *((_QWORD *)&v19 + 1) = v12 + 4;
    LOWORD(v19) = *((_WORD *)v12 + 6);
    WORD1(v19) = v19;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v19;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v8;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v9 |= xxxbEnumerateRegistryFontsInternal(KeyHandle);
      ZwClose(KeyHandle);
    }
    goto LABEL_13;
  }
  ZwClose(v8);
  PopAndFreeW32ThreadLock((__int64)v22, v16);
  return v9;
}
