/*
 * XREFs of ?CreateSection@CSharedSectionMarshaler@DirectComposition@@EEAAJ_KPEAPEAX@Z @ 0x14015CB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedSectionMarshaler::CreateSection(
        DirectComposition::CSharedSectionMarshaler *this,
        union _LARGE_INTEGER a2,
        void **a3)
{
  NTSTATUS result; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *SectionHandle; // [rsp+88h] [rbp+18h] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+98h] [rbp+28h] BYREF

  MaximumSize = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  SectionHandle = 0LL;
  result = ZwCreateSection(&SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8400000u, 0LL);
  if ( result >= 0 )
    *a3 = SectionHandle;
  return result;
}
