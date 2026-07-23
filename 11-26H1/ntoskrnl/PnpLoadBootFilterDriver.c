/*
 * XREFs of PnpLoadBootFilterDriver @ 0x140D11544
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140970EC4 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PipIs32bitKey @ 0x1405DA610 (PipIs32bitKey.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     IopGetDriverNameFromKeyNode @ 0x140A11B9C (IopGetDriverNameFromKeyNode.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     PnpInitializeBootStartDriver @ 0x140D0EFCC (PnpInitializeBootStartDriver.c)
 */

__int64 __fastcall PnpLoadBootFilterDriver(HANDLE KeyHandle, PCUNICODE_STRING String1, unsigned int a3, _QWORD *a4)
{
  bool v4; // zf
  unsigned int i; // edx
  __int64 **v9; // r9
  __int64 *j; // rax
  __int64 v11; // rbx
  char *k; // rdi
  int started; // eax
  PVOID v14; // rsi
  int v15; // ebx
  int v17; // [rsp+30h] [rbp-38h]
  UNICODE_STRING String2; // [rsp+40h] [rbp-28h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v4 = IopGroupTable == 0LL;
  String2 = 0LL;
  Object = 0LL;
  *a4 = 0LL;
  if ( v4 || a3 >= IopGroupIndex )
    return 3221225473LL;
  for ( i = 0; i < a3; ++i )
  {
    v9 = (__int64 **)((char *)IopGroupTable + 16 * i);
    for ( j = *v9; j != (__int64 *)v9; j = (__int64 *)*j )
    {
      if ( !*((_BYTE *)j + 47) )
        return 3221225473LL;
    }
  }
  _mm_lfence();
  v11 = 16LL * a3;
  for ( k = *(char **)((char *)IopGroupTable + v11); k != (char *)IopGroupTable + v11; k = *(char **)k )
  {
    if ( (int)IopGetDriverNameFromKeyNode(*((HANDLE *)k + 4), &String2) >= 0 )
    {
      if ( RtlEqualUnicodeString(String1, &String2, 1u) )
      {
        if ( k[47] )
        {
          v15 = *((_DWORD *)k + 10);
          if ( v15 >= 0 )
            v15 = -1073741823;
        }
        else
        {
          started = PnpInitializeBootStartDriver(
                      &String2.Length,
                      (__int128 *)(*((_QWORD *)k + 3) + 32LL),
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)k + 3) + 48LL) + 56LL),
                      *(_QWORD *)(*((_QWORD *)k + 3) + 48LL),
                      1,
                      1,
                      v17,
                      (__int64)&Object);
          v14 = Object;
          v15 = started;
          *((_DWORD *)k + 10) = started;
          *((_QWORD *)k + 2) = v14;
          k[47] = 1;
          if ( v14 )
          {
            ObfReferenceObjectWithTag(v14, 0x746C6644u);
            *a4 = v14;
          }
          else
          {
            k[46] = 1;
          }
        }
        ExFreePoolWithTag(String2.Buffer, 0);
        return (unsigned int)v15;
      }
      ExFreePoolWithTag(String2.Buffer, 0);
    }
  }
  v15 = -1073741823;
  if ( (unsigned int)PipIs32bitKey(KeyHandle) )
    return (unsigned int)-1073740948;
  return (unsigned int)v15;
}
