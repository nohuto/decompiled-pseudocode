/*
 * XREFs of PopIdleWakeGenerateDescriptionString @ 0x140B2AFCC
 * Callers:
 *     PopIdleWakeSourceAccountingToDiagnostic @ 0x140B2AF00 (PopIdleWakeSourceAccountingToDiagnostic.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140478794 (RtlStringCbLengthW.c)
 *     RtlUnicodeStringPrintf @ 0x1404B3820 (RtlUnicodeStringPrintf.c)
 *     PopIdleWakeGenerateInterruptDescriptionString @ 0x140B25110 (PopIdleWakeGenerateInterruptDescriptionString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

signed int __fastcall PopIdleWakeGenerateDescriptionString(const wchar_t *a1, __int64 a2)
{
  __int64 v2; // rax
  UNICODE_STRING *v3; // rdi
  int v4; // ebx
  wchar_t *v7; // r9
  __int64 v8; // r8
  wchar_t *v9; // rax
  unsigned __int16 v10; // cx
  signed int result; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  const wchar_t *v14; // r15
  size_t v15; // r11
  size_t v16; // rbp
  __int64 Pool2; // rax
  size_t pcbLength; // [rsp+50h] [rbp+8h] BYREF
  size_t v19; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(int *)a1;
  v3 = (UNICODE_STRING *)(a2 + 768);
  v4 = 0;
  pcbLength = 0LL;
  v19 = 0LL;
  if ( (unsigned int)v2 <= 0xB )
  {
    _mm_lfence();
    v7 = PopDiagStaticWakeSourceDescriptions[v2];
    *v3 = 0LL;
    if ( v7 )
    {
      v8 = 0x7FFFLL;
      v9 = v7;
      do
      {
        if ( !*v9 )
          break;
        ++v9;
        --v8;
      }
      while ( v8 );
      if ( v8 )
      {
        if ( a2 == -768 )
          return -1073741811;
        v10 = 2 * (0x7FFF - v8);
        *(_QWORD *)(a2 + 776) = v7;
        v3->Length = v10;
        *(_WORD *)(a2 + 770) = v10 + 2;
      }
      return v8 == 0 ? 0xC000000D : 0;
    }
    return v4;
  }
  if ( (_DWORD)v2 == 129 )
  {
    v12 = *((unsigned __int8 *)a1 + 8);
    if ( (unsigned __int8)v12 < 0x14u )
    {
      v14 = PopIrTimerDescriptions[v12];
      result = RtlStringCbLengthW(v14, 0xFFFFuLL, &pcbLength);
      if ( result < 0 )
        return result;
      if ( *((_BYTE *)a1 + 8) == 3 )
      {
        result = RtlStringCbLengthW(a1 + 5, 0x80uLL, &v19);
        if ( result < 0 )
          return result;
        v16 = pcbLength + v19 + 42;
      }
      else
      {
        v16 = pcbLength + 48;
      }
      if ( v16 <= v15 )
      {
        Pool2 = ExAllocatePool2(0x100uLL);
        v3->Buffer = (wchar_t *)Pool2;
        if ( !Pool2 )
          return -1073741670;
        *(_BYTE *)(a2 + 760) = 1;
        v3->Length = 0;
        v3->MaximumLength = v16;
        if ( *((_BYTE *)a1 + 8) == 3 )
          return RtlUnicodeStringPrintf(v3, L"Timer(Name:Index): %s:%s", v14, a1 + 5);
        else
          return RtlUnicodeStringPrintf(v3, L"Timer(Name:Index): %s:%d", v14, *((unsigned __int8 *)a1 + 10));
      }
      else
      {
        return -2147483643;
      }
    }
    else
    {
      v13 = ExAllocatePool2(0x100uLL);
      v3->Buffer = (wchar_t *)v13;
      if ( !v13 )
        return -1073741670;
      *(_BYTE *)(a2 + 760) = 1;
      *(_DWORD *)&v3->Length = 0x400000;
      return RtlUnicodeStringPrintf(
               v3,
               L"Timer(Component:Index): %d:%d",
               *((unsigned __int8 *)a1 + 8),
               *((unsigned __int8 *)a1 + 10));
    }
  }
  else if ( (_DWORD)v2 == 128 )
  {
    return PopIdleWakeGenerateInterruptDescriptionString((__int64)a1, a2);
  }
  else
  {
    return -1073741811;
  }
}
