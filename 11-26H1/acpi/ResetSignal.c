/*
 * XREFs of ResetSignal @ 0x140036A80
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     ReferenceObjectEx @ 0x140036D50 (ReferenceObjectEx.c)
 *     SignalASLEvent @ 0x14005579C (SignalASLEvent.c)
 *     ResetASLEvent @ 0x1400707A0 (ResetASLEvent.c)
 */

__int64 __fastcall ResetSignal(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  _BYTE *ObjectPath; // rsi
  const void *ObjectTypeName; // rax
  const void *v10; // r10
  unsigned int v11; // ecx
  __int64 v12; // rcx

  v4 = ValidateArgTypes(a1, a2[10], 0, "O");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2[10] + 16LL);
    a2[8] = v5;
    ReferenceObjectEx(v5);
    v6 = *(_DWORD *)(a2[7] + 8LL);
    if ( v6 == 9307 )
    {
      v12 = a2[8];
      if ( *(_WORD *)(v12 + 66) == 7 )
      {
        SignalASLEvent(*(_QWORD *)(v12 + 96));
        return v4;
      }
      v4 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      ObjectPath = GetObjectPath(a2[8]);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66LL));
      v11 = 175;
    }
    else
    {
      if ( v6 != 9819 )
        return v4;
      v7 = a2[8];
      if ( *(_WORD *)(v7 + 66) == 7 )
      {
        ResetASLEvent(*(_QWORD *)(v7 + 96));
        return 0;
      }
      v4 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      ObjectPath = GetObjectPath(a2[8]);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66LL));
      v11 = 174;
    }
    PrintDebugMessage(v11, v10, ObjectTypeName, 0LL, 0LL);
    if ( ObjectPath )
      ExFreePoolWithTag(ObjectPath, 0);
  }
  return v4;
}
