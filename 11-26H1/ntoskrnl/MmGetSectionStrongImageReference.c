/*
 * XREFs of MmGetSectionStrongImageReference @ 0x140B569E8
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     MiGetSectionStrongImageReference @ 0x140B4F550 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MmGetSectionStrongImageReference(ULONG_PTR a1, char a2, void *a3, _QWORD *a4)
{
  void *v5; // rdi
  __int64 result; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  int SectionStrongImageReference; // ebx
  void *v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = a3;
  v5 = a3;
  if ( a1 )
  {
    result = ObpReferenceObjectByHandleWithTag(a1, 0, (__int64)MmSectionObjectType, a2, 0x63536D4Du, &v11, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v5 = v11;
  }
  v8 = MiSectionControlArea((__int64)v5);
  if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 && (*(_DWORD *)(v8 + 92) & 0xC0000) != 0 )
  {
    v9 = *(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(v9 + 64)
      || (SectionStrongImageReference = MiGetSectionStrongImageReference(*(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFFF8uLL),
          SectionStrongImageReference >= 0) )
    {
      SectionStrongImageReference = 0;
      *a4 = *(_QWORD *)(v9 + 64);
    }
  }
  else
  {
    SectionStrongImageReference = -1073741811;
  }
  if ( a1 )
    ObfDereferenceObjectWithTag(v5, 0x63536D4Du);
  return (unsigned int)SectionStrongImageReference;
}
