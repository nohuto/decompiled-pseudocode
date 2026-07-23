/*
 * XREFs of RtlUpcaseUnicodeStringToCountedOemString @ 0x14097C810
 * Callers:
 *     DifRtlUpcaseUnicodeStringToCountedOemStringWrapper @ 0x14069A6B0 (DifRtlUpcaseUnicodeStringToCountedOemStringWrapper.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x14097C630 (RtlIsNameLegalDOS8Dot3.c)
 * Callees:
 *     UpcaseUnicodeToUTF8NHelper @ 0x1402151E0 (UpcaseUnicodeToUTF8NHelper.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x140215C50 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x1404363C0 (UpcaseUnicodeToMultiByteNHelper.c)
 *     AllocateOrValidateCharStringBuffer @ 0x140470980 (AllocateOrValidateCharStringBuffer.c)
 *     RtlpDidUnicodeToOemWork @ 0x14097C150 (RtlpDidUnicodeToOemWork.c)
 *     RtlpIsUtf8Process @ 0x14097D580 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToUTF8N @ 0x14097D620 (RtlUnicodeToUTF8N.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeStringToCountedOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // ebx
  ULONG UnicodeStringByteCount; // edi
  wchar_t *Buffer; // r14
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  ULONG v10; // edi
  unsigned __int16 *p_MaximumLength; // r13
  PVOID *p_Buffer; // rdi
  NTSTATUS result; // eax
  __int64 v14; // rcx
  unsigned __int16 *v15; // r14
  unsigned int v16; // r15d
  CHAR *v17; // r12
  unsigned int v18; // ebx
  struct _LIST_ENTRY *v19; // rax
  __int16 v20; // r8
  int v21; // eax
  NTSTATUS v22; // ebx
  __int16 v23; // cx
  signed __int32 v24[8]; // [rsp+0h] [rbp-88h] BYREF
  NTSTATUS v25; // [rsp+40h] [rbp-48h]
  ULONG UTF8StringActualByteCount; // [rsp+A8h] [rbp+20h] BYREF

  v6 = 0;
  UTF8StringActualByteCount = 0;
  UnicodeStringByteCount = SourceString->Length;
  Buffer = SourceString->Buffer;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    if ( UnicodeStringByteCount )
    {
      RtlUnicodeToUTF8N(0LL, 0, &UTF8StringActualByteCount, Buffer, UnicodeStringByteCount);
      v6 = UTF8StringActualByteCount;
    }
  }
  else
  {
    _InterlockedOr(v24, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v10 = UnicodeStringByteCount >> 1;
    if ( WORD2(CurrentServerSiloGlobals[65].Flink) )
    {
      for ( ; v10; --v10 )
      {
        v23 = *((_WORD *)&CurrentServerSiloGlobals[67].Flink->Flink + *Buffer++);
        v6 += (HIBYTE(v23) != 0) + 1;
      }
    }
    else
    {
      v6 = v10;
    }
  }
  UTF8StringActualByteCount = v6;
  if ( v6 )
  {
    if ( v6 > 0xFFFF )
    {
      return -1073741584;
    }
    else
    {
      p_MaximumLength = &DestinationString->MaximumLength;
      p_Buffer = (PVOID *)&DestinationString->Buffer;
      result = AllocateOrValidateCharStringBuffer(
                 AllocateDestinationString,
                 v6,
                 (__int64 *)&DestinationString->Buffer,
                 &DestinationString->MaximumLength);
      v25 = result;
      if ( result >= 0 )
      {
        v15 = SourceString->Buffer;
        v16 = *p_MaximumLength;
        v17 = (CHAR *)*p_Buffer;
        v18 = SourceString->Length >> 1;
        LOBYTE(v14) = 1;
        if ( (unsigned __int8)RtlpIsUtf8Process(v14) )
        {
          v21 = UpcaseUnicodeToUTF8NHelper(v17, v16, &UTF8StringActualByteCount, (__int64)v15, v18);
        }
        else
        {
          _InterlockedOr(v24, 0);
          v19 = PsGetCurrentServerSiloGlobals();
          if ( WORD2(v19[69].Flink) == v20 )
            v21 = UpcaseUnicodeToSingleByteNHelper(
                    v17,
                    v16,
                    &UTF8StringActualByteCount,
                    v15,
                    v18,
                    (__int64)v19[71].Flink,
                    (__int64)v19[70].Blink);
          else
            v21 = UpcaseUnicodeToMultiByteNHelper(v17, v16, &UTF8StringActualByteCount, v15, v18);
        }
        v22 = v21;
        v25 = v21;
        if ( v21 >= 0 )
        {
          DestinationString->Length = UTF8StringActualByteCount;
          if ( !RtlpDidUnicodeToOemWork(&DestinationString->Length, (__int64)SourceString) )
            v22 = -1073741470;
          v25 = v22;
        }
        if ( v22 < 0 )
        {
          if ( AllocateDestinationString )
          {
            ExFreePool(*p_Buffer);
            *p_Buffer = 0LL;
            *p_MaximumLength = 0;
          }
        }
        return v22;
      }
    }
  }
  else
  {
    *(_DWORD *)&DestinationString->Length = 0;
    DestinationString->Buffer = 0LL;
    return 0;
  }
  return result;
}
