/*
 * XREFs of PspApiSetCopyToSystemSpace @ 0x1407F43A8
 * Callers:
 *     PspSiloLoadApiSets @ 0x1407F557C (PspSiloLoadApiSets.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     MmMapViewInSessionSpace @ 0x140988210 (MmMapViewInSessionSpace.c)
 *     MmCreateSection @ 0x140989F80 (MmCreateSection.c)
 */

__int64 __fastcall PspApiSetCopyToSystemSpace(void *Src, size_t Size, _QWORD *a3, _QWORD *a4)
{
  int v8; // eax
  PVOID v9; // rsi
  NTSTATUS v10; // edi
  size_t v11; // r8
  PVOID v12; // rbx
  PVOID MappedBase; // [rsp+40h] [rbp-38h] BYREF
  size_t v15; // [rsp+48h] [rbp-30h] BYREF
  ULONG_PTR ViewSize[2]; // [rsp+50h] [rbp-28h] BYREF
  PVOID Section; // [rsp+88h] [rbp+10h] BYREF

  v15 = Size;
  MappedBase = 0LL;
  Section = 0LL;
  ViewSize[0] = 0LL;
  v8 = MmCreateSection((unsigned int)&Section, 983071, 0, (unsigned int)&v15, 4, 0x8000000, 0LL, 0LL);
  v9 = Section;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v10 = MmMapViewInSessionSpace(Section, &MappedBase, ViewSize);
    if ( v10 >= 0 )
    {
      v11 = Size;
      v12 = MappedBase;
      memmove(MappedBase, Src, v11);
      *a3 = v9;
      *a4 = v12;
    }
  }
  if ( v9 && v10 < 0 )
    ObfDereferenceObject(v9);
  return (unsigned int)v10;
}
