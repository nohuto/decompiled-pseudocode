/*
 * XREFs of PiGetDefaultMessageString @ 0x140A26864
 * Callers:
 *     PiNormalizeDeviceText @ 0x140A27F78 (PiNormalizeDeviceText.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     RtlInitUTF8String @ 0x140617E70 (RtlInitUTF8String.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlUTF8StringToUnicodeString @ 0x140809370 (RtlUTF8StringToUnicodeString.c)
 *     IopReferenceDriverObjectByName @ 0x14091695C (IopReferenceDriverObjectByName.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 *     IopGetDriverNameFromKeyNode @ 0x140A129AC (IopGetDriverNameFromKeyNode.c)
 *     RtlCreateUnicodeString @ 0x140A70410 (RtlCreateUnicodeString.c)
 *     RtlFindMessage @ 0x140A86CF0 (RtlFindMessage.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 */

__int64 __fastcall PiGetDefaultMessageString(HANDLE KeyHandle, int a2, _QWORD *a3)
{
  void *v6; // rsi
  int DriverNameFromKeyNode; // ebx
  PVOID v8; // rax
  wchar_t *Buffer; // rdi
  __int16 v11; // ax
  const WCHAR *v12; // rdx
  int v13; // eax
  unsigned __int16 Length; // ax
  size_t v15; // rbx
  _WORD *Pool2; // rax
  _WORD *v17; // r14
  UNICODE_STRING v18; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  STRING SourceString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+48h] BYREF

  v21 = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  v18 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v18, 0LL);
  v6 = 0LL;
  DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &DestinationString);
  if ( DriverNameFromKeyNode < 0 )
    goto LABEL_4;
  v8 = IopReferenceDriverObjectByName(&DestinationString);
  v6 = v8;
  if ( !v8 )
  {
    DriverNameFromKeyNode = -1073741823;
    goto LABEL_4;
  }
  DriverNameFromKeyNode = RtlFindMessage(*((_QWORD *)v8 + 3), 11, 0, a2, (__int64)&v21);
  if ( DriverNameFromKeyNode < 0 )
  {
LABEL_4:
    Buffer = v18.Buffer;
    goto LABEL_5;
  }
  v11 = *(_WORD *)(v21 + 2);
  v12 = (const WCHAR *)(v21 + 4);
  if ( (v11 & 1) != 0 )
  {
    if ( !RtlCreateUnicodeString(&v18, v12) )
    {
      DriverNameFromKeyNode = -1073741670;
      goto LABEL_4;
    }
  }
  else
  {
    if ( (v11 & 2) != 0 )
    {
      SourceString = 0LL;
      RtlInitUTF8String(&SourceString, (const char *)v12);
      v13 = RtlUTF8StringToUnicodeString((__int64)&v18, (char **)&SourceString, 1);
    }
    else
    {
      RtlInitAnsiString(&SourceString, (PCSZ)v12);
      v13 = RtlAnsiStringToUnicodeString(&v18, &SourceString, 1u);
    }
    DriverNameFromKeyNode = v13;
    if ( v13 < 0 )
      goto LABEL_4;
  }
  Length = v18.Length;
  Buffer = v18.Buffer;
  if ( v18.Length >= 4u && *(wchar_t *)((char *)v18.Buffer + v18.Length - 4) == 13 )
  {
    *(wchar_t *)((char *)v18.Buffer + v18.Length - 4) = 0;
    Length -= 4;
  }
  v15 = Length;
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
  v17 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, Buffer, v15);
    *a3 = v17;
    v17[v15 >> 1] = 0;
    DriverNameFromKeyNode = 0;
  }
  else
  {
    DriverNameFromKeyNode = -1073741670;
  }
LABEL_5:
  if ( DestinationString.Buffer )
  {
    ExFreePool(DestinationString.Buffer);
    DestinationString = 0LL;
  }
  if ( Buffer )
    ExFreePool(Buffer);
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)DriverNameFromKeyNode;
}
