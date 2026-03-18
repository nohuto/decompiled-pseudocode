/*
 * XREFs of MiReferenceAweHandle @ 0x140513A44
 * Callers:
 *     MiAllocateUserPhysicalPagesPrepare @ 0x140877FB8 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiCreateUserPhysicalView @ 0x140878ADC (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x1408793E0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     MiAweControlArea @ 0x14048FC84 (MiAweControlArea.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1408F9EF0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall MiReferenceAweHandle(HANDLE Handle, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  NTSTATUS result; // eax
  unsigned __int64 v10; // rax
  void *v11; // r8
  int v12; // r9d
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  PVOID v14; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  *a4 = 0LL;
  v14 = 0LL;
  Object = 0LL;
  *v5 = 0LL;
  if ( Handle == (HANDLE)-1LL )
    return 0;
  if ( ObReferenceObjectByHandleWithTag(Handle, a2, MmSectionObjectType, a3, 0x68506D4Du, &Object, 0LL) < 0 )
  {
    result = ObReferenceObjectByHandleWithTag(Handle, 8u, (POBJECT_TYPE)PsProcessType, a3, 0x68506D4Du, &v14, 0LL);
    if ( result >= 0 )
      *a4 = v14;
  }
  else
  {
    v10 = MiSectionControlArea((__int64)Object);
    if ( (unsigned int)MiAweControlArea(v10) )
    {
      *v5 = v11;
      return v12;
    }
    else
    {
      ObfDereferenceObjectWithTag(v11, 0x68506D4Du);
      return -1073741816;
    }
  }
  return result;
}
