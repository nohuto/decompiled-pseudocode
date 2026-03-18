/*
 * XREFs of Wait @ 0x140036BE0
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     PushPost @ 0x140015C84 (PushPost.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     ReferenceObjectEx @ 0x140036D50 (ReferenceObjectEx.c)
 *     WaitASLEvent @ 0x14004D878 (WaitASLEvent.c)
 */

__int64 __fastcall Wait(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  _BYTE *ObjectPath; // rsi
  const void *ObjectTypeName; // rax
  const void *v8; // r10

  v4 = ValidateArgTypes(a1, a2[10], 0, "OI");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2[10] + 16);
    a2[8] = v5;
    ReferenceObjectEx(v5);
    if ( *(_WORD *)(a2[8] + 66) == 7 )
    {
      if ( *(_QWORD *)(a2[10] + 56) <= 0xFFFFuLL )
      {
        v4 = PushPost(a1, (__int64)ProcessWait, 0LL, 0LL, a2[11]);
        if ( !v4 )
          return (unsigned int)WaitASLEvent(a1, *(_QWORD *)(a2[8] + 96), *(unsigned __int16 *)(a2[10] + 56));
      }
      else
      {
        v4 = -1072431089;
        LogError(-1072431089);
        AcpiDiagTraceAmlError(a1, -1072431089);
        PrintDebugMessage(0xD2u, *(const void **)(a2[10] + 56), 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v4 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      ObjectPath = GetObjectPath(a2[8]);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66));
      PrintDebugMessage(0xD1u, v8, ObjectTypeName, 0LL, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v4;
}
